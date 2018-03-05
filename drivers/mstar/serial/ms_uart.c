#include <linux/module.h>
#include <linux/ioport.h>
#include <linux/init.h>
#include <linux/console.h>
#include <linux/sysrq.h>
#include <linux/delay.h>
#include <linux/platform_device.h>
#include <linux/tty.h>
#include <linux/tty_flip.h>
//#include <linux/serial_reg.h>
#include <linux/serial_core.h>
#include <linux/serial.h>
#include <linux/nmi.h>
#include <linux/mutex.h>
#include <linux/mm.h>
#include <linux/slab.h>
#include <linux/dma-mapping.h>

#include <linux/of.h>
#include <linux/of_irq.h>
#include <linux/of_address.h>
#include <linux/clk.h>
#include <linux/clk-provider.h>
#include <linux/gpio.h>
#include <ms_msys.h>

#include "ms_platform.h"
#include "mdrv_types.h"
#include "gpio.h"

#define UART_DEBUG  1

#if UART_DEBUG
#define UART_DBG(fmt, arg...) printk(KERN_DEBUG fmt, ##arg)
#else
#define UART_DBG(fmt, arg...)
#endif
#define UART_ERR(fmt, arg...) printk(KERN_ERR fmt, ##arg)

#define MUX_NA 0
#define MUX_PIU_UART1   1
//#define MUX_VD_MHEG5    2
#define MUX_PIU_UART2   2
#define MUX_PIU_UART0   3
#define MUX_FUART   4


#define REG_FUART_MODE         0x1F204C14 /*0x1026, h05*/
#define REG_UART_MODE          0x1F204C04 /*0x1026, h01*/
#define REG_FUART_SEL          0x1F203D50 /*0x101E, h54*/
#define REG_UART_SEL           0x1F203D4C /*0x101E, h53*/
#define REG_FORCE_RX_DISABLE   0x1F203D5C /*0x101E, h57*/

#define UART_TX_TASK        0    /* use tasklet to send TX char */
#define UART_USE_LOOPBACK   0    /* use UART loopback mode to avoid external input */
#define UART_USE_SPINLOCK   0    /* set IER use spinlock to ensure atomic */

#define NR_CONSOLE_PORTS 1
#define MS_CONSOLE_DEV "ttyS"

#define REG_DLL_THR_RBR(p)       GET_REG_ADDR((u32)p->membase, (0x00))
#define REG_DLH_IER(p)           GET_REG_ADDR((u32)p->membase, (0x02))
#define REG_IIR_FCR(p)           GET_REG_ADDR((u32)p->membase, (0x04))
#define REG_LCR(p)               GET_REG_ADDR((u32)p->membase, (0x06))
#define REG_MCR(p)               GET_REG_ADDR((u32)p->membase, (0x08))
#define REG_LSR(p)               GET_REG_ADDR((u32)p->membase, (0x0A))
#define REG_MSR(p)               GET_REG_ADDR((u32)p->membase, (0x0C))
#define REG_USR(p)               GET_REG_ADDR((u32)p->membase, (0x0E))
#define REG_TFL(p)               GET_REG_ADDR((u32)p->membase, (0x10))
#define REG_RFL(p)               GET_REG_ADDR((u32)p->membase, (0x12))
#define REG_RST(p)               GET_REG_ADDR((u32)p->membase, (0x14))

/* Interrupt Enable Register (IER)*/
#define UART_IER_RDI            0x01    /* Received Data Available Interrupt */
#define UART_IER_THRI           0x02    /* Transmitter Holding Register Empty Interrupt */
#define UART_IER_RLSI           0x04    /* Receiver Line Status Interrupt */
#define UART_IER_MSI            0x08    /* Modem Status Interrupt */

/* Interrupt Identification Register (IIR) */
#define UART_IIR_MSI            0x00    /* 0000: Modem Status */
#define UART_IIR_NO_INT         0x01    /* 0001: No pending interrupts */
#define UART_IIR_THRI           0x02    /* 0010: Transmitter Holding Register Empty */
#define UART_IIR_RDI            0x04    /* 0100: Receiver Data Available */
#define UART_IIR_RLSI           0x06    /* 0110: Receiver Line Status */
#define UART_IIR_BUSY           0x07    /* 0111: Busy detect indication (try to write LCR while UART is busy) */
#define UART_IIR_RX_TIMEOUT     0x0C    /* 1100: Character timeout */
#define UART_IIR_ID_MASK        0x0F    /* Mask Bit[3:0] for IIR */

/* FIFO Control Register (FCR) */
#define UART_FCR_FIFO_ENABLE    0x01    /* Clear & Reset Rx FIFO buffer */
#define UART_FCR_CLEAR_RCVR     0x02    /* Clear & Reset Rx FIFO buffer */
#define UART_FCR_CLEAR_XMIT     0x04    /* Clear & Reset Tx FIFO buffer */
#define UART_FCR_TRIGGER_TX_L0  0x00    /* Trigger Write when emtpy */
#define UART_FCR_TRIGGER_TX_L1  0x10    /* Trigger Write when 2 characters */
#define UART_FCR_TRIGGER_TX_L2  0x20    /* Trigger Write when 1/4 full */
#define UART_FCR_TRIGGER_TX_L3  0x30    /* Trigger Write when 1/2 full */
#define UART_FCR_TRIGGER_RX_L0  0x00    /* Trigger Read when there is 1 char*/
#define UART_FCR_TRIGGER_RX_L1  0x40    /* Trigger Read when 1/4 full */
#define UART_FCR_TRIGGER_RX_L2  0x80    /* Trigger Read when 1/2 full */
#define UART_FCR_TRIGGER_RX_L3  0xC0    /* Trigger Read when 2 less then full  */

/* Line Control Register (LCR) */
#define UART_LCR_WL_MASK        0x03    /* Word length mask */
#define UART_LCR_WLEN5          0x00    /* Word length is 5 bits */
#define UART_LCR_WLEN6          0x01    /* Word length is 6 bits */
#define UART_LCR_WLEN7          0x02    /* Word length is 7 bits */
#define UART_LCR_WLEN8          0x03    /* Word length is 8 bits */
#define UART_LCR_STOP_MASK      0x04    /* Stop bit mask */
#define UART_LCR_STOP1          0x00    /* Stop length is 1 bit */
#define UART_LCR_STOP2          0x04    /* Stop length is 1.5 bits (5-bit char), 2 bits (otherwise) */
#define UART_LCR_PARITY_EN      0x08    /* Parity Enable */
#define UART_LCR_PARITY_SEL     0x10    /* Even Parity Select */
#define UART_LCR_SBC            0x40    /* Set break control */
#define UART_LCR_DLAB           0x80    /* Divisor Latch Access bit, 1=Divisor Latch, 0=Normal Register */

#define UART_MCR_DTR            0x01
#define UART_MCR_RTS            0x02
#define UART_MCR_OUT1           0x04
#define UART_MCR_OUT2           0x08
#define UART_MCR_LOOPBACK       0x10
#define UART_MCR_AFCE           0x20

/* Line Status Register */
#define UART_LSR_DR             0x01    /* Data Ready, at least one char in FIFO buffer*/
#define UART_LSR_OE             0x02    /* Overrun Error, FIFO buffer is full */
#define UART_LSR_PE             0x04    /* Parity Error */
#define UART_LSR_FE             0x08    /* Framing Error, no valid stop bit */
#define UART_LSR_BI             0x10    /* Break Interrupt */
#define UART_LSR_THRE           0x20    /* Tx FIFO buffer is empty*/
#define UART_LSR_TEMT           0x40    /* Both TX FIFO buffer & shift register are empty */
#define UART_LSR_TX_ERROR       0x80    /* Tx FIFO buffer is error */

#define UART_USR_BUSY             0x01
#define UART_USR_TXFIFO_NOT_FULL  0x02
#define UART_USR_TXFIFO_EMPTY     0x04


#define UR2DMA_TX_BUF_LENGTH 0x1000 //must be 8 byte aligned, linux should better be PAGE_ALIGN
#define UR2DMA_RX_BUF_LENGTH 0x1000 //must be 8 byte aligned, linux should better be PAGE_ALIGN

#define URDMA_RX_TIMEOUT 0x0F
#define URDMA_TX_TIMEOUT 0x0F

#define URDMA_RX_INTR_LEVEL 0x500 //need to think

#define URDMA_RX_INTR_TYPE_TIMEOUT   1
#define URDMA_RX_INTR_TYPE_THRESHOLD 2

#define URDMA_INTR_STATUS_RX 1
#define URDMA_INTR_STATUS_TX 2

#define URDMA_LOU16(u32Val)   ((U16)(u32Val)&0xFFFF)
#define URDMA_HIU16(u32Val)   ((U16)((u32Val) >> 16)&0x0FFF)

#define URDMA_logical2bus(x) (x&0x0FFFFFFF)

