/***************************************************************************************************************
 *
 * FileName hal_sd_timer.h
 *     @author jeremy.wang (2017/02/26)
 * Desc:
 *     This file is the header file hal_sd_timer.c
 *
 ***************************************************************************************************************/


#ifndef __HAL_SD_TIMER_H
#define __HAL_SD_TIMER_H

#include "hal_sd_regs.h"


U32_T Hal_SD_TIMER_mDelay(U32_T u32_msec);
U32_T Hal_SD_TIMER_uDelay(U32_T u32_usec);


//###########################################################################################################
#if (D_OS == D_OS__LINUX)
//###########################################################################################################
U32_T Hal_SD_TIMER_mSleep(U32_T u32_msec);
//###########################################################################################################
#else
//###########################################################################################################
#define Hal_SD_TIMER_mSleep    Hal_SD_TIMER_mDelay
//###########################################################################################################
#endif


#endif //End of __HAL_SD_TIMER_H