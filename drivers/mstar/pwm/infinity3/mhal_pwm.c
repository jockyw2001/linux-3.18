// $Change: 626442 $
//-----------------------------------------------------------------------------
//
// Copyright (c) 2008 MStar Semiconductor, Inc.  All rights reserved.
//
//-----------------------------------------------------------------------------
// FILE
//      pwm.c
//
// DESCRIPTION
//      PWM HW control codes.
//
// HISTORY
//      2008.05.15      Bryan Fan      Initial Version
//      2008.6.12       Bryan Fan      Revised for Code Review
//      2008.6.26       Bryan Fan      Revised for new Code Review
//
//-----------------------------------------------------------------------------

//------------------------------------------------------------------------------
//  Include Files
//------------------------------------------------------------------------------

#include "mhal_pwm.h"
#include "infinity3/gpio.h"

//------------------------------------------------------------------------------
//  Variables
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//  Local Functions
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//  External Functions
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//  Global Functions
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//
//  Function:   DrvPWMSetDuty
//
//  Description
//      Set Duty value
//
//  Parameters
//      u8Id:    [in] PWM ID
//      u16Val:  [in] Duty value
//
//  Return Value
//      None
//
void DrvPWMSetDuty(struct mstar_pwm_chip *ms_chip, U8 u8Id, U32 u32Val)
{
    U32 u32Period;
    U32 u32Duty;

    u32Period = INREG16(ms_chip->base + (u8Id*0x80) + u16REG_PWM_PERIOD_L) + ((INREG16(ms_chip->base + (u8Id*0x80) + u16REG_PWM_PERIOD_H)<<16) & 0xffff);
	
//	u32Period = INREG16((ms_chip->base + (u8Id*0x80) + u16REG_PWM_PERIOD_L)) + INREG16((ms_chip->base + (u8Id*0x80) + u16REG_PWM_PERIOD_H)) & 0xffff;
	u32Duty = ((u32Period * u32Val) / 100);

    pr_err("reg=0x%08X clk=%d, u32Duty=0x%x\n", (U32)(ms_chip->base + (u8Id*0x80) + u16REG_PWM_DUTY_L), (U32)(clk_get_rate(ms_chip->clk)), u32Duty);
    OUTREG16(ms_chip->base + (u8Id*0x80) + u16REG_PWM_DUTY_L, (u32Duty&0xFFFF));
    OUTREG16(ms_chip->base + (u8Id*0x80) + u16REG_PWM_DUTY_H, ((u32Duty>>16)&0x3));
}

//------------------------------------------------------------------------------
//
//  Function:   DrvPWMSetPeriod
//
//  Description
//      Set Period value
//
//  Parameters
//      u8Id:    [in] PWM ID
//      u16Val:  [in] Period value
//
//  Return Value
//      None
//
void DrvPWMSetPeriod(struct mstar_pwm_chip *ms_chip, U8 u8Id, U32 u32Val)
{
    U32 u32Period;

    u32Period=(U32)(clk_get_rate(ms_chip->clk))/u32Val;
    pr_err("reg=0x%08X clk=%d, period=0x%x\n", (U32)(ms_chip->base + (u8Id*0x80) + u16REG_PWM_PERIOD_L), (U32)(clk_get_rate(ms_chip->clk)), u32Period);

    OUTREG16(ms_chip->base + (u8Id*0x80) + u16REG_PWM_PERIOD_L, (u32Period&0xFFFF));
    OUTREG16(ms_chip->base + (u8Id*0x80) + u16REG_PWM_PERIOD_H, ((u32Period>>16)&0x3));
}

//------------------------------------------------------------------------------
//
//  Function:   DrvPWMSetPolarity
//
//  Description
//      Set Polarity value
//
//  Parameters
//      u8Id:   [in] PWM ID
//      u8Val:  [in] Polarity value
//
//  Return Value
//      None
//
void DrvPWMSetPolarity(struct mstar_pwm_chip *ms_chip, U8 u8Id, U8 u8Val)
{
    OUTREGMSK16(ms_chip->base + (u8Id*0x80) + u16REG_PWM_CTRL, (u8Val<<POLARITY_BIT), (0x1<<POLARITY_BIT));
}

