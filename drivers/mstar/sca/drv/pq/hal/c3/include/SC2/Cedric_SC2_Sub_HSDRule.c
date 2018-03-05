
code U8 MST_HSDRule_IP_Index_SC2_Sub[PQ_HSDRule_IP_NUM_SC2_Sub]=
{
    PQ_IP_HSD_Y_SC2_Sub,
    PQ_IP_HSD_C_SC2_Sub,
};


code U8 MST_HSDRule_Array_SC2_Sub[PQ_HSDRule_NUM_SC2_Sub][PQ_HSDRule_IP_NUM_SC2_Sub]=
{
    {//PreV_ScalingDown_Interlace, 0
        PQ_IP_NULL, PQ_IP_NULL, 
    },
    {//PreV_ScalingDown_Progressive, 1
        PQ_IP_NULL, PQ_IP_NULL, 
    },
    {//ScalingDown_00x_YUV, 2
        PQ_IP_HSD_Y_CB_SC2_Sub, PQ_IP_HSD_C_CB_SC2_Sub, 
    },
    {//ScalingDown_00x_RGB, 3
        PQ_IP_HSD_Y_CB_SC2_Sub, PQ_IP_HSD_C_CB_SC2_Sub, 
    },
    {//ScalingDown_01x_YUV, 4
        PQ_IP_HSD_Y_CB_SC2_Sub, PQ_IP_HSD_C_CB_SC2_Sub, 
    },
    {//ScalingDown_01x_RGB, 5
        PQ_IP_HSD_Y_CB_SC2_Sub, PQ_IP_HSD_C_CB_SC2_Sub, 
    },
    {//ScalingDown_02x_YUV, 6
        PQ_IP_HSD_Y_CB_SC2_Sub, PQ_IP_HSD_C_CB_SC2_Sub, 
    },
    {//ScalingDown_02x_RGB, 7
        PQ_IP_HSD_Y_CB_SC2_Sub, PQ_IP_HSD_C_CB_SC2_Sub, 
    },
    {//ScalingDown_03x_YUV, 8
        PQ_IP_HSD_Y_CB_SC2_Sub, PQ_IP_HSD_C_CB_SC2_Sub, 
    },
    {//ScalingDown_03x_RGB, 9
        PQ_IP_HSD_Y_CB_SC2_Sub, PQ_IP_HSD_C_CB_SC2_Sub, 
    },
    {//ScalingDown_04x_YUV, 10
        PQ_IP_HSD_Y_LPF40Ap0As40_SC2_Sub, PQ_IP_HSD_C_HSDC_A_SC2_Sub, 
    },
    {//ScalingDown_04x_RGB, 11
        PQ_IP_HSD_Y_CB_SC2_Sub, PQ_IP_HSD_C_CB_SC2_Sub, 
    },
    {//ScalingDown_05x_YUV, 12
        PQ_IP_HSD_Y_LPF50Ap0As40_SC2_Sub, PQ_IP_HSD_C_HSDC_A_SC2_Sub, 
    },
    {//ScalingDown_05x_RGB, 13
        PQ_IP_HSD_Y_CB_SC2_Sub, PQ_IP_HSD_C_CB_SC2_Sub, 
    },
    {//ScalingDown_06x_YUV, 14
        PQ_IP_HSD_Y_LPF60Ap0As35_SC2_Sub, PQ_IP_HSD_C_HSDC_A_SC2_Sub, 
    },
    {//ScalingDown_06x_RGB, 15
        PQ_IP_HSD_Y_CB_SC2_Sub, PQ_IP_HSD_C_CB_SC2_Sub, 
    },
    {//ScalingDown_07x_YUV, 16
        PQ_IP_HSD_Y_LPF70Ap0As35_SC2_Sub, PQ_IP_HSD_C_HSDC_A_SC2_Sub, 
    },
    {//ScalingDown_07x_RGB, 17
        PQ_IP_HSD_Y_CB_SC2_Sub, PQ_IP_HSD_C_CB_SC2_Sub, 
    },
    {//ScalingDown_08x_YUV, 18
        PQ_IP_HSD_Y_LPF80Ap0As35_SC2_Sub, PQ_IP_HSD_C_HSDC_A_SC2_Sub, 
    },
    {//ScalingDown_08x_RGB, 19
        PQ_IP_HSD_Y_CB_SC2_Sub, PQ_IP_HSD_C_CB_SC2_Sub, 
    },
    {//ScalingDown_09x_YUV, 20
        PQ_IP_HSD_Y_LPF90Ap0As35_SC2_Sub, PQ_IP_HSD_C_HSDC_A_SC2_Sub, 
    },
    {//ScalingDown_09x_RGB, 21
        PQ_IP_HSD_Y_CB_SC2_Sub, PQ_IP_HSD_C_CB_SC2_Sub, 
    },
    {//ScalingDown_10x_YUV, 22
        PQ_IP_NULL, PQ_IP_NULL, 
    },
    {//ScalingDown_10x_RGB, 23
        PQ_IP_NULL, PQ_IP_NULL, 
    },
};