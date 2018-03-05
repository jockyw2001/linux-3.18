#include <cam_os_wrapper.h>
#include <drv_isrcb.h>
#include <linux/init.h>

#define _MAX_CALLBACKS_ 8

typedef struct
{
    void* pData;
    ISRCB_fp fpISRCB;
}CBInfo_t;

CBInfo_t g_CBInfo[eISRCB_ID_MAX][_MAX_CALLBACKS_];

int __init ISRCB_EarlyInit(void)
{
    int n;
    int nID;
    for(nID=0;nID<eISRCB_ID_MAX;++nID)
    {
        for(n=0;n<_MAX_CALLBACKS_;++n)
        {
            g_CBInfo[nID][n].fpISRCB = 0;
            g_CBInfo[nID][n].pData = 0;
        }
    }
    return 0;
}

ISRCB_Handle ISRCB_RegisterCallback(ISRCB_ID_e eID,ISRCB_fp fpCB,void* pData)
{
    int n=0;
    for(n=0;n<_MAX_CALLBACKS_;++n)
    {
        if(!g_CBInfo[eID][n].fpISRCB)
        {
            g_CBInfo[eID][n].pData = pData;
            g_CBInfo[eID][n].fpISRCB = fpCB;
            return &g_CBInfo[eID][n];
        }
    }
    return 0;
}

void ISRCB_UnRegisterCallback(ISRCB_Handle hHnd)
{
    CBInfo_t* pInfo = (CBInfo_t*)hHnd;
    pInfo->fpISRCB = 0;
    pInfo->pData = 0;
}

void ISRCB_Proc(ISRCB_ID_e eID)
{
    int n=0;
    for(n=0;n<_MAX_CALLBACKS_;++n)
    {
        if(g_CBInfo[eID][n].fpISRCB)
            g_CBInfo[eID][n].fpISRCB(g_CBInfo[eID][n].pData);
    }
}