#if 0
void DrvPWMSetFreqDiv( U8 u8Id, U8 u8Val )
{
    if( PWM0 == u8Id )
    {
        OUTREGMSK16( BASE_REG_PMSLEEP_PA + u16REG_PWM0_DIV, u8Val, PWM_CTRL_DIV_MSAK );
    }
    else if( PWM1 == u8Id )
    {
        OUTREGMSK16( BASE_REG_PMSLEEP_PA + u16REG_PWM1_DIV, u8Val, PWM_CTRL_DIV_MSAK );
    }
    else if( PWM2 == u8Id )
    {
        OUTREGMSK16( BASE_REG_PMSLEEP_PA + u16REG_PWM2_DIV, u8Val, PWM_CTRL_DIV_MSAK );
    }
    else if( PWM3 == u8Id )
    {
        OUTREGMSK16( BASE_REG_PMSLEEP_PA + u16REG_PWM3_DIV, u8Val, PWM_CTRL_DIV_MSAK );
    }
    else
    {
        printk(KERN_ERR "void DrvPWMSetDiv error!!!! (%x, %x)\r\n", u8Id, u8Val);
    }

}
#endif

//------------------------------------------------------------------------------
//
//  Function:   DrvPWMSetDben
//
//  Description
//      Enable/Disable Dben function
//
//  Parameters
//      u8Id:   [in] PWM ID
//      u8Val:  [in] On/Off value
//
//  Return Value
//      None
//

void DrvPWMSetDben(struct mstar_pwm_chip *ms_chip, U8 u8Id, U8 u8Val)
{
    OUTREGMSK16(ms_chip->base + (u8Id*0x80) + u16REG_PWM_CTRL, (u8Val<<DBEN_BIT), (0x1<<DBEN_BIT));
}
void DrvPWMEnable(struct mstar_pwm_chip *ms_chip, U8 u8Id, U8 u8Val)
{
    if(u8Val)
        CLRREG16(ms_chip->base + u16REG_SW_RESET, 1<<u8Id);
    else
        SETREG16(ms_chip->base + u16REG_SW_RESET, 1<<u8Id);
}

