////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2006-2017 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// (��MStar Confidential Information��) by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////


/**
* @file     mdrv_pnl.h
* @version
* @Platform I2
* @brief    This file defines the mstar drv PNL interface
*
*/

#ifndef __MDRV_PNL_H__
#define __MDRV_PNL_H__

#define PNL_DEBUG 0

#if (PNL_DEBUG==1)
#define MDRVPNLDBG(fmt, arg...) CamOsPrintf("[PNL] "fmt, ##arg)
#else
#define MDRVPNLDBG(fmt, arg...)
#endif

#define MDRVPNLPRINT(fmt, arg...) CamOsPrintf("[PNL] "fmt, ##arg)

#endif //__MDRV_PNL_H__