/* Warning: Little Endian */
typedef struct reg_urdma
{
    union
    {
        volatile U16 reg00;
        struct
        {
            volatile U16 sw_rst          :   1;  /* BIT0 */
            volatile U16 urdma_mode      :   1;  /* BIT1 */
            volatile U16 tx_urdma_en     :   1;  /* BIT2 */
            volatile U16 rx_urdma_en     :   1;  /* BIT3 */
            volatile U16 tx_endian       :   1;  /* BIT4 */
            volatile U16 rx_endian       :   1;  /* BIT5 */
            volatile U16 tx_sw_rst       :   1;  /* BIT6 */
            volatile U16 rx_sw_rst       :   1;  /* BIT7 */
            volatile U16 reserve00       :   3;  /* BIT8 ~ BIT10 */
            volatile U16 rx_op_mode      :   1;  /* BIT11 */
            volatile U16 tx_busy         :   1;  /* BIT12 */
            volatile U16 rx_busy         :   1;  /* BIT13 */
            volatile U16 reserve01       :   2;  /* BIT14 ~ BIT15 */
        } ;
    } ;
    U16 space00;

    union
    {
        volatile U16 reg01;
        struct
        {
            volatile U16 intr_threshold  :   12; /* BIT0 ~ BIT11 */
            volatile U16 reserve02       :   4;  /* BIT12 ~ BIT15 */
        } ;
    } ;
    U16 space01;

    union
    {
        volatile U16 reg02;
        struct
        {
            volatile U16 tx_buf_base_h   :   16;  /* BIT0 ~ BIT15 */
        } ;
    } ;
    U16 space02;

    union
    {
        volatile U16 reg03;
        struct
        {
            volatile U16 tx_buf_base_l   :   16;  /* BIT0 ~ BIT15 */
        } ;
    } ;
    U16 space03;

    union
    {
        volatile U16 reg04;
        struct
        {
            volatile U16 tx_buf_size     :   13;  /* BIT0 ~ BIT12 */
            volatile U16 reserve04       :   3;   /* BIT13 ~ BIT15 */
        } ;
    } ;
    U16 space04;

    union
    {
        volatile U16 reg05;
        struct
        {
            volatile U16 tx_buf_rptr     :   16;  /* BIT0 ~ BIT15 */
        } ;
    } ;
    U16 space05;

    union
    {
        volatile U16 reg06;
        struct
        {
            volatile U16 tx_buf_wptr     :   16;  /* BIT0 ~ BIT15 */
        } ;
    } ;
    U16 space06;

    union
    {
        volatile U16 reg07;
        struct
        {
            volatile U16 tx_timeout      :   4;   /* BIT0 ~ BIT3 */
            volatile U16 reserve05       :   12;  /* BIT4 ~ BIT15 */
        } ;
    } ;
    U16 space07;

    union
    {
        volatile U16 reg08;
        struct
        {
            volatile U16 rx_buf_base_h   :   16;  /* BIT0 ~ BIT7 */
        } ;
    } ;
    U16 space08;

    union
    {
        volatile U16 reg09;
        struct
        {
            volatile U16 rx_buf_base_l   :   16; /* BIT0 ~ BIT15 */
        } ;
    } ;
    U16 space09;

    union
    {
        volatile U16 reg0a;
        struct
        {
            volatile U16 rx_buf_size     :   13; /* BIT0 ~ BIT12 */
            volatile U16 reserve07       :   3;  /* BIT13 ~ BIT15 */
        } ;
    } ;
    U16 space0a;

    union
    {
        volatile U16 reg0b;
        struct
        {
            volatile U16 rx_buf_wptr     :   16; /* BIT0 ~ BIT15 */
        } ;
    } ;
    U16 space0b;

    union
    {
        volatile U16 reg0c;
        struct
        {
            volatile U16 rx_timeout      :   4;  /* BIT0 ~ BIT3 */
            volatile U16 reserve08       :   12; /* BIT4 ~ BIT15 */
        } ;
    } ;
    U16 space0c;

    union
    {
        volatile U16 reg0d;
        struct
        {
            volatile U16 rx_intr_clr     :   1; /* BIT0 */
            volatile U16 rx_intr1_en     :   1; /* BIT1 */
            volatile U16 rx_intr2_en     :   1; /* BIT2 */
            volatile U16 reserve09       :   1; /* BIT3 */
            volatile U16 rx_intr1        :   1; /* BIT4 */
            volatile U16 rx_intr2        :   1; /* BIT5 */
            volatile U16 reserve0a       :   1; /* BIT6 */
            volatile U16 rx_mcu_intr     :   1; /* BIT7 */
            volatile U16 tx_intr_clr     :   1; /* BIT8 */
            volatile U16 tx_intr_en      :   1; /* BIT9 */
            volatile U16 reserve0b       :   5; /* BIT10 ~ BIT14 */
            volatile U16 tx_mcu_intr     :   1; /* BIT15 */
        } ;
    } ;
} reg_urdma;


struct ms_urdma
{
    reg_urdma *reg_base;
    unsigned int urdma_irq;
    u8 *rx_buf;
    u8 *tx_buf;
    dma_addr_t rx_urdma_base;
    dma_addr_t tx_urdma_base;
    u32 rx_urdma_size;
    u32 tx_urdma_size;
    u16 sw_rx_rptr;
};


struct ms_uart_port {
    struct uart_port    port;
    struct ms_urdma    *urdma;
    struct device      *dev;
    struct clk         *clk;
    int use_dma;
#if UART_TX_TASK
    struct tasklet_struct xmit_tasklet;
#endif
    int rx_guard;
    u8 backupIER;
    u8 backupLCR;
    u8 backupMCR;
    u16 backupDivisor;
    u8 padmux;
    u8 pad_mode;
};


static void ms_uart_console_write(struct console *co, const char *str, u32 count);
static s32 ms_uart_console_setup(struct console *co, char *options);

static struct ms_uart_port *console_ports[NR_CONSOLE_PORTS];
static struct ms_uart_port  console_port;
static struct uart_driver ms_uart_driver;


/* Serial Console Structure Definition */
static struct console ms_uart_console =
{
    .name   = MS_CONSOLE_DEV,
    .write  = ms_uart_console_write,
    .setup  = ms_uart_console_setup,
    .flags  = CON_PRINTBUFFER,
	.device = uart_console_device,
	.data   = &ms_uart_driver,
    .index  = -1,
};


static struct uart_driver ms_uart_driver = {
    .owner        = THIS_MODULE,
    .driver_name    = "ms_uart",
    .dev_name    = "ttyS",
    .nr        = 8,
    .cons        = &ms_uart_console,
};



extern void Chip_UART_Disable_Line(int line);
extern void Chip_UART_Enable_Line(int line);

void URDMA_Reset(struct uart_port *p);
void URDMA_Activate(struct uart_port *p,BOOL bEnable);
void URDMA_TxEnable(struct uart_port *p,BOOL bEnable);
void URDMA_RxEnable(struct uart_port *p,BOOL bEnable);
U8 URDMA_GetInterruptStatus(struct uart_port *p);
void URDMA_TxInit(struct uart_port *p);
void URDMA_RxInit(struct uart_port *p);
void URDMA_TxSetupTimeoutInterrupt(struct uart_port *p,BOOL bEnable);
void URDMA_TxClearInterrupt(struct uart_port *p);
void URDMA_RxSetupTimeoutInterrupt(struct uart_port *p,BOOL bEnableTimeout);
void URDMA_RxSetupThresholdInterrupt(struct uart_port *p,BOOL bEnableThreshold);
U8 URDMA_RxGetInterrupt(struct uart_port *p);
void URDMA_RxClearInterrupt(struct uart_port *p);
U32 URDMA_GetWritableSize(struct uart_port *p);
void URDMA_StartTx(struct uart_port *p);
void URDMA_StartRx(struct uart_port *p);


void inline ms_uart_clear_fifos(struct uart_port *p)
{
    unsigned int timeout=0;

    while( ((INREG8(REG_USR(p)) & UART_USR_BUSY)) && timeout < 2000)
        timeout++;
    OUTREG8(REG_IIR_FCR(p), UART_FCR_FIFO_ENABLE);
    OUTREG8(REG_IIR_FCR(p), UART_FCR_FIFO_ENABLE | UART_FCR_CLEAR_RCVR | UART_FCR_CLEAR_XMIT);
    OUTREG8(REG_IIR_FCR(p), 0);
}

void ms_select_pad(struct uart_port *p, u8 padmux, u8 pad_mode)
{
//    printk("TODO: ms_select_pad %d:%d\n", padmux, pad_mode);

    u8 select=0;

    if(p->line == 0)
        select=4; //PIU UART0
    else if(p->line == 1)
        select=3; //PIU UART2
    else if(p->line == 2)
        select=1; //PIU UART1
    else
    {
        UART_ERR("[%s] port line %d is not supported\n", __func__, p->line);
        return;
    }

    switch(padmux)
    {
        case MUX_NA:
		case MUX_PIU_UART0:
            OUTREGMSK16(REG_UART_SEL, select << 0, 0xF << 0);
            break;
        case MUX_PIU_UART1:
            OUTREGMSK16(REG_UART_MODE, pad_mode << 6, 0x3 << 6);
            OUTREGMSK16(REG_UART_SEL, select << 4, 0xF << 4);
            break;
		case MUX_PIU_UART2:
            OUTREGMSK16(REG_UART_MODE, pad_mode << 0, 0x3 << 0);
            OUTREGMSK16(REG_UART_SEL, select << 8, 0xF << 8);
            break;
		case MUX_FUART:
            OUTREGMSK16(REG_FUART_MODE , pad_mode << 4, 0x2 << 4);
            OUTREGMSK16(REG_FUART_SEL , select << 0, 0xF << 0);
            break;
        default:
            UART_ERR("[%s] Padmux %d not defined\n", __func__, padmux);
            break;
    }

}

