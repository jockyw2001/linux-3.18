/***************************************************************************************************************
 *
 * FileName hal_card_intr.h
 *     @author jeremy.wang (2012/01/10)
 * Desc:
 *     This file is the header file of hal_card_intr.c.
 *
 ***************************************************************************************************************/

#ifndef __HAL_CARD_INTR_H
#define __HAL_CARD_INTR_H

#include "hal_sd_regs.h"

//***********************************************************************************************************
// Config Setting (Externel)
//***********************************************************************************************************

//###########################################################################################################
//#if (D_PROJECT == D_PROJECT__CB2)    //For Columbus2
//###########################################################################################################

//###########################################################################################################
//#elif (D_PROJECT == D_PROJECT__G2)   //For G2
//###########################################################################################################

#define WT_INT_RISKTIME     10      //(ms) Add Risk Time for wait_event_timer

//###########################################################################################################
//#endif


//***********************************************************************************************************
//***********************************************************************************************************


typedef enum
{
    EV_INT_SD       = BIT00_T,
    EV_INT_MS       = BIT01_T,
    EV_INT_CF       = BIT02_T,
    EV_INT_SM       = BIT03_T,
    EV_INT_XD       = BIT04_T,

} IntCardEmType;

typedef struct
{
    U32_T slotNo;
    IPEmType eIP;
    IntCardEmType eCardInt;
    void * p_data;

} IntSourceStruct;


void Hal_CARD_INT_MIEIntCtrl(IPEmType eIP, IntCardEmType eCardInt, BOOL_T bEnable);
BOOL_T Hal_CARD_INT_MIEIntRunning(IPEmType eIP, IntCardEmType eCardInt);

void Hal_CARD_INT_SetMIEIntEn(IPEmType eIP, IntCardEmType eCardInt, U16_T u16RegMIEIntEN);
void Hal_CARD_INT_SetMIEIntEn_ForSDIO(IPEmType eIP, IntCardEmType eCardInt, BOOL_T bEnable);
void Hal_CARD_INT_ClearMIEEvent(IPEmType eIP);
U16_T Hal_CARD_INT_GetMIEEvent(IPEmType eIP);

BOOL_T Hal_CARD_INT_WaitMIEEvent(IPEmType eIP, U16_T u16ReqEvent, U32_T u32WaitMs);
void Hal_CARD_INT_StopWaitMIEEventCtrl(IPEmType eIP, BOOL_T bEnable);

//###########################################################################################################
#if(D_OS == D_OS__LINUX)
//###########################################################################################################
#include <linux/interrupt.h>
#include <linux/sched.h>
#include <linux/wait.h>

irqreturn_t Hal_CARD_INT_MIE(int irq, void *p_dev_id);

#endif
//###########################################################################################################




#endif //End of __HAL_CARD_INTR_H