void DrvPWMPadSet(U8 u8Id, U8 u8Val)
{
    //reg_pwm0_mode [1:0]
    //reg_pwm1_mode [3:2]
    //reg_pwm2_mode [5:4]
    //reg_pwm3_mode [7:6]
    //reg_pwm4_mode [9:8]
    //reg_pwm5_mode [11:10]
    //reg_pwm6_mode [13:12]
    //reg_pwm7_mode [15:14]
    if( 0 == u8Id )
    {
        if(u8Val==PAD_PWM0){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT0, BIT1|BIT0);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT1|BIT0);
        }else if(u8Val==PAD_GPIO12){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT1, BIT1|BIT0);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT1|BIT0);
        }else if(u8Val==PAD_FUART_RX){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT1|BIT0, BIT1|BIT0);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT1|BIT0);
        }else if(u8Val==PAD_PM_GPIO0){
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, BIT0, BIT1|BIT0);
        }else if(u8Val==PAD_PM_GPIO6){
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, BIT1, BIT1|BIT0);
        }else{
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, 0x0, BIT1|BIT0);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT1|BIT0);
            if(u8Val!=PAD_UNKNOWN)
                printk("PWM pad set failed\n");
        }
    }
    else if( 1 == u8Id )
    {
        if(u8Val==PAD_PWM1){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT2, BIT3|BIT2);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT3|BIT2);
        }else if(u8Val==PAD_GPIO13){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT3, BIT3|BIT2);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT3|BIT2);
        }else if(u8Val==PAD_FUART_TX){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT3|BIT2, BIT3|BIT2);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT3|BIT2);
        }else if(u8Val==PAD_PM_GPIO1){
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, BIT2, BIT3|BIT2);
        }else if(u8Val==PAD_PM_GPIO5){
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, BIT3, BIT3|BIT2);
        }else{
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, 0x0, BIT3|BIT2);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT3|BIT2);
            if(u8Val!=PAD_UNKNOWN)
                printk("PWM pad set failed\n");
        }
    }
    else if( 2 == u8Id )
    {
        if(u8Val==PAD_GPIO14){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT4, BIT5|BIT4);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT7|BIT6);
        }else if(u8Val==PAD_FUART_CTS){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT5, BIT5|BIT4);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT7|BIT6);
        }else if(u8Val==PAD_NAND_DA2){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT5|BIT4, BIT5|BIT4);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT7|BIT6);
        }else if(u8Val==PAD_PM_GPIO2){
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, BIT6, BIT7|BIT6);
        }else if(u8Val==PAD_PM_GPIO9){
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, BIT7, BIT7|BIT6);
        }else{
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, 0x0, BIT5|BIT4);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT7|BIT6);
            if(u8Val!=PAD_UNKNOWN)
                printk("PWM pad set failed\n");

        }
    }
    else if( 3 == u8Id )
    {
        if(u8Val==PAD_GPIO15){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT6, BIT7|BIT6);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT9|BIT8);
        }else if(u8Val==PAD_FUART_RTS){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT7, BIT7|BIT6);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT9|BIT8);
        }else if(u8Val==PAD_NAND_DA3){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT7|BIT6, BIT7|BIT6);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT9|BIT8);
        }else if(u8Val==PAD_PM_GPIO3){
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, BIT8, BIT9|BIT8);
        }else if(u8Val==PAD_PM_GPIO10){
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, BIT9, BIT9|BIT8);
        }else{
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, 0x0, BIT7|BIT6);
            OUTREGMSK16(BASE_REG_PMSLEEP_PA + REG_ID_28, 0x0, BIT9|BIT8);
            if(u8Val!=PAD_UNKNOWN)
                printk("PWM pad set failed\n");
        }
    }
    else if( 4 == u8Id )
    {
        if(u8Val==PAD_NAND_DA4){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT8, BIT9|BIT8);
        }else if(u8Val==PAD_SPI0_CZ){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT9, BIT9|BIT8);
        }else{
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, 0x0, BIT9|BIT8);
            if(u8Val!=PAD_UNKNOWN)
                printk("PWM pad set failed\n");

        }
    }
    else if( 5 == u8Id )
    {
        if(u8Val==PAD_NAND_DA5){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT10, BIT11|BIT10);
        }else if(u8Val==PAD_SPI0_CK){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT11, BIT11|BIT10);
        }else{
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, 0x0, BIT11|BIT10);
            if(u8Val!=PAD_UNKNOWN)
                printk("PWM pad set failed\n");

        }
    }
    else if( 6 == u8Id )
    {
        if(u8Val==PAD_NAND_DA6){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT12, BIT13|BIT12);
        }else if(u8Val==PAD_SPI0_DI){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT13, BIT13|BIT12);
        }else{
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, 0x0, BIT13|BIT12);
            if(u8Val!=PAD_UNKNOWN)
                printk("PWM pad set failed\n");

        }
    }
    else if( 7 == u8Id )
    {
        if(u8Val==PAD_NAND_DA7){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT14, BIT15|BIT14);
        }else if(u8Val==PAD_SPI0_DO){
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, BIT15, BIT15|BIT14);
        }else{
            OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_07, 0x0, BIT15|BIT14);
            if(u8Val!=PAD_UNKNOWN)
                printk("PWM pad set failed\n");

        }
    }
    else
    {
        printk(KERN_ERR "void DrvPWMEnable error!!!! (%x, %x)\r\n", u8Id, u8Val);
    }

	if(PAD_SPI0_CK == u8Val || PAD_SPI0_DI == u8Val || PAD_SPI0_DO == u8Val || PAD_SPI0_CZ == u8Val)
	{
		printk("IO PAD conflict turn off jtag. Disable EJTAG!\n");
		OUTREGMSK16(BASE_REG_CHIPTOP_PA + REG_ID_0F, 0x0, BIT1|BIT0);//Disable EJtag
	}
}