void ms_force_rx_disable(u8 padmux, BOOL status)
{
//    printk("TODO: ms_force_rx_disable %d:%d\n", padmux, status);

    switch(padmux)  //set 0 for disable, 1 for enable
    {
		case MUX_NA:
	    case MUX_PIU_UART0:
            OUTREGMSK16(REG_FORCE_RX_DISABLE, (~status) << 2, 1 << 2);
            break;
        case MUX_PIU_UART1:
            OUTREGMSK16(REG_FORCE_RX_DISABLE, (~status) << 0, 1 << 0);
            break;
        case MUX_PIU_UART2:
            OUTREGMSK16(REG_FORCE_RX_DISABLE, (~status) << 1, 1 << 1);
            break;
        case MUX_FUART:
            OUTREGMSK16(REG_FORCE_RX_DISABLE, (~status) << 3, 1 << 3);
            break;
        default:
            UART_ERR("[%s] Padmux %d not defined\n", __func__, padmux);
            break;
    }

}

U16 ms_uart_set_clk(struct uart_port *p, u32 request_baud)
{
    struct clk *clk;
    unsigned int num_parents;
    struct clk **clk_parents;
    unsigned int tolerance, rate, divisor, real_baud;
    struct ms_uart_port *mp;
    int i;

    if(!p->dev)
    {
        //do nothing because clk and device node not ready
        return 0;
    }
    else
    {
        mp = (struct ms_uart_port*)(p->dev->driver_data);
        if (IS_ERR(mp->clk)) {
            UART_ERR("%s: of_clk_get failed\n", p->dev->of_node->full_name);
            p->uartclk=123000000;
            return 0;
        }
        num_parents = __clk_get_num_parents(mp->clk);

        if(!num_parents)
        {
            p->uartclk=clk_get_rate(mp->clk);
            return 0;
        }

        if(of_property_read_u32(p->dev->of_node, "tolerance", &tolerance))
        {
            UART_DBG("%s: failed to read tolerance, use default tolerance 3%%\n", __func__);
            tolerance = 3;
        }

        clk_parents = kzalloc((sizeof(*clk_parents) * num_parents), GFP_KERNEL);
        if(!clk_parents)
        {
            UART_DBG("%s: failed to allocate memory\n", __func__);
            kfree(clk_parents);
            p->uartclk=clk_get_rate(mp->clk);
            return 0;
        }

        for(i = 0; i < num_parents; i++)
        {
            clk_parents[i] = clk_get_parent_by_index(mp->clk, i);
            rate = clk_get_rate(clk_get_parent_by_index(mp->clk, i));
            divisor = (rate + (8*request_baud)) / (16*request_baud);
            real_baud = rate / (16 * divisor);
            if( (abs(real_baud - request_baud)*100/request_baud) < tolerance)
                break;
        }

        if(i != num_parents)
        {
            clk_set_parent(clk, clk_parents[i]);
            p->uartclk=clk_get_rate(mp->clk);
            UART_DBG("[uart%d] uartclk=%d, request_baud=%d, real_baud=%d, divisor=0x%X\n", p->line, p->uartclk, request_baud, real_baud, divisor);
            kfree(clk_parents);
            return divisor;
        }
        else
        {
            UART_ERR("[uart%d] can't find suitable clk for baud=%d tolerance=%d%%, will not changed\n", p->line, request_baud, tolerance);
            kfree(clk_parents);
            return 0;
        }
    }
}

void ms_uart_set_divisor(struct uart_port *p, u16 divisor)
{
    ms_uart_clear_fifos(p);

    // enable Divisor Latch Access, so Divisor Latch register can be accessed
    OUTREG8(REG_LCR(p), INREG8(REG_LCR(p)) | UART_LCR_DLAB);
    OUTREG8(REG_DLH_IER(p), (u8 )((divisor >> 8) & 0xff));
    OUTREG8(REG_DLL_THR_RBR(p), (u8 )(divisor & 0xff));
    // disable Divisor Latch Access
    OUTREG8(REG_LCR(p), INREG8(REG_LCR(p)) & ~UART_LCR_DLAB);
}

static void ms_uart_console_putchar(struct uart_port *p, s32 ch)
{
    u8  lsr_u8  = 0;    /* Line Status Register (LSR) */

    /* Check if Transmit FIFO full */
    /* we can not modify the Tx FIFO size, default is 1 byte size*/

    lsr_u8 = INREG8(REG_LSR(p));
    while(!(lsr_u8 & UART_LSR_THRE))
    {
        lsr_u8 = INREG8(REG_LSR(p));
    }

    OUTREG8(REG_DLL_THR_RBR(p),ch);

    /* Check if both TX FIFO buffer & shift register are empty */
    //lsr_u8 = INREG8(REG_LSR(p));
    //while((lsr_u8 & (UART_LSR_TEMT | UART_LSR_THRE)) != (UART_LSR_TEMT | UART_LSR_THRE))
    //{
    //    lsr_u8 = INREG8(REG_LSR(p));
    //}
}


static void ms_uart_console_write(struct console *co, const char *str, u32 count)
{
    struct ms_uart_port *mp;
    struct uart_port *p;
    unsigned long flags;
    int locked = 1;

    if( (!str )|| co->index>=NR_CONSOLE_PORTS || co->index < 0)
    {
        return;
    }

    mp = console_ports[co->index];
    p = &(mp->port);

    if (p->sysrq || oops_in_progress)
        locked = spin_trylock_irqsave(&p->lock, flags);
    else
        spin_lock_irqsave(&p->lock, flags);

    if(!mp->use_dma)
        uart_console_write(p, str, count, ms_uart_console_putchar);


    if (locked)
        spin_unlock_irqrestore(&p->lock, flags);

    return;
}


static s32 __init ms_uart_console_setup(struct console *co, char *options)
{
    /* Define Local Variables */
    s32 baud =115200;
    s32 bits = 8;
    s32 parity = 'n';
    s32 flow = 'n';

    if(!options)
    {
        options = "115200n8r"; /* Set default baudrate for console*/
    }

    /* validate console port index */
    if(co->index == -1 || co->index >= NR_CONSOLE_PORTS)
    {
        co->index = 0;
    }

    /* parsing the command line arguments */
    uart_parse_options(options, &baud, &parity, &bits, &flow);
    if(console_ports[co->index]==NULL){
        return -ENODEV;
    }

    return uart_set_options(&(console_ports[co->index]->port), co, baud, parity, bits, flow);
}

static void ms_uart_add_console_port(struct ms_uart_port *ur)
{
    if(ur->port.line >=0 && ur->port.line < NR_CONSOLE_PORTS )
    {
        console_ports[ur->port.line] = ur;
    }
}

static const char * ms_uart_type(struct uart_port *pPort_st)
{
    return NULL;
}

static void ms_uart_release_port(struct uart_port *pPort_st)
{

}

static s32 ms_uart_request_port(struct uart_port *pPort_st)
{
    int ret=0;
    return ret;
}

static void ms_uart_config_port(struct uart_port *pPort_st, s32 flags)
{

}

static s32 ms_uart_verify_port(struct uart_port *pPort_st, struct serial_struct *ser)
{
    int ret=0;
    return ret;
}


static void ms_uart_enable_ms(struct uart_port *pPort_st)
{

}

static u32 ms_uart_get_mctrl(struct uart_port *pPort_st)
{
    return (TIOCM_CAR|TIOCM_CTS|TIOCM_DSR);
}

static void ms_uart_set_mctrl(struct uart_port *pPort_st, u32 mctrl)
{

}


static void ms_uart_break_ctl(struct uart_port *pPort_st, s32 break_state)
{

}


static void ms_uart_stop_tx(struct uart_port *p)
{
    struct ms_uart_port *mp = (struct ms_uart_port*)(p->dev->driver_data);

    if(!mp->use_dma)
    {
#if UART_USE_SPINLOCK
        unsigned long flags;
        spin_lock_irqsave(&p->lock, flags);
        CLRREG8(REG_DLH_IER(p), UART_IER_THRI);
        spin_unlock_irqrestore(&p->lock, flags);
#else
        CLRREG8(REG_DLH_IER(p), UART_IER_THRI);
    //NOTE: Read IIR to clear dummy THRI after disable THRI occurred at ZEBU -- Spade
        INREG8(REG_IIR_FCR(p));
#endif
    }
    else
    {
//        printk(KERN_ERR "DMA_TX_STOP\n");
        URDMA_TxSetupTimeoutInterrupt(p, FALSE);
    }
}

static void ms_uart_stop_rx(struct uart_port *p)
{
    struct ms_uart_port *mp = (struct ms_uart_port*)p->dev->driver_data;

    if(!mp->use_dma)
    {
#if UART_USE_SPINLOCK
        unsigned long flags;
        spin_lock_irqsave(&p->lock, flags);
        CLRREG8(REG_DLH_IER(p), UART_IER_RDI | UART_IER_RLSI);
        spin_unlock_irqrestore(&p->lock, flags);
#else
        CLRREG8(REG_DLH_IER(p), UART_IER_RDI | UART_IER_RLSI);
#endif
    }
}

static void ms_uart_start_tx(struct uart_port *p)
{
    struct ms_uart_port *mp = (struct ms_uart_port*)p->dev->driver_data;

    if(!mp->use_dma)
    {
#if UART_USE_SPINLOCK
        unsigned long flags;
        spin_lock_irqsave(&p->lock, flags);
        SETREG8(REG_DLH_IER(p), UART_IER_THRI);
        spin_unlock_irqrestore(&p->lock, flags);
#else
        SETREG8(REG_DLH_IER(p), UART_IER_THRI);
#endif
    }
    else
    {
//        pr_err("DMA_TX_START\n");
        URDMA_TxSetupTimeoutInterrupt(p, TRUE);
        URDMA_StartTx(p);
    }
}

