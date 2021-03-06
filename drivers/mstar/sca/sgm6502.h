// $Change: 593163 $
//-------------------------------------------------------------------------------------------------
//Writer:Thomas.Tang
//Date:2012-06-07
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//  Driver Capability
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//  Type and Structure
//-------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------
//  Macro and Define
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//  Function and Variable
//-------------------------------------------------------------------------------------------------
#ifndef _SGM6502_H_
#define _SGM6502_H_
#include "mdrv_type.h"

#define CVBS_IN		0x01 	//input7
#define WINCE_IN	0x01	//input1

#define CVBS_OUT	0x04	//output1
BOOL SGM_Switch(U8 u8In, U8 u8Out);
#endif // _SGM6502_H_