static u32 ms_uart_tx_empty(struct uart_port *p)
{
    int ret=0;
    struct ms_uart_port *mp = (struct ms_uart_port*)p->dev->driver_data;

    if(!mp->use_dma)
    {
        /* Check if both TX FIFO buffer & shift register are empty */
        if((INREG8(REG_LSR(p)) & (UART_LSR_TEMT | UART_LSR_THRE)) == (UART_LSR_TEMT | UART_LSR_THRE))
        {
            ret=TIOCSER_TEMT; /*if no support, also return this */
        }

    }
    else
    {
        if(mp->urdma->reg_base->tx_buf_rptr == mp->urdma->reg_base->tx_buf_wptr)
        {
            return TIOCSER_TEMT; /*if no support, also return this */
        }
        else
        {
            return 0;
        }
    }

    return ret;
}

#if UART_TX_TASK
static void ms_do_xmit_task(unsigned long port_address)
{
    /* Define Local Variables */
    s32 count = 0;
    struct circ_buf *xmit;
    u8 u8USR = 0;
    struct uart_port* p = (struct uart_port*) ((void *) port_address);

    /* Parameter out-of-bound check */
    if (!p)
    {
        UART_ERR("ms_do_xmit_task: port is NULL\n");
        return;
    }

    xmit = &p->state->xmit;

    if (p->x_char)
    {

        while( !( INREG8(REG_LSR(p)) & UART_LSR_THRE ) )
        {
            //nothing to do
        }

        OUTREG8(REG_DLL_THR_RBR(p), xmit->buf[xmit->tail]);
        xmit->tail = (xmit->tail + 1) & (UART_XMIT_SIZE - 1);
        p->icount.tx++;
        p->x_char = 0;
        return;
    }

    if (uart_circ_empty(xmit) || uart_tx_stopped(p))
    {
        ms_uart_stop_tx(p);
        return;
    }

    u8USR = INREG8(REG_USR(p));
    if (UART_USR_TXFIFO_EMPTY == (u8USR & (UART_USR_TXFIFO_EMPTY))) // Tx FIFO Empty
    {
        count = p->fifosize;
    }
    else if (UART_USR_TXFIFO_NOT_FULL == (u8USR & (UART_USR_TXFIFO_NOT_FULL))) // not empty, but not full
    {
        count = 1;
    }

    do {
        OUTREG8(REG_DLL_THR_RBR(p), xmit->buf[xmit->tail]);
        xmit->tail = (xmit->tail + 1) & (UART_XMIT_SIZE - 1);
        p->icount.tx++;

        if (uart_circ_empty(xmit))
        {
            break;
        }
    } while (--count > 0);

    if (uart_circ_chars_pending(xmit) < WAKEUP_CHARS)
        uart_write_wakeup(p);

    if (uart_circ_empty(xmit))
    {
        ms_uart_stop_tx(p);
        return;
    }

#if UART_USE_SPINLOCK
    {
        unsigned long flags;
        spin_lock_irqsave(&p->lock, flags);
        SETREG8(REG_DLH_IER(p), UART_IER_THRI);
        spin_unlock_irqrestore(&p->lock, flags);
    }
#else
    SETREG8(REG_DLH_IER(p), UART_IER_THRI);
#endif
    return;
}

#else  // UART_TX_TASK = 0
static void ms_putchar(struct uart_port *p)
{
     /* Define Local Variables */
    int count;
    struct circ_buf *xmit;
    u8 u8USR = 0;

    /* Parameter out-of-bound check */
    if (!p)
    {
        UART_ERR("ms_putchar: port is NULL\n");
        return;
    }

    xmit = &p->state->xmit;

    if (p->x_char)
    {
        while( !( INREG8(REG_USR(p)) & UART_USR_TXFIFO_NOT_FULL ) )
        {
            //nothing to do
        }
        OUTREG8(REG_DLL_THR_RBR(p), p->x_char);
        p->icount.tx++;
        p->x_char = 0;
        return;
    }

    if (uart_circ_empty(xmit) || uart_tx_stopped(p))
    {
        ms_uart_stop_tx(p);
        return;
    }

    u8USR = INREG8(REG_USR(p));

    if (UART_USR_TXFIFO_EMPTY == (u8USR & (UART_USR_TXFIFO_EMPTY))) // Tx FIFO Empty
    {
        count = p->fifosize;
    }
    else if (UART_USR_TXFIFO_NOT_FULL == (u8USR & (UART_USR_TXFIFO_NOT_FULL))) // not empty, but not full
    {
        count = 1;
    }

    do {
        OUTREG8(REG_DLL_THR_RBR(p), xmit->buf[xmit->tail]);

        xmit->tail = (xmit->tail + 1) & (UART_XMIT_SIZE - 1);
        p->icount.tx++;

        if (uart_circ_empty(xmit))
        {
            break;
        }
    } while (--count > 0);

    if (uart_circ_chars_pending(xmit) < WAKEUP_CHARS)
        uart_write_wakeup(p);

    if (uart_circ_empty(xmit))
    {
        ms_uart_stop_tx(p);
    }
}
#endif


static void ms_getchar(struct uart_port *p)
{
    u8  lsr = 0;    /* Line Status Register (LSR) */
    u32 flag = 0;
    u32 ch = 0;    /* Character read from UART port */
    int max_count = p->fifosize;
    struct ms_uart_port *mp = (struct ms_uart_port*)p->dev->driver_data;
    static u8 rx_disable = 0, pad_disable = 0;
    unsigned long flags;

    spin_lock_irqsave(&p->lock, flags);

    /* Read Line Status Register */
    lsr = INREG8(REG_LSR(p));

    /* check if Receiver Data Ready */
    if((lsr & UART_LSR_DR) != UART_LSR_DR)
    {
        mp->rx_guard++;
        if(unlikely(mp->rx_guard>2000))
        {
            ch=INREG8(REG_DLL_THR_RBR(p));
            UART_ERR("rx interrupts error!!!!!");
            mp->rx_guard=0;
        }
        /* Data NOT Ready */
        return ;
    }
    mp->rx_guard=0;

    /* while data ready, start to read data from UART FIFO */
    do{
        flag = TTY_NORMAL;
        /* read data from UART IP */
        ch = INREG8(REG_DLL_THR_RBR(p));
        p->icount.rx++;

        if (unlikely(lsr & (UART_LSR_BI | UART_LSR_PE | UART_LSR_FE | UART_LSR_OE)))
        {
            if (lsr & UART_LSR_BI) {
                lsr &= ~(UART_LSR_FE | UART_LSR_PE);
                p->icount.brk++;
                /*
                 * We do the SysRQ and SAK checking
                 * here because otherwise the break
                 * may get masked by ignore_status_mask
                 * or read_status_mask.
                 */
                if (uart_handle_break(p))
                    goto IGNORE_CHAR;
            }
            else if (lsr & UART_LSR_PE)
            {
                p->icount.parity++;
            }
            else if (lsr & UART_LSR_FE)
            {
                p->icount.frame++;
            }
            else if (lsr & UART_LSR_OE)
            {
                p->icount.overrun++;
            }

            /*
             * Mask off conditions which should be ingored.
             */
            lsr &= p->read_status_mask;

            if (lsr & UART_LSR_BI) {
                UART_DBG("handling break....\n");
                flag = TTY_BREAK;
            }
            else if (lsr & UART_LSR_PE)
            {
                flag = TTY_PARITY;
            }
            else if (lsr & UART_LSR_FE)
            {
                flag = TTY_FRAME;
            }
        }
        if (uart_handle_sysrq_char(p, ch))
        {
            goto IGNORE_CHAR;
        }

        uart_insert_char(p, lsr, UART_LSR_OE, ch, flag);

        //when receive '11111', disable UART RX to use TV tool
        if(ch == '1')
            rx_disable++;
        else
            rx_disable=0;

        if(rx_disable == 5)
        {
            CLRREG16(0x1F001C24, 0x1<<11);
            rx_disable=0;
        }
        //when receive '22222', disable UART PAD to use TV tool
        if(ch == '2')
            pad_disable++;
        else
            pad_disable=0;

        if(pad_disable == 5)
        {
            CLRREG16(0x1F001C24, 0x1<<11);
            pad_disable=0;
        }

IGNORE_CHAR:
        lsr = INREG8(REG_LSR(p));
    }while((max_count-- >0)&&(lsr & UART_LSR_DR));

    spin_unlock_irqrestore(&p->lock, flags);
    tty_flip_buffer_push(&p->state->port);
}

static irqreturn_t ms_uart_interrupt(s32 irq, void *dev_id)
{
    /* Define Local Variables */
    u8  iir_fcr = 0;    /* Interrupt Identification Register (IIR) */
    struct uart_port *p = dev_id;
    struct ms_uart_port *mp = (struct ms_uart_port*)p->dev->driver_data;
    u8 count=0, retry=100;

    if(mp->use_dma)
    {
        u8 status = URDMA_GetInterruptStatus(p);
        if(status & URDMA_INTR_STATUS_RX)
        {
            u8 intr_type = URDMA_RxGetInterrupt(p);

            if(intr_type & URDMA_RX_INTR_TYPE_TIMEOUT)
            {
                URDMA_RxSetupTimeoutInterrupt(p,FALSE);
            }

            if(intr_type & URDMA_RX_INTR_TYPE_THRESHOLD)
            {
                URDMA_RxSetupThresholdInterrupt(p,FALSE);
            }
            URDMA_RxClearInterrupt(p);

            URDMA_StartRx(p);
            URDMA_RxSetupTimeoutInterrupt(p,TRUE);
            URDMA_RxSetupThresholdInterrupt(p,TRUE);
        }
        else if(status & URDMA_INTR_STATUS_TX)
        {
            URDMA_TxClearInterrupt(p);
            //do nothing
        }
        else
            UART_ERR("URDMA dummy interrupt!\n");
    }
    else
    {
        /* Read Interrupt Identification Register */
        iir_fcr = INREG8(REG_IIR_FCR(p)) & UART_IIR_ID_MASK;

        if( (iir_fcr == UART_IIR_RDI || iir_fcr == UART_IIR_RX_TIMEOUT) ) /* Receive Data Available or Character timeout */
        {
            ms_getchar(p);
        }
        else if( iir_fcr == UART_IIR_THRI ) /* Transmitter Holding Register Empty */
        {
    #if UART_TX_TASK
        #if UART_USE_SPINLOCK
            unsigned long flags=0;
            spin_lock_irqsave(&p->lock, flags);
            CLRREG8(REG_DLH_IER(p), UART_IER_THRI);
            spin_unlock_irqrestore(&p->lock, flags);
        #else
            CLRREG8(REG_DLH_IER(p), UART_IER_THRI);
        #endif

            tasklet_schedule(&mp->xmit_tasklet);
    #else
            ms_putchar(p);
    #endif
        }
        else if( iir_fcr == UART_IIR_MSI ) /* Modem Status */
        {
            UART_ERR("UART Interrupt: Modem status\n");
            // Read MSR to clear
            INREG8(REG_MSR(p));
        }
        else if( iir_fcr == UART_IIR_BUSY ) /* Busy detect indication */
        {
            // Read USR to clear
            INREG8(REG_USR(p));

            while( ((INREG8(REG_IIR_FCR(p)) & UART_IIR_ID_MASK) == UART_IIR_BUSY) && (count < retry))
            {
                // Read USR to clear
                INREG8(REG_USR(p));
                count++;
            }
            if (count == retry)
                UART_ERR("UART Interrupt: UART_IIR_BUSY\n");

        }
        else if( iir_fcr == UART_IIR_RLSI ) /* Receiver line status */
        {
            // Read LSR to clear
            INREG8(REG_LSR(p));
        }
        else if( iir_fcr == UART_IIR_NO_INT ) /* No pending interrupts */
        {
            while( ((INREG8(REG_USR(p)) & UART_USR_BUSY) == UART_USR_BUSY) && (count < retry))
            {
                count++;
            }
//            if (count == retry)
//                UART_ERR("UART%d Interrupt: No IRQ rasied by UART, but come in to UART ISR. IIR:0x%02X USR:0x%02X\n", p->line, iir_fcr, INREG8(REG_USR(p)));
        }
        else /* Unknown Status */
        {
            UART_ERR("UART Unknown Interrupt, IIR:0x%02X\n", iir_fcr);
        }
    }

    return IRQ_HANDLED;
}

static s32 ms_uart_startup(struct uart_port *p)
{
    /* Define Local Variables */
    int rc = 0;
    struct ms_uart_port *mp = (struct ms_uart_port*)p->dev->driver_data;

    ms_force_rx_disable(mp->padmux, DISABLE);
    ms_uart_clear_fifos(p);

    /*we do not support CTS now*/
    p->flags &= ~ASYNC_CTS_FLOW;

#if UART_TX_TASK
    tasklet_init(&mp->xmit_tasklet, ms_do_xmit_task, (unsigned long)p);
#endif

    if(mp->use_dma)
    {
        rc = request_irq(mp->urdma->urdma_irq, ms_uart_interrupt, IRQF_SHARED, "ms_serial_dma",p);
    }
    else
    {
        OUTREG8(REG_DLH_IER(p), 0);
        INREG8(REG_LSR(p));
        INREG8(REG_DLL_THR_RBR(p));
        INREG8(REG_IIR_FCR(p));
        INREG8(REG_MSR(p));
        rc = request_irq((p->irq), ms_uart_interrupt, IRQF_SHARED, "ms_serial",p);
	}

    /* Print UART interrupt request status */
    if (rc) {
        /* UART interrupt request failed */
        UART_ERR("ms_startup(): UART%d request_irq()is failed. return code=%d\n", p->line, rc);
    } else {
        /* UART interrupt request passed */
        UART_DBG("ms_startup(): UART%d request_irq() is passed.\n", p->line);
    }

    mp->rx_guard=0;


    if(mp->use_dma)
    {
        URDMA_Reset(p);
        URDMA_Activate(p,TRUE);
        URDMA_TxInit(p);
        URDMA_TxEnable(p,TRUE);
        URDMA_RxInit(p);
        URDMA_RxSetupTimeoutInterrupt(p,TRUE);
        URDMA_RxSetupThresholdInterrupt(p,TRUE);
        URDMA_RxEnable(p,TRUE);
    }
    else
    {
#if UART_USE_SPINLOCK
        unsigned long flags;
        spin_lock_irqsave(&p->lock, flags);
        SETREG8(REG_DLH_IER(p), UART_IER_RDI | UART_IER_RLSI);
        spin_unlock_irqrestore(&p->lock, flags);
#else
        SETREG8(REG_DLH_IER(p), UART_IER_RDI | UART_IER_RLSI);
#endif
    }

    ms_force_rx_disable(mp->padmux, ENABLE);
    ms_select_pad(p, mp->padmux, mp->pad_mode);

    return rc;
}


static void ms_uart_shutdown(struct uart_port *p)
{
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    if(mp->use_dma)
    {
        URDMA_RxEnable(p,FALSE);
        URDMA_TxEnable(p,FALSE);
        URDMA_TxSetupTimeoutInterrupt(p,FALSE);
        URDMA_TxClearInterrupt(p);
        URDMA_RxSetupTimeoutInterrupt(p,FALSE);
        URDMA_RxSetupThresholdInterrupt(p,FALSE);
        URDMA_RxClearInterrupt(p);
        URDMA_Activate(p,FALSE);
        disable_irq(mp->urdma->urdma_irq);
        free_irq(mp->urdma->urdma_irq, p);
    }
    else
    {
#if UART_USE_LOOPBACK
        //set loopback mode
        SETREG8(REG_MCR(p), 0x10);
#endif
        CLRREG8(REG_LCR(p), UART_LCR_SBC);
        ms_uart_clear_fifos(p);
        INREG8(REG_DLL_THR_RBR(p));

#if UART_USE_LOOPBACK
        //clear loopback mode
        CLRREG8(REG_MCR(p), 0x10);
#endif
        //OUTREG8(REG_DLH_IER(p), 0);
        disable_irq(p->irq);
        free_irq(p->irq, p);
    }

    ms_force_rx_disable(mp->padmux, DISABLE);
}

static void ms_uart_set_termios(struct uart_port *p, struct ktermios *pTermios_st, struct ktermios *pOld_st)
{
    /* Define Local Variables */
    struct ms_uart_port *mp;
    u8 uartflag = 0;
    u16 divisor = 0;
    u32 baudrate = 0;

    //OUTREG8(REG_DLH_IER(p), 0);

    if(p->dev)
    {
        mp=(struct ms_uart_port*)p->dev->driver_data;
        if(mp->use_dma)
            URDMA_Activate(p,FALSE);
        ms_force_rx_disable(mp->padmux, DISABLE);
    }

    /*------- Configure Chararacter Size --------*/
    switch (pTermios_st->c_cflag & CSIZE)
    {
        case CS5: /* Word length is 5 bits */
            uartflag |= UART_LCR_WLEN5;
            break;
        case CS6: /* Word length is 6 bits */
            uartflag |= UART_LCR_WLEN6;
            break;
        case CS7: /* Word length is 7 bits */
            uartflag |= UART_LCR_WLEN7;
            break;
        case CS8: /* Word length is 8 bits */
            uartflag |= UART_LCR_WLEN8;
            break;
        default:
            UART_ERR("%s unsupported bits:%d\n", __FUNCTION__, pTermios_st->c_cflag & CSIZE);
            break;
    }

    /*------------ Configure Stop bit -----------*/
    if (pTermios_st->c_cflag & CSTOPB)
    {
        /* Stop length is 1.5 bits (5-bit char), 2 bits (otherwise) */
        uartflag |= UART_LCR_STOP2;
    }
    else
    {
        /* Stop length is 1 bit */
        uartflag |= UART_LCR_STOP1;
    }

    /*----------- Configure Parity --------------*/
    if (pTermios_st->c_cflag & PARENB)
    {
        /* Parity Enable */
        uartflag |= UART_LCR_PARITY_EN;

        /* Set Odd/Even Parity */
        if (pTermios_st->c_cflag & PARODD)
        {
            /* Odd Parity */
            uartflag &= (~UART_LCR_PARITY_SEL);
        }
        else
        {
            /* Even Parity */
            uartflag |= UART_LCR_PARITY_SEL;
        }
    }
    else
    {
        /* Parity Disable */
        uartflag &= (~UART_LCR_PARITY_EN);
    }
    OUTREG8(REG_LCR(p), uartflag);

    //NOTE: we are going to set LCR, be carefully here
    baudrate = uart_get_baud_rate(p, pTermios_st, pOld_st, 0, 115200 * 8);
    divisor = ms_uart_set_clk(p, baudrate);

    if(divisor)
        ms_uart_set_divisor(p, divisor);

    OUTREG8(REG_IIR_FCR(p), UART_FCR_FIFO_ENABLE | UART_FCR_TRIGGER_TX_L0 | UART_FCR_TRIGGER_RX_L3);
    INREG8(REG_DLL_THR_RBR(p));

    if(p->dev)
    {
        if(mp->use_dma)
        {
            URDMA_Reset(p);
            URDMA_Activate(p,TRUE);
            URDMA_TxInit(p);
            URDMA_TxEnable(p,TRUE);
            URDMA_RxInit(p);
            URDMA_RxSetupTimeoutInterrupt(p,TRUE);
            URDMA_RxSetupThresholdInterrupt(p,TRUE);
            URDMA_RxEnable(p,TRUE);
        }
        ms_force_rx_disable(mp->padmux, ENABLE);
    }
}

/* UART Operations */
static struct uart_ops ms_uart_ops =
{
    .tx_empty     = ms_uart_tx_empty,
    .set_mctrl    = ms_uart_set_mctrl,     /* Not supported in MSB2501 */
    .get_mctrl    = ms_uart_get_mctrl,     /* Not supported in MSB2501 */
    .stop_tx      = ms_uart_stop_tx,
    .start_tx     = ms_uart_start_tx,
    .stop_rx      = ms_uart_stop_rx,
    .enable_ms    = ms_uart_enable_ms,     /* Not supported in MSB2501 */
    .break_ctl    = ms_uart_break_ctl,     /* Not supported in MSB2501 */
    .startup      = ms_uart_startup,
    .shutdown     = ms_uart_shutdown,
    .set_termios  = ms_uart_set_termios,
    .type         = ms_uart_type,          /* Not supported in MSB2501 */
    .release_port = ms_uart_release_port,  /* Not supported in MSB2501 */
    .request_port = ms_uart_request_port,  /* Not supported in MSB2501 */
    .config_port  = ms_uart_config_port,   /* Not supported in MSB2501 */
    .verify_port  = ms_uart_verify_port,   /* Not supported in MSB2501 */
};

#ifdef CONFIG_PM
static s32 ms_uart_suspend(struct platform_device *pdev, pm_message_t state)
{
    struct ms_uart_port *mp=platform_get_drvdata(pdev);
    struct uart_port *p=&mp->port;

    UART_DBG("[%s] uart%d\n", __func__, p->line);

    if(mp->use_dma)
    {
        URDMA_RxEnable(p,FALSE);
        URDMA_TxEnable(p,FALSE);
        URDMA_TxSetupTimeoutInterrupt(p,FALSE);
        URDMA_TxClearInterrupt(p);
        URDMA_RxSetupTimeoutInterrupt(p,FALSE);
        URDMA_RxSetupThresholdInterrupt(p,FALSE);
        URDMA_RxClearInterrupt(p);
        URDMA_Activate(p,FALSE);
    }

    uart_suspend_port(&ms_uart_driver, p);

    mp->backupIER = INREG8(REG_DLH_IER(p));
    mp->backupLCR = INREG8(REG_LCR(p));
    mp->backupMCR = INREG8(REG_MCR(p));

    OUTREG8(REG_DLH_IER(p), 0);
    ms_uart_clear_fifos(p);

    OUTREG8(REG_LCR(p) , mp->backupLCR | UART_LCR_DLAB);

    mp->backupDivisor = (INREG8(REG_DLH_IER(p)) & 0xFF << 8);
    mp->backupDivisor |= (INREG8(REG_DLL_THR_RBR(p)) & 0xFF);

    if (!IS_ERR(mp->clk))
        clk_disable_unprepare(mp->clk);

    return 0;
}

static s32 ms_uart_resume(struct platform_device *pdev)
{
    struct ms_uart_port *mp=platform_get_drvdata(pdev);
    struct uart_port *p=&mp->port;

    if (!IS_ERR(mp->clk))
        clk_prepare_enable(mp->clk);

    ms_uart_set_divisor(p, mp->backupDivisor);

    OUTREG8(REG_MCR(p), mp->backupMCR);
    OUTREG8(REG_LCR(p), mp->backupLCR);
    OUTREG8(REG_DLH_IER(p), mp->backupIER);

    if(mp->use_dma)
    {
        URDMA_Reset(p);
        URDMA_Activate(p,TRUE);
        URDMA_TxInit(p);
        URDMA_TxEnable(p,TRUE);
        URDMA_RxInit(p);
        URDMA_RxSetupTimeoutInterrupt(p,TRUE);
        URDMA_RxSetupThresholdInterrupt(p,TRUE);
        URDMA_RxEnable(p,TRUE);
    }

    uart_resume_port(&ms_uart_driver, &mp->port);

    UART_DBG("[%s] uart%d\n", __func__, p->line);

    return 0;
}
#endif

static s32 ms_uart_remove(struct platform_device *pdev)
{
    struct ms_uart_port *mp=platform_get_drvdata(pdev);

    uart_remove_one_port(&ms_uart_driver,&mp->port);

    if(mp->use_dma)
    {
        dma_free_coherent(&pdev->dev, PAGE_ALIGN(UR2DMA_RX_BUF_LENGTH), &mp->urdma->rx_urdma_base, GFP_KERNEL);
        dma_free_coherent(&pdev->dev, PAGE_ALIGN(UR2DMA_TX_BUF_LENGTH), &mp->urdma->tx_urdma_base, GFP_KERNEL);
    }

    if (!IS_ERR(mp->clk))
        clk_disable_unprepare(mp->clk);

    return 0;
}


static s32 ms_uart_probe(struct platform_device *pdev)
{
    int ret = 0;
    struct ms_uart_port *mp;
    struct ms_urdma *urdma;
    struct resource *res;
    int tx_pad;

    if(!pdev)
        UART_ERR("ms_uart_probe() parameter pdev is NULL\n");

    mp = devm_kzalloc(&pdev->dev, sizeof(*mp), GFP_KERNEL);
    if (!mp)
        return -ENOMEM;

    spin_lock_init(&mp->port.lock);

    mp->port.line = of_alias_get_id(pdev->dev.of_node, "serial");
    if (mp->port.line < 0) {
        UART_ERR("[%s] failed to get alias/pdev id = %d\n", __func__, mp->port.line);
        return -EINVAL;
    }
    pdev->id=mp->port.line;
#if 0
    mp->clk = of_clk_get(pdev->dev.of_node, 0);
    if(IS_ERR(mp->clk))
    {
        UART_ERR("[%s] of_clk_get failed\n", __func__);
        return -EINVAL;
    }
    //enable clk in probe, because if UART no clk, it can not be accessed.
    clk_prepare_enable(mp->clk);
    mp->port.uartclk = clk_get_rate(mp->clk);
#endif
    res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
    if (res == NULL) {
        UART_ERR("no memory resource defined\n");
        ret = -ENODEV;
        goto out;
    }
    mp->port.membase = (void *)res->start;

    res = platform_get_resource(pdev, IORESOURCE_IRQ, 0);
    if (res == NULL) {
        UART_ERR("no irq resource defined\n");
        ret = -ENODEV;
        goto out;
    }
    mp->port.irq = res->start;

    of_property_read_u32(pdev->dev.of_node, "dma", &mp->use_dma);

    if(mp->use_dma)
    {
        mp->urdma = devm_kzalloc(&pdev->dev, sizeof(*urdma), GFP_KERNEL);
        if (!mp->urdma)
        {
            mp->use_dma=0;
            goto dma_err;
        }

        res = platform_get_resource(pdev, IORESOURCE_MEM, 1);
        if (res == NULL)
        {
            mp->use_dma = 0;
            UART_ERR("no urdma memory resource defined...\n");
            goto dma_err;
        }
        mp->urdma->reg_base = (reg_urdma *)IO_ADDRESS(res->start);

        res = platform_get_resource(pdev, IORESOURCE_IRQ, 1);
        if (res == NULL)
        {
            mp->use_dma = 0;
            UART_ERR("no urdma irq resource defined\n");
            goto dma_err;
        }
        mp->urdma->urdma_irq = res->start;
        mp->port.irq = res->start;

        mp->urdma->rx_buf = dma_alloc_coherent(&pdev->dev, PAGE_ALIGN(UR2DMA_RX_BUF_LENGTH),
                    &mp->urdma->rx_urdma_base, GFP_KERNEL);
        mp->urdma->tx_buf = dma_alloc_coherent(&pdev->dev, PAGE_ALIGN(UR2DMA_TX_BUF_LENGTH),
                    &mp->urdma->tx_urdma_base, GFP_KERNEL);
        if(!mp->urdma->rx_buf || !mp->urdma->tx_buf)
        {
            mp->use_dma = 0;
            UART_ERR("Allocate urdma rx_buffer/tx_buffer failed, use UART mode\n");
            goto dma_err;
        }
        mp->urdma->rx_urdma_size = PAGE_ALIGN(UR2DMA_RX_BUF_LENGTH);
        mp->urdma->tx_urdma_size = PAGE_ALIGN(UR2DMA_TX_BUF_LENGTH);
        UART_DBG("[%s] URDMA mode enable, reg_base=0x%08X, irq=%d\n", __func__, (unsigned int)(mp->urdma->reg_base), mp->urdma->urdma_irq);
        UART_ERR("URDMA rx_buf=0x%08X(phy:0x%08X) tx_buf=0x%08X(phy:0x%08X) size=0x%X\n", (unsigned int)mp->urdma->rx_buf, (unsigned int)mp->urdma->rx_urdma_base, (unsigned int)mp->urdma->tx_buf, (unsigned int)mp->urdma->tx_urdma_base, mp->urdma->rx_urdma_size);
    }
dma_err:
    mp->port.type = PORT_8250;
    mp->port.dev = &pdev->dev;
    mp->port.ops=&ms_uart_ops;
    mp->port.regshift = 0;
    mp->port.fifosize = 16;
    mp->port.timeout  =HZ;
    mp->port.iotype=UPIO_MEM;

    UART_DBG("[%s] line=%d name=%s\n", __func__, mp->port.line, pdev->name);

    //[2016.11.15] Add padmux select from DTB by Spade
    if(of_property_read_u32(pdev->dev.of_node, "pad", &tx_pad))  //read property failed
    {
        //set default pad
        if(mp->port.line==0)
        {
            UART_ERR("[%s] uart port %d use %s\n", __func__, mp->port.line, "MUX_PM_UART");
            mp->padmux=MUX_PIU_UART0;
        }
        else if(mp->port.line==1)
        {
            UART_ERR("[%s] uart port %d use %s\n", __func__, mp->port.line, "MUX_UART1");
            mp->padmux=MUX_PIU_UART1;
        }
        else if(mp->port.line==2)
        {
            UART_ERR("[%s] uart port %d use %s\n", __func__, mp->port.line, "MUX_FUART");
            mp->padmux=MUX_FUART;
        }
        else
        {
            UART_ERR("[%s] port line %d is not supported\n", __func__, mp->port.line);
            ret = -EINVAL;
            goto out;
        }
    }
    else  //read property successfully

    {
    UART_ERR("[%s] uart port %d use %s\n", __func__ ,tx_pad, "MUX_FUART");
        switch(tx_pad)
        {
            case PAD_FUART_RX:

                mp->padmux=MUX_FUART;
                mp->pad_mode=0x1;
                break;

            case PAD_GPIO0:
                mp->padmux=MUX_FUART;
                mp->pad_mode=0x2;
                break;

            case PAD_UART0_TX:
                mp->padmux=MUX_PIU_UART0;
                mp->pad_mode=0x1;
                break;

            case PAD_FUART_TX:
                mp->padmux=MUX_PIU_UART0;
                mp->pad_mode=0x2;
                break;

            case PAD_GPIO4:
                mp->padmux=MUX_PIU_UART0;
                mp->pad_mode=0x3;
                break;

            case PAD_UART1_TX:
                mp->padmux=MUX_PIU_UART1;
                mp->pad_mode=0x1;
                break;

            case PAD_FUART_RTS:
                mp->padmux=MUX_PIU_UART1;
                mp->pad_mode=0x2;
                break;

            case PAD_GPIO6:
                mp->padmux=MUX_PIU_UART1;
                mp->pad_mode=0x3;
                break;

            default:
                UART_ERR("[%s] Use undefined pad number %d\n", __func__, tx_pad);
                ret = -EINVAL;
                goto out;
        }
        UART_ERR("[%s] uart port %d use %s\n", __func__, mp->port.line, (mp->padmux==MUX_FUART)?"MUX_FUART":(mp->padmux==MUX_PIU_UART0)?"MUX_UART0":"MUX_UART1");
    }

    platform_set_drvdata(pdev, mp);

    ret = uart_add_one_port(&ms_uart_driver, &mp->port);
    if (ret != 0)
        goto out;

    return 0;
out:
    UART_ERR("[UART%d]: failure [%s]: %d\n", mp->port.line, __func__, ret);
    clk_disable_unprepare(mp->clk);
    return ret;
}

static const struct of_device_id ms_uart_of_match_table[] = {
    { .compatible = "mstar,uart" },
    {}
};
MODULE_DEVICE_TABLE(of, ms_uart_of_match_table);

static struct platform_driver ms_uart_platform_driver = {
    .remove = ms_uart_remove,
    .probe = ms_uart_probe,
#ifdef CONFIG_PM
    .suspend = ms_uart_suspend,
    .resume = ms_uart_resume,
#endif
    .driver = {
        .name = "ms_uart",
        .owner = THIS_MODULE,
        .of_match_table = of_match_ptr(ms_uart_of_match_table),
    },
};

static s32 __init ms_uart_module_init(void)
{
    int ret;

    ret = uart_register_driver(&ms_uart_driver);
    if (ret != 0)
        return ret;
    ret = platform_driver_register(&ms_uart_platform_driver);
    if (ret != 0)
    {
        UART_ERR("[ms_uart]platform_driver_register failed!!\n");
        uart_unregister_driver(&ms_uart_driver);
    }
    return ret;
}


static void __exit ms_uart_module_exit(void)
{
    platform_driver_unregister(&ms_uart_platform_driver);
    uart_unregister_driver(&ms_uart_driver);
}

module_init(ms_uart_module_init);
module_exit(ms_uart_module_exit);


static int __init ms_early_console_init(void)
{
    struct device_node *console_np;
    struct resource res;


    console_np=of_find_node_by_path("console");
    if(!console_np)
        return -ENODEV;


    BUG_ON( of_address_to_resource(console_np,0,&res) );

    console_port.port.membase = (void *)res.start;

    console_port.port.type = PORT_8250;

    console_port.port.ops=&ms_uart_ops;
    console_port.port.regshift = 0;
    console_port.port.fifosize = 16;
    console_port.port.line=0;
    console_port.port.cons=&ms_uart_console;

    ms_uart_add_console_port(&console_port);
    register_console(&ms_uart_console);


    return 0;
}

console_initcall(ms_early_console_init);

void URDMA_Reset(struct uart_port *p)
{
    unsigned int i=0;
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    mp->urdma->reg_base->urdma_mode=1;

    mp->urdma->reg_base->tx_urdma_en = 0;
    mp->urdma->reg_base->rx_urdma_en = 0;

    mp->urdma->reg_base->tx_intr_en = 0;
    mp->urdma->reg_base->rx_intr1_en = 0;
    mp->urdma->reg_base->rx_intr2_en = 0;

    /* clear interrupt status */
    mp->urdma->reg_base->tx_intr_clr = 1;
    mp->urdma->reg_base->rx_intr_clr = 1;


    /* software reset */
    mp->urdma->reg_base->sw_rst = 1;

    /* make sure rx_busy is off */
    for(i=0; (mp->urdma->reg_base->rx_busy || mp->urdma->reg_base->tx_busy); i++)
    {
        if(0xFFFF == i)
        {
            break;
        }
    }

    mdelay(10);

    mp->urdma->reg_base->sw_rst = 0;

    mp->urdma->reg_base->urdma_mode=0;
}

void URDMA_Activate(struct uart_port *p,BOOL bEnable)
{
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    mp->urdma->reg_base->urdma_mode=bEnable?TRUE:FALSE;
    UART_DBG("URDMA_Activate: %d\n", bEnable);

}

void URDMA_TxEnable(struct uart_port *p,BOOL bEnable)
{
    unsigned int i=0;
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    if(bEnable)
    {
        mp->urdma->reg_base->tx_urdma_en = 1;
    }
    else
    {
        mp->urdma->reg_base->tx_urdma_en = 0;
        for(i=0; (mp->urdma->reg_base->tx_busy); i++)
        {
            if(0xFFFF == i)
            {
                return;
            }
        }
    }
}

void URDMA_RxEnable(struct uart_port *p,BOOL bEnable)
{
    unsigned int i=0;
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    if(bEnable)
    {
        mp->urdma->reg_base->rx_urdma_en = 1;
    }
    else
    {
        mp->urdma->reg_base->rx_urdma_en = 0;
        for(i=0; (mp->urdma->reg_base->rx_busy); i++)
        {
            if(0xFFFF == i)
            {
                return;
            }
        }
    }
}

U8 URDMA_GetInterruptStatus(struct uart_port *p)
{
    U8 stat=0;
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    if(mp->urdma->reg_base->rx_mcu_intr)
    {
        stat|=URDMA_INTR_STATUS_RX;
    }

    if(mp->urdma->reg_base->tx_mcu_intr)
    {
        stat|=URDMA_INTR_STATUS_TX;
    }

    return stat;
}

void URDMA_TxInit(struct uart_port *p)
{
    unsigned int i=0;
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    mp->urdma->reg_base->tx_urdma_en = 0; /* disable dma */
    mp->urdma->reg_base->tx_sw_rst = 1;
    for(i=0; (mp->urdma->reg_base->tx_busy); i++)
    {
        if(0xFFFF == i)
        {
            return;
        }
    }

    mp->urdma->reg_base->tx_sw_rst = 0;
    mp->urdma->reg_base->tx_buf_base_h = URDMA_HIU16((U32)mp->urdma->tx_urdma_base);
    mp->urdma->reg_base->tx_buf_base_l = URDMA_LOU16((U32)mp->urdma->tx_urdma_base);
    mp->urdma->reg_base->tx_buf_size = (mp->urdma->tx_urdma_size/8);
    mp->urdma->reg_base->tx_timeout = URDMA_TX_TIMEOUT;
    mp->urdma->reg_base->tx_buf_wptr = 0x0;

    //2015.10.21 Refine: initialize tx_buf_wptr to 1 because HW behavior is not correct from 0 to 1
    //2016.11.27 Refine: remove initial value for tx_buf_wptr
    //mp->urdma->reg_base->tx_buf_wptr = 0x1;
}

void URDMA_RxInit(struct uart_port *p)
{
    unsigned int i=0;
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    mp->urdma->reg_base->rx_urdma_en = 0; /* disable dma */
    mp->urdma->reg_base->rx_sw_rst = 1;
    for(i=0; (mp->urdma->reg_base->rx_busy); i++)
    {
        if(0xFFFF == i)
        {
            return;
        }
    }

    mp->urdma->reg_base->rx_sw_rst=0;
    mp->urdma->reg_base->rx_buf_base_h = URDMA_HIU16((U32)mp->urdma->rx_urdma_base);
    mp->urdma->reg_base->rx_buf_base_l = URDMA_LOU16((U32)mp->urdma->rx_urdma_base);
    mp->urdma->reg_base->rx_buf_size = (mp->urdma->rx_urdma_size/8);
    mp->urdma->reg_base->intr_threshold = URDMA_RX_INTR_LEVEL;
    mp->urdma->reg_base->rx_timeout = URDMA_RX_TIMEOUT; /* receive timeout. */

    //need to clear buffer?
    //memset(dma_rx_buf[fuartNum].Buffer,0,dma_rx_buf[fuartNum].Length);

    //2016.11.27 Refine: sw_rx_rptr is the index of rx_buf we have read
    //Give initial value (size-1) according to HW behavior
    mp->urdma->sw_rx_rptr = mp->urdma->rx_urdma_size - 1;
}

void URDMA_TxSetupTimeoutInterrupt(struct uart_port *p,BOOL bEnable)
{
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    mp->urdma->reg_base->tx_intr_en = bEnable?1:0;
}

void URDMA_TxClearInterrupt(struct uart_port *p)
{
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    mp->urdma->reg_base->tx_intr_clr = 1; /* clear int status */
}

void URDMA_RxSetupTimeoutInterrupt(struct uart_port *p,BOOL bEnableTimeout)
{
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    mp->urdma->reg_base->rx_intr1_en=bEnableTimeout?1:0;
}

void URDMA_RxSetupThresholdInterrupt(struct uart_port *p,BOOL bEnableThreshold)
{
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    mp->urdma->reg_base->rx_intr2_en=bEnableThreshold?1:0;
}

U8 URDMA_RxGetInterrupt(struct uart_port *p)
{
    U8 intr=0;
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    if(mp->urdma->reg_base->rx_intr1)
    {
        intr |= URDMA_RX_INTR_TYPE_TIMEOUT;
    }

    if(mp->urdma->reg_base->rx_intr2)
    {
        intr |= URDMA_RX_INTR_TYPE_THRESHOLD;
    }

    return intr;
}

void URDMA_RxClearInterrupt(struct uart_port *p)
{
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    mp->urdma->reg_base->rx_intr_clr = 1; /* clear int status */
}

U32 URDMA_GetWritableSize(struct uart_port *p)
{
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;

    return (U32)((mp->urdma->reg_base->tx_buf_rptr - mp->urdma->reg_base->tx_buf_wptr - 1) & (mp->urdma->rx_urdma_size - 1));
}

void URDMA_StartTx(struct uart_port *p)
{
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;
    struct circ_buf *xmit = &p->state->xmit;
    U16 circ_buf_out_size = CIRC_CNT_TO_END(xmit->head, xmit->tail, UART_XMIT_SIZE);
    U16 tx_buf_space, tx_end;

    /* tx_buf_wptr point to the byte have been written to buffer */
    /* tx_buf_rptr point to the byte have been sent */
    /* if tx_buf_rptr meets tx_buf_wptr, it means all written bytes in buffer have been sent */
    /* In this case, the space equal to buffer size */

    U16 sw_tx_wptr = mp->urdma->reg_base->tx_buf_wptr;
    U16 sw_tx_rptr = mp->urdma->reg_base->tx_buf_rptr;

    if(sw_tx_wptr == (mp->urdma->tx_urdma_size-1))  //wptr meet the end of buffer, start from (0), end at (rptr)
    {
        sw_tx_wptr = 0;
        tx_buf_space = sw_tx_rptr;
    }
    else if(sw_tx_wptr >= sw_tx_rptr)  //start from (wptr+1), end at (buffer_size-1)
    {
        sw_tx_wptr+=1;
        tx_buf_space = mp->urdma->tx_urdma_size - sw_tx_wptr;
    }
    else  //start from (wptr+1), end at (rptr)
    {
        sw_tx_wptr+=1;
        tx_buf_space = sw_tx_rptr - sw_tx_wptr;
    }

    //pr_debug("sw_wp=%4x, sw_rp=%4x, tx_space=%4x, circ_buf_out_size=%4x, head=%4x, tail=%4x\n", sw_tx_wptr, sw_tx_rptr, tx_space, circ_buf_out_size, xmit->head, xmit->tail);

    if(circ_buf_out_size > tx_buf_space)  //tx_cnt > tx_space
    {
        memcpy((void *)(&mp->urdma->tx_buf[sw_tx_wptr]), &xmit->buf[xmit->tail], tx_buf_space);
        p->icount.tx += tx_buf_space;
        xmit->tail += tx_buf_space;
        circ_buf_out_size -= tx_buf_space;

        //now we can start write from (0), end at (min[sw_tx_rptr,circ_buf_out_size])
        tx_end = circ_buf_out_size >= sw_tx_rptr ? sw_tx_rptr : circ_buf_out_size;
        memcpy((void *)(&mp->urdma->tx_buf[0]), &xmit->buf[xmit->tail], tx_end);

        Chip_Flush_MIU_Pipe();

        p->icount.tx += tx_end;
        xmit->tail = (xmit->tail + tx_end) & (UART_XMIT_SIZE - 1);
        mp->urdma->reg_base->tx_buf_wptr = tx_end;
    }
    else  //tx_cnt <= tx_space
    {
        memcpy((void *)(&mp->urdma->tx_buf[sw_tx_wptr]),&xmit->buf[xmit->tail], circ_buf_out_size);

        Chip_Flush_MIU_Pipe();

        p->icount.tx += circ_buf_out_size;
        xmit->tail = (xmit->tail + circ_buf_out_size) & (UART_XMIT_SIZE - 1);
        mp->urdma->reg_base->tx_buf_wptr += circ_buf_out_size;
    }

    if (uart_circ_chars_pending(xmit) < WAKEUP_CHARS)
        uart_write_wakeup(p);

    if (uart_circ_empty(xmit) || uart_tx_stopped(p))
    {
        ms_uart_stop_tx(p);
    }
    return;
}

void URDMA_StartRx(struct uart_port *p)
{
    struct ms_uart_port *mp=(struct ms_uart_port*)p->dev->driver_data;
    U16 sw_rx_wptr = mp->urdma->reg_base->rx_buf_wptr;
    U16 sw_rx_rptr = mp->urdma->sw_rx_rptr;
    U16 in_size = (sw_rx_wptr - sw_rx_rptr) & (mp->urdma->rx_urdma_size - 1);  //read from (sw_rx_rptr+1), end at (sw_rx_wptr)
    U16 rptr_to_end = mp->urdma->rx_urdma_size - sw_rx_rptr - 1;

    /* sw_rx_wptr point to the byte already read from UART */
    /* sw_rx_rptr point to the byte have been read */
    /* if sw_rx_rptr equal to sw_rx_wptr, it means all bytes in buffer have been read */

    if(sw_rx_rptr==mp->urdma->rx_urdma_size - 1)  //initial case
    {
        tty_insert_flip_string(&p->state->port, &mp->urdma->rx_buf[0], in_size - rptr_to_end);
        p->icount.rx += in_size - rptr_to_end;
        //update global sw_rx_rptr
        mp->urdma->sw_rx_rptr = in_size - rptr_to_end -1;
        tty_flip_buffer_push(&p->state->port);
        pr_debug("(0) sw_rx_rptr=0x%4x, in_size=0x%4x\n", mp->urdma->sw_rx_rptr, in_size);
    }
    else if(in_size > rptr_to_end)
    {
        tty_insert_flip_string(&p->state->port, &mp->urdma->rx_buf[sw_rx_rptr+1], rptr_to_end);
        tty_insert_flip_string(&p->state->port, &mp->urdma->rx_buf[0], in_size - rptr_to_end);
        p->icount.rx += in_size;
        //update global sw_rx_rptr
        mp->urdma->sw_rx_rptr = (in_size - rptr_to_end - 1);
        tty_flip_buffer_push(&p->state->port);
        pr_debug("(1) sw_rx_rptr=0x%4x, in_size=0x%4x\n", mp->urdma->sw_rx_rptr, in_size);
    }
    else
    {
        tty_insert_flip_string(&p->state->port, &mp->urdma->rx_buf[(sw_rx_rptr+1)&(mp->urdma->rx_urdma_size-1)], in_size);
        p->icount.rx += in_size;
        //update global sw_rx_rptr
        mp->urdma->sw_rx_rptr += in_size & (mp->urdma->rx_urdma_size - 1);  //avoid sw_rx_rptr overflow
        tty_flip_buffer_push(&p->state->port);
        pr_debug("(2) sw_rx_rptr=0x%4x, in_size=0x%4x\n", mp->urdma->sw_rx_rptr, in_size);
    }
    return;
}


