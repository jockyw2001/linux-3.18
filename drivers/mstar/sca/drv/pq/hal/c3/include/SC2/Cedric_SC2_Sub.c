////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2008-2009 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// (; MStar; Confidential; Information; ) by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
//****************************************************
//   Quality Map CodeGen Version 4.0
// 1920
// Cedric
// 1/7/2013  8:51:35 PM
// 39630.43853
//****************************************************

#ifndef _CEDRIC_SC2_SUB_C_
#define _CEDRIC_SC2_SUB_C_

#if PQ_SKIPRULE_ENABLE

code U8 MST_SkipRule_IP_SC2_Sub[PQ_IP_NUM_SC2_Sub]=
{
    /* AFEC */ 0, /* Comb */ 0, /* Comb2 */ 0, /* SECAM */ 0, 
    /* VD_Sampling_no_comm */ 1, /* SCinit */ 0, /* CSC */ 1, /* CSC_Dither */ 0, 
    /* YCdelay */ 0, /* PreFilter */ 0, /* PreFilter_Dither */ 0, /* HDSDD */ 0, 
    /* HSD_Y */ 1, /* HSD_C */ 1, /* 444To422 */ 1, /* VSD */ 1, 
    /* HVSD_Dither */ 0, /* 10to8_Dither */ 0, /* MemFormat */ 1, /* PreSNR */ 0, 
    /* PreSNR_Patch */ 0, /* DNR */ 0, /* DNR_Motion */ 0, /* DNR_Y */ 0, 
    /* DNR_Y_COLOR_DEP */ 0, /* SRAM_COLOR_INDEX */ 0, /* SRAM_COLOR_GAIN_SNR */ 0, /* SRAM_COLOR_GAIN_DNR */ 0, 
    /* DNR_Y_LUMA_ADAPTIVE */ 0, /* DNR_POSTTUNE */ 0, /* DNR_C */ 0, /* HISDNR */ 0, 
    /* PNR */ 0, /* PNR_Y */ 0, /* PNR_C */ 0, /* PostCCS */ 0, 
    /* PostCCS_Smooth */ 0, /* 420CUP */ 1, /* MADi */ 1, /* MADi_Motion */ 0, 
    /* MADi_ADP3x3 */ 0, /* MADi_MORPHO */ 0, /* MADi_DFK */ 0, /* MADi_SST */ 0, 
    /* MADi_EODiW */ 0, /* MADi_Force */ 0, /* EODi */ 0, /* Film */ 0, 
    /* Film32 */ 0, /* Film22 */ 0, /* Film_any */ 0, /* DIPF */ 0, 
    /* VCLPF */ 0, /* Spike_NR */ 0, /* SPF */ 0, /* SPF_DBK */ 0, 
    /* SPF_DBK_BKN */ 0, /* SPF_DBK_MR */ 0, /* SPF_SNR */ 0, /* SPF_SNR_MR */ 0, 
    /* SPF_MR_LPF */ 0, /* SPF_NMR_Y */ 0, /* SPF_NMR_Y_MR */ 0, /* SPF_NMR_C */ 0, 
    /* DMS */ 0, /* DMS_H */ 0, /* DMS_V */ 0, /* DMS_V_12L */ 1, 
    /* VSP_Y */ 1, /* VSP_C */ 1, /* VSP_CoRing */ 0, /* VSP_DeRing */ 0, 
    /* VSP_Dither */ 0, /* VSP_PreVBound */ 1, /* 422To444 */ 1, /* PreCTI */ 0, 
    /* HSP_Y */ 1, /* HSP_C */ 1, /* HSP_CoRing */ 0, /* HSP_DeRing */ 0, 
    /* HSP_Dither */ 0, /* HnonLinear */ 1, /* SRAM1 */ 1, /* SRAM2 */ 1, 
    /* SRAM3 */ 0, /* SRAM4 */ 0, /* C_SRAM1 */ 0, /* C_SRAM2 */ 0, 
    /* C_SRAM3 */ 0, /* C_SRAM4 */ 0, /* VIP */ 0, /* VIP_pseudo */ 0, 
    /* VIP_CSC */ 1, /* VIP_CSC_dither */ 0, /* VIP_Post_YC_delay */ 0, /* VIP_HNMR_Y */ 0, 
    /* VIP_HNMR_C */ 0, /* VIP_HNMR_ad_C */ 0, /* VIP_HNMR_ad_C_gain */ 0, /* VIP_HNMR_C_win1 */ 0, 
    /* VIP_HNMR_C_win2 */ 0, /* VIP_Pre_Yoffset */ 0, /* VIP_Pre_Ygain */ 0, /* VIP_Pre_Ygain_dither */ 0, 
    /* VIP_HLPF */ 0, /* VIP_HLPF_dither */ 0, /* VIP_VNMR */ 0, /* VIP_VNMR_dither */ 0, 
    /* VIP_VLPF_coef1 */ 0, /* VIP_VLPF_coef2 */ 0, /* VIP_VLPF_dither */ 0, /* VIP_EE */ 0, 
    /* VIP_Peaking */ 0, /* VIP_Peaking_band */ 0, /* VIP_Peaking_dering */ 0, /* VIP_Peaking_Pcoring */ 0, 
    /* VIP_Peaking_gain */ 0, /* VIP_Peaking_gain_ad_C */ 0, /* VIP_Peaking_gain_ad_Y */ 0, /* VIP_Post_SNR */ 0, 
    /* VIP_Post_CTI */ 0, /* VIP_Post_CTI_coef */ 0, /* VIP_Post_CTI_gray */ 0, /* VIP_FCC_full_range */ 0, 
    /* VIP_FCC_T1 */ 0, /* VIP_FCC_T2 */ 0, /* VIP_FCC_T3 */ 0, /* VIP_FCC_T4 */ 0, 
    /* VIP_FCC_T5 */ 0, /* VIP_FCC_T6 */ 0, /* VIP_FCC_T7 */ 0, /* VIP_FCC_T8 */ 0, 
    /* VIP_FCC_T9 */ 0, /* VIP_IHC */ 0, /* VIP_IHC_Ymode */ 0, /* VIP_IHC_dither */ 0, 
    /* VIP_IHC_CRD_SRAM */ 0, /* VIP_IHC_SETTING */ 0, /* VIP_ICC */ 0, /* VIP_ICC_Ymode */ 0, 
    /* VIP_ICC_dither */ 0, /* VIP_ICC_CRD_SRAM */ 0, /* VIP_ICC_SETTING */ 0, /* VIP_Ymode_Yvalue_ALL */ 0, 
    /* VIP_Ymode_Yvalue_SETTING */ 0, /* VIP_IBC */ 0, /* VIP_IBC_dither */ 0, /* VIP_IBC_SETTING */ 0, 
    /* VIP_DLC */ 0, /* VIP_DLC_dither */ 0, /* VIP_DLC_His_range */ 1, /* VIP_DLC_His_rangeH */ 1, 
    /* VIP_DLC_His_rangeV */ 1, /* VIP_DLC_PC */ 0, /* VIP_BLE */ 0, /* VIP_WLE */ 0, 
    /* VIP_BWLE_dither */ 0, /* VIP_UVC */ 0, /* VIP_Post_Yoffset */ 0, /* VIP_Post_Ygain */ 0, 
    /* VIP_Post_Yoffset_2 */ 0, /* VIP_Post_Cgain */ 0, /* VIP_Post_Cgain_by_Y */ 0, /* VIP_Hcoring_Y */ 0, 
    /* VIP_Hcoring_C */ 0, /* VIP_Hcoring_dither */ 0, /* VIP_YCbCr_Clip */ 0, /* SwDriver */ 0, 
    /* 3x3 */ 1, /* RGB_Offset */ 0, /* RGB_Clip */ 0, /* xvYCC_bypass */ 0, 
    /* xvYCC_de_gamma */ 0, /* xvYCC_de_gamma_dither */ 0, /* xvYCC_3x3 */ 0, /* xvYCC_Comp */ 0, 
    /* xvYCC_Comp_dither */ 0, /* xvYCC_Clip */ 0, /* xvYCC_gamma */ 0, /* xvYCC_gamma_dither */ 0, 
    /* rgb_3d */ 0, /* HBC */ 0, /* Pre_CON_BRI */ 0, /* Blue_Stretch */ 0, 
    /* Blue_Stretch_dither */ 0, /* Gamma */ 0, /* Gamma_dither */ 0, /* Post_CON_BRI */ 0, 
    /* SRAM_3x3matrix_PIC2 */ 0, /* SRAM_DLC_PIC1 */ 0, /* SRAM_Bri_Con_Hue_Sat_Sha_PIC1 */ 0, /* SRAM_GammaTbl_R_PIC1 */ 0, 
    /* SRAM_GammaTbl_G_PIC1 */ 0, /* SRAM_GammaTbl_B_PIC1 */ 0, /* SRAM_Auto_Color_PIC2 */ 0, /* SRAM_Color_Temp_PIC1 */ 0, 
};

#endif
//****************************************************
// AFEC
//****************************************************
code U8 MST_AFEC_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_BK35_20_L), 0x30, 0x00 },
 { PQ_MAP_REG(REG_BK35_2E_L), 0xC0, 0xC0 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_AFEC_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_AFEC_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_BK35_21_H), 0x60, 0x00/*ADCIN*/, 
                              0x60/*RFIN*/, 
                              0x00/*ADCIN_SECAM*/, },
 { PQ_MAP_REG(REG_BK35_22_L), 0xFF, 0x78/*ADCIN*/, 
                              0x90/*RFIN*/, 
                              0x50/*ADCIN_SECAM*/, },
 { PQ_MAP_REG(REG_BK35_1F_H), 0x0F, 0xCE/*ADCIN*/, 
                              0x00/*RFIN*/, 
                              0xCF/*ADCIN_SECAM*/, },
 { PQ_MAP_REG(REG_BK35_2A_H), 0x01, 0x00/*ADCIN*/, 
                              0x00/*RFIN*/, 
                              0x01/*ADCIN_SECAM*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// Comb
//****************************************************
code U8 MST_Comb_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_COMB_BK00_28_L), 0xF8, 0x00 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_38_L), 0xFB, 0xD8 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_15_L), 0x7F, 0x04 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_16_H), 0xF7, 0xC0 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_26_L), 0xBF, 0x80 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_40_L), 0xFF, 0xC8 },
 { PQ_MAP_REG(REG_COMB_BK00_40_H), 0xFF, 0x96 },
 { PQ_MAP_REG(REG_COMB_BK00_41_L), 0xFF, 0x6A },
 { PQ_MAP_REG(REG_COMB_BK00_46_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_COMB_BK00_47_L), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_COMB_BK00_3C_L), 0xFF, 0xB0 },
 { PQ_MAP_REG(REG_COMB_BK00_0E_L), 0xEF, 0xEC },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_2B_H), 0xFF, 0x50 },
 { PQ_MAP_REG(REG_COMB_BK00_2C_L), 0xFF, 0x20 },
 { PQ_MAP_REG(REG_COMB_BK00_09_H), 0xF3, 0x02 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_0B_H), 0xFF, 0xBE },
 { PQ_MAP_REG(REG_COMB_BK00_22_L), 0xFF, 0x88 },
 { PQ_MAP_REG(REG_COMB_BK00_27_L), 0x3F, 0x2C },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_7F_L), 0x03, 0x03 },
 { PQ_MAP_REG(REG_COMB_BK00_2C_H), 0xFF, 0x08 },
 { PQ_MAP_REG(REG_COMB_BK00_2D_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_COMB_BK00_2D_H), 0xFF, 0x10 },
 { PQ_MAP_REG(REG_COMB_BK00_2E_L), 0xFF, 0x08 },
 { PQ_MAP_REG(REG_COMB_BK00_2E_H), 0xFF, 0xFF },
 { PQ_MAP_REG(REG_COMB_BK00_2F_L), 0xFF, 0x14 },
 { PQ_MAP_REG(REG_COMB_BK00_0A_L), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_11_L), 0xFF, 0x83 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_12_L), 0xF2, 0x02 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_18_H), 0xFF, 0x25 },
 { PQ_MAP_REG(REG_COMB_BK00_19_L), 0xFF, 0x10 },
 { PQ_MAP_REG(REG_COMB_BK00_1A_L), 0xFF, 0x10 },
 { PQ_MAP_REG(REG_COMB_BK00_1C_L), 0xD8, 0x18 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_7C_L), 0xEF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_1A_H), 0xFF, 0x90 },
 { PQ_MAP_REG(REG_COMB_BK00_1B_L), 0xFF, 0x50 },
 { PQ_MAP_REG(REG_COMB_BK00_17_H), 0xFF, 0x28 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_16_L), 0xFF, 0x04 },
 { PQ_MAP_REG(REG_COMB_BK00_38_H), 0xFF, 0x87 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_3D_L), 0xFF, 0x0F },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_3D_H), 0xFF, 0x80 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_45_H), 0xFF, 0x0D },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_46_L), 0xFF, 0x06 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_47_H), 0xCF, 0xC3 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_4F_H), 0x7F, 0x06 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_1B_H), 0xFF, 0x88 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_1C_H), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_COMB_BK00_78_H), 0xBF, 0xA0 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_3F_L), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_3F_H), 0xFF, 0x1F },
 { PQ_MAP_REG(REG_COMB_BK00_50_L), 0xFF, 0x4B },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_56_H), 0x7F, 0x60 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_00_H), 0x01, 0x00 },
 { PQ_MAP_REG(REG_COMB_BK00_01_L), 0xFF, 0x04 },
 { PQ_MAP_REG(REG_COMB_BK00_4B_H), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_09_L), 0xFF, 0x11 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_10_L), 0x7F, 0x75 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_10_H), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_36_H), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_35_H), 0x7F, 0x12 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_37_L), 0xF0, 0x18 },
 { PQ_MAP_REG(REG_COMB_BK00_37_H), 0xFF, 0x17 },
 { PQ_MAP_REG(REG_COMB_BK00_03_L), 0xF0, 0x80 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_0C_L), 0x3F, 0x01 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_12_H), 0xFF, 0xA0 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_14_H), 0xC0, 0x00 },
 { PQ_MAP_REG(REG_COMB_BK00_49_H), 0x0F, 0x08 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_4C_L), 0xFF, 0x2A },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_4C_H), 0x07, 0x00 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_43_L), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_43_H), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_25_L), 0xF7, 0x56 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_5E_L), 0x31, 0x01 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_5E_H), 0xFF, 0x50 },
 { PQ_MAP_REG(REG_COMB_BK00_5F_L), 0xFF, 0x50 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_6D_L), 0xF7, 0x01 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_6E_L), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_6F_L), 0xFF, 0xE0 },
 { PQ_MAP_REG(REG_COMB_BK00_33_L), 0xFF, 0x90 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_30_L), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_20_L), 0xF7, 0x90 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_39_L), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_COMB_BK00_68_H), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_COMB_BK00_69_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_COMB_BK00_6C_H), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_COMB_BK00_4D_H), 0x7F, 0x10 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_60_L), 0xFF, 0xA0 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_61_H), 0x9F, 0x1F },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_48_L), 0x3F, 0x31 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_4A_L), 0xFF, 0x71 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_13_L), 0xFF, 0x24 },//Same mark
 { PQ_MAP_REG(REG_COMB_BK00_77_L), 0x80, 0x00 },
 { PQ_MAP_REG(REG_COMB_BK00_6F_H), 0x03, 0x02 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_Comb_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_Comb_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_COMB_BK00_4E_L), 0x7F, 0x03/*$NTSC_AV*/, 
                              0x03/*$PAL_AV*/, 
                              0x03/*$NTSC_RF*/, 
                              0x03/*$PAL_RF*/, 
                              0x03/*$PAL_RF_VIF*/, 
                              0x03/*$NTSC_SV*/, 
                              0x03/*$PAL_SV*/, 
                              0x03/*$NTSC443*/, 
                              0x03/*$NTSC443_SV*/, 
                              0x03/*$PAL_M*/, 
                              0x03/*$PAL60*/, 
                              0x03/*$SECAM*/, 
                              0x03/*$NTSC_AV_SONY*/, 
                              0x03/*$PAL_AV_SONY*/, 
                              0x03/*$NTSC_RF_SONY*/, 
                              0x03/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_2F_H), 0xFF, 0x88/*$NTSC_AV*/, 
                              0x88/*$PAL_AV*/, 
                              0x88/*$NTSC_RF*/, 
                              0x88/*$PAL_RF*/, 
                              0x88/*$PAL_RF_VIF*/, 
                              0x80/*$NTSC_SV*/, 
                              0x80/*$PAL_SV*/, 
                              0x80/*$NTSC443*/, 
                              0x80/*$NTSC443_SV*/, 
                              0x88/*$PAL_M*/, 
                              0x80/*$PAL60*/, 
                              0x80/*$SECAM*/, 
                              0x88/*$NTSC_AV_SONY*/, 
                              0x88/*$PAL_AV_SONY*/, 
                              0x88/*$NTSC_RF_SONY*/, 
                              0x88/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_2A_H), 0xFF, 0x04/*NTSC_AV*/, 
                              0x05/*PAL_AV*/, 
                              0x05/*NTSC_RF*/, 
                              0x06/*PAL_RF*/, 
                              0x07/*PAL_RF_VIF*/, 
                              0x04/*NTSC_SV*/, 
                              0x05/*PAL_SV*/, 
                              0x04/*NTSC443*/, 
                              0x04/*NTSC443_SV*/, 
                              0x05/*PAL_M*/, 
                              0x05/*PAL60*/, 
                              0x04/*SECAM*/, 
                              0x04/*NTSC_AV_SONY*/, 
                              0x05/*PAL_AV_SONY*/, 
                              0x05/*NTSC_RF_SONY*/, 
                              0x06/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_09_H), 0x0C, 0x00/*$NTSC_AV*/, 
                              0x00/*$PAL_AV*/, 
                              0x00/*$NTSC_RF*/, 
                              0x00/*$PAL_RF*/, 
                              0x00/*$PAL_RF_VIF*/, 
                              0x00/*$NTSC_SV*/, 
                              0x00/*$PAL_SV*/, 
                              0x00/*$NTSC443*/, 
                              0x00/*$NTSC443_SV*/, 
                              0x00/*$PAL_M*/, 
                              0x00/*$PAL60*/, 
                              0x00/*$SECAM*/, 
                              0x00/*$NTSC_AV_SONY*/, 
                              0x00/*$PAL_AV_SONY*/, 
                              0x00/*$NTSC_RF_SONY*/, 
                              0x00/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_29_L), 0xFF, 0x8E/*NTSC_AV*/, 
                              0x8E/*PAL_AV*/, 
                              0x8E/*NTSC_RF*/, 
                              0x6F/*PAL_RF*/, 
                              0x8E/*PAL_RF_VIF*/, 
                              0x6F/*NTSC_SV*/, 
                              0x6F/*PAL_SV*/, 
                              0x8E/*NTSC443*/, 
                              0x8E/*NTSC443_SV*/, 
                              0x6F/*PAL_M*/, 
                              0x8E/*PAL60*/, 
                              0x6F/*SECAM*/, 
                              0x6F/*NTSC_AV_SONY*/, 
                              0x6F/*PAL_AV_SONY*/, 
                              0x8E/*NTSC_RF_SONY*/, 
                              0x6F/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_29_H), 0x07, 0x03/*NTSC_AV*/, 
                              0x03/*PAL_AV*/, 
                              0x03/*NTSC_RF*/, 
                              0x04/*PAL_RF*/, 
                              0x03/*PAL_RF_VIF*/, 
                              0x04/*NTSC_SV*/, 
                              0x04/*PAL_SV*/, 
                              0x03/*NTSC443*/, 
                              0x03/*NTSC443_SV*/, 
                              0x04/*PAL_M*/, 
                              0x03/*PAL60*/, 
                              0x04/*SECAM*/, 
                              0x04/*NTSC_AV_SONY*/, 
                              0x04/*PAL_AV_SONY*/, 
                              0x03/*NTSC_RF_SONY*/, 
                              0x04/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_11_H), 0xFF, 0x21/*$NTSC_AV*/, 
                              0x23/*$PAL_AV*/, 
                              0x21/*$NTSC_RF*/, 
                              0x23/*$PAL_RF*/, 
                              0x23/*$PAL_RF_VIF*/, 
                              0x21/*$NTSC_SV*/, 
                              0x23/*$PAL_SV*/, 
                              0x23/*$NTSC443*/, 
                              0x23/*$NTSC443_SV*/, 
                              0x23/*$PAL_M*/, 
                              0x23/*$PAL60*/, 
                              0x21/*$SECAM*/, 
                              0x21/*$NTSC_AV_SONY*/, 
                              0x23/*$PAL_AV_SONY*/, 
                              0x21/*$NTSC_RF_SONY*/, 
                              0x23/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_18_L), 0xFF, 0xA2/*$NTSC_AV*/, 
                              0xB2/*$PAL_AV*/, 
                              0xA2/*$NTSC_RF*/, 
                              0xB2/*$PAL_RF*/, 
                              0xB2/*$PAL_RF_VIF*/, 
                              0xA2/*$NTSC_SV*/, 
                              0xB2/*$PAL_SV*/, 
                              0xB2/*$NTSC443*/, 
                              0xB2/*$NTSC443_SV*/, 
                              0xB2/*$PAL_M*/, 
                              0xB2/*$PAL60*/, 
                              0xB2/*$SECAM*/, 
                              0xA2/*$NTSC_AV_SONY*/, 
                              0xB2/*$PAL_AV_SONY*/, 
                              0xA2/*$NTSC_RF_SONY*/, 
                              0xB2/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_19_H), 0xFF, 0x30/*NTSC_AV*/, 
                              0x38/*PAL_AV*/, 
                              0x30/*NTSC_RF*/, 
                              0x30/*PAL_RF*/, 
                              0x30/*PAL_RF_VIF*/, 
                              0x30/*NTSC_SV*/, 
                              0x30/*PAL_SV*/, 
                              0x30/*NTSC443*/, 
                              0x30/*NTSC443_SV*/, 
                              0x30/*PAL_M*/, 
                              0x30/*PAL60*/, 
                              0x30/*SECAM*/, 
                              0x30/*NTSC_AV_SONY*/, 
                              0x30/*PAL_AV_SONY*/, 
                              0x30/*NTSC_RF_SONY*/, 
                              0x30/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_1C_L), 0x27, 0x00/*$NTSC_AV*/, 
                              0x20/*$PAL_AV*/, 
                              0x00/*$NTSC_RF*/, 
                              0x00/*$PAL_RF*/, 
                              0x00/*$PAL_RF_VIF*/, 
                              0x00/*$NTSC_SV*/, 
                              0x00/*$PAL_SV*/, 
                              0x00/*$NTSC443*/, 
                              0x00/*$NTSC443_SV*/, 
                              0x00/*$PAL_M*/, 
                              0x00/*$PAL60*/, 
                              0x00/*$SECAM*/, 
                              0x00/*$NTSC_AV_SONY*/, 
                              0x20/*$PAL_AV_SONY*/, 
                              0x00/*$NTSC_RF_SONY*/, 
                              0x00/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_1D_L), 0xFF, 0x20/*NTSC_AV*/, 
                              0x38/*PAL_AV*/, 
                              0x38/*NTSC_RF*/, 
                              0x38/*PAL_RF*/, 
                              0x38/*PAL_RF_VIF*/, 
                              0x18/*NTSC_SV*/, 
                              0x18/*PAL_SV*/, 
                              0x18/*NTSC443*/, 
                              0x18/*NTSC443_SV*/, 
                              0x38/*PAL_M*/, 
                              0x18/*PAL60*/, 
                              0x18/*SECAM*/, 
                              0x20/*NTSC_AV_SONY*/, 
                              0x50/*PAL_AV_SONY*/, 
                              0x38/*NTSC_RF_SONY*/, 
                              0x38/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_76_H), 0xAF, 0x80/*$NTSC_AV*/, 
                              0x80/*$PAL_AV*/, 
                              0x81/*$NTSC_RF*/, 
                              0x81/*$PAL_RF*/, 
                              0x81/*$PAL_RF_VIF*/, 
                              0x81/*$NTSC_SV*/, 
                              0x81/*$PAL_SV*/, 
                              0x81/*$NTSC443*/, 
                              0x81/*$NTSC443_SV*/, 
                              0x81/*$PAL_M*/, 
                              0x81/*$PAL60*/, 
                              0x81/*$SECAM*/, 
                              0x80/*$NTSC_AV_SONY*/, 
                              0x80/*$PAL_AV_SONY*/, 
                              0x81/*$NTSC_RF_SONY*/, 
                              0x81/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_1E_L), 0xFF, 0xF3/*$NTSC_AV*/, 
                              0x74/*$PAL_AV*/, 
                              0xF8/*$NTSC_RF*/, 
                              0x78/*$PAL_RF*/, 
                              0x78/*$PAL_RF_VIF*/, 
                              0xF8/*$NTSC_SV*/, 
                              0x78/*$PAL_SV*/, 
                              0xF8/*$NTSC443*/, 
                              0xF8/*$NTSC443_SV*/, 
                              0x78/*$PAL_M*/, 
                              0x78/*$PAL60*/, 
                              0x78/*$SECAM*/, 
                              0xF3/*$NTSC_AV_SONY*/, 
                              0x74/*$PAL_AV_SONY*/, 
                              0xF8/*$NTSC_RF_SONY*/, 
                              0x78/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_15_H), 0xFF, 0x20/*NTSC_AV*/, 
                              0xFF/*PAL_AV*/, 
                              0x20/*NTSC_RF*/, 
                              0x20/*PAL_RF*/, 
                              0x20/*PAL_RF_VIF*/, 
                              0x20/*NTSC_SV*/, 
                              0x20/*PAL_SV*/, 
                              0x20/*NTSC443*/, 
                              0x20/*NTSC443_SV*/, 
                              0x20/*PAL_M*/, 
                              0x20/*PAL60*/, 
                              0x20/*SECAM*/, 
                              0x20/*NTSC_AV_SONY*/, 
                              0xFF/*PAL_AV_SONY*/, 
                              0x20/*NTSC_RF_SONY*/, 
                              0x20/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_22_H), 0xBF, 0xB1/*$NTSC_AV*/, 
                              0xB1/*$PAL_AV*/, 
                              0x31/*$NTSC_RF*/, 
                              0x31/*$PAL_RF*/, 
                              0x31/*$PAL_RF_VIF*/, 
                              0x31/*$NTSC_SV*/, 
                              0xB1/*$PAL_SV*/, 
                              0x31/*$NTSC443*/, 
                              0x31/*$NTSC443_SV*/, 
                              0x31/*$PAL_M*/, 
                              0x31/*$PAL60*/, 
                              0x31/*$SECAM*/, 
                              0xB1/*$NTSC_AV_SONY*/, 
                              0xB1/*$PAL_AV_SONY*/, 
                              0x31/*$NTSC_RF_SONY*/, 
                              0x31/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_3E_L), 0xFF, 0x16/*$NTSC_AV*/, 
                              0x06/*$PAL_AV*/, 
                              0x16/*$NTSC_RF*/, 
                              0x16/*$PAL_RF*/, 
                              0x16/*$PAL_RF_VIF*/, 
                              0x16/*$NTSC_SV*/, 
                              0x16/*$PAL_SV*/, 
                              0x06/*$NTSC443*/, 
                              0x06/*$NTSC443_SV*/, 
                              0x16/*$PAL_M*/, 
                              0x06/*$PAL60*/, 
                              0x16/*$SECAM*/, 
                              0x16/*$NTSC_AV_SONY*/, 
                              0x06/*$PAL_AV_SONY*/, 
                              0x16/*$NTSC_RF_SONY*/, 
                              0x16/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_78_L), 0xFF, 0x20/*NTSC_AV*/, 
                              0x30/*PAL_AV*/, 
                              0x20/*NTSC_RF*/, 
                              0x30/*PAL_RF*/, 
                              0x30/*PAL_RF_VIF*/, 
                              0x20/*NTSC_SV*/, 
                              0x30/*PAL_SV*/, 
                              0x20/*NTSC443*/, 
                              0x20/*NTSC443_SV*/, 
                              0x30/*PAL_M*/, 
                              0x20/*PAL60*/, 
                              0x20/*SECAM*/, 
                              0x20/*NTSC_AV_SONY*/, 
                              0x30/*PAL_AV_SONY*/, 
                              0x20/*NTSC_RF_SONY*/, 
                              0x30/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_79_L), 0xFF, 0x50/*NTSC_AV*/, 
                              0x57/*PAL_AV*/, 
                              0x47/*NTSC_RF*/, 
                              0x47/*PAL_RF*/, 
                              0x47/*PAL_RF_VIF*/, 
                              0x47/*NTSC_SV*/, 
                              0x47/*PAL_SV*/, 
                              0x47/*NTSC443*/, 
                              0x47/*NTSC443_SV*/, 
                              0x47/*PAL_M*/, 
                              0x47/*PAL60*/, 
                              0x47/*SECAM*/, 
                              0x50/*NTSC_AV_SONY*/, 
                              0x57/*PAL_AV_SONY*/, 
                              0x47/*NTSC_RF_SONY*/, 
                              0x47/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_79_H), 0xEF, 0x03/*$NTSC_AV*/, 
                              0x43/*$PAL_AV*/, 
                              0x03/*$NTSC_RF*/, 
                              0x43/*$PAL_RF*/, 
                              0x43/*$PAL_RF_VIF*/, 
                              0x03/*$NTSC_SV*/, 
                              0x43/*$PAL_SV*/, 
                              0x43/*$NTSC443*/, 
                              0x43/*$NTSC443_SV*/, 
                              0x43/*$PAL_M*/, 
                              0x43/*$PAL60*/, 
                              0x03/*$SECAM*/, 
                              0x03/*$NTSC_AV_SONY*/, 
                              0x43/*$PAL_AV_SONY*/, 
                              0x03/*$NTSC_RF_SONY*/, 
                              0x43/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_7A_L), 0xFF, 0x17/*$NTSC_AV*/, 
                              0x17/*$PAL_AV*/, 
                              0x17/*$NTSC_RF*/, 
                              0x17/*$PAL_RF*/, 
                              0x17/*$PAL_RF_VIF*/, 
                              0x17/*$NTSC_SV*/, 
                              0x17/*$PAL_SV*/, 
                              0x14/*$NTSC443*/, 
                              0x14/*$NTSC443_SV*/, 
                              0x17/*$PAL_M*/, 
                              0x14/*$PAL60*/, 
                              0x17/*$SECAM*/, 
                              0x17/*$NTSC_AV_SONY*/, 
                              0x17/*$PAL_AV_SONY*/, 
                              0x17/*$NTSC_RF_SONY*/, 
                              0x17/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_36_L), 0x80, 0x00/*NTSC_AV*/, 
                              0x00/*PAL_AV*/, 
                              0x00/*NTSC_RF*/, 
                              0x00/*PAL_RF*/, 
                              0x00/*PAL_RF_VIF*/, 
                              0x00/*NTSC_SV*/, 
                              0x08/*PAL_SV*/, 
                              0x00/*NTSC443*/, 
                              0x00/*NTSC443_SV*/, 
                              0x00/*PAL_M*/, 
                              0x00/*PAL60*/, 
                              0x00/*SECAM*/, 
                              0x00/*NTSC_AV_SONY*/, 
                              0x00/*PAL_AV_SONY*/, 
                              0x00/*NTSC_RF_SONY*/, 
                              0x00/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_01_H), 0xFF, 0x18/*NTSC_AV*/, 
                              0x28/*PAL_AV*/, 
                              0x18/*NTSC_RF*/, 
                              0x28/*PAL_RF*/, 
                              0x28/*PAL_RF_VIF*/, 
                              0x18/*NTSC_SV*/, 
                              0x28/*PAL_SV*/, 
                              0x28/*NTSC443*/, 
                              0x28/*NTSC443_SV*/, 
                              0x28/*PAL_M*/, 
                              0x28/*PAL60*/, 
                              0x18/*SECAM*/, 
                              0x18/*NTSC_AV_SONY*/, 
                              0x28/*PAL_AV_SONY*/, 
                              0x18/*NTSC_RF_SONY*/, 
                              0x28/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_02_L), 0xFF, 0x0C/*$NTSC_AV*/, 
                              0x0E/*$PAL_AV*/, 
                              0x0C/*$NTSC_RF*/, 
                              0x0E/*$PAL_RF*/, 
                              0x0E/*$PAL_RF_VIF*/, 
                              0x0C/*$NTSC_SV*/, 
                              0x0E/*$PAL_SV*/, 
                              0x0E/*$NTSC443*/, 
                              0x0E/*$NTSC443_SV*/, 
                              0x0E/*$PAL_M*/, 
                              0x0E/*$PAL60*/, 
                              0x0C/*$SECAM*/, 
                              0x0C/*$NTSC_AV_SONY*/, 
                              0x0E/*$PAL_AV_SONY*/, 
                              0x0C/*$NTSC_RF_SONY*/, 
                              0x0E/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_08_L), 0x3F, 0x17/*$NTSC_AV*/, 
                              0x17/*$PAL_AV*/, 
                              0x17/*$NTSC_RF*/, 
                              0x17/*$PAL_RF*/, 
                              0x17/*$PAL_RF_VIF*/, 
                              0x17/*$NTSC_SV*/, 
                              0x17/*$PAL_SV*/, 
                              0x17/*$NTSC443*/, 
                              0x17/*$NTSC443_SV*/, 
                              0x17/*$PAL_M*/, 
                              0x17/*$PAL60*/, 
                              0x17/*$SECAM*/, 
                              0x17/*$NTSC_AV_SONY*/, 
                              0x17/*$PAL_AV_SONY*/, 
                              0x17/*$NTSC_RF_SONY*/, 
                              0x17/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_0D_H), 0xFF, 0x8B/*$NTSC_AV*/, 
                              0x9B/*$PAL_AV*/, 
                              0x9B/*$NTSC_RF*/, 
                              0x9B/*$PAL_RF*/, 
                              0x9B/*$PAL_RF_VIF*/, 
                              0x9B/*$NTSC_SV*/, 
                              0x9B/*$PAL_SV*/, 
                              0x9B/*$NTSC443*/, 
                              0x9B/*$NTSC443_SV*/, 
                              0x9B/*$PAL_M*/, 
                              0x9B/*$PAL60*/, 
                              0x9B/*$SECAM*/, 
                              0x8B/*$NTSC_AV_SONY*/, 
                              0x9B/*$PAL_AV_SONY*/, 
                              0x9B/*$NTSC_RF_SONY*/, 
                              0x9B/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_24_L), 0x30, 0x20/*NTSC_AV*/, 
                              0x20/*PAL_AV*/, 
                              0x20/*NTSC_RF*/, 
                              0x20/*PAL_RF*/, 
                              0x20/*PAL_RF_VIF*/, 
                              0x20/*NTSC_SV*/, 
                              0x30/*PAL_SV*/, 
                              0x20/*NTSC443*/, 
                              0x10/*NTSC443_SV*/, 
                              0x20/*PAL_M*/, 
                              0x20/*PAL60*/, 
                              0x20/*SECAM*/, 
                              0x20/*NTSC_AV_SONY*/, 
                              0x20/*PAL_AV_SONY*/, 
                              0x20/*NTSC_RF_SONY*/, 
                              0x20/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_17_L), 0xFF, 0x22/*NTSC_AV*/, 
                              0x04/*PAL_AV*/, 
                              0x22/*NTSC_RF*/, 
                              0x22/*PAL_RF*/, 
                              0x22/*PAL_RF_VIF*/, 
                              0x22/*NTSC_SV*/, 
                              0x22/*PAL_SV*/, 
                              0x22/*NTSC443*/, 
                              0x22/*NTSC443_SV*/, 
                              0x22/*PAL_M*/, 
                              0x22/*PAL60*/, 
                              0x22/*SECAM*/, 
                              0x22/*NTSC_AV_SONY*/, 
                              0x04/*PAL_AV_SONY*/, 
                              0x22/*NTSC_RF_SONY*/, 
                              0x22/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_4C_H), 0xF0, 0x00/*$NTSC_AV*/, 
                              0x00/*$PAL_AV*/, 
                              0x00/*$NTSC_RF*/, 
                              0x00/*$PAL_RF*/, 
                              0x00/*$PAL_RF_VIF*/, 
                              0x00/*$NTSC_SV*/, 
                              0x00/*$PAL_SV*/, 
                              0x80/*$NTSC443*/, 
                              0x80/*$NTSC443_SV*/, 
                              0x00/*$PAL_M*/, 
                              0x00/*$PAL60*/, 
                              0x00/*$SECAM*/, 
                              0x00/*$NTSC_AV_SONY*/, 
                              0x00/*$PAL_AV_SONY*/, 
                              0x00/*$NTSC_RF_SONY*/, 
                              0x00/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_4D_L), 0xFF, 0x43/*$NTSC_AV*/, 
                              0x33/*$PAL_AV*/, 
                              0x43/*$NTSC_RF*/, 
                              0x43/*$PAL_RF*/, 
                              0x43/*$PAL_RF_VIF*/, 
                              0x43/*$NTSC_SV*/, 
                              0x43/*$PAL_SV*/, 
                              0x43/*$NTSC443*/, 
                              0x43/*$NTSC443_SV*/, 
                              0x43/*$PAL_M*/, 
                              0x43/*$PAL60*/, 
                              0x43/*$SECAM*/, 
                              0x43/*$NTSC_AV_SONY*/, 
                              0x33/*$PAL_AV_SONY*/, 
                              0x43/*$NTSC_RF_SONY*/, 
                              0x43/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_4E_H), 0xDF, 0x00/*$NTSC_AV*/, 
                              0x00/*$PAL_AV*/, 
                              0x00/*$NTSC_RF*/, 
                              0x00/*$PAL_RF*/, 
                              0x00/*$PAL_RF_VIF*/, 
                              0x00/*$NTSC_SV*/, 
                              0x00/*$PAL_SV*/, 
                              0x02/*$NTSC443*/, 
                              0x02/*$NTSC443_SV*/, 
                              0x00/*$PAL_M*/, 
                              0x00/*$PAL60*/, 
                              0x00/*$SECAM*/, 
                              0x00/*$NTSC_AV_SONY*/, 
                              0x00/*$PAL_AV_SONY*/, 
                              0x00/*$NTSC_RF_SONY*/, 
                              0x00/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_41_H), 0xFF, 0x11/*$NTSC_AV*/, 
                              0x11/*$PAL_AV*/, 
                              0x11/*$NTSC_RF*/, 
                              0x11/*$PAL_RF*/, 
                              0x11/*$PAL_RF_VIF*/, 
                              0x10/*$NTSC_SV*/, 
                              0x10/*$PAL_SV*/, 
                              0xC0/*$NTSC443*/, 
                              0xC0/*$NTSC443_SV*/, 
                              0x11/*$PAL_M*/, 
                              0xC0/*$PAL60*/, 
                              0xC0/*$SECAM*/, 
                              0x11/*$NTSC_AV_SONY*/, 
                              0x11/*$PAL_AV_SONY*/, 
                              0x11/*$NTSC_RF_SONY*/, 
                              0x11/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_6D_H), 0x77, 0x32/*$NTSC_AV*/, 
                              0x36/*$PAL_AV*/, 
                              0x32/*$NTSC_RF*/, 
                              0x32/*$PAL_RF*/, 
                              0x32/*$PAL_RF_VIF*/, 
                              0x32/*$NTSC_SV*/, 
                              0x32/*$PAL_SV*/, 
                              0x32/*$NTSC443*/, 
                              0x32/*$NTSC443_SV*/, 
                              0x32/*$PAL_M*/, 
                              0x32/*$PAL60*/, 
                              0x32/*$SECAM*/, 
                              0x32/*$NTSC_AV_SONY*/, 
                              0x36/*$PAL_AV_SONY*/, 
                              0x32/*$NTSC_RF_SONY*/, 
                              0x32/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_6E_H), 0xFF, 0x60/*NTSC_AV*/, 
                              0x70/*PAL_AV*/, 
                              0x60/*NTSC_RF*/, 
                              0x60/*PAL_RF*/, 
                              0x60/*PAL_RF_VIF*/, 
                              0x60/*NTSC_SV*/, 
                              0x60/*PAL_SV*/, 
                              0x60/*NTSC443*/, 
                              0x60/*NTSC443_SV*/, 
                              0x60/*PAL_M*/, 
                              0x60/*PAL60*/, 
                              0x60/*SECAM*/, 
                              0x60/*NTSC_AV_SONY*/, 
                              0x70/*PAL_AV_SONY*/, 
                              0x60/*NTSC_RF_SONY*/, 
                              0x60/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_31_H), 0x0F, 0x01/*$NTSC_AV*/, 
                              0x01/*$PAL_AV*/, 
                              0x01/*$NTSC_RF*/, 
                              0x01/*$PAL_RF*/, 
                              0x01/*$PAL_RF_VIF*/, 
                              0x01/*$NTSC_SV*/, 
                              0x01/*$PAL_SV*/, 
                              0x00/*$NTSC443*/, 
                              0x00/*$NTSC443_SV*/, 
                              0x01/*$PAL_M*/, 
                              0x00/*$PAL60*/, 
                              0x01/*$SECAM*/, 
                              0x00/*$NTSC_AV_SONY*/, 
                              0x00/*$PAL_AV_SONY*/, 
                              0x01/*$NTSC_RF_SONY*/, 
                              0x01/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_32_L), 0xFF, 0x0E/*NTSC_AV*/, 
                              0x0E/*PAL_AV*/, 
                              0x14/*NTSC_RF*/, 
                              0x14/*PAL_RF*/, 
                              0x14/*PAL_RF_VIF*/, 
                              0x14/*NTSC_SV*/, 
                              0x14/*PAL_SV*/, 
                              0x14/*NTSC443*/, 
                              0x14/*NTSC443_SV*/, 
                              0x14/*PAL_M*/, 
                              0x14/*PAL60*/, 
                              0x14/*SECAM*/, 
                              0x0C/*NTSC_AV_SONY*/, 
                              0x0C/*PAL_AV_SONY*/, 
                              0x14/*NTSC_RF_SONY*/, 
                              0x14/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_32_H), 0xFF, 0x01/*NTSC_AV*/, 
                              0x01/*PAL_AV*/, 
                              0x03/*NTSC_RF*/, 
                              0x03/*PAL_RF*/, 
                              0x03/*PAL_RF_VIF*/, 
                              0x03/*NTSC_SV*/, 
                              0x03/*PAL_SV*/, 
                              0x03/*NTSC443*/, 
                              0x03/*NTSC443_SV*/, 
                              0x03/*PAL_M*/, 
                              0x03/*PAL60*/, 
                              0x03/*SECAM*/, 
                              0x01/*NTSC_AV_SONY*/, 
                              0x01/*PAL_AV_SONY*/, 
                              0x03/*NTSC_RF_SONY*/, 
                              0x03/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_39_H), 0xFF, 0x8A/*NTSC_AV*/, 
                              0x88/*PAL_AV*/, 
                              0x8A/*NTSC_RF*/, 
                              0x88/*PAL_RF*/, 
                              0x88/*PAL_RF_VIF*/, 
                              0x8A/*NTSC_SV*/, 
                              0x88/*PAL_SV*/, 
                              0x8A/*NTSC443*/, 
                              0x8A/*NTSC443_SV*/, 
                              0x88/*PAL_M*/, 
                              0x88/*PAL60*/, 
                              0xAF/*SECAM*/, 
                              0x8A/*NTSC_AV_SONY*/, 
                              0x88/*PAL_AV_SONY*/, 
                              0x8A/*NTSC_RF_SONY*/, 
                              0x88/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_3A_L), 0xFF, 0x75/*NTSC_AV*/, 
                              0x7A/*PAL_AV*/, 
                              0x75/*NTSC_RF*/, 
                              0x7A/*PAL_RF*/, 
                              0x7A/*PAL_RF_VIF*/, 
                              0x75/*NTSC_SV*/, 
                              0x7A/*PAL_SV*/, 
                              0x75/*NTSC443*/, 
                              0x75/*NTSC443_SV*/, 
                              0x7A/*PAL_M*/, 
                              0x7A/*PAL60*/, 
                              0x80/*SECAM*/, 
                              0x75/*NTSC_AV_SONY*/, 
                              0x7A/*PAL_AV_SONY*/, 
                              0x75/*NTSC_RF_SONY*/, 
                              0x7A/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_3A_H), 0xFF, 0xA8/*NTSC_AV*/, 
                              0xA8/*PAL_AV*/, 
                              0xA8/*NTSC_RF*/, 
                              0xA8/*PAL_RF*/, 
                              0xA8/*PAL_RF_VIF*/, 
                              0xA8/*NTSC_SV*/, 
                              0xA8/*PAL_SV*/, 
                              0xA8/*NTSC443*/, 
                              0xA8/*NTSC443_SV*/, 
                              0xA8/*PAL_M*/, 
                              0xA8/*PAL60*/, 
                              0xA0/*SECAM*/, 
                              0xA8/*NTSC_AV_SONY*/, 
                              0xA8/*PAL_AV_SONY*/, 
                              0xA8/*NTSC_RF_SONY*/, 
                              0xA8/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_0A_H), 0xDF, 0x0A/*$NTSC_AV*/, 
                              0x4A/*$PAL_AV*/, 
                              0x0A/*$NTSC_RF*/, 
                              0x4A/*$PAL_RF*/, 
                              0x4A/*$PAL_RF_VIF*/, 
                              0x0A/*$NTSC_SV*/, 
                              0x4A/*$PAL_SV*/, 
                              0x0A/*$NTSC443*/, 
                              0x0A/*$NTSC443_SV*/, 
                              0x4A/*$PAL_M*/, 
                              0x0A/*$PAL60*/, 
                              0x0A/*$SECAM*/, 
                              0x0A/*$NTSC_AV_SONY*/, 
                              0x4A/*$PAL_AV_SONY*/, 
                              0x0A/*$NTSC_RF_SONY*/, 
                              0x4A/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_20_H), 0xFF, 0x06/*NTSC_AV*/, 
                              0x00/*PAL_AV*/, 
                              0x06/*NTSC_RF*/, 
                              0x06/*PAL_RF*/, 
                              0x06/*PAL_RF_VIF*/, 
                              0x06/*NTSC_SV*/, 
                              0x06/*PAL_SV*/, 
                              0x06/*NTSC443*/, 
                              0x06/*NTSC443_SV*/, 
                              0x06/*PAL_M*/, 
                              0x06/*PAL60*/, 
                              0x06/*SECAM*/, 
                              0x06/*NTSC_AV_SONY*/, 
                              0x00/*PAL_AV_SONY*/, 
                              0x06/*NTSC_RF_SONY*/, 
                              0x06/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_24_H), 0xF1, 0xC1/*$NTSC_AV*/, 
                              0x00/*$PAL_AV*/, 
                              0xC1/*$NTSC_RF*/, 
                              0xC1/*$PAL_RF*/, 
                              0xC1/*$PAL_RF_VIF*/, 
                              0xC1/*$NTSC_SV*/, 
                              0xC1/*$PAL_SV*/, 
                              0xC1/*$NTSC443*/, 
                              0xC1/*$NTSC443_SV*/, 
                              0xC1/*$PAL_M*/, 
                              0xC1/*$PAL60*/, 
                              0xC1/*$SECAM*/, 
                              0xC1/*$NTSC_AV_SONY*/, 
                              0x00/*$PAL_AV_SONY*/, 
                              0xC1/*$NTSC_RF_SONY*/, 
                              0xC1/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_4F_L), 0xF3, 0x01/*$NTSC_AV*/, 
                              0xC1/*$PAL_AV*/, 
                              0x01/*$NTSC_RF*/, 
                              0x01/*$PAL_RF*/, 
                              0x01/*$PAL_RF_VIF*/, 
                              0x01/*$NTSC_SV*/, 
                              0x01/*$PAL_SV*/, 
                              0x01/*$NTSC443*/, 
                              0x01/*$NTSC443_SV*/, 
                              0x01/*$PAL_M*/, 
                              0x01/*$PAL60*/, 
                              0x01/*$SECAM*/, 
                              0x01/*$NTSC_AV_SONY*/, 
                              0xC1/*$PAL_AV_SONY*/, 
                              0x01/*$NTSC_RF_SONY*/, 
                              0x01/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_68_L), 0xF3, 0xB0/*$NTSC_AV*/, 
                              0xB0/*$PAL_AV*/, 
                              0xB0/*$NTSC_RF*/, 
                              0xB0/*$PAL_RF*/, 
                              0xB0/*$PAL_RF_VIF*/, 
                              0xB0/*$NTSC_SV*/, 
                              0xB0/*$PAL_SV*/, 
                              0xB0/*$NTSC443*/, 
                              0xB0/*$NTSC443_SV*/, 
                              0xB0/*$PAL_M*/, 
                              0xB0/*$PAL60*/, 
                              0xB0/*$SECAM*/, 
                              0xB0/*$NTSC_AV_SONY*/, 
                              0xB0/*$PAL_AV_SONY*/, 
                              0xB0/*$NTSC_RF_SONY*/, 
                              0xB0/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_69_H), 0xFF, 0x0F/*NTSC_AV*/, 
                              0x14/*PAL_AV*/, 
                              0x0F/*NTSC_RF*/, 
                              0x0F/*PAL_RF*/, 
                              0x0F/*PAL_RF_VIF*/, 
                              0x0F/*NTSC_SV*/, 
                              0x0F/*PAL_SV*/, 
                              0x0F/*NTSC443*/, 
                              0x0F/*NTSC443_SV*/, 
                              0x0F/*PAL_M*/, 
                              0x0F/*PAL60*/, 
                              0x0F/*SECAM*/, 
                              0x0F/*NTSC_AV_SONY*/, 
                              0x14/*PAL_AV_SONY*/, 
                              0x0F/*NTSC_RF_SONY*/, 
                              0x0F/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_60_H), 0xFF, 0x21/*$NTSC_AV*/, 
                              0x11/*$PAL_AV*/, 
                              0x33/*$NTSC_RF*/, 
                              0x21/*$PAL_RF*/, 
                              0x21/*$PAL_RF_VIF*/, 
                              0x33/*$NTSC_SV*/, 
                              0x21/*$PAL_SV*/, 
                              0x33/*$NTSC443*/, 
                              0x33/*$NTSC443_SV*/, 
                              0x21/*$PAL_M*/, 
                              0x33/*$PAL60*/, 
                              0x33/*$SECAM*/, 
                              0x33/*$NTSC_AV_SONY*/, 
                              0x11/*$PAL_AV_SONY*/, 
                              0x33/*$NTSC_RF_SONY*/, 
                              0x21/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_61_L), 0xFF, 0x33/*$NTSC_AV*/, 
                              0xBF/*$PAL_AV*/, 
                              0x33/*$NTSC_RF*/, 
                              0x33/*$PAL_RF*/, 
                              0x33/*$PAL_RF_VIF*/, 
                              0x33/*$NTSC_SV*/, 
                              0x33/*$PAL_SV*/, 
                              0x33/*$NTSC443*/, 
                              0x33/*$NTSC443_SV*/, 
                              0x33/*$PAL_M*/, 
                              0x33/*$PAL60*/, 
                              0x33/*$SECAM*/, 
                              0x33/*$NTSC_AV_SONY*/, 
                              0xBF/*$PAL_AV_SONY*/, 
                              0x33/*$NTSC_RF_SONY*/, 
                              0x33/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_62_L), 0xF1, 0x31/*$NTSC_AV*/, 
                              0x41/*$PAL_AV*/, 
                              0x81/*$NTSC_RF*/, 
                              0x81/*$PAL_RF*/, 
                              0x81/*$PAL_RF_VIF*/, 
                              0x81/*$NTSC_SV*/, 
                              0x81/*$PAL_SV*/, 
                              0x81/*$NTSC443*/, 
                              0x81/*$NTSC443_SV*/, 
                              0x81/*$PAL_M*/, 
                              0x81/*$PAL60*/, 
                              0x81/*$SECAM*/, 
                              0x41/*$NTSC_AV_SONY*/, 
                              0x41/*$PAL_AV_SONY*/, 
                              0x81/*$NTSC_RF_SONY*/, 
                              0x81/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_48_H), 0xFF, 0x32/*$NTSC_AV*/, 
                              0x12/*$PAL_AV*/, 
                              0x12/*$NTSC_RF*/, 
                              0x12/*$PAL_RF*/, 
                              0x12/*$PAL_RF_VIF*/, 
                              0x12/*$NTSC_SV*/, 
                              0x12/*$PAL_SV*/, 
                              0x12/*$NTSC443*/, 
                              0x12/*$NTSC443_SV*/, 
                              0x12/*$PAL_M*/, 
                              0x12/*$PAL60*/, 
                              0x12/*$SECAM*/, 
                              0x32/*$NTSC_AV_SONY*/, 
                              0x12/*$PAL_AV_SONY*/, 
                              0x12/*$NTSC_RF_SONY*/, 
                              0x12/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_49_L), 0xD7, 0x51/*$NTSC_AV*/, 
                              0xD1/*$PAL_AV*/, 
                              0x51/*$NTSC_RF*/, 
                              0xD1/*$PAL_RF*/, 
                              0xD1/*$PAL_RF_VIF*/, 
                              0x51/*$NTSC_SV*/, 
                              0xD1/*$PAL_SV*/, 
                              0xD1/*$NTSC443*/, 
                              0xD1/*$NTSC443_SV*/, 
                              0xD1/*$PAL_M*/, 
                              0xD1/*$PAL60*/, 
                              0xD1/*$SECAM*/, 
                              0x51/*$NTSC_AV_SONY*/, 
                              0xD1/*$PAL_AV_SONY*/, 
                              0x51/*$NTSC_RF_SONY*/, 
                              0xD1/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_COMB_BK00_6B_L), 0xFF, 0x80/*NTSC_AV*/, 
                              0x0A/*PAL_AV*/, 
                              0x00/*NTSC_RF*/, 
                              0x00/*PAL_RF*/, 
                              0x00/*PAL_RF_VIF*/, 
                              0x00/*NTSC_SV*/, 
                              0x00/*PAL_SV*/, 
                              0x00/*NTSC443*/, 
                              0x00/*NTSC443_SV*/, 
                              0x00/*PAL_M*/, 
                              0x00/*PAL60*/, 
                              0x00/*SECAM*/, 
                              0x80/*NTSC_AV_SONY*/, 
                              0x0A/*PAL_AV_SONY*/, 
                              0x00/*NTSC_RF_SONY*/, 
                              0x00/*PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// Comb2
//****************************************************
code U8 MST_Comb2_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_BK2C_01_L), 0xFF, 0x8C },//Same mark
 { PQ_MAP_REG(REG_BK2C_01_H), 0x77, 0x22 },//Same mark
 { PQ_MAP_REG(REG_BK2C_02_L), 0xFF, 0x04 },//Same mark
 { PQ_MAP_REG(REG_BK2C_05_L), 0x37, 0x01 },//Same mark
 { PQ_MAP_REG(REG_BK2C_05_H), 0xF7, 0x42 },//Same mark
 { PQ_MAP_REG(REG_BK2C_06_L), 0x7F, 0x38 },//Same mark
 { PQ_MAP_REG(REG_BK2C_06_H), 0xFF, 0x46 },//Same mark
 { PQ_MAP_REG(REG_BK2C_07_L), 0xFF, 0x80 },//Same mark
 { PQ_MAP_REG(REG_BK2C_07_H), 0xFF, 0x22 },//Same mark
 { PQ_MAP_REG(REG_BK2C_17_H), 0x3F, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_Comb2_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_Comb2_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_BK2C_00_H), 0x7F, 0x75/*$NTSC_AV*/, 
                              0x75/*$PAL_AV*/, 
                              0x75/*$NTSC_RF*/, 
                              0x75/*$PAL_RF*/, 
                              0x75/*$PAL_RF_VIF*/, 
                              0x74/*$NTSC_SV*/, 
                              0x74/*$PAL_SV*/, 
                              0x74/*$NTSC443*/, 
                              0x74/*$NTSC443_SV*/, 
                              0x75/*$PAL_M*/, 
                              0x74/*$PAL60*/, 
                              0x74/*$SECAM*/, 
                              0x75/*$NTSC_AV_SONY*/, 
                              0x75/*$PAL_AV_SONY*/, 
                              0x75/*$NTSC_RF_SONY*/, 
                              0x75/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_BK2C_05_L), 0x08, 0x00/*$NTSC_AV*/, 
                              0x08/*$PAL_AV*/, 
                              0x00/*$NTSC_RF*/, 
                              0x08/*$PAL_RF*/, 
                              0x08/*$PAL_RF_VIF*/, 
                              0x00/*$NTSC_SV*/, 
                              0x08/*$PAL_SV*/, 
                              0x00/*$NTSC443*/, 
                              0x00/*$NTSC443_SV*/, 
                              0x08/*$PAL_M*/, 
                              0x08/*$PAL60*/, 
                              0x00/*$SECAM*/, 
                              0x00/*$NTSC_AV_SONY*/, 
                              0x08/*$PAL_AV_SONY*/, 
                              0x00/*$NTSC_RF_SONY*/, 
                              0x08/*$PAL_RF_SONY*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SECAM
//****************************************************
code U8 MST_SECAM_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_BK38_07_H), 0xF0, 0xF0 },//Same mark
 { PQ_MAP_REG(REG_BK38_0F_L), 0xE0, 0x80 },
 { PQ_MAP_REG(REG_BK38_17_H), 0x10, 0x10 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SECAM_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_SECAM_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VD_Sampling_no_comm
//****************************************************
code U8 MST_VD_Sampling_no_comm_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VD_Sampling_no_comm_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VD_Sampling_no_comm_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK01_04_L), 0xFF, 0xFD/*N_1135*/, 
                              0xED/*P_1135*/, 
                              0xDF/*P6_1135*/, 
                              0xCA/*S_1135*/, 
                              0xDF/*N4_1135*/, 
                              0x7D/*PM_1135*/, 
                              0x83/*PNC_1135*/, 
                              0x60/*N_1135_1o5*/, 
                              0x61/*P_1135_1o5*/, 
                              0x5A/*P6_1135_1o5*/, 
                              0x69/*S_1135_1o5*/, 
                              0x5A/*N4_1135_1o5*/, 
                              0x61/*PM_1135_1o5*/, 
                              0x5E/*PNC_1135_1o5*/, 
                              0xFD/*N_Dynamic*/, 
                              0xED/*P_Dynmiac*/, 
                              0xDF/*P6_Dynamic*/, 
                              0xCA/*S_Dynamic*/, 
                              0xDF/*N4_Dynamic*/, 
                              0x7D/*PM_Dynamic*/, 
                              0x83/*PNC_Dynamic*/, },
 { PQ_MAP_REG(REG_SC2_BK01_04_H), 0xFF, 0x00/*N_1135*/, 
                              0x00/*P_1135*/, 
                              0x00/*P6_1135*/, 
                              0x00/*S_1135*/, 
                              0x00/*N4_1135*/, 
                              0x00/*PM_1135*/, 
                              0x00/*PNC_1135*/, 
                              0x00/*N_1135_1o5*/, 
                              0x00/*P_1135_1o5*/, 
                              0x00/*P6_1135_1o5*/, 
                              0x00/*S_1135_1o5*/, 
                              0x00/*N4_1135_1o5*/, 
                              0x00/*PM_1135_1o5*/, 
                              0x00/*PNC_1135_1o5*/, 
                              0x00/*N_Dynamic*/, 
                              0x00/*P_Dynmiac*/, 
                              0x00/*P6_Dynamic*/, 
                              0x00/*S_Dynamic*/, 
                              0x00/*N4_Dynamic*/, 
                              0x00/*PM_Dynamic*/, 
                              0x00/*PNC_Dynamic*/, },
 { PQ_MAP_REG(REG_SC2_BK01_05_L), 0xFF, 0x12/*N_1135*/, 
                              0x0D/*P_1135*/, 
                              0x06/*P6_1135*/, 
                              0x0A/*S_1135*/, 
                              0x06/*N4_1135*/, 
                              0x09/*PM_1135*/, 
                              0x10/*PNC_1135*/, 
                              0x08/*N_1135_1o5*/, 
                              0x0F/*P_1135_1o5*/, 
                              0x07/*P6_1135_1o5*/, 
                              0x0D/*S_1135_1o5*/, 
                              0x07/*N4_1135_1o5*/, 
                              0x08/*PM_1135_1o5*/, 
                              0x10/*PNC_1135_1o5*/, 
                              0x12/*N_Dynamic*/, 
                              0x0D/*P_Dynmiac*/, 
                              0x06/*P6_Dynamic*/, 
                              0x0A/*S_Dynamic*/, 
                              0x06/*N4_Dynamic*/, 
                              0x09/*PM_Dynamic*/, 
                              0x10/*PNC_Dynamic*/, },
 { PQ_MAP_REG(REG_SC2_BK01_05_H), 0xFF, 0x00/*N_1135*/, 
                              0x00/*P_1135*/, 
                              0x00/*P6_1135*/, 
                              0x00/*S_1135*/, 
                              0x00/*N4_1135*/, 
                              0x00/*PM_1135*/, 
                              0x00/*PNC_1135*/, 
                              0x00/*N_1135_1o5*/, 
                              0x00/*P_1135_1o5*/, 
                              0x00/*P6_1135_1o5*/, 
                              0x00/*S_1135_1o5*/, 
                              0x00/*N4_1135_1o5*/, 
                              0x00/*PM_1135_1o5*/, 
                              0x00/*PNC_1135_1o5*/, 
                              0x00/*N_Dynamic*/, 
                              0x00/*P_Dynmiac*/, 
                              0x00/*P6_Dynamic*/, 
                              0x00/*S_Dynamic*/, 
                              0x00/*N4_Dynamic*/, 
                              0x00/*PM_Dynamic*/, 
                              0x00/*PNC_Dynamic*/, },
 { PQ_MAP_REG(REG_SC2_BK01_06_L), 0xFF, 0xB8/*N_1135*/, 
                              0xB2/*P_1135*/, 
                              0xB2/*P6_1135*/, 
                              0xB2/*S_1135*/, 
                              0xB2/*N4_1135*/, 
                              0xB8/*PM_1135*/, 
                              0xB8/*PNC_1135*/, 
                              0x94/*N_1135_1o5*/, 
                              0x8A/*P_1135_1o5*/, 
                              0x8A/*P6_1135_1o5*/, 
                              0x8A/*S_1135_1o5*/, 
                              0x8A/*N4_1135_1o5*/, 
                              0x94/*PM_1135_1o5*/, 
                              0x94/*PNC_1135_1o5*/, 
                              0xFC/*N_Dynamic*/, 
                              0xB2/*P_Dynmiac*/, 
                              0xAB/*P6_Dynamic*/, 
                              0x92/*S_Dynamic*/, 
                              0xAB/*N4_Dynamic*/, 
                              0xFB/*PM_Dynamic*/, 
                              0x02/*PNC_Dynamic*/, },
 { PQ_MAP_REG(REG_SC2_BK01_06_H), 0xFF, 0x03/*N_1135*/, 
                              0x03/*P_1135*/, 
                              0x03/*P6_1135*/, 
                              0x03/*S_1135*/, 
                              0x03/*N4_1135*/, 
                              0x03/*PM_1135*/, 
                              0x03/*PNC_1135*/, 
                              0x05/*N_1135_1o5*/, 
                              0x05/*P_1135_1o5*/, 
                              0x05/*P6_1135_1o5*/, 
                              0x05/*S_1135_1o5*/, 
                              0x05/*N4_1135_1o5*/, 
                              0x05/*PM_1135_1o5*/, 
                              0x05/*PNC_1135_1o5*/, 
                              0x02/*N_Dynamic*/, 
                              0x03/*P_Dynmiac*/, 
                              0x03/*P6_Dynamic*/, 
                              0x03/*S_Dynamic*/, 
                              0x03/*N4_Dynamic*/, 
                              0x02/*PM_Dynamic*/, 
                              0x03/*PNC_Dynamic*/, },
 { PQ_MAP_REG(REG_SC2_BK01_07_L), 0xFF, 0xE0/*N_1135*/, 
                              0x04/*P_1135*/, 
                              0xE0/*P6_1135*/, 
                              0x04/*S_1135*/, 
                              0xE0/*N4_1135*/, 
                              0xE0/*PM_1135*/, 
                              0x04/*PNC_1135*/, 
                              0xE0/*N_1135_1o5*/, 
                              0x04/*P_1135_1o5*/, 
                              0xE0/*P6_1135_1o5*/, 
                              0x04/*S_1135_1o5*/, 
                              0xE0/*N4_1135_1o5*/, 
                              0xE0/*PM_1135_1o5*/, 
                              0x04/*PNC_1135_1o5*/, 
                              0xE0/*N_Dynamic*/, 
                              0x04/*P_Dynmiac*/, 
                              0xE0/*P6_Dynamic*/, 
                              0x04/*S_Dynamic*/, 
                              0xE0/*N4_Dynamic*/, 
                              0xE0/*PM_Dynamic*/, 
                              0x04/*PNC_Dynamic*/, },
 { PQ_MAP_REG(REG_SC2_BK01_07_H), 0xFF, 0x01/*N_1135*/, 
                              0x02/*P_1135*/, 
                              0x01/*P6_1135*/, 
                              0x02/*S_1135*/, 
                              0x01/*N4_1135*/, 
                              0x01/*PM_1135*/, 
                              0x02/*PNC_1135*/, 
                              0x01/*N_1135_1o5*/, 
                              0x02/*P_1135_1o5*/, 
                              0x01/*P6_1135_1o5*/, 
                              0x02/*S_1135_1o5*/, 
                              0x01/*N4_1135_1o5*/, 
                              0x01/*PM_1135_1o5*/, 
                              0x02/*PNC_1135_1o5*/, 
                              0x01/*N_Dynamic*/, 
                              0x02/*P_Dynmiac*/, 
                              0x01/*P6_Dynamic*/, 
                              0x02/*S_Dynamic*/, 
                              0x01/*N4_Dynamic*/, 
                              0x01/*PM_Dynamic*/, 
                              0x02/*PNC_Dynamic*/, },
 { PQ_MAP_REG(REG_SC2_BK10_0D_L), 0xFF, 0x6F/*N_1135*/, 
                              0x6F/*P_1135*/, 
                              0x6F/*P6_1135*/, 
                              0x6F/*S_1135*/, 
                              0x6F/*N4_1135*/, 
                              0x6F/*PM_1135*/, 
                              0x6F/*PNC_1135*/, 
                              0xA6/*N_1135_1o5*/, 
                              0xA6/*P_1135_1o5*/, 
                              0xA6/*P6_1135_1o5*/, 
                              0xA6/*S_1135_1o5*/, 
                              0xA6/*N4_1135_1o5*/, 
                              0xA6/*PM_1135_1o5*/, 
                              0xA6/*PNC_1135_1o5*/, 
                              0x8E/*N_Dynamic*/, 
                              0x6F/*P_Dynmiac*/, 
                              0x67/*P6_Dynamic*/, 
                              0x49/*S_Dynamic*/, 
                              0x67/*N4_Dynamic*/, 
                              0x8D/*PM_Dynamic*/, 
                              0x95/*PNC_Dynamic*/, },
 { PQ_MAP_REG(REG_SC2_BK10_0D_H), 0xFF, 0x04/*N_1135*/, 
                              0x04/*P_1135*/, 
                              0x04/*P6_1135*/, 
                              0x04/*S_1135*/, 
                              0x04/*N4_1135*/, 
                              0x04/*PM_1135*/, 
                              0x04/*PNC_1135*/, 
                              0x06/*N_1135_1o5*/, 
                              0x06/*P_1135_1o5*/, 
                              0x06/*P6_1135_1o5*/, 
                              0x06/*S_1135_1o5*/, 
                              0x06/*N4_1135_1o5*/, 
                              0x06/*PM_1135_1o5*/, 
                              0x06/*PNC_1135_1o5*/, 
                              0x03/*N_Dynamic*/, 
                              0x04/*P_Dynmiac*/, 
                              0x04/*P6_Dynamic*/, 
                              0x04/*S_Dynamic*/, 
                              0x04/*N4_Dynamic*/, 
                              0x03/*PM_Dynamic*/, 
                              0x03/*PNC_Dynamic*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SCinit
//****************************************************
code U8 MST_SCinit_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK01_02_L), 0x80, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK01_09_L), 0x0F, 0x04 },
 { PQ_MAP_REG(REG_SC2_BK01_08_L), 0x04, 0x04 },
 { PQ_MAP_REG(REG_SC2_BK01_03_L), 0xFF, 0x90 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK01_03_H), 0xFF, 0x08 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK01_10_L), 0x01, 0x01 },
 { PQ_MAP_REG(REG_SC2_BK01_19_L), 0x1D, 0x19 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK01_18_H), 0xFF, 0x1C },
 { PQ_MAP_REG(REG_SC2_BK01_21_H), 0xC0, 0xC0 },
 { PQ_MAP_REG(REG_SC2_BK10_23_L), 0x80, 0x80 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SCinit_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_SCinit_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// CSC
//****************************************************
code U8 MST_CSC_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_CSC_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_CSC_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK04_40_L), 0x0B, 0x00/*$OFF*/, 
                              0x08/*$L_RGB2YCC_SD*/, 
                              0x09/*$F_RGB2YCC_SD*/, 
                              0x0A/*$L_RGB2YCC_HD*/, 
                              0x0B/*$F_RGB2YCC_HD*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// CSC_Dither
//****************************************************
code U8 MST_CSC_Dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_CSC_Dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_CSC_Dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK04_01_L), 0x04, 0x00/*OFF*/, 
                              0x04/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// YCdelay
//****************************************************
code U8 MST_YCdelay_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_YCdelay_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_YCdelay_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK04_0A_L), 0x1F, 0x00/*$OFF*/, 
                              0x11/*$YC_91*/, 
                              0x12/*$YC_92*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// PreFilter
//****************************************************
code U8 MST_PreFilter_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_PreFilter_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_PreFilter_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// PreFilter_Dither
//****************************************************
code U8 MST_PreFilter_Dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_PreFilter_Dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_PreFilter_Dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// HDSDD
//****************************************************
code U8 MST_HDSDD_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_HDSDD_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_HDSDD_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// HSD_Y
//****************************************************
code U8 MST_HSD_Y_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_HSD_Y_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_HSD_Y_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// HSD_C
//****************************************************
code U8 MST_HSD_C_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_HSD_C_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_HSD_C_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// 444To422
//****************************************************
code U8 MST_444To422_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK04_0A_L), 0x40, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_444To422_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_444To422_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK04_0A_L), 0x80, 0x00/*$OFF*/, 
                              0x80/*$ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VSD
//****************************************************
code U8 MST_VSD_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VSD_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VSD_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK04_09_H), 0x40, 0x00/*OFF*/, 
                              0x00/*CB*/, 
                              0x40/*Bilinear*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// HVSD_Dither
//****************************************************
code U8 MST_HVSD_Dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_HVSD_Dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_HVSD_Dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK04_01_H), 0x30, 0x00/*$OFF*/, 
                              0x20/*$Vdith*/, 
                              0x10/*$Hdith*/, 
                              0x30/*$HVDith*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// 10to8_Dither
//****************************************************
code U8 MST_10to8_Dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_10to8_Dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_10to8_Dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK04_01_H), 0x0C, 0x00/*$OFF*/, 
                              0x0C/*$Rand_Dith*/, 
                              0x04/*$Fix_Dith*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// MemFormat
//****************************************************
code U8 MST_MemFormat_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_MemFormat_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_MemFormat_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK12_41_L), 0x30, 0x00/*$422MF*/, 
                              0x20/*$444_10BIT*/, 
                              0x10/*$444_8BIT*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// PreSNR
//****************************************************
code U8 MST_PreSNR_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_PreSNR_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_PreSNR_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// PreSNR_Patch
//****************************************************
code U8 MST_PreSNR_Patch_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_PreSNR_Patch_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_PreSNR_Patch_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// DNR
//****************************************************
code U8 MST_DNR_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_DNR_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_DNR_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK06_01_L), 0x03, 0x00/*$NR_OFF*/, 
                              0x01/*$DNR_OFF*/, 
                              0x03/*$ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// DNR_Motion
//****************************************************
code U8 MST_DNR_Motion_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_DNR_Motion_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_DNR_Motion_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK06_01_L), 0x10, 0X10/*MR_NR*/, 
                              0X00/*MR_nonNR*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// DNR_Y
//****************************************************
code U8 MST_DNR_Y_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_DNR_Y_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_DNR_Y_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK06_01_H), 0x05, 0x00/*$OFF*/, 
                              0x05/*$DY_1*/, 
                              0x05/*$DY_1_1*/, 
                              0x05/*$DY_2*/, 
                              0x05/*$DY_2_1*/, 
                              0x05/*$DY_3*/, 
                              0x05/*$DY_3_1*/, 
                              0x05/*$DY_4*/, 
                              0x05/*$DY_4_1*/, 
                              0x05/*$DY_5*/, 
                              0x05/*$DY_5_1*/, 
                              0x05/*$DY_6*/, 
                              0x05/*$DY_6_1*/, 
                              0x05/*$DY_7*/, 
                              0x05/*$DY_7_1*/, 
                              0x05/*$DY_8*/, 
                              0x05/*$DY_8_1*/, 
                              0x05/*$DY_9*/, 
                              0x05/*$DY_9_1*/, 
                              0x05/*$DY_10*/, 
                              0x05/*$DY_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_06_L), 0x05, 0x00/*$OFF*/, 
                              0x01/*$DY_1*/, 
                              0x01/*$DY_1_1*/, 
                              0x01/*$DY_2*/, 
                              0x01/*$DY_2_1*/, 
                              0x01/*$DY_3*/, 
                              0x01/*$DY_3_1*/, 
                              0x01/*$DY_4*/, 
                              0x01/*$DY_4_1*/, 
                              0x01/*$DY_5*/, 
                              0x01/*$DY_5_1*/, 
                              0x01/*$DY_6*/, 
                              0x01/*$DY_6_1*/, 
                              0x01/*$DY_7*/, 
                              0x01/*$DY_7_1*/, 
                              0x01/*$DY_8*/, 
                              0x01/*$DY_8_1*/, 
                              0x01/*$DY_9*/, 
                              0x01/*$DY_9_1*/, 
                              0x01/*$DY_10*/, 
                              0x01/*$DY_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_07_L), 0x1D, 0x00/*$OFF*/, 
                              0x04/*$DY_1*/, 
                              0x04/*$DY_1_1*/, 
                              0x04/*$DY_2*/, 
                              0x04/*$DY_2_1*/, 
                              0x08/*$DY_3*/, 
                              0x08/*$DY_3_1*/, 
                              0x08/*$DY_4*/, 
                              0x08/*$DY_4_1*/, 
                              0x08/*$DY_5*/, 
                              0x08/*$DY_5_1*/, 
                              0x08/*$DY_6*/, 
                              0x08/*$DY_6_1*/, 
                              0x0C/*$DY_7*/, 
                              0x0C/*$DY_7_1*/, 
                              0x0C/*$DY_8*/, 
                              0x0C/*$DY_8_1*/, 
                              0x10/*$DY_9*/, 
                              0x10/*$DY_9_1*/, 
                              0x14/*$DY_10*/, 
                              0x14/*$DY_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_07_H), 0x33, 0x00/*$OFF*/, 
                              0x22/*$DY_1*/, 
                              0x22/*$DY_1_1*/, 
                              0x23/*$DY_2*/, 
                              0x23/*$DY_2_1*/, 
                              0x20/*$DY_3*/, 
                              0x20/*$DY_3_1*/, 
                              0x21/*$DY_4*/, 
                              0x21/*$DY_4_1*/, 
                              0x22/*$DY_5*/, 
                              0x22/*$DY_5_1*/, 
                              0x23/*$DY_6*/, 
                              0x23/*$DY_6_1*/, 
                              0x20/*$DY_7*/, 
                              0x20/*$DY_7_1*/, 
                              0x22/*$DY_8*/, 
                              0x22/*$DY_8_1*/, 
                              0x20/*$DY_9*/, 
                              0x20/*$DY_9_1*/, 
                              0x20/*$DY_10*/, 
                              0x20/*$DY_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_40_L), 0xFF, 0x00/*OFF*/, 
                              0XDF/*DY_1*/, 
                              0XFF/*DY_1_1*/, 
                              0XDF/*DY_2*/, 
                              0XFF/*DY_2_1*/, 
                              0XDF/*DY_3*/, 
                              0XFF/*DY_3_1*/, 
                              0XDF/*DY_4*/, 
                              0XFF/*DY_4_1*/, 
                              0XDF/*DY_5*/, 
                              0XFF/*DY_5_1*/, 
                              0XDF/*DY_6*/, 
                              0XFF/*DY_6_1*/, 
                              0XDF/*DY_7*/, 
                              0XFF/*DY_7_1*/, 
                              0XDF/*DY_8*/, 
                              0XFF/*DY_8_1*/, 
                              0XDF/*DY_9*/, 
                              0XFF/*DY_9_1*/, 
                              0XDF/*DY_10*/, 
                              0XFF/*DY_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_40_H), 0xFF, 0x00/*OFF*/, 
                              0X9B/*DY_1*/, 
                              0X9D/*DY_1_1*/, 
                              0X9B/*DY_2*/, 
                              0X9D/*DY_2_1*/, 
                              0X9B/*DY_3*/, 
                              0X9D/*DY_3_1*/, 
                              0X9B/*DY_4*/, 
                              0X9D/*DY_4_1*/, 
                              0x9B/*DY_5*/, 
                              0X9D/*DY_5_1*/, 
                              0X9B/*DY_6*/, 
                              0X9D/*DY_6_1*/, 
                              0X9B/*DY_7*/, 
                              0X9D/*DY_7_1*/, 
                              0X9B/*DY_8*/, 
                              0X9D/*DY_8_1*/, 
                              0X9B/*DY_9*/, 
                              0X9D/*DY_9_1*/, 
                              0X9B/*DY_10*/, 
                              0X9D/*DY_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_41_L), 0xFF, 0x00/*OFF*/, 
                              0X15/*DY_1*/, 
                              0X46/*DY_1_1*/, 
                              0X15/*DY_2*/, 
                              0X46/*DY_2_1*/, 
                              0X15/*DY_3*/, 
                              0X46/*DY_3_1*/, 
                              0X15/*DY_4*/, 
                              0X46/*DY_4_1*/, 
                              0X56/*DY_5*/, 
                              0X56/*DY_5_1*/, 
                              0X56/*DY_6*/, 
                              0X56/*DY_6_1*/, 
                              0X56/*DY_7*/, 
                              0X78/*DY_7_1*/, 
                              0X78/*DY_8*/, 
                              0X78/*DY_8_1*/, 
                              0X78/*DY_9*/, 
                              0X78/*DY_9_1*/, 
                              0X78/*DY_10*/, 
                              0X78/*DY_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_41_H), 0xFF, 0x00/*OFF*/, 
                              0X00/*DY_1*/, 
                              0X12/*DY_1_1*/, 
                              0X00/*DY_2*/, 
                              0X12/*DY_2_1*/, 
                              0X00/*DY_3*/, 
                              0X12/*DY_3_1*/, 
                              0X00/*DY_4*/, 
                              0X12/*DY_4_1*/, 
                              0X34/*DY_5*/, 
                              0X34/*DY_5_1*/, 
                              0X34/*DY_6*/, 
                              0X34/*DY_6_1*/, 
                              0X34/*DY_7*/, 
                              0X35/*DY_7_1*/, 
                              0X35/*DY_8*/, 
                              0X35/*DY_8_1*/, 
                              0X35/*DY_9*/, 
                              0X35/*DY_9_1*/, 
                              0X56/*DY_10*/, 
                              0X56/*DY_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_42_L), 0xFF, 0x00/*OFF*/, 
                              0X00/*DY_1*/, 
                              0X00/*DY_1_1*/, 
                              0X00/*DY_2*/, 
                              0X00/*DY_2_1*/, 
                              0X00/*DY_3*/, 
                              0X00/*DY_3_1*/, 
                              0X00/*DY_4*/, 
                              0X00/*DY_4_1*/, 
                              0X12/*DY_5*/, 
                              0X12/*DY_5_1*/, 
                              0X12/*DY_6*/, 
                              0X12/*DY_6_1*/, 
                              0X12/*DY_7*/, 
                              0X12/*DY_7_1*/, 
                              0X12/*DY_8*/, 
                              0X12/*DY_8_1*/, 
                              0X12/*DY_9*/, 
                              0X12/*DY_9_1*/, 
                              0X34/*DY_10*/, 
                              0X34/*DY_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_42_H), 0xFF, 0x00/*OFF*/, 
                              0X00/*DY_1*/, 
                              0X00/*DY_1_1*/, 
                              0X00/*DY_2*/, 
                              0X00/*DY_2_1*/, 
                              0X00/*DY_3*/, 
                              0X00/*DY_3_1*/, 
                              0X00/*DY_4*/, 
                              0X00/*DY_4_1*/, 
                              0X00/*DY_5*/, 
                              0X00/*DY_5_1*/, 
                              0X00/*DY_6*/, 
                              0X00/*DY_6_1*/, 
                              0X00/*DY_7*/, 
                              0X00/*DY_7_1*/, 
                              0X00/*DY_8*/, 
                              0X00/*DY_8_1*/, 
                              0X00/*DY_9*/, 
                              0X00/*DY_9_1*/, 
                              0X12/*DY_10*/, 
                              0X12/*DY_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_43_L), 0xFF, 0x00/*OFF*/, 
                              0X00/*DY_1*/, 
                              0X00/*DY_1_1*/, 
                              0X00/*DY_2*/, 
                              0X00/*DY_2_1*/, 
                              0X00/*DY_3*/, 
                              0X00/*DY_3_1*/, 
                              0X00/*DY_4*/, 
                              0X00/*DY_4_1*/, 
                              0X00/*DY_5*/, 
                              0X00/*DY_5_1*/, 
                              0X00/*DY_6*/, 
                              0X00/*DY_6_1*/, 
                              0X00/*DY_7*/, 
                              0X00/*DY_7_1*/, 
                              0X00/*DY_8*/, 
                              0X00/*DY_8_1*/, 
                              0X00/*DY_9*/, 
                              0X00/*DY_9_1*/, 
                              0X00/*DY_10*/, 
                              0X00/*DY_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_43_H), 0xFF, 0x00/*OFF*/, 
                              0X00/*DY_1*/, 
                              0X00/*DY_1_1*/, 
                              0X00/*DY_2*/, 
                              0X00/*DY_2_1*/, 
                              0X00/*DY_3*/, 
                              0X00/*DY_3_1*/, 
                              0X00/*DY_4*/, 
                              0X00/*DY_4_1*/, 
                              0X00/*DY_5*/, 
                              0X00/*DY_5_1*/, 
                              0X00/*DY_6*/, 
                              0X00/*DY_6_1*/, 
                              0X00/*DY_7*/, 
                              0X00/*DY_7_1*/, 
                              0X00/*DY_8*/, 
                              0X00/*DY_8_1*/, 
                              0X00/*DY_9*/, 
                              0X00/*DY_9_1*/, 
                              0X00/*DY_10*/, 
                              0X00/*DY_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_48_L), 0xFF, 0x00/*OFF*/, 
                              0XED/*DY_1*/, 
                              0XED/*DY_1_1*/, 
                              0XED/*DY_2*/, 
                              0XED/*DY_2_1*/, 
                              0XED/*DY_3*/, 
                              0XED/*DY_3_1*/, 
                              0XED/*DY_4*/, 
                              0XED/*DY_4_1*/, 
                              0XED/*DY_5*/, 
                              0XED/*DY_5_1*/, 
                              0XED/*DY_6*/, 
                              0XED/*DY_6_1*/, 
                              0XED/*DY_7*/, 
                              0XED/*DY_7_1*/, 
                              0XED/*DY_8*/, 
                              0XED/*DY_8_1*/, 
                              0XED/*DY_9*/, 
                              0XED/*DY_9_1*/, 
                              0XED/*DY_10*/, 
                              0XED/*DY_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_48_H), 0xFF, 0x00/*OFF*/, 
                              0X0F/*DY_1*/, 
                              0X0F/*DY_1_1*/, 
                              0X0F/*DY_2*/, 
                              0X0F/*DY_2_1*/, 
                              0X0F/*DY_3*/, 
                              0X0F/*DY_3_1*/, 
                              0X0F/*DY_4*/, 
                              0X0F/*DY_4_1*/, 
                              0X0F/*DY_5*/, 
                              0X0F/*DY_5_1*/, 
                              0X0F/*DY_6*/, 
                              0X0F/*DY_6_1*/, 
                              0X0F/*DY_7*/, 
                              0X0F/*DY_7_1*/, 
                              0X0F/*DY_8*/, 
                              0X0F/*DY_8_1*/, 
                              0X0F/*DY_9*/, 
                              0X0F/*DY_9_1*/, 
                              0X0F/*DY_10*/, 
                              0X0F/*DY_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_05_L), 0x03, 0x00/*OFF*/, 
                              0X03/*DY_1*/, 
                              0X03/*DY_1_1*/, 
                              0X03/*DY_2*/, 
                              0X03/*DY_2_1*/, 
                              0X03/*DY_3*/, 
                              0X03/*DY_3_1*/, 
                              0X03/*DY_4*/, 
                              0X03/*DY_4_1*/, 
                              0X03/*DY_5*/, 
                              0X03/*DY_5_1*/, 
                              0X03/*DY_6*/, 
                              0X03/*DY_6_1*/, 
                              0X03/*DY_7*/, 
                              0X03/*DY_7_1*/, 
                              0X03/*DY_8*/, 
                              0X03/*DY_8_1*/, 
                              0X03/*DY_9*/, 
                              0X03/*DY_9_1*/, 
                              0X03/*DY_10*/, 
                              0X03/*DY_10_1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// DNR_Y_COLOR_DEP
//****************************************************
code U8 MST_DNR_Y_COLOR_DEP_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_DNR_Y_COLOR_DEP_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_DNR_Y_COLOR_DEP_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SRAM_COLOR_INDEX
//****************************************************
code U8 MST_SRAM_COLOR_INDEX_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SRAM_COLOR_INDEX_SC2_Sub[][PQ_IP_SRAM_COLOR_INDEX_SIZE_SC2_Sub]=
{
{//OFF
    0x00
},

{//Index0
    0x02
},

};

//****************************************************
// SRAM_COLOR_GAIN_SNR
//****************************************************
code U8 MST_SRAM_COLOR_GAIN_SNR_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SRAM_COLOR_GAIN_SNR_SC2_Sub[][PQ_IP_SRAM_COLOR_GAIN_SNR_SIZE_SC2_Sub]=
{
{//OFF
    0x00
},

{//GainSNR0
    0x10
},

};

//****************************************************
// SRAM_COLOR_GAIN_DNR
//****************************************************
code U8 MST_SRAM_COLOR_GAIN_DNR_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SRAM_COLOR_GAIN_DNR_SC2_Sub[][PQ_IP_SRAM_COLOR_GAIN_DNR_SIZE_SC2_Sub]=
{
{//OFF
    0x00
},

{//GainDNR0
    0x10
},

{//GainDNR1
    0x08
},

};

//****************************************************
// DNR_Y_LUMA_ADAPTIVE
//****************************************************
code U8 MST_DNR_Y_LUMA_ADAPTIVE_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_DNR_Y_LUMA_ADAPTIVE_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_DNR_Y_LUMA_ADAPTIVE_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// DNR_POSTTUNE
//****************************************************
code U8 MST_DNR_POSTTUNE_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_DNR_POSTTUNE_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_DNR_POSTTUNE_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// DNR_C
//****************************************************
code U8 MST_DNR_C_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_DNR_C_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_DNR_C_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK06_01_H), 0x0A, 0x00/*$OFF*/, 
                              0x0A/*$DC_1*/, 
                              0x0A/*$DC_1_1*/, 
                              0x0A/*$DC_2*/, 
                              0x0A/*$DC_2_1*/, 
                              0x0A/*$DC_3*/, 
                              0x0A/*$DC_3_1*/, 
                              0x0A/*$DC_4*/, 
                              0x0A/*$DC_4_1*/, 
                              0x0A/*$DC_5*/, 
                              0x0A/*$DC_5_1*/, 
                              0x0A/*$DC_6*/, 
                              0x0A/*$DC_6_1*/, 
                              0x0A/*$DC_7*/, 
                              0x0A/*$DC_7_1*/, 
                              0x0A/*$DC_8*/, 
                              0x0A/*$DC_8_1*/, 
                              0x0A/*$DC_9*/, 
                              0x0A/*$DC_9_1*/, 
                              0x0A/*$DC_10*/, 
                              0x0A/*$DC_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_06_L), 0x0A, 0x00/*$OFF*/, 
                              0x02/*$DC_1*/, 
                              0x02/*$DC_1_1*/, 
                              0x02/*$DC_2*/, 
                              0x02/*$DC_2_1*/, 
                              0x02/*$DC_3*/, 
                              0x02/*$DC_3_1*/, 
                              0x02/*$DC_4*/, 
                              0x02/*$DC_4_1*/, 
                              0x02/*$DC_5*/, 
                              0x02/*$DC_5_1*/, 
                              0x02/*$DC_6*/, 
                              0x02/*$DC_6_1*/, 
                              0x02/*$DC_7*/, 
                              0x02/*$DC_7_1*/, 
                              0x02/*$DC_8*/, 
                              0x02/*$DC_8_1*/, 
                              0x02/*$DC_9*/, 
                              0x02/*$DC_9_1*/, 
                              0x02/*$DC_10*/, 
                              0x02/*$DC_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_07_L), 0xE2, 0x00/*$OFF*/, 
                              0x20/*$DC_1*/, 
                              0x20/*$DC_1_1*/, 
                              0x20/*$DC_2*/, 
                              0x20/*$DC_2_1*/, 
                              0x40/*$DC_3*/, 
                              0x40/*$DC_3_1*/, 
                              0x40/*$DC_4*/, 
                              0x40/*$DC_4_1*/, 
                              0x40/*$DC_5*/, 
                              0x40/*$DC_5_1*/, 
                              0x40/*$DC_6*/, 
                              0x40/*$DC_6_1*/, 
                              0x60/*$DC_7*/, 
                              0x60/*$DC_7_1*/, 
                              0x60/*$DC_8*/, 
                              0x60/*$DC_8_1*/, 
                              0x80/*$DC_9*/, 
                              0x80/*$DC_9_1*/, 
                              0xA0/*$DC_10*/, 
                              0xA0/*$DC_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_07_H), 0xCC, 0x00/*$OFF*/, 
                              0x88/*$DC_1*/, 
                              0x88/*$DC_1_1*/, 
                              0x8C/*$DC_2*/, 
                              0x8C/*$DC_2_1*/, 
                              0x80/*$DC_3*/, 
                              0x80/*$DC_3_1*/, 
                              0x84/*$DC_4*/, 
                              0x84/*$DC_4_1*/, 
                              0x88/*$DC_5*/, 
                              0x88/*$DC_5_1*/, 
                              0x8C/*$DC_6*/, 
                              0x8C/*$DC_6_1*/, 
                              0x80/*$DC_7*/, 
                              0x80/*$DC_7_1*/, 
                              0x88/*$DC_8*/, 
                              0x88/*$DC_8_1*/, 
                              0x80/*$DC_9*/, 
                              0x80/*$DC_9_1*/, 
                              0x80/*$DC_10*/, 
                              0x80/*$DC_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_44_L), 0xFF, 0x00/*OFF*/, 
                              0XDF/*DC_1*/, 
                              0XFF/*DC_1_1*/, 
                              0XDF/*DC_2*/, 
                              0XFF/*DC_2_1*/, 
                              0XDF/*DC_3*/, 
                              0XFF/*DC_3_1*/, 
                              0XDF/*DC_4*/, 
                              0XFF/*DC_4_1*/, 
                              0XDF/*DC_5*/, 
                              0XFF/*DC_5_1*/, 
                              0XDF/*DC_6*/, 
                              0XFF/*DC_6_1*/, 
                              0XDF/*DC_7*/, 
                              0XFF/*DC_7_1*/, 
                              0XDF/*DC_8*/, 
                              0XFF/*DC_8_1*/, 
                              0XDF/*DC_9*/, 
                              0XFF/*DC_9_1*/, 
                              0XDF/*DC_10*/, 
                              0XFF/*DC_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_44_H), 0xFF, 0x00/*OFF*/, 
                              0X9B/*DC_1*/, 
                              0XBD/*DC_1_1*/, 
                              0X9B/*DC_2*/, 
                              0XBD/*DC_2_1*/, 
                              0X9B/*DC_3*/, 
                              0XBD/*DC_3_1*/, 
                              0X9B/*DC_4*/, 
                              0XBD/*DC_4_1*/, 
                              0X9B/*DC_5*/, 
                              0XBD/*DC_5_1*/, 
                              0X9B/*DC_6*/, 
                              0XBD/*DC_6_1*/, 
                              0X9B/*DC_7*/, 
                              0XBD/*DC_7_1*/, 
                              0X9B/*DC_8*/, 
                              0XBD/*DC_8_1*/, 
                              0X9B/*DC_9*/, 
                              0XBD/*DC_9_1*/, 
                              0X9B/*DC_10*/, 
                              0XBD/*DC_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_45_L), 0xFF, 0x00/*OFF*/, 
                              0X57/*DC_1*/, 
                              0X79/*DC_1_1*/, 
                              0X57/*DC_2*/, 
                              0X79/*DC_2_1*/, 
                              0X57/*DC_3*/, 
                              0X79/*DC_3_1*/, 
                              0X57/*DC_4*/, 
                              0X79/*DC_4_1*/, 
                              0X57/*DC_5*/, 
                              0X79/*DC_5_1*/, 
                              0X57/*DC_6*/, 
                              0X79/*DC_6_1*/, 
                              0X57/*DC_7*/, 
                              0X79/*DC_7_1*/, 
                              0X57/*DC_8*/, 
                              0X79/*DC_8_1*/, 
                              0X57/*DC_9*/, 
                              0X79/*DC_9_1*/, 
                              0X57/*DC_10*/, 
                              0X79/*DC_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_45_H), 0xFF, 0x00/*OFF*/, 
                              0X13/*DC_1*/, 
                              0X35/*DC_1_1*/, 
                              0X13/*DC_2*/, 
                              0X35/*DC_2_1*/, 
                              0X13/*DC_3*/, 
                              0X35/*DC_3_1*/, 
                              0X13/*DC_4*/, 
                              0X35/*DC_4_1*/, 
                              0X13/*DC_5*/, 
                              0X35/*DC_5_1*/, 
                              0X13/*DC_6*/, 
                              0X35/*DC_6_1*/, 
                              0X13/*DC_7*/, 
                              0X35/*DC_7_1*/, 
                              0X13/*DC_8*/, 
                              0X35/*DC_8_1*/, 
                              0X13/*DC_9*/, 
                              0X35/*DC_9_1*/, 
                              0X13/*DC_10*/, 
                              0X35/*DC_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_46_L), 0xFF, 0x00/*OFF*/, 
                              0X00/*DC_1*/, 
                              0X01/*DC_1_1*/, 
                              0X00/*DC_2*/, 
                              0X01/*DC_2_1*/, 
                              0X00/*DC_3*/, 
                              0X01/*DC_3_1*/, 
                              0X00/*DC_4*/, 
                              0X01/*DC_4_1*/, 
                              0X00/*DC_5*/, 
                              0X01/*DC_5_1*/, 
                              0X00/*DC_6*/, 
                              0X01/*DC_6_1*/, 
                              0X00/*DC_7*/, 
                              0X01/*DC_7_1*/, 
                              0X00/*DC_8*/, 
                              0X01/*DC_8_1*/, 
                              0X00/*DC_9*/, 
                              0X01/*DC_9_1*/, 
                              0X00/*DC_10*/, 
                              0X01/*DC_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_46_H), 0xFF, 0x00/*OFF*/, 
                              0X00/*DC_1*/, 
                              0X00/*DC_1_1*/, 
                              0X00/*DC_2*/, 
                              0X00/*DC_2_1*/, 
                              0X00/*DC_3*/, 
                              0X00/*DC_3_1*/, 
                              0X00/*DC_4*/, 
                              0X00/*DC_4_1*/, 
                              0X00/*DC_5*/, 
                              0X00/*DC_5_1*/, 
                              0X00/*DC_6*/, 
                              0X00/*DC_6_1*/, 
                              0X00/*DC_7*/, 
                              0X00/*DC_7_1*/, 
                              0X00/*DC_8*/, 
                              0X00/*DC_8_1*/, 
                              0X00/*DC_9*/, 
                              0X00/*DC_9_1*/, 
                              0X00/*DC_10*/, 
                              0X00/*DC_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_47_L), 0xFF, 0x00/*OFF*/, 
                              0X00/*DC_1*/, 
                              0X00/*DC_1_1*/, 
                              0X00/*DC_2*/, 
                              0X00/*DC_2_1*/, 
                              0X00/*DC_3*/, 
                              0X00/*DC_3_1*/, 
                              0X00/*DC_4*/, 
                              0X00/*DC_4_1*/, 
                              0X00/*DC_5*/, 
                              0X00/*DC_5_1*/, 
                              0X00/*DC_6*/, 
                              0X00/*DC_6_1*/, 
                              0X00/*DC_7*/, 
                              0X00/*DC_7_1*/, 
                              0X00/*DC_8*/, 
                              0X00/*DC_8_1*/, 
                              0X00/*DC_9*/, 
                              0X00/*DC_9_1*/, 
                              0X00/*DC_10*/, 
                              0X00/*DC_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_47_H), 0xFF, 0x00/*OFF*/, 
                              0X00/*DC_1*/, 
                              0X00/*DC_1_1*/, 
                              0X00/*DC_2*/, 
                              0X00/*DC_2_1*/, 
                              0X00/*DC_3*/, 
                              0X00/*DC_3_1*/, 
                              0X00/*DC_4*/, 
                              0X00/*DC_4_1*/, 
                              0X00/*DC_5*/, 
                              0X00/*DC_5_1*/, 
                              0X00/*DC_6*/, 
                              0X00/*DC_6_1*/, 
                              0X00/*DC_7*/, 
                              0X00/*DC_7_1*/, 
                              0X00/*DC_8*/, 
                              0X00/*DC_8_1*/, 
                              0X00/*DC_9*/, 
                              0X00/*DC_9_1*/, 
                              0X00/*DC_10*/, 
                              0X00/*DC_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_49_L), 0xFF, 0x00/*OFF*/, 
                              0X77/*DC_1*/, 
                              0X77/*DC_1_1*/, 
                              0X77/*DC_2*/, 
                              0X77/*DC_2_1*/, 
                              0X77/*DC_3*/, 
                              0X77/*DC_3_1*/, 
                              0X77/*DC_4*/, 
                              0X77/*DC_4_1*/, 
                              0X77/*DC_5*/, 
                              0X77/*DC_5_1*/, 
                              0X77/*DC_6*/, 
                              0X77/*DC_6_1*/, 
                              0X77/*DC_7*/, 
                              0X77/*DC_7_1*/, 
                              0X77/*DC_8*/, 
                              0X77/*DC_8_1*/, 
                              0X77/*DC_9*/, 
                              0X77/*DC_9_1*/, 
                              0X77/*DC_10*/, 
                              0X77/*DC_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_49_H), 0xFF, 0x00/*OFF*/, 
                              0X07/*DC_1*/, 
                              0X07/*DC_1_1*/, 
                              0X07/*DC_2*/, 
                              0X07/*DC_2_1*/, 
                              0X07/*DC_3*/, 
                              0X07/*DC_3_1*/, 
                              0X07/*DC_4*/, 
                              0X07/*DC_4_1*/, 
                              0X07/*DC_5*/, 
                              0X07/*DC_5_1*/, 
                              0X07/*DC_6*/, 
                              0X07/*DC_6_1*/, 
                              0X07/*DC_7*/, 
                              0X07/*DC_7_1*/, 
                              0X07/*DC_8*/, 
                              0X07/*DC_8_1*/, 
                              0X07/*DC_9*/, 
                              0X07/*DC_9_1*/, 
                              0X07/*DC_10*/, 
                              0X07/*DC_10_1*/, },
 { PQ_MAP_REG(REG_SC2_BK06_05_L), 0x0C, 0x00/*OFF*/, 
                              0X0C/*DC_1*/, 
                              0X0C/*DC_1_1*/, 
                              0X0C/*DC_2*/, 
                              0X0C/*DC_2_1*/, 
                              0X0C/*DC_3*/, 
                              0X0C/*DC_3_1*/, 
                              0X0C/*DC_4*/, 
                              0X0C/*DC_4_1*/, 
                              0X0C/*DC_5*/, 
                              0X0C/*DC_5_1*/, 
                              0X0C/*DC_6*/, 
                              0X0C/*DC_6_1*/, 
                              0X0C/*DC_7*/, 
                              0X0C/*DC_7_1*/, 
                              0X0C/*DC_8*/, 
                              0X0C/*DC_8_1*/, 
                              0X0C/*DC_9*/, 
                              0X0C/*DC_9_1*/, 
                              0X0C/*DC_10*/, 
                              0X0C/*DC_10_1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// HISDNR
//****************************************************
code U8 MST_HISDNR_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_HISDNR_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_HISDNR_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// PNR
//****************************************************
code U8 MST_PNR_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_PNR_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_PNR_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK05_02_L), 0x06, 0x00/*$OFF*/, 
                              0x00/*$PNR_PCCS_AVG_OFF*/, 
                              0x02/*$ON*/, 
                              0x02/*$AVG_ON*/, },
 { PQ_MAP_REG(REG_SC2_BK05_01_L), 0x40, 0x00/*OFF*/, 
                              0x00/*PNR_PCCS_AVG_OFF*/, 
                              0x00/*ON*/, 
                              0x40/*AVG_ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// PNR_Y
//****************************************************
code U8 MST_PNR_Y_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_PNR_Y_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_PNR_Y_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK05_01_L), 0x08, 0x00/*OFF*/, 
                              0x08/*PY1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// PNR_C
//****************************************************
code U8 MST_PNR_C_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_PNR_C_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_PNR_C_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK05_01_L), 0x04, 0x00/*OFF*/, 
                              0x04/*PC1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// PostCCS
//****************************************************
code U8 MST_PostCCS_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_PostCCS_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_PostCCS_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK05_02_L), 0x01, 0x00/*OFF*/, 
                              0x01/*PC_0*/, 
                              0x01/*PC_1*/, 
                              0x01/*PC_2*/, 
                              0x01/*PC_3*/, 
                              0x01/*PC_4*/, 
                              0x01/*PC_5*/, 
                              0x01/*PC_6*/, 
                              0x01/*PC_7*/, 
                              0x01/*PC_8*/, 
                              0x01/*PC_9*/, 
                              0x01/*PC_10*/, 
                              0x01/*PC_11*/, 
                              0x01/*PC_12*/, 
                              0x01/*PC_13*/, 
                              0x01/*PC_14*/, 
                              0x01/*PC_15*/, 
                              0x01/*PC_16*/, 
                              0x01/*PC_17*/, 
                              0x01/*PC_18*/, 
                              0x01/*PC_19*/, 
                              0x01/*PC_20*/, 
                              0x01/*PC_21*/, 
                              0x01/*PC_22*/, 
                              0x01/*PC_23*/, 
                              0x01/*PC_24*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// PostCCS_Smooth
//****************************************************
code U8 MST_PostCCS_Smooth_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_PostCCS_Smooth_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_PostCCS_Smooth_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// 420CUP
//****************************************************
code U8 MST_420CUP_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_420CUP_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_420CUP_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK21_77_L), 0x01, 0x00/*OFF*/, 
                              0x01/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// MADi
//****************************************************
code U8 MST_MADi_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK12_41_H), 0x70, 0x20 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK12_42_H), 0x03, 0x03 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_MADi_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_MADi_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK12_41_H), 0x07, 0x04/*$24_4R*/, 
                              0x04/*$24_2R*/, 
                              0x05/*$25_4R*/, 
                              0x05/*$25_2R*/, 
                              0x07/*$27_4R*/, 
                              0x07/*$27_2R*/, 
                              0x00/*$P_MODE8*/, 
                              0x01/*$P_MODE10*/, 
                              0x01/*$P_MODE_MOT10*/, 
                              0x01/*$P_MODE_MOT8*/, },
 { PQ_MAP_REG(REG_SC2_BK12_43_L), 0x02, 0x00/*24_4R*/, 
                              0x02/*24_2R*/, 
                              0x00/*25_4R*/, 
                              0x02/*25_2R*/, 
                              0x00/*27_4R*/, 
                              0x02/*27_2R*/, 
                              0x00/*P_MODE8*/, 
                              0x00/*P_MODE10*/, 
                              0x00/*P_MODE_MOT10*/, 
                              0x00/*P_MODE_MOT8*/, },
 { PQ_MAP_REG(REG_SC2_BK12_43_H), 0x02, 0x00/*24_4R*/, 
                              0x02/*24_2R*/, 
                              0x00/*25_4R*/, 
                              0x02/*25_2R*/, 
                              0x00/*27_4R*/, 
                              0x02/*27_2R*/, 
                              0x00/*P_MODE8*/, 
                              0x00/*P_MODE10*/, 
                              0x00/*P_MODE_MOT10*/, 
                              0x00/*P_MODE_MOT8*/, },
 { PQ_MAP_REG(REG_SC2_BK12_44_L), 0x03, 0x00/*$24_4R*/, 
                              0x00/*$24_2R*/, 
                              0x00/*$25_4R*/, 
                              0x00/*$25_2R*/, 
                              0x00/*$27_4R*/, 
                              0x00/*$27_2R*/, 
                              0x00/*$P_MODE8*/, 
                              0x00/*$P_MODE10*/, 
                              0x02/*$P_MODE_MOT10*/, 
                              0x01/*$P_MODE_MOT8*/, },
 { PQ_MAP_REG(REG_SC2_BK12_42_L), 0xFF, 0xAA/*24_4R*/, 
                              0xAA/*24_2R*/, 
                              0xBB/*25_4R*/, 
                              0xBB/*25_2R*/, 
                              0x88/*27_4R*/, 
                              0x88/*27_2R*/, 
                              0x88/*P_MODE8*/, 
                              0x99/*P_MODE10*/, 
                              0xBB/*P_MODE_MOT10*/, 
                              0xAA/*P_MODE_MOT8*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// MADi_Motion
//****************************************************
code U8 MST_MADi_Motion_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK22_31_L), 0x80, 0x80 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK22_31_H), 0x3F, 0x14 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK22_32_L), 0x4F, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK22_32_H), 0x03, 0x02 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK22_38_L), 0x80, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK22_39_L), 0x3F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK22_39_H), 0xFF, 0x88 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK22_3A_L), 0x87, 0x86 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK22_3A_H), 0x8F, 0x04 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK22_3C_L), 0x3F, 0x07 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK0A_11_L), 0xF0, 0xA0 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_MADi_Motion_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_MADi_Motion_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK22_31_L), 0x07, 0x03/*$MOT_4R_5*/, 
                              0x02/*$MOT_4R_6*/, 
                              0x02/*$MOT_4R_7*/, 
                              0x02/*$MOT_2R*/, 
                              0x02/*$MOT_PMODE*/, },
 { PQ_MAP_REG(REG_SC2_BK22_32_L), 0x80, 0x80/*$MOT_4R_5*/, 
                              0x80/*$MOT_4R_6*/, 
                              0x80/*$MOT_4R_7*/, 
                              0x00/*$MOT_2R*/, 
                              0x80/*$MOT_PMODE*/, },
 { PQ_MAP_REG(REG_SC2_BK22_33_L), 0x03, 0x03/*MOT_4R_5*/, 
                              0x03/*MOT_4R_6*/, 
                              0x03/*MOT_4R_7*/, 
                              0x03/*MOT_2R*/, 
                              0x00/*MOT_PMODE*/, },
 { PQ_MAP_REG(REG_SC2_BK22_38_L), 0x3F, 0x00/*$MOT_4R_5*/, 
                              0x03/*$MOT_4R_6*/, 
                              0x03/*$MOT_4R_7*/, 
                              0x00/*$MOT_2R*/, 
                              0x00/*$MOT_PMODE*/, },
 { PQ_MAP_REG(REG_SC2_BK22_38_H), 0x0F, 0x0B/*MOT_4R_5*/, 
                              0x0B/*MOT_4R_6*/, 
                              0x0F/*MOT_4R_7*/, 
                              0x08/*MOT_2R*/, 
                              0x08/*MOT_PMODE*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// MADi_ADP3x3
//****************************************************
code U8 MST_MADi_ADP3x3_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK22_4C_L), 0x1F, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_MADi_ADP3x3_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_MADi_ADP3x3_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK22_4C_L), 0xA0, 0x00/*$OFF*/, 
                              0xA0/*$ADP1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_4C_H), 0x80, 0x00/*OFF*/, 
                              0x80/*ADP1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_4D_L), 0xFF, 0x00/*OFF*/, 
                              0x14/*ADP1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_4D_H), 0x0F, 0x00/*OFF*/, 
                              0x04/*ADP1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_4E_L), 0x77, 0x00/*$OFF*/, 
                              0x35/*$ADP1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_4E_H), 0x3F, 0x00/*$OFF*/, 
                              0x37/*$ADP1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// MADi_MORPHO
//****************************************************
code U8 MST_MADi_MORPHO_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK22_4F_H), 0xF0, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_MADi_MORPHO_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_MADi_MORPHO_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK22_4F_L), 0xF3, 0x00/*$OFF*/, 
                              0xE3/*$M1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_4F_H), 0x0F, 0x00/*$OFF*/, 
                              0x04/*$M1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// MADi_DFK
//****************************************************
code U8 MST_MADi_DFK_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK22_40_L), 0x40, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_MADi_DFK_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_MADi_DFK_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK22_40_L), 0x9F, 0x00/*$OFF*/, 
                              0x9A/*$DFK1*/, 
                              0x93/*$DFK2*/, 
                              0x90/*$DFK3*/, 
                              0x90/*$DFK4*/, 
                              0x90/*$DFK5*/, 
                              0x90/*$DFK6*/, },
 { PQ_MAP_REG(REG_SC2_BK22_41_L), 0x1F, 0x00/*OFF*/, 
                              0x08/*DFK1*/, 
                              0x08/*DFK2*/, 
                              0x08/*DFK3*/, 
                              0x08/*DFK4*/, 
                              0x08/*DFK5*/, 
                              0x08/*DFK6*/, },
 { PQ_MAP_REG(REG_SC2_BK22_41_H), 0x0F, 0x00/*OFF*/, 
                              0x04/*DFK1*/, 
                              0x04/*DFK2*/, 
                              0x04/*DFK3*/, 
                              0x04/*DFK4*/, 
                              0x04/*DFK5*/, 
                              0x04/*DFK6*/, },
 { PQ_MAP_REG(REG_SC2_BK22_42_L), 0x1F, 0x00/*OFF*/, 
                              0x14/*DFK1*/, 
                              0x14/*DFK2*/, 
                              0x14/*DFK3*/, 
                              0x14/*DFK4*/, 
                              0x14/*DFK5*/, 
                              0x14/*DFK6*/, },
 { PQ_MAP_REG(REG_SC2_BK22_42_H), 0x0F, 0x00/*OFF*/, 
                              0x04/*DFK1*/, 
                              0x04/*DFK2*/, 
                              0x04/*DFK3*/, 
                              0x04/*DFK4*/, 
                              0x04/*DFK5*/, 
                              0x04/*DFK6*/, },
 { PQ_MAP_REG(REG_SC2_BK22_43_L), 0x3F, 0x00/*OFF*/, 
                              0x30/*DFK1*/, 
                              0x30/*DFK2*/, 
                              0x30/*DFK3*/, 
                              0x30/*DFK4*/, 
                              0x30/*DFK5*/, 
                              0x30/*DFK6*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// MADi_SST
//****************************************************
code U8 MST_MADi_SST_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_MADi_SST_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_MADi_SST_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK22_48_L), 0x9F, 0x00/*$OFF*/, 
                              0x93/*$SST1*/, 
                              0x93/*$SST2*/, 
                              0x93/*$SST3*/, 
                              0x93/*$SST4*/, 
                              0x93/*$SST5*/, 
                              0x93/*$SST6*/, 
                              0x93/*$SST_Rec1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_48_H), 0x37, 0x00/*$OFF*/, 
                              0x27/*$SST1*/, 
                              0x27/*$SST2*/, 
                              0x27/*$SST3*/, 
                              0x27/*$SST4*/, 
                              0x27/*$SST5*/, 
                              0x27/*$SST6*/, 
                              0x27/*$SST_Rec1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_49_L), 0xFF, 0x00/*$OFF*/, 
                              0xC0/*$SST1*/, 
                              0xC8/*$SST2*/, 
                              0xCF/*$SST3*/, 
                              0xD8/*$SST4*/, 
                              0xDF/*$SST5*/, 
                              0xFF/*$SST6*/, 
                              0xCF/*$SST_Rec1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_49_H), 0xFF, 0x00/*$OFF*/, 
                              0x85/*$SST1*/, 
                              0x85/*$SST2*/, 
                              0x85/*$SST3*/, 
                              0x85/*$SST4*/, 
                              0x85/*$SST5*/, 
                              0x85/*$SST6*/, 
                              0x85/*$SST_Rec1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_4A_L), 0x3F, 0x00/*OFF*/, 
                              0x04/*SST1*/, 
                              0x08/*SST2*/, 
                              0x14/*SST3*/, 
                              0x18/*SST4*/, 
                              0x20/*SST5*/, 
                              0x2F/*SST6*/, 
                              0x00/*SST_Rec1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_4A_H), 0xFF, 0x00/*$OFF*/, 
                              0x25/*$SST1*/, 
                              0x25/*$SST2*/, 
                              0x25/*$SST3*/, 
                              0x25/*$SST4*/, 
                              0x25/*$SST5*/, 
                              0x25/*$SST6*/, 
                              0x25/*$SST_Rec1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// MADi_EODiW
//****************************************************
code U8 MST_MADi_EODiW_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK22_5A_L), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_MADi_EODiW_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_MADi_EODiW_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK22_33_L), 0x80, 0x00/*OFF*/, 
                              0x00/*W1*/, 
                              0x00/*W2*/, 
                              0x80/*W3*/, },
 { PQ_MAP_REG(REG_SC2_BK22_58_L), 0x40, 0x00/*OFF*/, 
                              0x40/*W1*/, 
                              0x40/*W2*/, 
                              0x40/*W3*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// MADi_Force
//****************************************************
code U8 MST_MADi_Force_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_MADi_Force_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_MADi_Force_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK22_78_H), 0x8F, 0x00/*$OFF*/, 
                              0x8F/*$YC_FullMotion*/, 
                              0x80/*$YC_FullStill*/, 
                              0x8F/*$Y_FullMotion*/, 
                              0x80/*$Y_FullStill*/, 
                              0x00/*$C_FullMotion*/, 
                              0x00/*$C_FullStill*/, },
 { PQ_MAP_REG(REG_SC2_BK22_79_H), 0x8F, 0x00/*$OFF*/, 
                              0x8F/*$YC_FullMotion*/, 
                              0x80/*$YC_FullStill*/, 
                              0x00/*$Y_FullMotion*/, 
                              0x00/*$Y_FullStill*/, 
                              0x8F/*$C_FullMotion*/, 
                              0x80/*$C_FullStill*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// EODi
//****************************************************
code U8 MST_EODi_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK21_41_H), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_EODi_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_EODi_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK21_47_L), 0xFF, 0x00/*OFF*/, 
                              0x00/*SD_15*/, 
                              0x00/*SD_14*/, 
                              0x08/*SD_13*/, 
                              0x08/*SD_12*/, 
                              0x08/*SD_11*/, 
                              0x08/*SD_10*/, 
                              0x08/*SD_9*/, 
                              0x08/*SD_8*/, 
                              0x08/*SD_7*/, 
                              0x08/*SD_6*/, 
                              0x08/*SD_5*/, 
                              0x08/*SD_4*/, 
                              0x08/*SD_3*/, 
                              0x08/*SD_2*/, 
                              0x08/*SD_1*/, 
                              0x08/*HD_15*/, 
                              0x08/*HD_14*/, 
                              0x08/*HD_13*/, 
                              0x08/*HD_12*/, 
                              0x08/*HD_11*/, 
                              0x08/*HD_10*/, 
                              0x08/*HD_9*/, 
                              0x08/*HD_8*/, 
                              0x08/*HD_7*/, 
                              0x08/*HD_6*/, 
                              0x08/*HD_5*/, 
                              0x08/*HD_4*/, 
                              0x08/*HD_3*/, 
                              0x08/*HD_2*/, 
                              0x08/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_43_L), 0xFF, 0x00/*OFF*/, 
                              0x40/*SD_15*/, 
                              0x40/*SD_14*/, 
                              0x40/*SD_13*/, 
                              0x40/*SD_12*/, 
                              0x40/*SD_11*/, 
                              0x40/*SD_10*/, 
                              0x40/*SD_9*/, 
                              0x40/*SD_8*/, 
                              0x40/*SD_7*/, 
                              0x40/*SD_6*/, 
                              0x40/*SD_5*/, 
                              0x40/*SD_4*/, 
                              0x40/*SD_3*/, 
                              0x40/*SD_2*/, 
                              0x40/*SD_1*/, 
                              0x40/*HD_15*/, 
                              0x40/*HD_14*/, 
                              0x40/*HD_13*/, 
                              0x40/*HD_12*/, 
                              0x40/*HD_11*/, 
                              0x40/*HD_10*/, 
                              0x40/*HD_9*/, 
                              0x40/*HD_8*/, 
                              0x40/*HD_7*/, 
                              0x40/*HD_6*/, 
                              0x40/*HD_5*/, 
                              0x40/*HD_4*/, 
                              0x40/*HD_3*/, 
                              0x40/*HD_2*/, 
                              0x40/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_44_L), 0xFF, 0x00/*OFF*/, 
                              0x80/*SD_15*/, 
                              0x80/*SD_14*/, 
                              0x80/*SD_13*/, 
                              0x80/*SD_12*/, 
                              0x80/*SD_11*/, 
                              0x80/*SD_10*/, 
                              0x80/*SD_9*/, 
                              0x80/*SD_8*/, 
                              0x80/*SD_7*/, 
                              0x80/*SD_6*/, 
                              0x80/*SD_5*/, 
                              0x80/*SD_4*/, 
                              0x80/*SD_3*/, 
                              0x80/*SD_2*/, 
                              0x80/*SD_1*/, 
                              0x80/*HD_15*/, 
                              0x80/*HD_14*/, 
                              0x80/*HD_13*/, 
                              0x80/*HD_12*/, 
                              0x80/*HD_11*/, 
                              0x80/*HD_10*/, 
                              0x80/*HD_9*/, 
                              0x80/*HD_8*/, 
                              0x80/*HD_7*/, 
                              0x80/*HD_6*/, 
                              0x80/*HD_5*/, 
                              0x80/*HD_4*/, 
                              0x80/*HD_3*/, 
                              0x80/*HD_2*/, 
                              0x80/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_45_L), 0xFF, 0x00/*OFF*/, 
                              0xC0/*SD_15*/, 
                              0xC0/*SD_14*/, 
                              0xC0/*SD_13*/, 
                              0xC0/*SD_12*/, 
                              0xC0/*SD_11*/, 
                              0xC0/*SD_10*/, 
                              0xC0/*SD_9*/, 
                              0xC0/*SD_8*/, 
                              0xC0/*SD_7*/, 
                              0xC0/*SD_6*/, 
                              0xC0/*SD_5*/, 
                              0xC0/*SD_4*/, 
                              0xC0/*SD_3*/, 
                              0xC0/*SD_2*/, 
                              0xC0/*SD_1*/, 
                              0xC0/*HD_15*/, 
                              0xC0/*HD_14*/, 
                              0xC0/*HD_13*/, 
                              0xC0/*HD_12*/, 
                              0xC0/*HD_11*/, 
                              0xC0/*HD_10*/, 
                              0xC0/*HD_9*/, 
                              0xC0/*HD_8*/, 
                              0xC0/*HD_7*/, 
                              0xC0/*HD_6*/, 
                              0xC0/*HD_5*/, 
                              0xC0/*HD_4*/, 
                              0xC0/*HD_3*/, 
                              0xC0/*HD_2*/, 
                              0xC0/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_46_L), 0xFF, 0x00/*OFF*/, 
                              0xFF/*SD_15*/, 
                              0xFF/*SD_14*/, 
                              0xFF/*SD_13*/, 
                              0xFF/*SD_12*/, 
                              0xFF/*SD_11*/, 
                              0xFF/*SD_10*/, 
                              0xFF/*SD_9*/, 
                              0xFF/*SD_8*/, 
                              0xFF/*SD_7*/, 
                              0xFF/*SD_6*/, 
                              0xFF/*SD_5*/, 
                              0xFF/*SD_4*/, 
                              0xFF/*SD_3*/, 
                              0xFF/*SD_2*/, 
                              0xFF/*SD_1*/, 
                              0xFF/*HD_15*/, 
                              0xFF/*HD_14*/, 
                              0xFF/*HD_13*/, 
                              0xFF/*HD_12*/, 
                              0xFF/*HD_11*/, 
                              0xFF/*HD_10*/, 
                              0xFF/*HD_9*/, 
                              0xFF/*HD_8*/, 
                              0xFF/*HD_7*/, 
                              0xFF/*HD_6*/, 
                              0xFF/*HD_5*/, 
                              0xFF/*HD_4*/, 
                              0xFF/*HD_3*/, 
                              0xFF/*HD_2*/, 
                              0xFF/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_41_L), 0xFF, 0x00/*OFF*/, 
                              0x02/*SD_15*/, 
                              0x02/*SD_14*/, 
                              0x02/*SD_13*/, 
                              0x02/*SD_12*/, 
                              0x02/*SD_11*/, 
                              0x02/*SD_10*/, 
                              0x03/*SD_9*/, 
                              0x03/*SD_8*/, 
                              0x08/*SD_7*/, 
                              0x08/*SD_6*/, 
                              0x0C/*SD_5*/, 
                              0x12/*SD_4*/, 
                              0x20/*SD_3*/, 
                              0x32/*SD_2*/, 
                              0x03/*SD_1*/, 
                              0x03/*HD_15*/, 
                              0x08/*HD_14*/, 
                              0x12/*HD_13*/, 
                              0x12/*HD_12*/, 
                              0x12/*HD_11*/, 
                              0x12/*HD_10*/, 
                              0x16/*HD_9*/, 
                              0x20/*HD_8*/, 
                              0x20/*HD_7*/, 
                              0x20/*HD_6*/, 
                              0x28/*HD_5*/, 
                              0x2F/*HD_4*/, 
                              0x36/*HD_3*/, 
                              0x4F/*HD_2*/, 
                              0x20/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_40_L), 0x93, 0x00/*$OFF*/, 
                              0x03/*$SD_15*/, 
                              0x13/*$SD_14*/, 
                              0x13/*$SD_13*/, 
                              0x93/*$SD_12*/, 
                              0x13/*$SD_11*/, 
                              0x93/*$SD_10*/, 
                              0x93/*$SD_9*/, 
                              0x93/*$SD_8*/, 
                              0x93/*$SD_7*/, 
                              0x93/*$SD_6*/, 
                              0x93/*$SD_5*/, 
                              0x93/*$SD_4*/, 
                              0x93/*$SD_3*/, 
                              0x93/*$SD_2*/, 
                              0x92/*$SD_1*/, 
                              0x03/*$HD_15*/, 
                              0x03/*$HD_14*/, 
                              0x13/*$HD_13*/, 
                              0x93/*$HD_12*/, 
                              0x13/*$HD_11*/, 
                              0x93/*$HD_10*/, 
                              0x93/*$HD_9*/, 
                              0x93/*$HD_8*/, 
                              0x93/*$HD_7*/, 
                              0x93/*$HD_6*/, 
                              0x93/*$HD_5*/, 
                              0x93/*$HD_4*/, 
                              0x93/*$HD_3*/, 
                              0x93/*$HD_2*/, 
                              0x92/*$HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_48_L), 0xFF, 0x00/*OFF*/, 
                              0x50/*SD_15*/, 
                              0x50/*SD_14*/, 
                              0x50/*SD_13*/, 
                              0x50/*SD_12*/, 
                              0x50/*SD_11*/, 
                              0x50/*SD_10*/, 
                              0x50/*SD_9*/, 
                              0x50/*SD_8*/, 
                              0x50/*SD_7*/, 
                              0x50/*SD_6*/, 
                              0x50/*SD_5*/, 
                              0x50/*SD_4*/, 
                              0x50/*SD_3*/, 
                              0x50/*SD_2*/, 
                              0x50/*SD_1*/, 
                              0x50/*HD_15*/, 
                              0x50/*HD_14*/, 
                              0x50/*HD_13*/, 
                              0x50/*HD_12*/, 
                              0x50/*HD_11*/, 
                              0x50/*HD_10*/, 
                              0x50/*HD_9*/, 
                              0x50/*HD_8*/, 
                              0x50/*HD_7*/, 
                              0x50/*HD_6*/, 
                              0x50/*HD_5*/, 
                              0x50/*HD_4*/, 
                              0x50/*HD_3*/, 
                              0x50/*HD_2*/, 
                              0x50/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_48_H), 0xFF, 0x00/*OFF*/, 
                              0x0A/*SD_15*/, 
                              0x0A/*SD_14*/, 
                              0x0A/*SD_13*/, 
                              0x0A/*SD_12*/, 
                              0x0A/*SD_11*/, 
                              0x0A/*SD_10*/, 
                              0x0A/*SD_9*/, 
                              0x0A/*SD_8*/, 
                              0x0A/*SD_7*/, 
                              0x0A/*SD_6*/, 
                              0x0A/*SD_5*/, 
                              0x0A/*SD_4*/, 
                              0x0A/*SD_3*/, 
                              0x0A/*SD_2*/, 
                              0x0A/*SD_1*/, 
                              0x0A/*HD_15*/, 
                              0x0A/*HD_14*/, 
                              0x0A/*HD_13*/, 
                              0x0A/*HD_12*/, 
                              0x0A/*HD_11*/, 
                              0x0A/*HD_10*/, 
                              0x0A/*HD_9*/, 
                              0x0A/*HD_8*/, 
                              0x0A/*HD_7*/, 
                              0x0A/*HD_6*/, 
                              0x0A/*HD_5*/, 
                              0x0A/*HD_4*/, 
                              0x0A/*HD_3*/, 
                              0x0A/*HD_2*/, 
                              0x0A/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_49_L), 0xFF, 0x00/*OFF*/, 
                              0x28/*SD_15*/, 
                              0x28/*SD_14*/, 
                              0x28/*SD_13*/, 
                              0x28/*SD_12*/, 
                              0x28/*SD_11*/, 
                              0x28/*SD_10*/, 
                              0x28/*SD_9*/, 
                              0x28/*SD_8*/, 
                              0x28/*SD_7*/, 
                              0x28/*SD_6*/, 
                              0x28/*SD_5*/, 
                              0x28/*SD_4*/, 
                              0x28/*SD_3*/, 
                              0x28/*SD_2*/, 
                              0x28/*SD_1*/, 
                              0x28/*HD_15*/, 
                              0x28/*HD_14*/, 
                              0x28/*HD_13*/, 
                              0x28/*HD_12*/, 
                              0x28/*HD_11*/, 
                              0x28/*HD_10*/, 
                              0x28/*HD_9*/, 
                              0x28/*HD_8*/, 
                              0x28/*HD_7*/, 
                              0x28/*HD_6*/, 
                              0x28/*HD_5*/, 
                              0x28/*HD_4*/, 
                              0x28/*HD_3*/, 
                              0x28/*HD_2*/, 
                              0x28/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_49_H), 0xFF, 0x00/*OFF*/, 
                              0x0A/*SD_15*/, 
                              0x0A/*SD_14*/, 
                              0x0A/*SD_13*/, 
                              0x0A/*SD_12*/, 
                              0x0A/*SD_11*/, 
                              0x0A/*SD_10*/, 
                              0x0A/*SD_9*/, 
                              0x0A/*SD_8*/, 
                              0x0A/*SD_7*/, 
                              0x0A/*SD_6*/, 
                              0x0A/*SD_5*/, 
                              0x0A/*SD_4*/, 
                              0x0A/*SD_3*/, 
                              0x0A/*SD_2*/, 
                              0x0A/*SD_1*/, 
                              0x0A/*HD_15*/, 
                              0x0A/*HD_14*/, 
                              0x0A/*HD_13*/, 
                              0x0A/*HD_12*/, 
                              0x0A/*HD_11*/, 
                              0x0A/*HD_10*/, 
                              0x0A/*HD_9*/, 
                              0x0A/*HD_8*/, 
                              0x0A/*HD_7*/, 
                              0x0A/*HD_6*/, 
                              0x0A/*HD_5*/, 
                              0x0A/*HD_4*/, 
                              0x0A/*HD_3*/, 
                              0x0A/*HD_2*/, 
                              0x0A/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_4A_L), 0x07, 0x00/*OFF*/, 
                              0x02/*SD_15*/, 
                              0x02/*SD_14*/, 
                              0x02/*SD_13*/, 
                              0x02/*SD_12*/, 
                              0x02/*SD_11*/, 
                              0x02/*SD_10*/, 
                              0x02/*SD_9*/, 
                              0x02/*SD_8*/, 
                              0x02/*SD_7*/, 
                              0x02/*SD_6*/, 
                              0x02/*SD_5*/, 
                              0x02/*SD_4*/, 
                              0x02/*SD_3*/, 
                              0x02/*SD_2*/, 
                              0x02/*SD_1*/, 
                              0x02/*HD_15*/, 
                              0x02/*HD_14*/, 
                              0x02/*HD_13*/, 
                              0x02/*HD_12*/, 
                              0x02/*HD_11*/, 
                              0x02/*HD_10*/, 
                              0x02/*HD_9*/, 
                              0x02/*HD_8*/, 
                              0x02/*HD_7*/, 
                              0x02/*HD_6*/, 
                              0x02/*HD_5*/, 
                              0x02/*HD_4*/, 
                              0x02/*HD_3*/, 
                              0x02/*HD_2*/, 
                              0x02/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_4B_L), 0xFF, 0x00/*OFF*/, 
                              0x1E/*SD_15*/, 
                              0x1E/*SD_14*/, 
                              0x1E/*SD_13*/, 
                              0x1E/*SD_12*/, 
                              0x1E/*SD_11*/, 
                              0x1E/*SD_10*/, 
                              0x1E/*SD_9*/, 
                              0x1E/*SD_8*/, 
                              0x1E/*SD_7*/, 
                              0x1E/*SD_6*/, 
                              0x1E/*SD_5*/, 
                              0x1E/*SD_4*/, 
                              0x1E/*SD_3*/, 
                              0x1E/*SD_2*/, 
                              0x1E/*SD_1*/, 
                              0x7E/*HD_15*/, 
                              0x7E/*HD_14*/, 
                              0x7E/*HD_13*/, 
                              0x7E/*HD_12*/, 
                              0x7E/*HD_11*/, 
                              0x7E/*HD_10*/, 
                              0x7E/*HD_9*/, 
                              0x7E/*HD_8*/, 
                              0x7E/*HD_7*/, 
                              0x7E/*HD_6*/, 
                              0x7E/*HD_5*/, 
                              0x7E/*HD_4*/, 
                              0x7E/*HD_3*/, 
                              0x7E/*HD_2*/, 
                              0x7E/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_4B_H), 0xFF, 0x00/*OFF*/, 
                              0xF0/*SD_15*/, 
                              0xF0/*SD_14*/, 
                              0xF0/*SD_13*/, 
                              0xF0/*SD_12*/, 
                              0xF0/*SD_11*/, 
                              0xF0/*SD_10*/, 
                              0xF0/*SD_9*/, 
                              0xF0/*SD_8*/, 
                              0xF0/*SD_7*/, 
                              0xF0/*SD_6*/, 
                              0xF0/*SD_5*/, 
                              0xF0/*SD_4*/, 
                              0xF0/*SD_3*/, 
                              0xF0/*SD_2*/, 
                              0xF0/*SD_1*/, 
                              0xF0/*HD_15*/, 
                              0xF0/*HD_14*/, 
                              0xF0/*HD_13*/, 
                              0xF0/*HD_12*/, 
                              0xF0/*HD_11*/, 
                              0xF0/*HD_10*/, 
                              0xF0/*HD_9*/, 
                              0xF0/*HD_8*/, 
                              0xF0/*HD_7*/, 
                              0xF0/*HD_6*/, 
                              0xF0/*HD_5*/, 
                              0xF0/*HD_4*/, 
                              0xF0/*HD_3*/, 
                              0xF0/*HD_2*/, 
                              0xF0/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_4C_L), 0xFF, 0x00/*OFF*/, 
                              0x1E/*SD_15*/, 
                              0x1E/*SD_14*/, 
                              0x1E/*SD_13*/, 
                              0x1E/*SD_12*/, 
                              0x1E/*SD_11*/, 
                              0x1E/*SD_10*/, 
                              0x1E/*SD_9*/, 
                              0x1E/*SD_8*/, 
                              0x1E/*SD_7*/, 
                              0x1E/*SD_6*/, 
                              0x1E/*SD_5*/, 
                              0x1E/*SD_4*/, 
                              0x1E/*SD_3*/, 
                              0x1E/*SD_2*/, 
                              0x1E/*SD_1*/, 
                              0x1E/*HD_15*/, 
                              0x1E/*HD_14*/, 
                              0x1E/*HD_13*/, 
                              0x1E/*HD_12*/, 
                              0x1E/*HD_11*/, 
                              0x1E/*HD_10*/, 
                              0x1E/*HD_9*/, 
                              0x1E/*HD_8*/, 
                              0x1E/*HD_7*/, 
                              0x1E/*HD_6*/, 
                              0x1E/*HD_5*/, 
                              0x1E/*HD_4*/, 
                              0x1E/*HD_3*/, 
                              0x1E/*HD_2*/, 
                              0x1E/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_42_H), 0x07, 0x00/*OFF*/, 
                              0x04/*SD_15*/, 
                              0x04/*SD_14*/, 
                              0x04/*SD_13*/, 
                              0x04/*SD_12*/, 
                              0x04/*SD_11*/, 
                              0x04/*SD_10*/, 
                              0x04/*SD_9*/, 
                              0x04/*SD_8*/, 
                              0x04/*SD_7*/, 
                              0x04/*SD_6*/, 
                              0x04/*SD_5*/, 
                              0x04/*SD_4*/, 
                              0x04/*SD_3*/, 
                              0x04/*SD_2*/, 
                              0x04/*SD_1*/, 
                              0x06/*HD_15*/, 
                              0x06/*HD_14*/, 
                              0x06/*HD_13*/, 
                              0x06/*HD_12*/, 
                              0x06/*HD_11*/, 
                              0x06/*HD_10*/, 
                              0x06/*HD_9*/, 
                              0x06/*HD_8*/, 
                              0x06/*HD_7*/, 
                              0x06/*HD_6*/, 
                              0x06/*HD_5*/, 
                              0x06/*HD_4*/, 
                              0x06/*HD_3*/, 
                              0x06/*HD_2*/, 
                              0x06/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_50_L), 0x01, 0x00/*OFF*/, 
                              0x00/*SD_15*/, 
                              0x00/*SD_14*/, 
                              0x00/*SD_13*/, 
                              0x00/*SD_12*/, 
                              0x01/*SD_11*/, 
                              0x01/*SD_10*/, 
                              0x01/*SD_9*/, 
                              0x01/*SD_8*/, 
                              0x01/*SD_7*/, 
                              0x01/*SD_6*/, 
                              0x01/*SD_5*/, 
                              0x01/*SD_4*/, 
                              0x01/*SD_3*/, 
                              0x01/*SD_2*/, 
                              0x01/*SD_1*/, 
                              0x00/*HD_15*/, 
                              0x00/*HD_14*/, 
                              0x00/*HD_13*/, 
                              0x00/*HD_12*/, 
                              0x01/*HD_11*/, 
                              0x01/*HD_10*/, 
                              0x01/*HD_9*/, 
                              0x01/*HD_8*/, 
                              0x01/*HD_7*/, 
                              0x01/*HD_6*/, 
                              0x01/*HD_5*/, 
                              0x01/*HD_4*/, 
                              0x01/*HD_3*/, 
                              0x01/*HD_2*/, 
                              0x01/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_50_H), 0x3F, 0x00/*OFF*/, 
                              0x1E/*SD_15*/, 
                              0x1E/*SD_14*/, 
                              0x1E/*SD_13*/, 
                              0x1E/*SD_12*/, 
                              0x38/*SD_11*/, 
                              0x32/*SD_10*/, 
                              0x2F/*SD_9*/, 
                              0x1E/*SD_8*/, 
                              0x1E/*SD_7*/, 
                              0x16/*SD_6*/, 
                              0x16/*SD_5*/, 
                              0x12/*SD_4*/, 
                              0x0F/*SD_3*/, 
                              0x0A/*SD_2*/, 
                              0x1E/*SD_1*/, 
                              0x1E/*HD_15*/, 
                              0x1E/*HD_14*/, 
                              0x1E/*HD_13*/, 
                              0x1E/*HD_12*/, 
                              0x3E/*HD_11*/, 
                              0x2E/*HD_10*/, 
                              0x2E/*HD_9*/, 
                              0x1E/*HD_8*/, 
                              0x1E/*HD_7*/, 
                              0x16/*HD_6*/, 
                              0x16/*HD_5*/, 
                              0x12/*HD_4*/, 
                              0x0B/*HD_3*/, 
                              0x08/*HD_2*/, 
                              0x1E/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_51_L), 0x3F, 0x00/*OFF*/, 
                              0x16/*SD_15*/, 
                              0x16/*SD_14*/, 
                              0x16/*SD_13*/, 
                              0x16/*SD_12*/, 
                              0x30/*SD_11*/, 
                              0x28/*SD_10*/, 
                              0x22/*SD_9*/, 
                              0x16/*SD_8*/, 
                              0x16/*SD_7*/, 
                              0x12/*SD_6*/, 
                              0x12/*SD_5*/, 
                              0x0A/*SD_4*/, 
                              0x08/*SD_3*/, 
                              0x06/*SD_2*/, 
                              0x16/*SD_1*/, 
                              0x16/*HD_15*/, 
                              0x16/*HD_14*/, 
                              0x16/*HD_13*/, 
                              0x16/*HD_12*/, 
                              0x36/*HD_11*/, 
                              0x26/*HD_10*/, 
                              0x26/*HD_9*/, 
                              0x16/*HD_8*/, 
                              0x16/*HD_7*/, 
                              0x12/*HD_6*/, 
                              0x12/*HD_5*/, 
                              0x0A/*HD_4*/, 
                              0x08/*HD_3*/, 
                              0x06/*HD_2*/, 
                              0x16/*HD_1*/, },
 { PQ_MAP_REG(REG_SC2_BK21_51_H), 0x3F, 0x00/*OFF*/, 
                              0x12/*SD_15*/, 
                              0x12/*SD_14*/, 
                              0x12/*SD_13*/, 
                              0x12/*SD_12*/, 
                              0x24/*SD_11*/, 
                              0x20/*SD_10*/, 
                              0x1A/*SD_9*/, 
                              0x12/*SD_8*/, 
                              0x12/*SD_7*/, 
                              0x0A/*SD_6*/, 
                              0x0A/*SD_5*/, 
                              0x08/*SD_4*/, 
                              0x06/*SD_3*/, 
                              0x04/*SD_2*/, 
                              0x12/*SD_1*/, 
                              0x12/*HD_15*/, 
                              0x12/*HD_14*/, 
                              0x12/*HD_13*/, 
                              0x12/*HD_12*/, 
                              0x32/*HD_11*/, 
                              0x22/*HD_10*/, 
                              0x22/*HD_9*/, 
                              0x12/*HD_8*/, 
                              0x12/*HD_7*/, 
                              0x0A/*HD_6*/, 
                              0x0A/*HD_5*/, 
                              0x08/*HD_4*/, 
                              0x06/*HD_3*/, 
                              0x03/*HD_2*/, 
                              0x12/*HD_1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// Film
//****************************************************
code U8 MST_Film_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_Film_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_Film_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0A_32_H), 0x1F, 0x00/*OFF*/, 
                              0x02/*SD_2*/, 
                              0x01/*SD_1*/, 
                              0x03/*SD_3*/, 
                              0x02/*HD_2*/, 
                              0x01/*HD_1*/, 
                              0x03/*HD_3*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_39_H), 0x1F, 0x00/*OFF*/, 
                              0x0A/*SD_2*/, 
                              0x0A/*SD_1*/, 
                              0x0A/*SD_3*/, 
                              0x0A/*HD_2*/, 
                              0x0A/*HD_1*/, 
                              0x0A/*HD_3*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// Film32
//****************************************************
code U8 MST_Film32_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_Film32_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_Film32_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0A_10_H), 0x06, 0x04/*$OFF*/, 
                              0x06/*$SD_1*/, 
                              0x06/*$SD_2*/, 
                              0x06/*$SD_3*/, 
                              0x06/*$SD_4*/, 
                              0x06/*$SD_5*/, 
                              0x06/*$SD_6*/, 
                              0x06/*$SD_7*/, 
                              0x06/*$SD_8*/, 
                              0x06/*$SD_9*/, 
                              0x06/*$SD_10*/, 
                              0x06/*$HD_1*/, 
                              0x06/*$HD_2*/, 
                              0x06/*$HD_3*/, 
                              0x06/*$HD_4*/, 
                              0x06/*$HD_5*/, 
                              0x06/*$HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_12_L), 0xFF, 0x00/*OFF*/, 
                              0xD8/*SD_1*/, 
                              0xD8/*SD_2*/, 
                              0xD8/*SD_3*/, 
                              0xD8/*SD_4*/, 
                              0xD8/*SD_5*/, 
                              0xD8/*SD_6*/, 
                              0xD8/*SD_7*/, 
                              0xD8/*SD_8*/, 
                              0xD8/*SD_9*/, 
                              0x58/*SD_10*/, 
                              0x78/*HD_1*/, 
                              0x78/*HD_2*/, 
                              0x78/*HD_3*/, 
                              0x78/*HD_4*/, 
                              0x78/*HD_5*/, 
                              0x78/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_11_L), 0x0F, 0x00/*OFF*/, 
                              0xEE/*SD_1*/, 
                              0xEE/*SD_2*/, 
                              0xEE/*SD_3*/, 
                              0xEE/*SD_4*/, 
                              0xEE/*SD_5*/, 
                              0xEE/*SD_6*/, 
                              0xEE/*SD_7*/, 
                              0xEE/*SD_8*/, 
                              0xEE/*SD_9*/, 
                              0xEE/*SD_10*/, 
                              0xE1/*HD_1*/, 
                              0xEE/*HD_2*/, 
                              0xEE/*HD_3*/, 
                              0xEE/*HD_4*/, 
                              0xEE/*HD_5*/, 
                              0xEE/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_11_H), 0xFF, 0x00/*OFF*/, 
                              0x14/*SD_1*/, 
                              0x14/*SD_2*/, 
                              0x14/*SD_3*/, 
                              0x14/*SD_4*/, 
                              0x14/*SD_5*/, 
                              0x20/*SD_6*/, 
                              0x20/*SD_7*/, 
                              0x20/*SD_8*/, 
                              0x30/*SD_9*/, 
                              0x30/*SD_10*/, 
                              0x30/*HD_1*/, 
                              0x30/*HD_2*/, 
                              0x30/*HD_3*/, 
                              0x40/*HD_4*/, 
                              0x50/*HD_5*/, 
                              0xF0/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_1B_L), 0xF1, 0x00/*$OFF*/, 
                              0x51/*$SD_1*/, 
                              0x51/*$SD_2*/, 
                              0x51/*$SD_3*/, 
                              0x51/*$SD_4*/, 
                              0x51/*$SD_5*/, 
                              0x51/*$SD_6*/, 
                              0x51/*$SD_7*/, 
                              0x51/*$SD_8*/, 
                              0x51/*$SD_9*/, 
                              0x51/*$SD_10*/, 
                              0x50/*$HD_1*/, 
                              0x50/*$HD_2*/, 
                              0x50/*$HD_3*/, 
                              0x50/*$HD_4*/, 
                              0x50/*$HD_5*/, 
                              0x50/*$HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_1B_H), 0xFF, 0x00/*OFF*/, 
                              0x30/*SD_1*/, 
                              0x30/*SD_2*/, 
                              0x05/*SD_3*/, 
                              0x05/*SD_4*/, 
                              0x05/*SD_5*/, 
                              0x05/*SD_6*/, 
                              0x30/*SD_7*/, 
                              0x30/*SD_8*/, 
                              0x30/*SD_9*/, 
                              0x30/*SD_10*/, 
                              0x30/*HD_1*/, 
                              0x30/*HD_2*/, 
                              0x30/*HD_3*/, 
                              0x30/*HD_4*/, 
                              0x30/*HD_5*/, 
                              0x30/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_33_L), 0xFF, 0x00/*OFF*/, 
                              0x02/*SD_1*/, 
                              0x03/*SD_2*/, 
                              0x04/*SD_3*/, 
                              0x04/*SD_4*/, 
                              0x08/*SD_5*/, 
                              0x08/*SD_6*/, 
                              0x0C/*SD_7*/, 
                              0x0D/*SD_8*/, 
                              0x10/*SD_9*/, 
                              0x04/*SD_10*/, 
                              0x04/*HD_1*/, 
                              0x08/*HD_2*/, 
                              0x08/*HD_3*/, 
                              0x0C/*HD_4*/, 
                              0x0C/*HD_5*/, 
                              0x10/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_33_H), 0xFF, 0x00/*OFF*/, 
                              0x02/*SD_1*/, 
                              0x03/*SD_2*/, 
                              0x04/*SD_3*/, 
                              0x04/*SD_4*/, 
                              0x08/*SD_5*/, 
                              0x08/*SD_6*/, 
                              0x0C/*SD_7*/, 
                              0x0D/*SD_8*/, 
                              0x10/*SD_9*/, 
                              0x04/*SD_10*/, 
                              0x04/*HD_1*/, 
                              0x08/*HD_2*/, 
                              0x08/*HD_3*/, 
                              0x0C/*HD_4*/, 
                              0x0C/*HD_5*/, 
                              0x10/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_36_L), 0xFF, 0x00/*OFF*/, 
                              0x08/*SD_1*/, 
                              0x08/*SD_2*/, 
                              0x10/*SD_3*/, 
                              0x10/*SD_4*/, 
                              0x10/*SD_5*/, 
                              0x10/*SD_6*/, 
                              0x10/*SD_7*/, 
                              0x10/*SD_8*/, 
                              0x10/*SD_9*/, 
                              0x10/*SD_10*/, 
                              0x10/*HD_1*/, 
                              0x10/*HD_2*/, 
                              0x20/*HD_3*/, 
                              0x20/*HD_4*/, 
                              0x20/*HD_5*/, 
                              0x20/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_36_H), 0xFF, 0x00/*OFF*/, 
                              0x7f/*SD_1*/, 
                              0x7f/*SD_2*/, 
                              0x7f/*SD_3*/, 
                              0x7f/*SD_4*/, 
                              0x7f/*SD_5*/, 
                              0x7f/*SD_6*/, 
                              0x7f/*SD_7*/, 
                              0x7f/*SD_8*/, 
                              0x7f/*SD_9*/, 
                              0x7f/*SD_10*/, 
                              0x7f/*HD_1*/, 
                              0x7f/*HD_2*/, 
                              0x7f/*HD_3*/, 
                              0x7f/*HD_4*/, 
                              0xff/*HD_5*/, 
                              0xff/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_1C_L), 0xFF, 0x00/*OFF*/, 
                              0x00/*SD_1*/, 
                              0x00/*SD_2*/, 
                              0xff/*SD_3*/, 
                              0xff/*SD_4*/, 
                              0x80/*SD_5*/, 
                              0x80/*SD_6*/, 
                              0x00/*SD_7*/, 
                              0x00/*SD_8*/, 
                              0x00/*SD_9*/, 
                              0x00/*SD_10*/, 
                              0x80/*HD_1*/, 
                              0x00/*HD_2*/, 
                              0x00/*HD_3*/, 
                              0x00/*HD_4*/, 
                              0x00/*HD_5*/, 
                              0x80/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_1C_H), 0xFF, 0x00/*OFF*/, 
                              0x08/*SD_1*/, 
                              0x08/*SD_2*/, 
                              0x03/*SD_3*/, 
                              0x03/*SD_4*/, 
                              0x05/*SD_5*/, 
                              0x05/*SD_6*/, 
                              0x08/*SD_7*/, 
                              0x08/*SD_8*/, 
                              0x08/*SD_9*/, 
                              0x08/*SD_10*/, 
                              0x05/*HD_1*/, 
                              0x08/*HD_2*/, 
                              0x08/*HD_3*/, 
                              0x08/*HD_4*/, 
                              0x10/*HD_5*/, 
                              0x05/*HD_6*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// Film22
//****************************************************
code U8 MST_Film22_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_Film22_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_Film22_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0A_10_H), 0x01, 0x08/*OFF*/, 
                              0x09/*SD_1*/, 
                              0x09/*SD_2*/, 
                              0x09/*SD_3*/, 
                              0x09/*SD_4*/, 
                              0x09/*SD_5*/, 
                              0x09/*SD_6*/, 
                              0x09/*SD_7*/, 
                              0x09/*SD_8*/, 
                              0x09/*SD_9*/, 
                              0x09/*SD_10*/, 
                              0x09/*HD_1*/, 
                              0x09/*HD_2*/, 
                              0x09/*HD_3*/, 
                              0x09/*HD_4*/, 
                              0x09/*HD_5*/, 
                              0x09/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_35_L), 0xFF, 0x00/*OFF*/, 
                              0x00/*SD_1*/, 
                              0x02/*SD_2*/, 
                              0x04/*SD_3*/, 
                              0x08/*SD_4*/, 
                              0x0A/*SD_5*/, 
                              0x0C/*SD_6*/, 
                              0x10/*SD_7*/, 
                              0x18/*SD_8*/, 
                              0x20/*SD_9*/, 
                              0x20/*SD_10*/, 
                              0x20/*HD_1*/, 
                              0x20/*HD_2*/, 
                              0x20/*HD_3*/, 
                              0x20/*HD_4*/, 
                              0x20/*HD_5*/, 
                              0x20/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_35_H), 0xFF, 0x00/*OFF*/, 
                              0x02/*SD_1*/, 
                              0x02/*SD_2*/, 
                              0x02/*SD_3*/, 
                              0x02/*SD_4*/, 
                              0x02/*SD_5*/, 
                              0x03/*SD_6*/, 
                              0x03/*SD_7*/, 
                              0x03/*SD_8*/, 
                              0x04/*SD_9*/, 
                              0x04/*SD_10*/, 
                              0x04/*HD_1*/, 
                              0x05/*HD_2*/, 
                              0x06/*HD_3*/, 
                              0x07/*HD_4*/, 
                              0x07/*HD_5*/, 
                              0x07/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_1D_L), 0xFF, 0x00/*OFF*/, 
                              0x14/*SD_1*/, 
                              0x20/*SD_2*/, 
                              0x20/*SD_3*/, 
                              0x20/*SD_4*/, 
                              0x20/*SD_5*/, 
                              0x20/*SD_6*/, 
                              0x20/*SD_7*/, 
                              0x30/*SD_8*/, 
                              0x30/*SD_9*/, 
                              0x30/*SD_10*/, 
                              0x14/*HD_1*/, 
                              0x14/*HD_2*/, 
                              0x14/*HD_3*/, 
                              0x14/*HD_4*/, 
                              0x20/*HD_5*/, 
                              0x30/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_22_H), 0x80, 0x00/*OFF*/, 
                              0x80/*SD_1*/, 
                              0x80/*SD_2*/, 
                              0x80/*SD_3*/, 
                              0x80/*SD_4*/, 
                              0x80/*SD_5*/, 
                              0x80/*SD_6*/, 
                              0x80/*SD_7*/, 
                              0x80/*SD_8*/, 
                              0x80/*SD_9*/, 
                              0x80/*SD_10*/, 
                              0x80/*HD_1*/, 
                              0x80/*HD_2*/, 
                              0x80/*HD_3*/, 
                              0x80/*HD_4*/, 
                              0x80/*HD_5*/, 
                              0x80/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_22_L), 0xFF, 0x00/*$OFF*/, 
                              0x44/*$SD_1*/, 
                              0x44/*$SD_2*/, 
                              0x44/*$SD_3*/, 
                              0x44/*$SD_4*/, 
                              0x44/*$SD_5*/, 
                              0x44/*$SD_6*/, 
                              0x44/*$SD_7*/, 
                              0x44/*$SD_8*/, 
                              0x44/*$SD_9*/, 
                              0x44/*$SD_10*/, 
                              0x44/*$HD_1*/, 
                              0x44/*$HD_2*/, 
                              0x44/*$HD_3*/, 
                              0x44/*$HD_4*/, 
                              0x44/*$HD_5*/, 
                              0x44/*$HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_34_L), 0xFF, 0x00/*OFF*/, 
                              0x03/*SD_1*/, 
                              0x04/*SD_2*/, 
                              0x04/*SD_3*/, 
                              0x04/*SD_4*/, 
                              0x04/*SD_5*/, 
                              0x06/*SD_6*/, 
                              0x06/*SD_7*/, 
                              0x08/*SD_8*/, 
                              0x08/*SD_9*/, 
                              0x10/*SD_10*/, 
                              0x03/*HD_1*/, 
                              0x04/*HD_2*/, 
                              0x08/*HD_3*/, 
                              0x10/*HD_4*/, 
                              0x10/*HD_5*/, 
                              0x10/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_34_H), 0xFF, 0x00/*OFF*/, 
                              0x03/*SD_1*/, 
                              0x04/*SD_2*/, 
                              0x04/*SD_3*/, 
                              0x04/*SD_4*/, 
                              0x04/*SD_5*/, 
                              0x06/*SD_6*/, 
                              0x06/*SD_7*/, 
                              0x08/*SD_8*/, 
                              0x08/*SD_9*/, 
                              0x10/*SD_10*/, 
                              0x03/*HD_1*/, 
                              0x04/*HD_2*/, 
                              0x08/*HD_3*/, 
                              0x10/*HD_4*/, 
                              0x10/*HD_5*/, 
                              0x10/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_37_L), 0xFF, 0x00/*OFF*/, 
                              0x08/*SD_1*/, 
                              0x08/*SD_2*/, 
                              0x08/*SD_3*/, 
                              0x08/*SD_4*/, 
                              0x08/*SD_5*/, 
                              0x08/*SD_6*/, 
                              0x08/*SD_7*/, 
                              0x20/*SD_8*/, 
                              0x08/*SD_9*/, 
                              0x20/*SD_10*/, 
                              0x10/*HD_1*/, 
                              0x10/*HD_2*/, 
                              0x10/*HD_3*/, 
                              0x30/*HD_4*/, 
                              0x30/*HD_5*/, 
                              0x30/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_37_H), 0xFF, 0x00/*OFF*/, 
                              0x7f/*SD_1*/, 
                              0x7f/*SD_2*/, 
                              0x7f/*SD_3*/, 
                              0x7f/*SD_4*/, 
                              0x7f/*SD_5*/, 
                              0x7f/*SD_6*/, 
                              0x7f/*SD_7*/, 
                              0x7f/*SD_8*/, 
                              0x7f/*SD_9*/, 
                              0x7f/*SD_10*/, 
                              0xAF/*HD_1*/, 
                              0xAF/*HD_2*/, 
                              0xAF/*HD_3*/, 
                              0xAF/*HD_4*/, 
                              0xAF/*HD_5*/, 
                              0xAF/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_3E_L), 0xFF, 0x00/*OFF*/, 
                              0xFF/*SD_1*/, 
                              0xFF/*SD_2*/, 
                              0xFF/*SD_3*/, 
                              0xFF/*SD_4*/, 
                              0xFF/*SD_5*/, 
                              0xFF/*SD_6*/, 
                              0xFF/*SD_7*/, 
                              0xFF/*SD_8*/, 
                              0xFF/*SD_9*/, 
                              0xFF/*SD_10*/, 
                              0xFF/*HD_1*/, 
                              0xFF/*HD_2*/, 
                              0xFF/*HD_3*/, 
                              0xFF/*HD_4*/, 
                              0xFF/*HD_5*/, 
                              0xFF/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_3E_H), 0xFF, 0x00/*OFF*/, 
                              0xFF/*SD_1*/, 
                              0xFF/*SD_2*/, 
                              0xFF/*SD_3*/, 
                              0xFF/*SD_4*/, 
                              0xFF/*SD_5*/, 
                              0xFF/*SD_6*/, 
                              0xFF/*SD_7*/, 
                              0xFF/*SD_8*/, 
                              0xFF/*SD_9*/, 
                              0xFF/*SD_10*/, 
                              0xFF/*HD_1*/, 
                              0xFF/*HD_2*/, 
                              0xFF/*HD_3*/, 
                              0xFF/*HD_4*/, 
                              0xFF/*HD_5*/, 
                              0xFF/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_3C_L), 0xFF, 0xFF/*OFF*/, 
                              0x66/*SD_1*/, 
                              0x66/*SD_2*/, 
                              0x06/*SD_3*/, 
                              0x06/*SD_4*/, 
                              0x66/*SD_5*/, 
                              0x06/*SD_6*/, 
                              0x06/*SD_7*/, 
                              0x66/*SD_8*/, 
                              0x06/*SD_9*/, 
                              0x06/*SD_10*/, 
                              0x66/*HD_1*/, 
                              0x06/*HD_2*/, 
                              0x06/*HD_3*/, 
                              0x66/*HD_4*/, 
                              0x06/*HD_5*/, 
                              0x66/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_3C_H), 0xFF, 0xFF/*OFF*/, 
                              0x66/*SD_1*/, 
                              0x66/*SD_2*/, 
                              0x00/*SD_3*/, 
                              0x00/*SD_4*/, 
                              0x66/*SD_5*/, 
                              0x00/*SD_6*/, 
                              0x00/*SD_7*/, 
                              0x66/*SD_8*/, 
                              0x00/*SD_9*/, 
                              0x00/*SD_10*/, 
                              0x66/*HD_1*/, 
                              0x00/*HD_2*/, 
                              0x00/*HD_3*/, 
                              0x66/*HD_4*/, 
                              0x00/*HD_5*/, 
                              0x66/*HD_6*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// Film_any
//****************************************************
code U8 MST_Film_any_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK0A_28_H), 0x40, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK0A_29_H), 0xFF, 0x08 },
 { PQ_MAP_REG(REG_SC2_BK0A_57_L), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK0A_58_L), 0xFF, 0xa0 },
 { PQ_MAP_REG(REG_SC2_BK22_7D_L), 0xFF, 0x28 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_Film_any_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_Film_any_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0A_28_H), 0x80, 0x00/*$OFF*/, 
                              0x80/*$SD_1*/, 
                              0x80/*$SD_2*/, 
                              0x80/*$SD_3*/, 
                              0x80/*$SD_4*/, 
                              0x80/*$SD_5*/, 
                              0x80/*$SD_6*/, 
                              0x80/*$SD_7*/, 
                              0x80/*$SD_8*/, 
                              0x80/*$SD_9*/, 
                              0x80/*$SD_10*/, 
                              0x80/*$HD_1*/, 
                              0x80/*$HD_2*/, 
                              0x80/*$HD_3*/, 
                              0x80/*$HD_4*/, 
                              0x80/*$HD_5*/, 
                              0x80/*$HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_29_L), 0xFF, 0x08/*OFF*/, 
                              0x04/*SD_1*/, 
                              0x05/*SD_2*/, 
                              0x06/*SD_3*/, 
                              0x07/*SD_4*/, 
                              0x08/*SD_5*/, 
                              0x09/*SD_6*/, 
                              0x0a/*SD_7*/, 
                              0x0b/*SD_8*/, 
                              0x0c/*SD_9*/, 
                              0x0d/*SD_10*/, 
                              0x07/*HD_1*/, 
                              0x08/*HD_2*/, 
                              0x09/*HD_3*/, 
                              0x0a/*HD_4*/, 
                              0x0b/*HD_5*/, 
                              0x0c/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_57_H), 0xFF, 0x80/*OFF*/, 
                              0x80/*SD_1*/, 
                              0x80/*SD_2*/, 
                              0x80/*SD_3*/, 
                              0x80/*SD_4*/, 
                              0x80/*SD_5*/, 
                              0x80/*SD_6*/, 
                              0x80/*SD_7*/, 
                              0x80/*SD_8*/, 
                              0x80/*SD_9*/, 
                              0x80/*SD_10*/, 
                              0xa0/*HD_1*/, 
                              0xa0/*HD_2*/, 
                              0xa0/*HD_3*/, 
                              0xa0/*HD_4*/, 
                              0xa0/*HD_5*/, 
                              0xa0/*HD_6*/, },
 { PQ_MAP_REG(REG_SC2_BK0A_58_H), 0xFF, 0xa0/*OFF*/, 
                              0xa0/*SD_1*/, 
                              0xa0/*SD_2*/, 
                              0xa0/*SD_3*/, 
                              0xa0/*SD_4*/, 
                              0xa0/*SD_5*/, 
                              0xa0/*SD_6*/, 
                              0xa0/*SD_7*/, 
                              0xa0/*SD_8*/, 
                              0xa0/*SD_9*/, 
                              0xa0/*SD_10*/, 
                              0xc0/*HD_1*/, 
                              0xc0/*HD_2*/, 
                              0xc0/*HD_3*/, 
                              0xc0/*HD_4*/, 
                              0xc0/*HD_5*/, 
                              0xc0/*HD_6*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// DIPF
//****************************************************
code U8 MST_DIPF_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK22_46_L), 0x80, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK22_46_H), 0x40, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_DIPF_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_DIPF_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK22_44_L), 0xCF, 0x00/*$OFF*/, 
                              0xC7/*$DIPF1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_44_H), 0x1F, 0x00/*OFF*/, 
                              0x18/*DIPF1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_45_L), 0xFF, 0x00/*$OFF*/, 
                              0x88/*$DIPF1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_46_L), 0x0F, 0x00/*$OFF*/, 
                              0x05/*$DIPF1*/, },
 { PQ_MAP_REG(REG_SC2_BK22_46_H), 0x1F, 0x00/*$OFF*/, 
                              0x0B/*$DIPF1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VCLPF
//****************************************************
code U8 MST_VCLPF_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VCLPF_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VCLPF_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK26_50_L), 0x02, 0x00/*OFF*/, 
                              0x02/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// Spike_NR
//****************************************************
code U8 MST_Spike_NR_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_Spike_NR_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_Spike_NR_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK26_50_L), 0x10, 0x00/*OFF*/, 
                              0x10/*S1*/, 
                              0x10/*S2*/, 
                              0x10/*S3*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SPF
//****************************************************
code U8 MST_SPF_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SPF_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_SPF_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SPF_DBK
//****************************************************
code U8 MST_SPF_DBK_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SPF_DBK_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_SPF_DBK_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0C_10_L), 0x70, 0x00/*$OFF*/, 
                              0x70/*$E2S2*/, },
 { PQ_MAP_REG(REG_SC2_BK0C_11_H), 0x0F, 0x00/*OFF*/, 
                              0x0F/*E2S2*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SPF_DBK_BKN
//****************************************************
code U8 MST_SPF_DBK_BKN_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK0C_43_L), 0x1C, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK0C_42_H), 0x03, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0C_44_H), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SPF_DBK_BKN_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_SPF_DBK_BKN_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0C_43_L), 0x63, 0x00/*$OFF*/, 
                              0x63/*$T0*/, },
 { PQ_MAP_REG(REG_SC2_BK0C_46_L), 0x33, 0x00/*$OFF*/, 
                              0x12/*$T0*/, },
 { PQ_MAP_REG(REG_SC2_BK0C_3B_L), 0x1F, 0x00/*OFF*/, 
                              0x09/*T0*/, },
 { PQ_MAP_REG(REG_SC2_BK0C_3B_H), 0x1F, 0x00/*OFF*/, 
                              0x07/*T0*/, },
 { PQ_MAP_REG(REG_SC2_BK0C_46_H), 0x0C, 0x00/*OFF*/, 
                              0x04/*T0*/, },
 { PQ_MAP_REG(REG_SC2_BK0C_3C_L), 0x07, 0x00/*OFF*/, 
                              0x07/*T0*/, },
 { PQ_MAP_REG(REG_SC2_BK0C_43_H), 0xFF, 0x00/*OFF*/, 
                              0x03/*T0*/, },
 { PQ_MAP_REG(REG_SC2_BK0C_44_L), 0x76, 0x00/*$OFF*/, 
                              0x42/*$T0*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SPF_DBK_MR
//****************************************************
code U8 MST_SPF_DBK_MR_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SPF_DBK_MR_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_SPF_DBK_MR_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0C_11_H), 0x20, 0x00/*OFF*/, 
                              0x20/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SPF_SNR
//****************************************************
code U8 MST_SPF_SNR_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SPF_SNR_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_SPF_SNR_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0C_30_L), 0x10, 0x00/*OFF*/, 
                              0x10/*E1S1*/, 
                              0x10/*E1S2*/, 
                              0x10/*E2S1*/, 
                              0x10/*E3S1*/, 
                              0x10/*E4S1*/, 
                              0x10/*E4S2*/, 
                              0x10/*E4S3*/, },
 { PQ_MAP_REG(REG_SC2_BK0C_31_H), 0x0F, 0x00/*OFF*/, 
                              0x06/*E1S1*/, 
                              0x08/*E1S2*/, 
                              0x08/*E2S1*/, 
                              0x04/*E3S1*/, 
                              0x04/*E4S1*/, 
                              0x06/*E4S2*/, 
                              0x08/*E4S3*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SPF_SNR_MR
//****************************************************
code U8 MST_SPF_SNR_MR_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK0C_30_L), 0x40, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SPF_SNR_MR_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_SPF_SNR_MR_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0C_30_L), 0x20, 0x00/*$OFF*/, 
                              0x20/*$ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SPF_MR_LPF
//****************************************************
code U8 MST_SPF_MR_LPF_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SPF_MR_LPF_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_SPF_MR_LPF_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0C_51_L), 0x10, 0x00/*OFF*/, 
                              0x10/*LPF3x3*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SPF_NMR_Y
//****************************************************
code U8 MST_SPF_NMR_Y_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SPF_NMR_Y_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_SPF_NMR_Y_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0C_50_L), 0x10, 0x00/*OFF*/, 
                              0x10/*S1*/, 
                              0x10/*S2*/, 
                              0x10/*S3*/, },
 { PQ_MAP_REG(REG_SC2_BK0C_54_H), 0x3F, 0x00/*OFF*/, 
                              0x02/*S1*/, 
                              0x04/*S2*/, 
                              0x06/*S3*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SPF_NMR_Y_MR
//****************************************************
code U8 MST_SPF_NMR_Y_MR_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SPF_NMR_Y_MR_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_SPF_NMR_Y_MR_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0C_50_L), 0x20, 0x00/*OFF*/, 
                              0x20/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SPF_NMR_C
//****************************************************
code U8 MST_SPF_NMR_C_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SPF_NMR_C_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_SPF_NMR_C_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0C_50_L), 0x40, 0x00/*OFF*/, 
                              0x40/*S1*/, 
                              0x40/*S2*/, 
                              0x40/*S3*/, },
 { PQ_MAP_REG(REG_SC2_BK0C_53_H), 0x3F, 0x00/*OFF*/, 
                              0x02/*S1*/, 
                              0x04/*S2*/, 
                              0x06/*S3*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// DMS
//****************************************************
code U8 MST_DMS_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_DMS_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_DMS_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK26_14_L), 0x01, 0x00/*OFF*/, 
                              0x01/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// DMS_H
//****************************************************
code U8 MST_DMS_H_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK26_16_H), 0x07, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_DMS_H_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_DMS_H_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK26_14_L), 0x02, 0x00/*OFF*/, 
                              0x02/*S1*/, 
                              0x02/*S2*/, 
                              0x02/*S3*/, },
 { PQ_MAP_REG(REG_SC2_BK26_14_H), 0x1F, 0x00/*OFF*/, 
                              0x0C/*S1*/, 
                              0x10/*S2*/, 
                              0x15/*S3*/, },
 { PQ_MAP_REG(REG_SC2_BK26_15_L), 0xFF, 0x00/*OFF*/, 
                              0x10/*S1*/, 
                              0x10/*S2*/, 
                              0x10/*S3*/, },
 { PQ_MAP_REG(REG_SC2_BK26_15_H), 0x03, 0x00/*OFF*/, 
                              0x01/*S1*/, 
                              0x01/*S2*/, 
                              0x01/*S3*/, },
 { PQ_MAP_REG(REG_SC2_BK26_16_L), 0xFF, 0x00/*OFF*/, 
                              0x10/*S1*/, 
                              0x00/*S2*/, 
                              0x00/*S3*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// DMS_V
//****************************************************
code U8 MST_DMS_V_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK26_1B_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK26_1B_H), 0x07, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_DMS_V_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_DMS_V_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK26_14_L), 0x04, 0x00/*OFF*/, 
                              0x04/*S1*/, 
                              0x04/*S2*/, },
 { PQ_MAP_REG(REG_SC2_BK26_17_L), 0xFF, 0x00/*OFF*/, 
                              0x10/*S1*/, 
                              0x20/*S2*/, },
 { PQ_MAP_REG(REG_SC2_BK26_17_H), 0x07, 0x00/*OFF*/, 
                              0x01/*S1*/, 
                              0x01/*S2*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// DMS_V_12L
//****************************************************
code U8 MST_DMS_V_12L_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_DMS_V_12L_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_DMS_V_12L_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VSP_Y
//****************************************************
code U8 MST_VSP_Y_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VSP_Y_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VSP_Y_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK23_33_L), 0x20, 0x00/*Bypass*/, 
                              0x00/*Bilinear*/, 
                              0x00/*SRAM_3_4Tap*/, 
                              0x00/*SRAM_4_4Tap*/, 
                              0x20/*SRAM_3_6Tap*/, 
                              0x20/*SRAM_4_6Tap*/, },
 { PQ_MAP_REG(REG_SC2_BK23_2B_H), 0xC1, 0x00/*$Bypass*/, 
                              0x01/*$Bilinear*/, 
                              0x40/*$SRAM_3_4Tap*/, 
                              0xC0/*$SRAM_4_4Tap*/, 
                              0x40/*$SRAM_3_6Tap*/, 
                              0xC0/*$SRAM_4_6Tap*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VSP_C
//****************************************************
code U8 MST_VSP_C_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VSP_C_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VSP_C_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK23_2B_H), 0x3E, 0x00/*$Bypass*/, 
                              0x02/*$Bilinear*/, 
                              0x04/*$C_SRAM_1*/, 
                              0x06/*$C_SRAM_2*/, 
                              0x08/*$C_SRAM_3*/, 
                              0x0A/*$C_SRAM_4*/, 
                              0x10/*$SRAM_3_4Tap*/, 
                              0x30/*$SRAM_4_4Tap*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VSP_CoRing
//****************************************************
code U8 MST_VSP_CoRing_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VSP_CoRing_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VSP_CoRing_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK23_2C_H), 0x0C, 0x00/*$OFF*/, 
                              0x08/*$Y_Coring_1*/, 
                              0x08/*$Y_Coring_2*/, 
                              0x08/*$Y_Coring_3*/, 
                              0x08/*$Y_Coring_4*/, 
                              0x08/*$Y_Coring_5*/, },
 { PQ_MAP_REG(REG_SC2_BK23_2E_L), 0xFF, 0x00/*OFF*/, 
                              0x01/*Y_Coring_1*/, 
                              0x02/*Y_Coring_2*/, 
                              0x03/*Y_Coring_3*/, 
                              0x04/*Y_Coring_4*/, 
                              0x05/*Y_Coring_5*/, },
 { PQ_MAP_REG(REG_SC2_BK23_2E_H), 0xFF, 0x00/*OFF*/, 
                              0x01/*Y_Coring_1*/, 
                              0x02/*Y_Coring_2*/, 
                              0x03/*Y_Coring_3*/, 
                              0x04/*Y_Coring_4*/, 
                              0x05/*Y_Coring_5*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VSP_DeRing
//****************************************************
code U8 MST_VSP_DeRing_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK23_31_L), 0x70, 0x40 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK23_31_H), 0x01, 0x01 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VSP_DeRing_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VSP_DeRing_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK23_31_L), 0x80, 0x00/*$OFF*/, 
                              0x80/*$DR1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VSP_Dither
//****************************************************
code U8 MST_VSP_Dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VSP_Dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VSP_Dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK23_2C_L), 0x02, 0x00/*OFF*/, 
                              0x02/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VSP_PreVBound
//****************************************************
code U8 MST_VSP_PreVBound_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VSP_PreVBound_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VSP_PreVBound_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK23_33_L), 0x08, 0x00/*OFF*/, 
                              0x08/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// 422To444
//****************************************************
code U8 MST_422To444_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_422To444_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_422To444_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK23_2C_L), 0x80, 0x80/*ON*/, 
                              0x00/*OFF*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// PreCTI
//****************************************************
code U8 MST_PreCTI_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK23_73_L), 0x10, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK23_75_L), 0x0F, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_PreCTI_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_PreCTI_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK23_70_L), 0xF7, 0x00/*$OFF*/, 
                              0xA4/*$CTI_0*/, 
                              0xA4/*$CTI_1*/, },
 { PQ_MAP_REG(REG_SC2_BK23_71_L), 0x80, 0x00/*OFF*/, 
                              0x80/*CTI_0*/, 
                              0x80/*CTI_1*/, },
 { PQ_MAP_REG(REG_SC2_BK23_71_H), 0x80, 0x00/*OFF*/, 
                              0x80/*CTI_0*/, 
                              0x80/*CTI_1*/, },
 { PQ_MAP_REG(REG_SC2_BK23_72_L), 0xFF, 0x00/*OFF*/, 
                              0x40/*CTI_0*/, 
                              0x00/*CTI_1*/, },
 { PQ_MAP_REG(REG_SC2_BK23_72_H), 0x07, 0x00/*OFF*/, 
                              0x05/*CTI_0*/, 
                              0x02/*CTI_1*/, },
 { PQ_MAP_REG(REG_SC2_BK23_73_L), 0x03, 0x00/*$OFF*/, 
                              0x03/*$CTI_0*/, 
                              0x03/*$CTI_1*/, },
 { PQ_MAP_REG(REG_SC2_BK23_74_L), 0xFF, 0x00/*$OFF*/, 
                              0x40/*$CTI_0*/, 
                              0x2F/*$CTI_1*/, },
 { PQ_MAP_REG(REG_SC2_BK23_74_H), 0x0F, 0x00/*OFF*/, 
                              0x02/*CTI_0*/, 
                              0x00/*CTI_1*/, },
 { PQ_MAP_REG(REG_SC2_BK23_75_L), 0xF0, 0x00/*$OFF*/, 
                              0x40/*$CTI_0*/, 
                              0x70/*$CTI_1*/, },
 { PQ_MAP_REG(REG_SC2_BK23_75_H), 0x0F, 0x00/*OFF*/, 
                              0x02/*CTI_0*/, 
                              0x0E/*CTI_1*/, },
 { PQ_MAP_REG(REG_SC2_BK23_76_L), 0x0F, 0x00/*OFF*/, 
                              0x01/*CTI_0*/, 
                              0x01/*CTI_1*/, },
 { PQ_MAP_REG(REG_SC2_BK23_77_L), 0x02, 0x00/*OFF*/, 
                              0x02/*CTI_0*/, 
                              0x02/*CTI_1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// HSP_Y
//****************************************************
code U8 MST_HSP_Y_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_HSP_Y_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_HSP_Y_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK23_33_L), 0x10, 0x00/*Bypass*/, 
                              0x00/*Bilinear*/, 
                              0x00/*SRAM_3_4Tap*/, 
                              0x00/*SRAM_4_4Tap*/, 
                              0x10/*SRAM_3_6Tap*/, 
                              0x10/*SRAM_4_6Tap*/, },
 { PQ_MAP_REG(REG_SC2_BK23_2B_L), 0xC1, 0x00/*$Bypass*/, 
                              0x01/*$Bilinear*/, 
                              0x40/*$SRAM_3_4Tap*/, 
                              0xC0/*$SRAM_4_4Tap*/, 
                              0x40/*$SRAM_3_6Tap*/, 
                              0xC0/*$SRAM_4_6Tap*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// HSP_C
//****************************************************
code U8 MST_HSP_C_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_HSP_C_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_HSP_C_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK23_2B_L), 0x3E, 0x00/*$Bypass*/, 
                              0x02/*$Bilinear*/, 
                              0x04/*$C_SRAM_1*/, 
                              0x06/*$C_SRAM_2*/, 
                              0x08/*$C_SRAM_3*/, 
                              0x0A/*$C_SRAM_4*/, 
                              0x10/*$SRAM_3_4Tap*/, 
                              0x30/*$SRAM_4_4Tap*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// HSP_CoRing
//****************************************************
code U8 MST_HSP_CoRing_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_HSP_CoRing_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_HSP_CoRing_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK23_2C_H), 0x03, 0x00/*$OFF*/, 
                              0x02/*$Y_Coring_1*/, 
                              0x02/*$Y_Coring_2*/, 
                              0x02/*$Y_Coring_3*/, 
                              0x02/*$Y_Coring_4*/, 
                              0x02/*$Y_Coring_5*/, },
 { PQ_MAP_REG(REG_SC2_BK23_2D_L), 0xFF, 0x00/*OFF*/, 
                              0x01/*Y_Coring_1*/, 
                              0x02/*Y_Coring_2*/, 
                              0x03/*Y_Coring_3*/, 
                              0x04/*Y_Coring_4*/, 
                              0x05/*Y_Coring_5*/, },
 { PQ_MAP_REG(REG_SC2_BK23_2D_H), 0xFF, 0x00/*OFF*/, 
                              0x01/*Y_Coring_1*/, 
                              0x02/*Y_Coring_2*/, 
                              0x03/*Y_Coring_3*/, 
                              0x04/*Y_Coring_4*/, 
                              0x05/*Y_Coring_5*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// HSP_DeRing
//****************************************************
code U8 MST_HSP_DeRing_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK23_2F_L), 0x03, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_HSP_DeRing_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_HSP_DeRing_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK23_2F_L), 0xF0, 0x00/*$OFF*/, 
                              0xB0/*$DR1*/, },
 { PQ_MAP_REG(REG_SC2_BK23_2F_H), 0x01, 0x00/*OFF*/, 
                              0x01/*DR1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// HSP_Dither
//****************************************************
code U8 MST_HSP_Dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_HSP_Dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_HSP_Dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK23_2C_L), 0x01, 0x00/*OFF*/, 
                              0x01/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// HnonLinear
//****************************************************
code U8 MST_HnonLinear_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_HnonLinear_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_HnonLinear_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK23_33_L), 0x40, 0x00/*OFF*/, 
                              0x40/*H_1366_0*/, 
                              0x40/*H_1366_1*/, 
                              0x40/*H_1366_2*/, 
                              0x40/*H_1440*/, 
                              0x40/*H_1680*/, 
                              0x40/*H_1920_0*/, 
                              0x40/*H_1920_1*/, 
                              0x40/*H_1920_2*/, },
 { PQ_MAP_REG(REG_SC2_BK23_34_L), 0xFF, 0x7E/*OFF*/, 
                              0x72/*H_1366_0*/, 
                              0x7A/*H_1366_1*/, 
                              0x82/*H_1366_2*/, 
                              0x8C/*H_1440*/, 
                              0xA0/*H_1680*/, 
                              0xA0/*H_1920_0*/, 
                              0xB0/*H_1920_1*/, 
                              0xD0/*H_1920_2*/, },
 { PQ_MAP_REG(REG_SC2_BK23_34_H), 0xFF, 0x72/*OFF*/, 
                              0x72/*H_1366_0*/, 
                              0x82/*H_1366_1*/, 
                              0x92/*H_1366_2*/, 
                              0x78/*H_1440*/, 
                              0xA0/*H_1680*/, 
                              0xA0/*H_1920_0*/, 
                              0xD0/*H_1920_1*/, 
                              0xF0/*H_1920_2*/, },
 { PQ_MAP_REG(REG_SC2_BK23_35_L), 0xFF, 0x66/*OFF*/, 
                              0x72/*H_1366_0*/, 
                              0x5A/*H_1366_1*/, 
                              0x42/*H_1366_2*/, 
                              0x64/*H_1440*/, 
                              0x64/*H_1680*/, 
                              0xA0/*H_1920_0*/, 
                              0x60/*H_1920_1*/, 
                              0x20/*H_1920_2*/, },
 { PQ_MAP_REG(REG_SC2_BK23_35_H), 0xFF, 0x91/*$OFF*/, 
                              0x15/*$H_1366_0*/, 
                              0x23/*$H_1366_1*/, 
                              0x2F/*$H_1366_2*/, 
                              0x12/*$H_1440*/, 
                              0x15/*$H_1680*/, 
                              0x1D/*$H_1920_0*/, 
                              0x2F/*$H_1920_1*/, 
                              0x3E/*$H_1920_2*/, },
 { PQ_MAP_REG(REG_SC2_BK23_36_L), 0xFF, 0x21/*OFF*/, 
                              0x20/*H_1366_0*/, 
                              0x34/*H_1366_1*/, 
                              0x10/*H_1366_2*/, 
                              0x21/*H_1440*/, 
                              0x21/*H_1680*/, 
                              0x20/*H_1920_0*/, 
                              0x34/*H_1920_1*/, 
                              0x10/*H_1920_2*/, },
 { PQ_MAP_REG(REG_SC2_BK23_36_H), 0xFF, 0x10/*OFF*/, 
                              0x28/*H_1366_0*/, 
                              0x3F/*H_1366_1*/, 
                              0xAE/*H_1366_2*/, 
                              0x10/*H_1440*/, 
                              0x10/*H_1680*/, 
                              0x28/*H_1920_0*/, 
                              0x34/*H_1920_1*/, 
                              0xAE/*H_1920_2*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SRAM1
//****************************************************
code U8 MST_SRAM1_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SRAM1_SC2_Sub[][PQ_IP_SRAM1_SIZE_SC2_Sub]=
{
{//OFF
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00
},

};

//****************************************************
// SRAM2
//****************************************************
code U8 MST_SRAM2_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SRAM2_SC2_Sub[][PQ_IP_SRAM2_SIZE_SC2_Sub]=
{
{//OFF
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00
},

};

//****************************************************
// SRAM3
//****************************************************
code U8 MST_SRAM3_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SRAM3_SC2_Sub[][PQ_IP_SRAM3_SIZE_SC2_Sub]=
{
{//InvSinc4Tc4p4Fc45Apass01Astop40
    0x3c,0xdc,0xd0,0x83,0x0c,
    0x3c,0xdc,0xe0,0x03,0x0c,
    0x3c,0xde,0xf0,0x03,0x0b,
    0x3c,0xe0,0x00,0x04,0x0a,
    0x3c,0xe0,0x10,0x84,0x09,
    0x3b,0xe2,0x20,0x04,0x09,
    0x3b,0xe2,0x30,0x84,0x08,
    0x3b,0xe4,0x30,0x04,0x08,
    0x3a,0xe4,0x40,0x04,0x08,
    0x3a,0xe4,0x50,0x84,0x07,
    0x39,0xe4,0x60,0x84,0x07,
    0x39,0xe6,0x70,0x84,0x06,
    0x38,0xe6,0x70,0x04,0x07,
    0x38,0xe6,0x80,0x84,0x06,
    0x37,0xe6,0x90,0x84,0x06,
    0x37,0xe6,0x90,0x84,0x06,
    0x36,0xe6,0xa0,0x84,0x06,
    0x35,0xe6,0xb0,0x84,0x06,
    0x35,0xe6,0xb0,0x84,0x06,
    0x34,0xe6,0xc0,0x84,0x06,
    0x34,0xe6,0xc0,0x84,0x06,
    0x33,0xe6,0xd0,0x84,0x06,
    0x33,0xe4,0xe0,0x84,0x06,
    0x32,0xe4,0xf0,0x84,0x06,
    0x31,0xe4,0x00,0x85,0x06,
    0x31,0xe4,0x00,0x85,0x06,
    0x30,0xe4,0x10,0x85,0x06,
    0x30,0xe4,0x10,0x85,0x06,
    0x2f,0xe2,0x20,0x05,0x07,
    0x2e,0xe2,0x30,0x05,0x07,
    0x2e,0xe2,0x30,0x05,0x07,
    0x2d,0xe2,0x40,0x05,0x07,
    0x2d,0xe0,0x40,0x85,0x07,
    0x2c,0xe0,0x50,0x85,0x07,
    0x2b,0xe0,0x60,0x85,0x07,
    0x2b,0xe0,0x60,0x85,0x07,
    0x2a,0xde,0x70,0x05,0x08,
    0x2a,0xde,0x70,0x05,0x08,
    0x29,0xde,0x70,0x85,0x08,
    0x29,0xdc,0x80,0x85,0x08,
    0x28,0xdc,0x90,0x85,0x08,
    0x27,0xdc,0x90,0x05,0x09,
    0x27,0xda,0xa0,0x05,0x09,
    0x26,0xda,0xa0,0x85,0x09,
    0x26,0xda,0xa0,0x85,0x09,
    0x25,0xd8,0xc0,0x85,0x09,
    0x25,0xd8,0xc0,0x85,0x09,
    0x24,0xd8,0xc0,0x05,0x0a,
    0x23,0xd6,0xd0,0x85,0x0a,
    0x23,0xd6,0xd0,0x85,0x0a,
    0x22,0xd4,0xf0,0x85,0x0a,
    0x22,0xd4,0xe0,0x05,0x0b,
    0x21,0xd4,0xf0,0x05,0x0b,
    0x21,0xd2,0x00,0x06,0x0b,
    0x20,0xd2,0x00,0x86,0x0b,
    0x20,0xd0,0x10,0x86,0x0b,
    0x1f,0xd0,0x10,0x06,0x0c,
    0x1f,0xd0,0x10,0x06,0x0c,
    0x1e,0xce,0x20,0x86,0x0c,
    0x1e,0xce,0x20,0x86,0x0c,
    0x1d,0xcc,0x30,0x06,0x0d,
    0x1d,0xcc,0x30,0x06,0x0d,
    0x1c,0xca,0x40,0x86,0x0d,
    0x1c,0xca,0x40,0x86,0x0d
},

{//InvSinc4Tc4p4Fc50Apass01Astop55
    0x3a,0xfe,0xb0,0x03,0x06,
    0x3a,0x00,0xc1,0x03,0x05,
    0x39,0x02,0xd1,0x83,0x04,
    0x39,0x04,0xe1,0x83,0x03,
    0x38,0x04,0x01,0x04,0x03,
    0x38,0x06,0x01,0x84,0x02,
    0x37,0x06,0x11,0x84,0x02,
    0x37,0x06,0x21,0x04,0x02,
    0x36,0x06,0x31,0x04,0x02,
    0x35,0x06,0x41,0x04,0x02,
    0x34,0x06,0x51,0x04,0x02,
    0x34,0x06,0x51,0x04,0x02,
    0x33,0x06,0x61,0x04,0x02,
    0x32,0x06,0x71,0x04,0x02,
    0x32,0x06,0x71,0x04,0x02,
    0x31,0x04,0x91,0x04,0x02,
    0x30,0x04,0x91,0x84,0x02,
    0x2f,0x04,0xa1,0x84,0x02,
    0x2f,0x04,0xa1,0x84,0x02,
    0x2e,0x02,0xc1,0x84,0x02,
    0x2d,0x02,0xd1,0x84,0x02,
    0x2c,0x02,0xe1,0x84,0x02,
    0x2c,0x02,0xe1,0x84,0x02,
    0x2b,0x00,0xf1,0x04,0x03,
    0x2a,0x00,0x01,0x05,0x03,
    0x2a,0x00,0x01,0x05,0x03,
    0x29,0xfe,0x10,0x85,0x03,
    0x28,0xfe,0x20,0x85,0x03,
    0x28,0xfe,0x20,0x85,0x03,
    0x27,0xfc,0x40,0x85,0x03,
    0x26,0xfc,0x40,0x05,0x04,
    0x26,0xfc,0x40,0x05,0x04,
    0x25,0xfa,0x60,0x05,0x04,
    0x24,0xfa,0x70,0x05,0x04,
    0x24,0xfa,0x70,0x05,0x04,
    0x23,0xf8,0x80,0x85,0x04,
    0x22,0xf8,0x90,0x85,0x04,
    0x22,0xf6,0xa0,0x85,0x04,
    0x21,0xf6,0xa0,0x05,0x05,
    0x21,0xf4,0xb0,0x05,0x05,
    0x20,0xf4,0xc0,0x05,0x05,
    0x1f,0xf2,0xd0,0x85,0x05,
    0x1f,0xf2,0xd0,0x85,0x05,
    0x1e,0xf0,0xf0,0x85,0x05,
    0x1e,0xf0,0xf0,0x85,0x05,
    0x1d,0xf0,0xf0,0x05,0x06,
    0x1c,0xee,0x10,0x06,0x06,
    0x1c,0xec,0x10,0x86,0x06,
    0x1b,0xec,0x20,0x86,0x06,
    0x1b,0xea,0x30,0x86,0x06,
    0x1a,0xea,0x30,0x06,0x07,
    0x1a,0xe8,0x40,0x06,0x07,
    0x19,0xe8,0x50,0x06,0x07,
    0x19,0xe6,0x50,0x86,0x07,
    0x18,0xe6,0x60,0x86,0x07,
    0x18,0xe4,0x60,0x06,0x08,
    0x17,0xe2,0x80,0x06,0x08,
    0x17,0xe2,0x80,0x06,0x08,
    0x16,0xe0,0x90,0x86,0x08,
    0x16,0xe0,0x90,0x86,0x08,
    0x15,0xde,0xa0,0x06,0x09,
    0x15,0xdc,0xb0,0x06,0x09,
    0x14,0xdc,0xb0,0x86,0x09,
    0x14,0xda,0xc0,0x86,0x09
},

{//InvSinc4Tc4p4Fc75Fstop124Apass0001Astop40
    0x28,0x70,0x81,0x02,0x84,
    0x27,0x70,0x91,0x02,0x84,
    0x26,0x70,0xa1,0x02,0x84,
    0x24,0x70,0xc1,0x02,0x84,
    0x23,0x70,0xe1,0x82,0x84,
    0x22,0x70,0xf1,0x82,0x84,
    0x21,0x70,0x01,0x83,0x84,
    0x20,0x70,0x11,0x83,0x84,
    0x1e,0x70,0x31,0x83,0x84,
    0x1d,0x70,0x41,0x83,0x84,
    0x1c,0x70,0x61,0x03,0x85,
    0x1b,0x70,0x71,0x03,0x85,
    0x1a,0x6e,0x91,0x03,0x85,
    0x19,0x6e,0xa1,0x03,0x85,
    0x18,0x6e,0xb1,0x03,0x85,
    0x17,0x6e,0xd1,0x83,0x85,
    0x16,0x6c,0xf1,0x83,0x85,
    0x15,0x6c,0x01,0x84,0x85,
    0x14,0x6c,0x11,0x84,0x85,
    0x13,0x6a,0x31,0x84,0x85,
    0x12,0x6a,0x41,0x84,0x85,
    0x11,0x6a,0x51,0x84,0x85,
    0x10,0x68,0x81,0x04,0x86,
    0x0f,0x68,0x91,0x04,0x86,
    0x0e,0x66,0xb1,0x04,0x86,
    0x0d,0x64,0xd1,0x04,0x86,
    0x0c,0x64,0xe1,0x04,0x86,
    0x0b,0x62,0x01,0x05,0x86,
    0x0a,0x62,0x11,0x05,0x86,
    0x0a,0x60,0x21,0x05,0x86,
    0x09,0x5e,0x41,0x05,0x86,
    0x08,0x5e,0x61,0x85,0x86,
    0x07,0x5c,0x81,0x85,0x86,
    0x06,0x5a,0xa1,0x85,0x86,
    0x06,0x58,0xb1,0x85,0x86,
    0x05,0x58,0xc1,0x85,0x86,
    0x04,0x56,0xe1,0x85,0x86,
    0x03,0x54,0x01,0x86,0x86,
    0x03,0x52,0x11,0x86,0x86,
    0x02,0x50,0x31,0x86,0x86,
    0x01,0x4e,0x51,0x86,0x86,
    0x01,0x4c,0x61,0x86,0x86,
    0x00,0x4a,0x81,0x86,0x86,
    0x00,0x48,0x91,0x86,0x86,
    0x01,0x47,0xb1,0x86,0x86,
    0x02,0x45,0xd1,0x86,0x86,
    0x02,0x43,0xe1,0x86,0x86,
    0x03,0x41,0x01,0x87,0x86,
    0x03,0x3f,0x11,0x87,0x86,
    0x04,0x3b,0x31,0x07,0x86,
    0x04,0x39,0x41,0x07,0x86,
    0x05,0x37,0x61,0x07,0x86,
    0x05,0x35,0x71,0x07,0x86,
    0x06,0x33,0x91,0x07,0x86,
    0x06,0x2f,0xb1,0x07,0x86,
    0x07,0x2d,0xd1,0x07,0x86,
    0x07,0x2b,0xe1,0x07,0x86,
    0x07,0x27,0xf1,0x87,0x85,
    0x08,0x25,0x11,0x88,0x85,
    0x08,0x23,0x21,0x88,0x85,
    0x09,0x1f,0x51,0x88,0x85,
    0x09,0x1d,0x51,0x08,0x85,
    0x09,0x1b,0x61,0x08,0x85,
    0x09,0x17,0x81,0x08,0x85
},

{//InvSinc4Tc4p4Fc85Fstop134Apass01Astop50
    0x17,0xa8,0x91,0x01,0x82,
    0x17,0xa8,0xa1,0x81,0x82,
    0x15,0xa8,0xc1,0x81,0x82,
    0x14,0xa8,0xd1,0x81,0x82,
    0x13,0xa8,0xe1,0x81,0x82,
    0x12,0xa8,0x01,0x02,0x83,
    0x10,0xa8,0x21,0x02,0x83,
    0x0f,0xa8,0x31,0x02,0x83,
    0x0e,0xa8,0x41,0x02,0x83,
    0x0d,0xa6,0x61,0x02,0x83,
    0x0c,0xa6,0x71,0x02,0x83,
    0x0b,0xa6,0x91,0x82,0x83,
    0x0a,0xa4,0xb1,0x82,0x83,
    0x09,0xa4,0xc1,0x82,0x83,
    0x08,0xa4,0xe1,0x02,0x84,
    0x07,0xa2,0x01,0x03,0x84,
    0x06,0xa2,0x11,0x03,0x84,
    0x05,0xa0,0x31,0x03,0x84,
    0x04,0xa0,0x41,0x03,0x84,
    0x03,0x9e,0x71,0x83,0x84,
    0x02,0x9c,0x91,0x83,0x84,
    0x01,0x9c,0xa1,0x83,0x84,
    0x00,0x9a,0xc1,0x83,0x84,
    0x00,0x98,0xe1,0x03,0x85,
    0x01,0x97,0x01,0x04,0x85,
    0x02,0x95,0x21,0x04,0x85,
    0x03,0x93,0x41,0x04,0x85,
    0x03,0x91,0x61,0x84,0x85,
    0x04,0x8f,0x81,0x84,0x85,
    0x05,0x8d,0xa1,0x84,0x85,
    0x05,0x8b,0xb1,0x84,0x85,
    0x06,0x89,0xd1,0x84,0x85,
    0x07,0x87,0x01,0x05,0x86,
    0x07,0x85,0x11,0x05,0x86,
    0x08,0x83,0x31,0x05,0x86,
    0x08,0x7f,0x51,0x05,0x86,
    0x09,0x7d,0x71,0x05,0x86,
    0x09,0x7b,0x91,0x85,0x86,
    0x0a,0x79,0xb1,0x85,0x86,
    0x0a,0x75,0xd1,0x85,0x86,
    0x0b,0x73,0xf1,0x85,0x86,
    0x0b,0x6f,0x11,0x86,0x86,
    0x0c,0x6d,0x41,0x06,0x87,
    0x0c,0x69,0x61,0x06,0x87,
    0x0c,0x67,0x71,0x06,0x87,
    0x0d,0x63,0xa1,0x06,0x87,
    0x0d,0x61,0xb1,0x06,0x87,
    0x0d,0x5d,0xe1,0x86,0x87,
    0x0e,0x59,0x11,0x87,0x87,
    0x0e,0x57,0x21,0x87,0x87,
    0x0e,0x53,0x41,0x87,0x87,
    0x0e,0x4f,0x61,0x87,0x87,
    0x0f,0x4d,0x81,0x87,0x87,
    0x0f,0x49,0xa1,0x87,0x87,
    0x0f,0x45,0xc1,0x87,0x87,
    0x0f,0x41,0xe1,0x87,0x87,
    0x0f,0x3d,0x01,0x88,0x87,
    0x0f,0x3b,0x21,0x08,0x88,
    0x0f,0x37,0x41,0x08,0x88,
    0x10,0x33,0x71,0x08,0x88,
    0x10,0x2f,0x91,0x08,0x88,
    0x10,0x2b,0xb1,0x08,0x88,
    0x10,0x27,0xd1,0x08,0x88,
    0x10,0x23,0xf1,0x08,0x88
},

{//InvSinc4Tc4p4Fc85Fstop134Apass01Astop50G11
    0x02,0xf8,0x91,0x80,0x83,
    0x02,0xf8,0xa1,0x00,0x84,
    0x00,0xf8,0xc1,0x00,0x84,
    0x01,0xf7,0xe1,0x00,0x84,
    0x02,0xf7,0xf1,0x00,0x84,
    0x03,0xf7,0x11,0x81,0x84,
    0x05,0xf5,0x41,0x81,0x84,
    0x06,0xf7,0x51,0x01,0x85,
    0x07,0xf7,0x61,0x01,0x85,
    0x08,0xf3,0x91,0x01,0x85,
    0x09,0xf3,0xa1,0x01,0x85,
    0x0a,0xf3,0xc1,0x81,0x85,
    0x0b,0xef,0xf1,0x81,0x85,
    0x0c,0xef,0x01,0x82,0x85,
    0x0d,0xf1,0x21,0x82,0x86,
    0x0e,0xed,0x51,0x82,0x86,
    0x0f,0xed,0x61,0x82,0x86,
    0x10,0xeb,0x81,0x82,0x86,
    0x11,0xe9,0xa1,0x82,0x86,
    0x12,0xe9,0xd1,0x82,0x87,
    0x13,0xe5,0x01,0x83,0x87,
    0x14,0xe5,0x11,0x83,0x87,
    0x15,0xe1,0x41,0x83,0x87,
    0x14,0xdd,0x61,0x03,0x88,
    0x15,0xd9,0x91,0x03,0x88,
    0x16,0xd9,0xb1,0x83,0x88,
    0x17,0xd5,0xe1,0x83,0x88,
    0x17,0xd3,0x01,0x04,0x89,
    0x18,0xcf,0x31,0x04,0x89,
    0x19,0xcd,0x51,0x04,0x89,
    0x19,0xcd,0x61,0x84,0x89,
    0x1a,0xc9,0x91,0x84,0x89,
    0x1b,0xc5,0xd1,0x04,0x8a,
    0x1a,0xc1,0xe1,0x04,0x8a,
    0x1b,0xbf,0x01,0x05,0x8a,
    0x1b,0xbb,0x31,0x85,0x8a,
    0x1c,0xb9,0x51,0x85,0x8a,
    0x1c,0xb5,0x81,0x05,0x8b,
    0x1d,0xb3,0xa1,0x05,0x8b,
    0x1d,0xad,0xd1,0x05,0x8b,
    0x1e,0xab,0x01,0x86,0x8b,
    0x1d,0xa5,0x21,0x86,0x8b,
    0x1e,0xa1,0x61,0x06,0x8c,
    0x1e,0x9d,0x81,0x06,0x8c,
    0x1e,0x99,0xa1,0x06,0x8c,
    0x1f,0x95,0xe1,0x86,0x8c,
    0x1f,0x93,0xf1,0x86,0x8c,
    0x1e,0x8b,0x31,0x07,0x8d,
    0x1f,0x87,0x61,0x07,0x8d,
    0x1f,0x83,0x81,0x07,0x8d,
    0x1f,0x81,0xa1,0x87,0x8d,
    0x1f,0x7b,0xd1,0x87,0x8d,
    0x20,0x79,0xf1,0x87,0x8d,
    0x1f,0x71,0x21,0x88,0x8d,
    0x1f,0x6b,0x51,0x88,0x8d,
    0x1f,0x69,0x71,0x08,0x8e,
    0x1f,0x63,0xa1,0x08,0x8e,
    0x1f,0x61,0xc1,0x88,0x8e,
    0x1f,0x5b,0xf1,0x88,0x8e,
    0x1f,0x55,0x31,0x09,0x8f,
    0x1f,0x51,0x51,0x09,0x8f,
    0x1f,0x4b,0x81,0x09,0x8f,
    0x1f,0x45,0xb1,0x09,0x8f,
    0x1f,0x41,0xd1,0x09,0x8f
},

{//InvSinc4Tc4p4Fc85Fstop134Apass01Astop50G12
    0x13,0x47,0x72,0xc0,0x84,
    0x13,0x47,0x62,0x40,0x85,
    0x15,0x47,0x32,0xc0,0x85,
    0x16,0x47,0x22,0xc0,0x85,
    0x17,0x45,0x02,0x80,0x85,
    0x18,0x45,0x22,0x00,0x86,
    0x1a,0x45,0x52,0x80,0x86,
    0x1b,0x43,0x72,0x80,0x86,
    0x1c,0x43,0x82,0x80,0x86,
    0x1d,0x41,0xb2,0x00,0x87,
    0x1e,0x41,0xc2,0x00,0x87,
    0x1f,0x3f,0xf2,0x80,0x87,
    0x20,0x3d,0x22,0x01,0x88,
    0x21,0x3b,0x42,0x01,0x88,
    0x22,0x3b,0x62,0x81,0x88,
    0x23,0x39,0x92,0x01,0x89,
    0x24,0x37,0xb2,0x01,0x89,
    0x25,0x33,0xe2,0x01,0x89,
    0x26,0x33,0xf2,0x01,0x89,
    0x26,0x2d,0x42,0x02,0x8a,
    0x27,0x29,0x72,0x02,0x8a,
    0x28,0x2b,0x82,0x82,0x8a,
    0x29,0x27,0xb2,0x82,0x8a,
    0x29,0x23,0xe2,0x02,0x8b,
    0x2a,0x21,0x12,0x83,0x8b,
    0x2a,0x1b,0x42,0x83,0x8b,
    0x2b,0x19,0x72,0x03,0x8c,
    0x2b,0x15,0xa2,0x83,0x8c,
    0x2c,0x11,0xd2,0x83,0x8c,
    0x2d,0x0f,0x02,0x04,0x8d,
    0x2c,0x09,0x22,0x04,0x8d,
    0x2d,0x05,0x52,0x04,0x8d,
    0x2e,0x03,0x92,0x04,0x8e,
    0x2e,0xff,0xb1,0x04,0x8e,
    0x2f,0xfd,0xe1,0x84,0x8e,
    0x2e,0xf5,0x11,0x85,0x8e,
    0x2f,0xf1,0x41,0x85,0x8e,
    0x2f,0xef,0x71,0x85,0x8f,
    0x30,0xeb,0xa1,0x85,0x8f,
    0x2f,0xe5,0xd1,0x05,0x90,
    0x30,0xe1,0x01,0x06,0x90,
    0x30,0xdb,0x31,0x06,0x90,
    0x30,0xd5,0x81,0x06,0x91,
    0x30,0xcf,0xb1,0x06,0x91,
    0x30,0xcf,0xc1,0x86,0x91,
    0x30,0xc5,0x11,0x87,0x91,
    0x30,0xc1,0x31,0x87,0x91,
    0x30,0xbd,0x71,0x87,0x92,
    0x30,0xb5,0xc1,0x07,0x93,
    0x30,0xb3,0xd1,0x07,0x93,
    0x30,0xab,0x11,0x08,0x93,
    0x2f,0xa5,0x41,0x88,0x93,
    0x30,0xa1,0x71,0x88,0x93,
    0x30,0x9b,0xa1,0x88,0x93,
    0x2f,0x95,0xd1,0x08,0x94,
    0x2f,0x8f,0x01,0x09,0x94,
    0x2f,0x89,0x41,0x89,0x94,
    0x2e,0x83,0x71,0x09,0x95,
    0x2e,0x7d,0xa1,0x09,0x95,
    0x2f,0x79,0xe1,0x89,0x95,
    0x2e,0x6f,0x21,0x8a,0x95,
    0x2e,0x6b,0x51,0x0a,0x96,
    0x2d,0x63,0x81,0x0a,0x96,
    0x2d,0x5f,0xb1,0x8a,0x96
},

{//InvSinc4Tc4p4Fc85Fstop134Apass01Astop50G13
    0x29,0x9b,0x82,0x41,0x86,
    0x29,0x99,0x62,0xc1,0x86,
    0x2b,0x97,0x32,0xc1,0x86,
    0x2c,0x97,0x12,0x41,0x87,
    0x2d,0x97,0x02,0x41,0x87,
    0x2e,0x95,0xc2,0x40,0x88,
    0x30,0x93,0x92,0x40,0x88,
    0x31,0x95,0x82,0xc0,0x88,
    0x32,0x93,0x62,0xc0,0x88,
    0x32,0x8b,0x22,0xc0,0x88,
    0x33,0x8d,0x12,0x40,0x89,
    0x34,0x8b,0x22,0x80,0x89,
    0x35,0x87,0x62,0x00,0x8a,
    0x36,0x87,0x72,0x00,0x8a,
    0x37,0x85,0xb2,0x00,0x8b,
    0x38,0x81,0xe2,0x00,0x8b,
    0x39,0x81,0x02,0x81,0x8b,
    0x39,0x7b,0x32,0x81,0x8b,
    0x3a,0x7b,0x52,0x01,0x8c,
    0x3b,0x77,0xa2,0x01,0x8d,
    0x3c,0x73,0xd2,0x01,0x8d,
    0x3d,0x71,0xf2,0x01,0x8d,
    0x3e,0x6d,0x32,0x82,0x8d,
    0x3d,0x69,0x62,0x82,0x8e,
    0x3e,0x63,0xa2,0x82,0x8e,
    0x3f,0x61,0xd2,0x02,0x8f,
    0x3f,0x59,0x12,0x03,0x8f,
    0x3f,0x57,0x42,0x03,0x90,
    0x40,0x53,0x82,0x83,0x90,
    0x40,0x4d,0xb2,0x83,0x90,
    0x40,0x4b,0xd2,0x03,0x91,
    0x41,0x47,0x02,0x04,0x91,
    0x42,0x41,0x62,0x04,0x92,
    0x41,0x3d,0x72,0x04,0x92,
    0x42,0x39,0xb2,0x84,0x92,
    0x41,0x31,0xf2,0x04,0x93,
    0x42,0x2d,0x22,0x05,0x93,
    0x42,0x29,0x62,0x05,0x94,
    0x42,0x23,0x92,0x05,0x94,
    0x42,0x1d,0xd2,0x85,0x94,
    0x43,0x19,0x12,0x06,0x95,
    0x42,0x11,0x42,0x06,0x95,
    0x43,0x0d,0x92,0x06,0x96,
    0x42,0x05,0xd2,0x86,0x96,
    0x42,0x01,0xf2,0x86,0x96,
    0x42,0xf7,0x51,0x07,0x97,
    0x42,0xf5,0x61,0x07,0x97,
    0x41,0xeb,0xc1,0x07,0x98,
    0x42,0xe5,0x11,0x88,0x98,
    0x41,0xdf,0x31,0x88,0x98,
    0x41,0xd9,0x71,0x08,0x99,
    0x40,0xcf,0xb1,0x08,0x99,
    0x41,0xcd,0xe1,0x88,0x99,
    0x40,0xc5,0x21,0x09,0x9a,
    0x40,0xbd,0x61,0x09,0x9a,
    0x3f,0xb5,0xa1,0x89,0x9a,
    0x3e,0xad,0xd1,0x89,0x9a,
    0x3e,0xa9,0x11,0x8a,0x9b,
    0x3e,0xa3,0x51,0x0a,0x9c,
    0x3e,0x9b,0xa1,0x8a,0x9c,
    0x3d,0x91,0xe1,0x8a,0x9c,
    0x3d,0x8b,0x21,0x0b,0x9d,
    0x3c,0x81,0x61,0x0b,0x9d,
    0x3c,0x7d,0x91,0x8b,0x9d
},

{//InvSinc4Tc4p4Fc95Fstop148Apass0001Astop40
    0x09,0xe8,0x91,0x00,0x83,
    0x08,0xe8,0xa1,0x00,0x83,
    0x06,0xe8,0xc1,0x00,0x83,
    0x05,0xe8,0xd1,0x00,0x83,
    0x04,0xe8,0xe1,0x00,0x83,
    0x02,0xe6,0x11,0x01,0x83,
    0x01,0xe6,0x21,0x01,0x83,
    0x00,0xe4,0x41,0x01,0x83,
    0x01,0xe5,0x51,0x01,0x83,
    0x02,0xe3,0x71,0x01,0x83,
    0x04,0xe3,0x91,0x01,0x83,
    0x05,0xe1,0xb1,0x01,0x83,
    0x06,0xe1,0xc1,0x01,0x83,
    0x07,0xdf,0xe1,0x01,0x83,
    0x08,0xdd,0x11,0x82,0x83,
    0x09,0xdb,0x31,0x82,0x83,
    0x09,0xdb,0x31,0x82,0x83,
    0x0a,0xd9,0x51,0x82,0x83,
    0x0b,0xd7,0x71,0x82,0x83,
    0x0c,0xd5,0xa1,0x02,0x84,
    0x0d,0xd3,0xc1,0x02,0x84,
    0x0d,0xd1,0xd1,0x02,0x84,
    0x0e,0xcd,0x01,0x03,0x84,
    0x0f,0xcb,0x21,0x03,0x84,
    0x0f,0xc9,0x41,0x83,0x84,
    0x10,0xc7,0x61,0x83,0x84,
    0x11,0xc3,0x91,0x83,0x84,
    0x11,0xc1,0xb1,0x03,0x85,
    0x12,0xbf,0xd1,0x03,0x85,
    0x12,0xbb,0xf1,0x03,0x85,
    0x13,0xb9,0x11,0x04,0x85,
    0x13,0xb5,0x41,0x84,0x85,
    0x14,0xb3,0x61,0x84,0x85,
    0x14,0xaf,0x81,0x84,0x85,
    0x14,0xab,0xb1,0x04,0x86,
    0x15,0xa9,0xd1,0x04,0x86,
    0x15,0xa5,0xf1,0x04,0x86,
    0x15,0xa1,0x21,0x85,0x86,
    0x16,0x9d,0x51,0x85,0x86,
    0x16,0x9b,0x61,0x85,0x86,
    0x16,0x97,0x91,0x05,0x87,
    0x16,0x93,0xb1,0x05,0x87,
    0x16,0x8f,0xd1,0x05,0x87,
    0x16,0x8b,0x01,0x86,0x87,
    0x17,0x87,0x31,0x86,0x87,
    0x17,0x83,0x51,0x86,0x87,
    0x17,0x7f,0x81,0x06,0x88,
    0x17,0x7b,0xa1,0x06,0x88,
    0x17,0x75,0xd1,0x06,0x88,
    0x17,0x71,0xf1,0x06,0x88,
    0x17,0x6d,0x21,0x87,0x88,
    0x17,0x69,0x41,0x87,0x88,
    0x17,0x65,0x71,0x07,0x89,
    0x17,0x5f,0xa1,0x07,0x89,
    0x17,0x5b,0xc1,0x07,0x89,
    0x17,0x57,0xe1,0x07,0x89,
    0x16,0x51,0x11,0x88,0x89,
    0x16,0x4d,0x31,0x88,0x89,
    0x16,0x49,0x61,0x08,0x8a,
    0x16,0x43,0x91,0x08,0x8a,
    0x16,0x3f,0xb1,0x08,0x8a,
    0x16,0x39,0xe1,0x08,0x8a,
    0x15,0x35,0x01,0x89,0x8a,
    0x15,0x2f,0x31,0x89,0x8a
},

{//InvSinc4Tc4p4Fc65Apass3Astop60G14
    0x33,0xbb,0xc2,0x41,0x87,
    0x35,0xb7,0x82,0x41,0x87,
    0x36,0xb7,0x62,0xc1,0x87,
    0x37,0xb5,0x42,0xc1,0x87,
    0x38,0xb7,0x32,0x41,0x88,
    0x39,0xb5,0x12,0x41,0x88,
    0x39,0xaf,0xd2,0xc0,0x88,
    0x3a,0xad,0xb2,0xc0,0x88,
    0x3b,0xad,0x92,0x40,0x89,
    0x3c,0xab,0x72,0x40,0x89,
    0x3d,0xa7,0x32,0xc0,0x89,
    0x3e,0xa7,0x02,0x80,0x8a,
    0x3f,0xa5,0x22,0x80,0x8a,
    0x3f,0x9f,0x62,0x00,0x8b,
    0x40,0x9d,0x82,0x00,0x8b,
    0x40,0x9b,0xa2,0x80,0x8b,
    0x41,0x99,0xc2,0x80,0x8b,
    0x42,0x95,0x02,0x01,0x8c,
    0x42,0x8f,0x42,0x81,0x8c,
    0x43,0x8d,0x62,0x81,0x8c,
    0x43,0x89,0xa2,0x81,0x8d,
    0x44,0x85,0xe2,0x01,0x8e,
    0x45,0x85,0xf2,0x01,0x8e,
    0x45,0x7f,0x32,0x82,0x8e,
    0x45,0x79,0x62,0x82,0x8e,
    0x45,0x75,0x92,0x02,0x8f,
    0x46,0x71,0xd2,0x82,0x8f,
    0x46,0x6b,0x02,0x83,0x8f,
    0x46,0x65,0x42,0x03,0x90,
    0x46,0x61,0x82,0x03,0x91,
    0x46,0x59,0xc2,0x03,0x91,
    0x46,0x57,0xe2,0x83,0x91,
    0x47,0x53,0x22,0x04,0x92,
    0x46,0x4d,0x42,0x04,0x92,
    0x47,0x49,0x82,0x84,0x92,
    0x46,0x43,0xa2,0x84,0x92,
    0x47,0x3b,0x02,0x05,0x93,
    0x46,0x35,0x32,0x85,0x93,
    0x47,0x31,0x72,0x05,0x94,
    0x46,0x27,0xb2,0x05,0x94,
    0x46,0x23,0xf2,0x05,0x95,
    0x46,0x1d,0x32,0x86,0x95,
    0x45,0x15,0x72,0x06,0x96,
    0x46,0x11,0xb2,0x86,0x96,
    0x46,0x0b,0xe2,0x86,0x96,
    0x45,0x03,0x22,0x07,0x97,
    0x44,0xfd,0x41,0x07,0x97,
    0x45,0xf5,0xa1,0x87,0x97,
    0x44,0xef,0xd1,0x07,0x98,
    0x43,0xe7,0x11,0x88,0x98,
    0x43,0xdf,0x51,0x88,0x98,
    0x43,0xd9,0x91,0x08,0x99,
    0x42,0xcf,0xe1,0x88,0x99,
    0x42,0xcb,0x01,0x89,0x99,
    0x41,0xc3,0x41,0x09,0x9a,
    0x40,0xb9,0x91,0x89,0x9a,
    0x41,0xb5,0xd1,0x09,0x9b,
    0x40,0xad,0x11,0x8a,0x9b,
    0x3f,0xa3,0x51,0x8a,0x9b,
    0x3f,0x9f,0x81,0x0a,0x9c,
    0x3e,0x97,0xc1,0x8a,0x9c,
    0x3d,0x8d,0x01,0x8b,0x9c,
    0x3d,0x85,0x51,0x0b,0x9d,
    0x3c,0x81,0x71,0x8b,0x9d
},

{//InvSinc3Tc0p0Fc75Ap001As60G13
    0x00,0x4a,0xc8,0x8c,0x2c,
    0x00,0x4c,0x08,0x0d,0x2b,
    0x00,0x4e,0x38,0x0d,0x2a,
    0x00,0x4e,0x58,0x0d,0x29,
    0x00,0x50,0x88,0x0d,0x28,
    0x00,0x50,0xb8,0x8d,0x26,
    0x00,0x52,0xf8,0x0d,0x25,
    0x00,0x52,0x08,0x8e,0x24,
    0x00,0x54,0x48,0x0e,0x23,
    0x00,0x54,0x68,0x0e,0x22,
    0x00,0x56,0xa8,0x8e,0x20,
    0x00,0x56,0xc8,0x8e,0x1f,
    0x00,0x58,0xf8,0x8e,0x1e,
    0x00,0x56,0x08,0x8f,0x1d,
    0x00,0x58,0x48,0x0f,0x1c,
    0x00,0x58,0x68,0x0f,0x1b,
    0x00,0x5a,0x98,0x0f,0x1a,
    0x00,0x5a,0xb8,0x0f,0x19,
    0x00,0x5c,0xf8,0x8f,0x17,
    0x00,0x5a,0x08,0x90,0x16,
    0x00,0x5c,0x48,0x10,0x15,
    0x00,0x5c,0x58,0x90,0x14,
    0x00,0x5e,0x88,0x90,0x13,
    0x00,0x5c,0xa8,0x10,0x12,
    0x00,0x5c,0xc8,0x10,0x11,
    0x00,0x5e,0xf8,0x10,0x10,
    0x00,0x5e,0x18,0x11,0x0f,
    0x00,0x5e,0x48,0x91,0x0d,
    0x00,0x5e,0x58,0x11,0x0d,
    0x00,0x5e,0x78,0x11,0x0c,
    0x00,0x5e,0xa8,0x91,0x0a,
    0x00,0x5e,0xb8,0x11,0x0a,
    0x00,0x5c,0xc8,0x11,0x09,
    0x00,0x5e,0xf8,0x11,0x08,
    0x00,0x5e,0x18,0x12,0x07,
    0x00,0x5e,0x48,0x92,0x05,
    0x00,0x5e,0x58,0x12,0x05,
    0x00,0x5c,0x68,0x12,0x04,
    0x00,0x5e,0x88,0x92,0x03,
    0x00,0x5c,0xa8,0x12,0x02,
    0x00,0x5c,0xb8,0x92,0x01,
    0x00,0x5a,0xc8,0x92,0x00,
    0x00,0x5c,0xf8,0x92,0x80,
    0x00,0x5a,0x08,0x93,0x81,
    0x00,0x58,0x08,0x13,0x82,
    0x00,0x58,0x28,0x13,0x83,
    0x00,0x58,0x48,0x13,0x84,
    0x00,0x56,0x48,0x93,0x84,
    0x00,0x56,0x68,0x93,0x85,
    0x00,0x54,0x68,0x13,0x86,
    0x00,0x54,0x88,0x13,0x87,
    0x00,0x54,0xa8,0x13,0x88,
    0x00,0x52,0xa8,0x93,0x88,
    0x00,0x50,0xa8,0x13,0x89,
    0x00,0x4e,0xa8,0x93,0x89,
    0x00,0x4c,0xb8,0x93,0x8a,
    0x00,0x4c,0xc8,0x13,0x8b,
    0x00,0x4a,0xc8,0x93,0x8b,
    0x00,0x48,0xc8,0x13,0x8c,
    0x00,0x46,0xc8,0x93,0x8c,
    0x00,0x44,0xc8,0x13,0x8d,
    0x00,0x42,0xc8,0x93,0x8d,
    0x00,0x42,0xf8,0x13,0x8f,
    0x00,0x40,0xf8,0x93,0x8f
},

{//InvSinc3Tc0p0Fc75Ap001As60
    0x00,0x02,0x00,0x88,0x3f,
    0x00,0x02,0x20,0x88,0x3e,
    0x00,0x02,0x40,0x88,0x3d,
    0x00,0x02,0x50,0x08,0x3d,
    0x00,0x02,0x70,0x08,0x3c,
    0x00,0x02,0x90,0x08,0x3b,
    0x00,0x02,0xb0,0x08,0x3a,
    0x00,0x02,0xc0,0x88,0x39,
    0x00,0x02,0xe0,0x88,0x38,
    0x00,0x02,0x00,0x89,0x37,
    0x00,0x02,0x20,0x89,0x36,
    0x00,0x02,0x30,0x09,0x36,
    0x00,0x02,0x50,0x09,0x35,
    0x00,0x04,0x70,0x89,0x33,
    0x00,0x04,0x80,0x09,0x33,
    0x00,0x04,0xa0,0x09,0x32,
    0x00,0x04,0xb0,0x89,0x31,
    0x00,0x04,0xd0,0x89,0x30,
    0x00,0x04,0xf0,0x89,0x2f,
    0x00,0x06,0x00,0x8a,0x2e,
    0x00,0x06,0x20,0x8a,0x2d,
    0x00,0x06,0x30,0x0a,0x2d,
    0x00,0x06,0x50,0x0a,0x2c,
    0x00,0x08,0x60,0x0a,0x2b,
    0x00,0x08,0x80,0x0a,0x2a,
    0x00,0x08,0x90,0x8a,0x29,
    0x00,0x08,0xa0,0x0a,0x29,
    0x00,0x0a,0xc0,0x8a,0x27,
    0x00,0x0a,0xd0,0x0a,0x27,
    0x00,0x0a,0xe0,0x8a,0x26,
    0x00,0x0c,0x00,0x0b,0x25,
    0x00,0x0c,0x10,0x8b,0x24,
    0x00,0x0e,0x20,0x8b,0x23,
    0x00,0x0e,0x30,0x0b,0x23,
    0x00,0x0e,0x50,0x0b,0x22,
    0x00,0x10,0x60,0x0b,0x21,
    0x00,0x10,0x70,0x8b,0x20,
    0x00,0x12,0x80,0x8b,0x1f,
    0x00,0x12,0x90,0x0b,0x1f,
    0x00,0x14,0xa0,0x0b,0x1e,
    0x00,0x14,0xb0,0x8b,0x1d,
    0x00,0x16,0xc0,0x8b,0x1c,
    0x00,0x16,0xd0,0x0b,0x1c,
    0x00,0x18,0xe0,0x0b,0x1b,
    0x00,0x1a,0xe0,0x8b,0x1a,
    0x00,0x1a,0xf0,0x0b,0x1a,
    0x00,0x1c,0x00,0x0c,0x19,
    0x00,0x1e,0x10,0x0c,0x18,
    0x00,0x1e,0x10,0x0c,0x18,
    0x00,0x20,0x20,0x0c,0x17,
    0x00,0x22,0x30,0x0c,0x16,
    0x00,0x22,0x30,0x0c,0x16,
    0x00,0x24,0x40,0x0c,0x15,
    0x00,0x26,0x40,0x8c,0x14,
    0x00,0x28,0x50,0x8c,0x13,
    0x00,0x2a,0x50,0x0c,0x13,
    0x00,0x2a,0x50,0x0c,0x13,
    0x00,0x2c,0x60,0x0c,0x12,
    0x00,0x2e,0x60,0x8c,0x11,
    0x00,0x30,0x60,0x0c,0x11,
    0x00,0x32,0x60,0x8c,0x10,
    0x00,0x34,0x60,0x0c,0x10,
    0x00,0x36,0x70,0x0c,0x0f,
    0x00,0x38,0x70,0x8c,0x0e
},

};

//****************************************************
// SRAM4
//****************************************************
code U8 MST_SRAM4_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SRAM4_SC2_Sub[][PQ_IP_SRAM4_SIZE_SC2_Sub]=
{
{//InvSinc4Tc4p4Fc45Apass01Astop40
    0x3c,0xdc,0xd0,0x83,0x0c,
    0x3c,0xdc,0xe0,0x03,0x0c,
    0x3c,0xde,0xf0,0x03,0x0b,
    0x3c,0xe0,0x00,0x04,0x0a,
    0x3c,0xe0,0x10,0x84,0x09,
    0x3b,0xe2,0x20,0x04,0x09,
    0x3b,0xe2,0x30,0x84,0x08,
    0x3b,0xe4,0x30,0x04,0x08,
    0x3a,0xe4,0x40,0x04,0x08,
    0x3a,0xe4,0x50,0x84,0x07,
    0x39,0xe4,0x60,0x84,0x07,
    0x39,0xe6,0x70,0x84,0x06,
    0x38,0xe6,0x70,0x04,0x07,
    0x38,0xe6,0x80,0x84,0x06,
    0x37,0xe6,0x90,0x84,0x06,
    0x37,0xe6,0x90,0x84,0x06,
    0x36,0xe6,0xa0,0x84,0x06,
    0x35,0xe6,0xb0,0x84,0x06,
    0x35,0xe6,0xb0,0x84,0x06,
    0x34,0xe6,0xc0,0x84,0x06,
    0x34,0xe6,0xc0,0x84,0x06,
    0x33,0xe6,0xd0,0x84,0x06,
    0x33,0xe4,0xe0,0x84,0x06,
    0x32,0xe4,0xf0,0x84,0x06,
    0x31,0xe4,0x00,0x85,0x06,
    0x31,0xe4,0x00,0x85,0x06,
    0x30,0xe4,0x10,0x85,0x06,
    0x30,0xe4,0x10,0x85,0x06,
    0x2f,0xe2,0x20,0x05,0x07,
    0x2e,0xe2,0x30,0x05,0x07,
    0x2e,0xe2,0x30,0x05,0x07,
    0x2d,0xe2,0x40,0x05,0x07,
    0x2d,0xe0,0x40,0x85,0x07,
    0x2c,0xe0,0x50,0x85,0x07,
    0x2b,0xe0,0x60,0x85,0x07,
    0x2b,0xe0,0x60,0x85,0x07,
    0x2a,0xde,0x70,0x05,0x08,
    0x2a,0xde,0x70,0x05,0x08,
    0x29,0xde,0x70,0x85,0x08,
    0x29,0xdc,0x80,0x85,0x08,
    0x28,0xdc,0x90,0x85,0x08,
    0x27,0xdc,0x90,0x05,0x09,
    0x27,0xda,0xa0,0x05,0x09,
    0x26,0xda,0xa0,0x85,0x09,
    0x26,0xda,0xa0,0x85,0x09,
    0x25,0xd8,0xc0,0x85,0x09,
    0x25,0xd8,0xc0,0x85,0x09,
    0x24,0xd8,0xc0,0x05,0x0a,
    0x23,0xd6,0xd0,0x85,0x0a,
    0x23,0xd6,0xd0,0x85,0x0a,
    0x22,0xd4,0xf0,0x85,0x0a,
    0x22,0xd4,0xe0,0x05,0x0b,
    0x21,0xd4,0xf0,0x05,0x0b,
    0x21,0xd2,0x00,0x06,0x0b,
    0x20,0xd2,0x00,0x86,0x0b,
    0x20,0xd0,0x10,0x86,0x0b,
    0x1f,0xd0,0x10,0x06,0x0c,
    0x1f,0xd0,0x10,0x06,0x0c,
    0x1e,0xce,0x20,0x86,0x0c,
    0x1e,0xce,0x20,0x86,0x0c,
    0x1d,0xcc,0x30,0x06,0x0d,
    0x1d,0xcc,0x30,0x06,0x0d,
    0x1c,0xca,0x40,0x86,0x0d,
    0x1c,0xca,0x40,0x86,0x0d
},

{//InvSinc4Tc4p4Fc50Apass01Astop55
    0x3a,0xfe,0xb0,0x03,0x06,
    0x3a,0x00,0xc1,0x03,0x05,
    0x39,0x02,0xd1,0x83,0x04,
    0x39,0x04,0xe1,0x83,0x03,
    0x38,0x04,0x01,0x04,0x03,
    0x38,0x06,0x01,0x84,0x02,
    0x37,0x06,0x11,0x84,0x02,
    0x37,0x06,0x21,0x04,0x02,
    0x36,0x06,0x31,0x04,0x02,
    0x35,0x06,0x41,0x04,0x02,
    0x34,0x06,0x51,0x04,0x02,
    0x34,0x06,0x51,0x04,0x02,
    0x33,0x06,0x61,0x04,0x02,
    0x32,0x06,0x71,0x04,0x02,
    0x32,0x06,0x71,0x04,0x02,
    0x31,0x04,0x91,0x04,0x02,
    0x30,0x04,0x91,0x84,0x02,
    0x2f,0x04,0xa1,0x84,0x02,
    0x2f,0x04,0xa1,0x84,0x02,
    0x2e,0x02,0xc1,0x84,0x02,
    0x2d,0x02,0xd1,0x84,0x02,
    0x2c,0x02,0xe1,0x84,0x02,
    0x2c,0x02,0xe1,0x84,0x02,
    0x2b,0x00,0xf1,0x04,0x03,
    0x2a,0x00,0x01,0x05,0x03,
    0x2a,0x00,0x01,0x05,0x03,
    0x29,0xfe,0x10,0x85,0x03,
    0x28,0xfe,0x20,0x85,0x03,
    0x28,0xfe,0x20,0x85,0x03,
    0x27,0xfc,0x40,0x85,0x03,
    0x26,0xfc,0x40,0x05,0x04,
    0x26,0xfc,0x40,0x05,0x04,
    0x25,0xfa,0x60,0x05,0x04,
    0x24,0xfa,0x70,0x05,0x04,
    0x24,0xfa,0x70,0x05,0x04,
    0x23,0xf8,0x80,0x85,0x04,
    0x22,0xf8,0x90,0x85,0x04,
    0x22,0xf6,0xa0,0x85,0x04,
    0x21,0xf6,0xa0,0x05,0x05,
    0x21,0xf4,0xb0,0x05,0x05,
    0x20,0xf4,0xc0,0x05,0x05,
    0x1f,0xf2,0xd0,0x85,0x05,
    0x1f,0xf2,0xd0,0x85,0x05,
    0x1e,0xf0,0xf0,0x85,0x05,
    0x1e,0xf0,0xf0,0x85,0x05,
    0x1d,0xf0,0xf0,0x05,0x06,
    0x1c,0xee,0x10,0x06,0x06,
    0x1c,0xec,0x10,0x86,0x06,
    0x1b,0xec,0x20,0x86,0x06,
    0x1b,0xea,0x30,0x86,0x06,
    0x1a,0xea,0x30,0x06,0x07,
    0x1a,0xe8,0x40,0x06,0x07,
    0x19,0xe8,0x50,0x06,0x07,
    0x19,0xe6,0x50,0x86,0x07,
    0x18,0xe6,0x60,0x86,0x07,
    0x18,0xe4,0x60,0x06,0x08,
    0x17,0xe2,0x80,0x06,0x08,
    0x17,0xe2,0x80,0x06,0x08,
    0x16,0xe0,0x90,0x86,0x08,
    0x16,0xe0,0x90,0x86,0x08,
    0x15,0xde,0xa0,0x06,0x09,
    0x15,0xdc,0xb0,0x06,0x09,
    0x14,0xdc,0xb0,0x86,0x09,
    0x14,0xda,0xc0,0x86,0x09
},

{//InvSinc4Tc4p4Fc75Fstop124Apass0001Astop40
    0x28,0x70,0x81,0x02,0x84,
    0x27,0x70,0x91,0x02,0x84,
    0x26,0x70,0xa1,0x02,0x84,
    0x24,0x70,0xc1,0x02,0x84,
    0x23,0x70,0xe1,0x82,0x84,
    0x22,0x70,0xf1,0x82,0x84,
    0x21,0x70,0x01,0x83,0x84,
    0x20,0x70,0x11,0x83,0x84,
    0x1e,0x70,0x31,0x83,0x84,
    0x1d,0x70,0x41,0x83,0x84,
    0x1c,0x70,0x61,0x03,0x85,
    0x1b,0x70,0x71,0x03,0x85,
    0x1a,0x6e,0x91,0x03,0x85,
    0x19,0x6e,0xa1,0x03,0x85,
    0x18,0x6e,0xb1,0x03,0x85,
    0x17,0x6e,0xd1,0x83,0x85,
    0x16,0x6c,0xf1,0x83,0x85,
    0x15,0x6c,0x01,0x84,0x85,
    0x14,0x6c,0x11,0x84,0x85,
    0x13,0x6a,0x31,0x84,0x85,
    0x12,0x6a,0x41,0x84,0x85,
    0x11,0x6a,0x51,0x84,0x85,
    0x10,0x68,0x81,0x04,0x86,
    0x0f,0x68,0x91,0x04,0x86,
    0x0e,0x66,0xb1,0x04,0x86,
    0x0d,0x64,0xd1,0x04,0x86,
    0x0c,0x64,0xe1,0x04,0x86,
    0x0b,0x62,0x01,0x05,0x86,
    0x0a,0x62,0x11,0x05,0x86,
    0x0a,0x60,0x21,0x05,0x86,
    0x09,0x5e,0x41,0x05,0x86,
    0x08,0x5e,0x61,0x85,0x86,
    0x07,0x5c,0x81,0x85,0x86,
    0x06,0x5a,0xa1,0x85,0x86,
    0x06,0x58,0xb1,0x85,0x86,
    0x05,0x58,0xc1,0x85,0x86,
    0x04,0x56,0xe1,0x85,0x86,
    0x03,0x54,0x01,0x86,0x86,
    0x03,0x52,0x11,0x86,0x86,
    0x02,0x50,0x31,0x86,0x86,
    0x01,0x4e,0x51,0x86,0x86,
    0x01,0x4c,0x61,0x86,0x86,
    0x00,0x4a,0x81,0x86,0x86,
    0x00,0x48,0x91,0x86,0x86,
    0x01,0x47,0xb1,0x86,0x86,
    0x02,0x45,0xd1,0x86,0x86,
    0x02,0x43,0xe1,0x86,0x86,
    0x03,0x41,0x01,0x87,0x86,
    0x03,0x3f,0x11,0x87,0x86,
    0x04,0x3b,0x31,0x07,0x86,
    0x04,0x39,0x41,0x07,0x86,
    0x05,0x37,0x61,0x07,0x86,
    0x05,0x35,0x71,0x07,0x86,
    0x06,0x33,0x91,0x07,0x86,
    0x06,0x2f,0xb1,0x07,0x86,
    0x07,0x2d,0xd1,0x07,0x86,
    0x07,0x2b,0xe1,0x07,0x86,
    0x07,0x27,0xf1,0x87,0x85,
    0x08,0x25,0x11,0x88,0x85,
    0x08,0x23,0x21,0x88,0x85,
    0x09,0x1f,0x51,0x88,0x85,
    0x09,0x1d,0x51,0x08,0x85,
    0x09,0x1b,0x61,0x08,0x85,
    0x09,0x17,0x81,0x08,0x85
},

{//InvSinc4Tc4p4Fc85Fstop134Apass01Astop50
    0x17,0xa8,0x91,0x01,0x82,
    0x17,0xa8,0xa1,0x81,0x82,
    0x15,0xa8,0xc1,0x81,0x82,
    0x14,0xa8,0xd1,0x81,0x82,
    0x13,0xa8,0xe1,0x81,0x82,
    0x12,0xa8,0x01,0x02,0x83,
    0x10,0xa8,0x21,0x02,0x83,
    0x0f,0xa8,0x31,0x02,0x83,
    0x0e,0xa8,0x41,0x02,0x83,
    0x0d,0xa6,0x61,0x02,0x83,
    0x0c,0xa6,0x71,0x02,0x83,
    0x0b,0xa6,0x91,0x82,0x83,
    0x0a,0xa4,0xb1,0x82,0x83,
    0x09,0xa4,0xc1,0x82,0x83,
    0x08,0xa4,0xe1,0x02,0x84,
    0x07,0xa2,0x01,0x03,0x84,
    0x06,0xa2,0x11,0x03,0x84,
    0x05,0xa0,0x31,0x03,0x84,
    0x04,0xa0,0x41,0x03,0x84,
    0x03,0x9e,0x71,0x83,0x84,
    0x02,0x9c,0x91,0x83,0x84,
    0x01,0x9c,0xa1,0x83,0x84,
    0x00,0x9a,0xc1,0x83,0x84,
    0x00,0x98,0xe1,0x03,0x85,
    0x01,0x97,0x01,0x04,0x85,
    0x02,0x95,0x21,0x04,0x85,
    0x03,0x93,0x41,0x04,0x85,
    0x03,0x91,0x61,0x84,0x85,
    0x04,0x8f,0x81,0x84,0x85,
    0x05,0x8d,0xa1,0x84,0x85,
    0x05,0x8b,0xb1,0x84,0x85,
    0x06,0x89,0xd1,0x84,0x85,
    0x07,0x87,0x01,0x05,0x86,
    0x07,0x85,0x11,0x05,0x86,
    0x08,0x83,0x31,0x05,0x86,
    0x08,0x7f,0x51,0x05,0x86,
    0x09,0x7d,0x71,0x05,0x86,
    0x09,0x7b,0x91,0x85,0x86,
    0x0a,0x79,0xb1,0x85,0x86,
    0x0a,0x75,0xd1,0x85,0x86,
    0x0b,0x73,0xf1,0x85,0x86,
    0x0b,0x6f,0x11,0x86,0x86,
    0x0c,0x6d,0x41,0x06,0x87,
    0x0c,0x69,0x61,0x06,0x87,
    0x0c,0x67,0x71,0x06,0x87,
    0x0d,0x63,0xa1,0x06,0x87,
    0x0d,0x61,0xb1,0x06,0x87,
    0x0d,0x5d,0xe1,0x86,0x87,
    0x0e,0x59,0x11,0x87,0x87,
    0x0e,0x57,0x21,0x87,0x87,
    0x0e,0x53,0x41,0x87,0x87,
    0x0e,0x4f,0x61,0x87,0x87,
    0x0f,0x4d,0x81,0x87,0x87,
    0x0f,0x49,0xa1,0x87,0x87,
    0x0f,0x45,0xc1,0x87,0x87,
    0x0f,0x41,0xe1,0x87,0x87,
    0x0f,0x3d,0x01,0x88,0x87,
    0x0f,0x3b,0x21,0x08,0x88,
    0x0f,0x37,0x41,0x08,0x88,
    0x10,0x33,0x71,0x08,0x88,
    0x10,0x2f,0x91,0x08,0x88,
    0x10,0x2b,0xb1,0x08,0x88,
    0x10,0x27,0xd1,0x08,0x88,
    0x10,0x23,0xf1,0x08,0x88
},

{//InvSinc4Tc4p4Fc85Fstop134Apass01Astop50G11
    0x02,0xf8,0x91,0x80,0x83,
    0x02,0xf8,0xa1,0x00,0x84,
    0x00,0xf8,0xc1,0x00,0x84,
    0x01,0xf7,0xe1,0x00,0x84,
    0x02,0xf7,0xf1,0x00,0x84,
    0x03,0xf7,0x11,0x81,0x84,
    0x05,0xf5,0x41,0x81,0x84,
    0x06,0xf7,0x51,0x01,0x85,
    0x07,0xf7,0x61,0x01,0x85,
    0x08,0xf3,0x91,0x01,0x85,
    0x09,0xf3,0xa1,0x01,0x85,
    0x0a,0xf3,0xc1,0x81,0x85,
    0x0b,0xef,0xf1,0x81,0x85,
    0x0c,0xef,0x01,0x82,0x85,
    0x0d,0xf1,0x21,0x82,0x86,
    0x0e,0xed,0x51,0x82,0x86,
    0x0f,0xed,0x61,0x82,0x86,
    0x10,0xeb,0x81,0x82,0x86,
    0x11,0xe9,0xa1,0x82,0x86,
    0x12,0xe9,0xd1,0x82,0x87,
    0x13,0xe5,0x01,0x83,0x87,
    0x14,0xe5,0x11,0x83,0x87,
    0x15,0xe1,0x41,0x83,0x87,
    0x14,0xdd,0x61,0x03,0x88,
    0x15,0xd9,0x91,0x03,0x88,
    0x16,0xd9,0xb1,0x83,0x88,
    0x17,0xd5,0xe1,0x83,0x88,
    0x17,0xd3,0x01,0x04,0x89,
    0x18,0xcf,0x31,0x04,0x89,
    0x19,0xcd,0x51,0x04,0x89,
    0x19,0xcd,0x61,0x84,0x89,
    0x1a,0xc9,0x91,0x84,0x89,
    0x1b,0xc5,0xd1,0x04,0x8a,
    0x1a,0xc1,0xe1,0x04,0x8a,
    0x1b,0xbf,0x01,0x05,0x8a,
    0x1b,0xbb,0x31,0x85,0x8a,
    0x1c,0xb9,0x51,0x85,0x8a,
    0x1c,0xb5,0x81,0x05,0x8b,
    0x1d,0xb3,0xa1,0x05,0x8b,
    0x1d,0xad,0xd1,0x05,0x8b,
    0x1e,0xab,0x01,0x86,0x8b,
    0x1d,0xa5,0x21,0x86,0x8b,
    0x1e,0xa1,0x61,0x06,0x8c,
    0x1e,0x9d,0x81,0x06,0x8c,
    0x1e,0x99,0xa1,0x06,0x8c,
    0x1f,0x95,0xe1,0x86,0x8c,
    0x1f,0x93,0xf1,0x86,0x8c,
    0x1e,0x8b,0x31,0x07,0x8d,
    0x1f,0x87,0x61,0x07,0x8d,
    0x1f,0x83,0x81,0x07,0x8d,
    0x1f,0x81,0xa1,0x87,0x8d,
    0x1f,0x7b,0xd1,0x87,0x8d,
    0x20,0x79,0xf1,0x87,0x8d,
    0x1f,0x71,0x21,0x88,0x8d,
    0x1f,0x6b,0x51,0x88,0x8d,
    0x1f,0x69,0x71,0x08,0x8e,
    0x1f,0x63,0xa1,0x08,0x8e,
    0x1f,0x61,0xc1,0x88,0x8e,
    0x1f,0x5b,0xf1,0x88,0x8e,
    0x1f,0x55,0x31,0x09,0x8f,
    0x1f,0x51,0x51,0x09,0x8f,
    0x1f,0x4b,0x81,0x09,0x8f,
    0x1f,0x45,0xb1,0x09,0x8f,
    0x1f,0x41,0xd1,0x09,0x8f
},

{//InvSinc4Tc4p4Fc85Fstop134Apass01Astop50G12
    0x13,0x47,0x72,0xc0,0x84,
    0x13,0x47,0x62,0x40,0x85,
    0x15,0x47,0x32,0xc0,0x85,
    0x16,0x47,0x22,0xc0,0x85,
    0x17,0x45,0x02,0x80,0x85,
    0x18,0x45,0x22,0x00,0x86,
    0x1a,0x45,0x52,0x80,0x86,
    0x1b,0x43,0x72,0x80,0x86,
    0x1c,0x43,0x82,0x80,0x86,
    0x1d,0x41,0xb2,0x00,0x87,
    0x1e,0x41,0xc2,0x00,0x87,
    0x1f,0x3f,0xf2,0x80,0x87,
    0x20,0x3d,0x22,0x01,0x88,
    0x21,0x3b,0x42,0x01,0x88,
    0x22,0x3b,0x62,0x81,0x88,
    0x23,0x39,0x92,0x01,0x89,
    0x24,0x37,0xb2,0x01,0x89,
    0x25,0x33,0xe2,0x01,0x89,
    0x26,0x33,0xf2,0x01,0x89,
    0x26,0x2d,0x42,0x02,0x8a,
    0x27,0x29,0x72,0x02,0x8a,
    0x28,0x2b,0x82,0x82,0x8a,
    0x29,0x27,0xb2,0x82,0x8a,
    0x29,0x23,0xe2,0x02,0x8b,
    0x2a,0x21,0x12,0x83,0x8b,
    0x2a,0x1b,0x42,0x83,0x8b,
    0x2b,0x19,0x72,0x03,0x8c,
    0x2b,0x15,0xa2,0x83,0x8c,
    0x2c,0x11,0xd2,0x83,0x8c,
    0x2d,0x0f,0x02,0x04,0x8d,
    0x2c,0x09,0x22,0x04,0x8d,
    0x2d,0x05,0x52,0x04,0x8d,
    0x2e,0x03,0x92,0x04,0x8e,
    0x2e,0xff,0xb1,0x04,0x8e,
    0x2f,0xfd,0xe1,0x84,0x8e,
    0x2e,0xf5,0x11,0x85,0x8e,
    0x2f,0xf1,0x41,0x85,0x8e,
    0x2f,0xef,0x71,0x85,0x8f,
    0x30,0xeb,0xa1,0x85,0x8f,
    0x2f,0xe5,0xd1,0x05,0x90,
    0x30,0xe1,0x01,0x06,0x90,
    0x30,0xdb,0x31,0x06,0x90,
    0x30,0xd5,0x81,0x06,0x91,
    0x30,0xcf,0xb1,0x06,0x91,
    0x30,0xcf,0xc1,0x86,0x91,
    0x30,0xc5,0x11,0x87,0x91,
    0x30,0xc1,0x31,0x87,0x91,
    0x30,0xbd,0x71,0x87,0x92,
    0x30,0xb5,0xc1,0x07,0x93,
    0x30,0xb3,0xd1,0x07,0x93,
    0x30,0xab,0x11,0x08,0x93,
    0x2f,0xa5,0x41,0x88,0x93,
    0x30,0xa1,0x71,0x88,0x93,
    0x30,0x9b,0xa1,0x88,0x93,
    0x2f,0x95,0xd1,0x08,0x94,
    0x2f,0x8f,0x01,0x09,0x94,
    0x2f,0x89,0x41,0x89,0x94,
    0x2e,0x83,0x71,0x09,0x95,
    0x2e,0x7d,0xa1,0x09,0x95,
    0x2f,0x79,0xe1,0x89,0x95,
    0x2e,0x6f,0x21,0x8a,0x95,
    0x2e,0x6b,0x51,0x0a,0x96,
    0x2d,0x63,0x81,0x0a,0x96,
    0x2d,0x5f,0xb1,0x8a,0x96
},

{//InvSinc4Tc4p4Fc85Fstop134Apass01Astop50G13
    0x29,0x9b,0x82,0x41,0x86,
    0x29,0x99,0x62,0xc1,0x86,
    0x2b,0x97,0x32,0xc1,0x86,
    0x2c,0x97,0x12,0x41,0x87,
    0x2d,0x97,0x02,0x41,0x87,
    0x2e,0x95,0xc2,0x40,0x88,
    0x30,0x93,0x92,0x40,0x88,
    0x31,0x95,0x82,0xc0,0x88,
    0x32,0x93,0x62,0xc0,0x88,
    0x32,0x8b,0x22,0xc0,0x88,
    0x33,0x8d,0x12,0x40,0x89,
    0x34,0x8b,0x22,0x80,0x89,
    0x35,0x87,0x62,0x00,0x8a,
    0x36,0x87,0x72,0x00,0x8a,
    0x37,0x85,0xb2,0x00,0x8b,
    0x38,0x81,0xe2,0x00,0x8b,
    0x39,0x81,0x02,0x81,0x8b,
    0x39,0x7b,0x32,0x81,0x8b,
    0x3a,0x7b,0x52,0x01,0x8c,
    0x3b,0x77,0xa2,0x01,0x8d,
    0x3c,0x73,0xd2,0x01,0x8d,
    0x3d,0x71,0xf2,0x01,0x8d,
    0x3e,0x6d,0x32,0x82,0x8d,
    0x3d,0x69,0x62,0x82,0x8e,
    0x3e,0x63,0xa2,0x82,0x8e,
    0x3f,0x61,0xd2,0x02,0x8f,
    0x3f,0x59,0x12,0x03,0x8f,
    0x3f,0x57,0x42,0x03,0x90,
    0x40,0x53,0x82,0x83,0x90,
    0x40,0x4d,0xb2,0x83,0x90,
    0x40,0x4b,0xd2,0x03,0x91,
    0x41,0x47,0x02,0x04,0x91,
    0x42,0x41,0x62,0x04,0x92,
    0x41,0x3d,0x72,0x04,0x92,
    0x42,0x39,0xb2,0x84,0x92,
    0x41,0x31,0xf2,0x04,0x93,
    0x42,0x2d,0x22,0x05,0x93,
    0x42,0x29,0x62,0x05,0x94,
    0x42,0x23,0x92,0x05,0x94,
    0x42,0x1d,0xd2,0x85,0x94,
    0x43,0x19,0x12,0x06,0x95,
    0x42,0x11,0x42,0x06,0x95,
    0x43,0x0d,0x92,0x06,0x96,
    0x42,0x05,0xd2,0x86,0x96,
    0x42,0x01,0xf2,0x86,0x96,
    0x42,0xf7,0x51,0x07,0x97,
    0x42,0xf5,0x61,0x07,0x97,
    0x41,0xeb,0xc1,0x07,0x98,
    0x42,0xe5,0x11,0x88,0x98,
    0x41,0xdf,0x31,0x88,0x98,
    0x41,0xd9,0x71,0x08,0x99,
    0x40,0xcf,0xb1,0x08,0x99,
    0x41,0xcd,0xe1,0x88,0x99,
    0x40,0xc5,0x21,0x09,0x9a,
    0x40,0xbd,0x61,0x09,0x9a,
    0x3f,0xb5,0xa1,0x89,0x9a,
    0x3e,0xad,0xd1,0x89,0x9a,
    0x3e,0xa9,0x11,0x8a,0x9b,
    0x3e,0xa3,0x51,0x0a,0x9c,
    0x3e,0x9b,0xa1,0x8a,0x9c,
    0x3d,0x91,0xe1,0x8a,0x9c,
    0x3d,0x8b,0x21,0x0b,0x9d,
    0x3c,0x81,0x61,0x0b,0x9d,
    0x3c,0x7d,0x91,0x8b,0x9d
},

{//InvSinc4Tc4p4Fc95Fstop148Apass0001Astop40
    0x09,0xe8,0x91,0x00,0x83,
    0x08,0xe8,0xa1,0x00,0x83,
    0x06,0xe8,0xc1,0x00,0x83,
    0x05,0xe8,0xd1,0x00,0x83,
    0x04,0xe8,0xe1,0x00,0x83,
    0x02,0xe6,0x11,0x01,0x83,
    0x01,0xe6,0x21,0x01,0x83,
    0x00,0xe4,0x41,0x01,0x83,
    0x01,0xe5,0x51,0x01,0x83,
    0x02,0xe3,0x71,0x01,0x83,
    0x04,0xe3,0x91,0x01,0x83,
    0x05,0xe1,0xb1,0x01,0x83,
    0x06,0xe1,0xc1,0x01,0x83,
    0x07,0xdf,0xe1,0x01,0x83,
    0x08,0xdd,0x11,0x82,0x83,
    0x09,0xdb,0x31,0x82,0x83,
    0x09,0xdb,0x31,0x82,0x83,
    0x0a,0xd9,0x51,0x82,0x83,
    0x0b,0xd7,0x71,0x82,0x83,
    0x0c,0xd5,0xa1,0x02,0x84,
    0x0d,0xd3,0xc1,0x02,0x84,
    0x0d,0xd1,0xd1,0x02,0x84,
    0x0e,0xcd,0x01,0x03,0x84,
    0x0f,0xcb,0x21,0x03,0x84,
    0x0f,0xc9,0x41,0x83,0x84,
    0x10,0xc7,0x61,0x83,0x84,
    0x11,0xc3,0x91,0x83,0x84,
    0x11,0xc1,0xb1,0x03,0x85,
    0x12,0xbf,0xd1,0x03,0x85,
    0x12,0xbb,0xf1,0x03,0x85,
    0x13,0xb9,0x11,0x04,0x85,
    0x13,0xb5,0x41,0x84,0x85,
    0x14,0xb3,0x61,0x84,0x85,
    0x14,0xaf,0x81,0x84,0x85,
    0x14,0xab,0xb1,0x04,0x86,
    0x15,0xa9,0xd1,0x04,0x86,
    0x15,0xa5,0xf1,0x04,0x86,
    0x15,0xa1,0x21,0x85,0x86,
    0x16,0x9d,0x51,0x85,0x86,
    0x16,0x9b,0x61,0x85,0x86,
    0x16,0x97,0x91,0x05,0x87,
    0x16,0x93,0xb1,0x05,0x87,
    0x16,0x8f,0xd1,0x05,0x87,
    0x16,0x8b,0x01,0x86,0x87,
    0x17,0x87,0x31,0x86,0x87,
    0x17,0x83,0x51,0x86,0x87,
    0x17,0x7f,0x81,0x06,0x88,
    0x17,0x7b,0xa1,0x06,0x88,
    0x17,0x75,0xd1,0x06,0x88,
    0x17,0x71,0xf1,0x06,0x88,
    0x17,0x6d,0x21,0x87,0x88,
    0x17,0x69,0x41,0x87,0x88,
    0x17,0x65,0x71,0x07,0x89,
    0x17,0x5f,0xa1,0x07,0x89,
    0x17,0x5b,0xc1,0x07,0x89,
    0x17,0x57,0xe1,0x07,0x89,
    0x16,0x51,0x11,0x88,0x89,
    0x16,0x4d,0x31,0x88,0x89,
    0x16,0x49,0x61,0x08,0x8a,
    0x16,0x43,0x91,0x08,0x8a,
    0x16,0x3f,0xb1,0x08,0x8a,
    0x16,0x39,0xe1,0x08,0x8a,
    0x15,0x35,0x01,0x89,0x8a,
    0x15,0x2f,0x31,0x89,0x8a
},

{//InvSinc4Tc4p4Fc65Apass3Astop60G14
    0x33,0xbb,0xc2,0x41,0x87,
    0x35,0xb7,0x82,0x41,0x87,
    0x36,0xb7,0x62,0xc1,0x87,
    0x37,0xb5,0x42,0xc1,0x87,
    0x38,0xb7,0x32,0x41,0x88,
    0x39,0xb5,0x12,0x41,0x88,
    0x39,0xaf,0xd2,0xc0,0x88,
    0x3a,0xad,0xb2,0xc0,0x88,
    0x3b,0xad,0x92,0x40,0x89,
    0x3c,0xab,0x72,0x40,0x89,
    0x3d,0xa7,0x32,0xc0,0x89,
    0x3e,0xa7,0x02,0x80,0x8a,
    0x3f,0xa5,0x22,0x80,0x8a,
    0x3f,0x9f,0x62,0x00,0x8b,
    0x40,0x9d,0x82,0x00,0x8b,
    0x40,0x9b,0xa2,0x80,0x8b,
    0x41,0x99,0xc2,0x80,0x8b,
    0x42,0x95,0x02,0x01,0x8c,
    0x42,0x8f,0x42,0x81,0x8c,
    0x43,0x8d,0x62,0x81,0x8c,
    0x43,0x89,0xa2,0x81,0x8d,
    0x44,0x85,0xe2,0x01,0x8e,
    0x45,0x85,0xf2,0x01,0x8e,
    0x45,0x7f,0x32,0x82,0x8e,
    0x45,0x79,0x62,0x82,0x8e,
    0x45,0x75,0x92,0x02,0x8f,
    0x46,0x71,0xd2,0x82,0x8f,
    0x46,0x6b,0x02,0x83,0x8f,
    0x46,0x65,0x42,0x03,0x90,
    0x46,0x61,0x82,0x03,0x91,
    0x46,0x59,0xc2,0x03,0x91,
    0x46,0x57,0xe2,0x83,0x91,
    0x47,0x53,0x22,0x04,0x92,
    0x46,0x4d,0x42,0x04,0x92,
    0x47,0x49,0x82,0x84,0x92,
    0x46,0x43,0xa2,0x84,0x92,
    0x47,0x3b,0x02,0x05,0x93,
    0x46,0x35,0x32,0x85,0x93,
    0x47,0x31,0x72,0x05,0x94,
    0x46,0x27,0xb2,0x05,0x94,
    0x46,0x23,0xf2,0x05,0x95,
    0x46,0x1d,0x32,0x86,0x95,
    0x45,0x15,0x72,0x06,0x96,
    0x46,0x11,0xb2,0x86,0x96,
    0x46,0x0b,0xe2,0x86,0x96,
    0x45,0x03,0x22,0x07,0x97,
    0x44,0xfd,0x41,0x07,0x97,
    0x45,0xf5,0xa1,0x87,0x97,
    0x44,0xef,0xd1,0x07,0x98,
    0x43,0xe7,0x11,0x88,0x98,
    0x43,0xdf,0x51,0x88,0x98,
    0x43,0xd9,0x91,0x08,0x99,
    0x42,0xcf,0xe1,0x88,0x99,
    0x42,0xcb,0x01,0x89,0x99,
    0x41,0xc3,0x41,0x09,0x9a,
    0x40,0xb9,0x91,0x89,0x9a,
    0x41,0xb5,0xd1,0x09,0x9b,
    0x40,0xad,0x11,0x8a,0x9b,
    0x3f,0xa3,0x51,0x8a,0x9b,
    0x3f,0x9f,0x81,0x0a,0x9c,
    0x3e,0x97,0xc1,0x8a,0x9c,
    0x3d,0x8d,0x01,0x8b,0x9c,
    0x3d,0x85,0x51,0x0b,0x9d,
    0x3c,0x81,0x71,0x8b,0x9d
},

{//InvSinc3Tc0p0Fc75Ap001As60G13
    0x00,0x4a,0xc8,0x8c,0x2c,
    0x00,0x4c,0x08,0x0d,0x2b,
    0x00,0x4e,0x38,0x0d,0x2a,
    0x00,0x4e,0x58,0x0d,0x29,
    0x00,0x50,0x88,0x0d,0x28,
    0x00,0x50,0xb8,0x8d,0x26,
    0x00,0x52,0xf8,0x0d,0x25,
    0x00,0x52,0x08,0x8e,0x24,
    0x00,0x54,0x48,0x0e,0x23,
    0x00,0x54,0x68,0x0e,0x22,
    0x00,0x56,0xa8,0x8e,0x20,
    0x00,0x56,0xc8,0x8e,0x1f,
    0x00,0x58,0xf8,0x8e,0x1e,
    0x00,0x56,0x08,0x8f,0x1d,
    0x00,0x58,0x48,0x0f,0x1c,
    0x00,0x58,0x68,0x0f,0x1b,
    0x00,0x5a,0x98,0x0f,0x1a,
    0x00,0x5a,0xb8,0x0f,0x19,
    0x00,0x5c,0xf8,0x8f,0x17,
    0x00,0x5a,0x08,0x90,0x16,
    0x00,0x5c,0x48,0x10,0x15,
    0x00,0x5c,0x58,0x90,0x14,
    0x00,0x5e,0x88,0x90,0x13,
    0x00,0x5c,0xa8,0x10,0x12,
    0x00,0x5c,0xc8,0x10,0x11,
    0x00,0x5e,0xf8,0x10,0x10,
    0x00,0x5e,0x18,0x11,0x0f,
    0x00,0x5e,0x48,0x91,0x0d,
    0x00,0x5e,0x58,0x11,0x0d,
    0x00,0x5e,0x78,0x11,0x0c,
    0x00,0x5e,0xa8,0x91,0x0a,
    0x00,0x5e,0xb8,0x11,0x0a,
    0x00,0x5c,0xc8,0x11,0x09,
    0x00,0x5e,0xf8,0x11,0x08,
    0x00,0x5e,0x18,0x12,0x07,
    0x00,0x5e,0x48,0x92,0x05,
    0x00,0x5e,0x58,0x12,0x05,
    0x00,0x5c,0x68,0x12,0x04,
    0x00,0x5e,0x88,0x92,0x03,
    0x00,0x5c,0xa8,0x12,0x02,
    0x00,0x5c,0xb8,0x92,0x01,
    0x00,0x5a,0xc8,0x92,0x00,
    0x00,0x5c,0xf8,0x92,0x80,
    0x00,0x5a,0x08,0x93,0x81,
    0x00,0x58,0x08,0x13,0x82,
    0x00,0x58,0x28,0x13,0x83,
    0x00,0x58,0x48,0x13,0x84,
    0x00,0x56,0x48,0x93,0x84,
    0x00,0x56,0x68,0x93,0x85,
    0x00,0x54,0x68,0x13,0x86,
    0x00,0x54,0x88,0x13,0x87,
    0x00,0x54,0xa8,0x13,0x88,
    0x00,0x52,0xa8,0x93,0x88,
    0x00,0x50,0xa8,0x13,0x89,
    0x00,0x4e,0xa8,0x93,0x89,
    0x00,0x4c,0xb8,0x93,0x8a,
    0x00,0x4c,0xc8,0x13,0x8b,
    0x00,0x4a,0xc8,0x93,0x8b,
    0x00,0x48,0xc8,0x13,0x8c,
    0x00,0x46,0xc8,0x93,0x8c,
    0x00,0x44,0xc8,0x13,0x8d,
    0x00,0x42,0xc8,0x93,0x8d,
    0x00,0x42,0xf8,0x13,0x8f,
    0x00,0x40,0xf8,0x93,0x8f
},

{//InvSinc3Tc0p0Fc75Ap001As60
    0x00,0x02,0x00,0x88,0x3f,
    0x00,0x02,0x20,0x88,0x3e,
    0x00,0x02,0x40,0x88,0x3d,
    0x00,0x02,0x50,0x08,0x3d,
    0x00,0x02,0x70,0x08,0x3c,
    0x00,0x02,0x90,0x08,0x3b,
    0x00,0x02,0xb0,0x08,0x3a,
    0x00,0x02,0xc0,0x88,0x39,
    0x00,0x02,0xe0,0x88,0x38,
    0x00,0x02,0x00,0x89,0x37,
    0x00,0x02,0x20,0x89,0x36,
    0x00,0x02,0x30,0x09,0x36,
    0x00,0x02,0x50,0x09,0x35,
    0x00,0x04,0x70,0x89,0x33,
    0x00,0x04,0x80,0x09,0x33,
    0x00,0x04,0xa0,0x09,0x32,
    0x00,0x04,0xb0,0x89,0x31,
    0x00,0x04,0xd0,0x89,0x30,
    0x00,0x04,0xf0,0x89,0x2f,
    0x00,0x06,0x00,0x8a,0x2e,
    0x00,0x06,0x20,0x8a,0x2d,
    0x00,0x06,0x30,0x0a,0x2d,
    0x00,0x06,0x50,0x0a,0x2c,
    0x00,0x08,0x60,0x0a,0x2b,
    0x00,0x08,0x80,0x0a,0x2a,
    0x00,0x08,0x90,0x8a,0x29,
    0x00,0x08,0xa0,0x0a,0x29,
    0x00,0x0a,0xc0,0x8a,0x27,
    0x00,0x0a,0xd0,0x0a,0x27,
    0x00,0x0a,0xe0,0x8a,0x26,
    0x00,0x0c,0x00,0x0b,0x25,
    0x00,0x0c,0x10,0x8b,0x24,
    0x00,0x0e,0x20,0x8b,0x23,
    0x00,0x0e,0x30,0x0b,0x23,
    0x00,0x0e,0x50,0x0b,0x22,
    0x00,0x10,0x60,0x0b,0x21,
    0x00,0x10,0x70,0x8b,0x20,
    0x00,0x12,0x80,0x8b,0x1f,
    0x00,0x12,0x90,0x0b,0x1f,
    0x00,0x14,0xa0,0x0b,0x1e,
    0x00,0x14,0xb0,0x8b,0x1d,
    0x00,0x16,0xc0,0x8b,0x1c,
    0x00,0x16,0xd0,0x0b,0x1c,
    0x00,0x18,0xe0,0x0b,0x1b,
    0x00,0x1a,0xe0,0x8b,0x1a,
    0x00,0x1a,0xf0,0x0b,0x1a,
    0x00,0x1c,0x00,0x0c,0x19,
    0x00,0x1e,0x10,0x0c,0x18,
    0x00,0x1e,0x10,0x0c,0x18,
    0x00,0x20,0x20,0x0c,0x17,
    0x00,0x22,0x30,0x0c,0x16,
    0x00,0x22,0x30,0x0c,0x16,
    0x00,0x24,0x40,0x0c,0x15,
    0x00,0x26,0x40,0x8c,0x14,
    0x00,0x28,0x50,0x8c,0x13,
    0x00,0x2a,0x50,0x0c,0x13,
    0x00,0x2a,0x50,0x0c,0x13,
    0x00,0x2c,0x60,0x0c,0x12,
    0x00,0x2e,0x60,0x8c,0x11,
    0x00,0x30,0x60,0x0c,0x11,
    0x00,0x32,0x60,0x8c,0x10,
    0x00,0x34,0x60,0x0c,0x10,
    0x00,0x36,0x70,0x0c,0x0f,
    0x00,0x38,0x70,0x8c,0x0e
},

};

//****************************************************
// C_SRAM1
//****************************************************
code U8 MST_C_SRAM1_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_C_SRAM1_SC2_Sub[][PQ_IP_C_SRAM1_SIZE_SC2_Sub]=
{
{//C2121
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x40,0x80,0x00,0x04,0x20,
    0x40,0x80,0x00,0x04,0x20,
    0x40,0x80,0x00,0x04,0x20,
    0x40,0x80,0x00,0x04,0x20
},

{//C121
    0x40,0x00,0x01,0x04,0x00,
    0x3f,0xfe,0x10,0x84,0x00,
    0x3f,0xfe,0x10,0x84,0x00,
    0x3e,0xfc,0x20,0x04,0x01,
    0x3e,0xfc,0x20,0x04,0x01,
    0x3d,0xfa,0x30,0x84,0x01,
    0x3d,0xfa,0x30,0x84,0x01,
    0x3c,0xf8,0x40,0x04,0x02,
    0x3c,0xf8,0x40,0x04,0x02,
    0x3b,0xf6,0x50,0x84,0x02,
    0x3b,0xf6,0x50,0x84,0x02,
    0x3a,0xf4,0x60,0x04,0x03,
    0x3a,0xf4,0x60,0x04,0x03,
    0x39,0xf2,0x70,0x84,0x03,
    0x39,0xf2,0x70,0x84,0x03,
    0x38,0xf0,0x80,0x04,0x04,
    0x38,0xf0,0x80,0x04,0x04,
    0x37,0xee,0x90,0x84,0x04,
    0x37,0xee,0x90,0x84,0x04,
    0x36,0xec,0xa0,0x04,0x05,
    0x36,0xec,0xa0,0x04,0x05,
    0x35,0xea,0xb0,0x84,0x05,
    0x35,0xea,0xb0,0x84,0x05,
    0x34,0xe8,0xc0,0x04,0x06,
    0x34,0xe8,0xc0,0x04,0x06,
    0x33,0xe6,0xd0,0x84,0x06,
    0x33,0xe6,0xd0,0x84,0x06,
    0x32,0xe4,0xe0,0x04,0x07,
    0x32,0xe4,0xe0,0x04,0x07,
    0x31,0xe2,0xf0,0x84,0x07,
    0x31,0xe2,0xf0,0x84,0x07,
    0x30,0xe0,0x00,0x05,0x08,
    0x30,0xe0,0x00,0x05,0x08,
    0x2f,0xde,0x10,0x85,0x08,
    0x2f,0xde,0x10,0x85,0x08,
    0x2e,0xdc,0x20,0x05,0x09,
    0x2e,0xdc,0x20,0x05,0x09,
    0x2d,0xda,0x30,0x85,0x09,
    0x2d,0xda,0x30,0x85,0x09,
    0x2c,0xd8,0x40,0x05,0x0a,
    0x2c,0xd8,0x40,0x05,0x0a,
    0x2b,0xd6,0x50,0x85,0x0a,
    0x2b,0xd6,0x50,0x85,0x0a,
    0x2a,0xd4,0x60,0x05,0x0b,
    0x2a,0xd4,0x60,0x05,0x0b,
    0x29,0xd2,0x70,0x85,0x0b,
    0x29,0xd2,0x70,0x85,0x0b,
    0x28,0xd0,0x80,0x05,0x0c,
    0x28,0xd0,0x80,0x05,0x0c,
    0x27,0xce,0x90,0x85,0x0c,
    0x27,0xce,0x90,0x85,0x0c,
    0x26,0xcc,0xa0,0x05,0x0d,
    0x26,0xcc,0xa0,0x05,0x0d,
    0x25,0xca,0xb0,0x85,0x0d,
    0x25,0xca,0xb0,0x85,0x0d,
    0x24,0xc8,0xc0,0x05,0x0e,
    0x24,0xc8,0xc0,0x05,0x0e,
    0x23,0xc6,0xd0,0x85,0x0e,
    0x23,0xc6,0xd0,0x85,0x0e,
    0x22,0xc4,0xe0,0x05,0x0f,
    0x22,0xc4,0xe0,0x05,0x0f,
    0x21,0xc2,0xf0,0x85,0x0f,
    0x21,0xc2,0xf0,0x85,0x0f,
    0x20,0xc0,0x00,0x06,0x10
},

};

//****************************************************
// C_SRAM2
//****************************************************
code U8 MST_C_SRAM2_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_C_SRAM2_SC2_Sub[][PQ_IP_C_SRAM2_SIZE_SC2_Sub]=
{
{//C2121
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x40,0x80,0x00,0x04,0x20,
    0x40,0x80,0x00,0x04,0x20,
    0x40,0x80,0x00,0x04,0x20,
    0x40,0x80,0x00,0x04,0x20
},

{//C121
    0x40,0x00,0x01,0x04,0x00,
    0x3f,0xfe,0x10,0x84,0x00,
    0x3f,0xfe,0x10,0x84,0x00,
    0x3e,0xfc,0x20,0x04,0x01,
    0x3e,0xfc,0x20,0x04,0x01,
    0x3d,0xfa,0x30,0x84,0x01,
    0x3d,0xfa,0x30,0x84,0x01,
    0x3c,0xf8,0x40,0x04,0x02,
    0x3c,0xf8,0x40,0x04,0x02,
    0x3b,0xf6,0x50,0x84,0x02,
    0x3b,0xf6,0x50,0x84,0x02,
    0x3a,0xf4,0x60,0x04,0x03,
    0x3a,0xf4,0x60,0x04,0x03,
    0x39,0xf2,0x70,0x84,0x03,
    0x39,0xf2,0x70,0x84,0x03,
    0x38,0xf0,0x80,0x04,0x04,
    0x38,0xf0,0x80,0x04,0x04,
    0x37,0xee,0x90,0x84,0x04,
    0x37,0xee,0x90,0x84,0x04,
    0x36,0xec,0xa0,0x04,0x05,
    0x36,0xec,0xa0,0x04,0x05,
    0x35,0xea,0xb0,0x84,0x05,
    0x35,0xea,0xb0,0x84,0x05,
    0x34,0xe8,0xc0,0x04,0x06,
    0x34,0xe8,0xc0,0x04,0x06,
    0x33,0xe6,0xd0,0x84,0x06,
    0x33,0xe6,0xd0,0x84,0x06,
    0x32,0xe4,0xe0,0x04,0x07,
    0x32,0xe4,0xe0,0x04,0x07,
    0x31,0xe2,0xf0,0x84,0x07,
    0x31,0xe2,0xf0,0x84,0x07,
    0x30,0xe0,0x00,0x05,0x08,
    0x30,0xe0,0x00,0x05,0x08,
    0x2f,0xde,0x10,0x85,0x08,
    0x2f,0xde,0x10,0x85,0x08,
    0x2e,0xdc,0x20,0x05,0x09,
    0x2e,0xdc,0x20,0x05,0x09,
    0x2d,0xda,0x30,0x85,0x09,
    0x2d,0xda,0x30,0x85,0x09,
    0x2c,0xd8,0x40,0x05,0x0a,
    0x2c,0xd8,0x40,0x05,0x0a,
    0x2b,0xd6,0x50,0x85,0x0a,
    0x2b,0xd6,0x50,0x85,0x0a,
    0x2a,0xd4,0x60,0x05,0x0b,
    0x2a,0xd4,0x60,0x05,0x0b,
    0x29,0xd2,0x70,0x85,0x0b,
    0x29,0xd2,0x70,0x85,0x0b,
    0x28,0xd0,0x80,0x05,0x0c,
    0x28,0xd0,0x80,0x05,0x0c,
    0x27,0xce,0x90,0x85,0x0c,
    0x27,0xce,0x90,0x85,0x0c,
    0x26,0xcc,0xa0,0x05,0x0d,
    0x26,0xcc,0xa0,0x05,0x0d,
    0x25,0xca,0xb0,0x85,0x0d,
    0x25,0xca,0xb0,0x85,0x0d,
    0x24,0xc8,0xc0,0x05,0x0e,
    0x24,0xc8,0xc0,0x05,0x0e,
    0x23,0xc6,0xd0,0x85,0x0e,
    0x23,0xc6,0xd0,0x85,0x0e,
    0x22,0xc4,0xe0,0x05,0x0f,
    0x22,0xc4,0xe0,0x05,0x0f,
    0x21,0xc2,0xf0,0x85,0x0f,
    0x21,0xc2,0xf0,0x85,0x0f,
    0x20,0xc0,0x00,0x06,0x10
},

};

//****************************************************
// C_SRAM3
//****************************************************
code U8 MST_C_SRAM3_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_C_SRAM3_SC2_Sub[][PQ_IP_C_SRAM3_SIZE_SC2_Sub]=
{
{//C2121
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x40,0x80,0x00,0x04,0x20,
    0x40,0x80,0x00,0x04,0x20,
    0x40,0x80,0x00,0x04,0x20,
    0x40,0x80,0x00,0x04,0x20
},

{//C121
    0x40,0x00,0x01,0x04,0x00,
    0x3f,0xfe,0x10,0x84,0x00,
    0x3f,0xfe,0x10,0x84,0x00,
    0x3e,0xfc,0x20,0x04,0x01,
    0x3e,0xfc,0x20,0x04,0x01,
    0x3d,0xfa,0x30,0x84,0x01,
    0x3d,0xfa,0x30,0x84,0x01,
    0x3c,0xf8,0x40,0x04,0x02,
    0x3c,0xf8,0x40,0x04,0x02,
    0x3b,0xf6,0x50,0x84,0x02,
    0x3b,0xf6,0x50,0x84,0x02,
    0x3a,0xf4,0x60,0x04,0x03,
    0x3a,0xf4,0x60,0x04,0x03,
    0x39,0xf2,0x70,0x84,0x03,
    0x39,0xf2,0x70,0x84,0x03,
    0x38,0xf0,0x80,0x04,0x04,
    0x38,0xf0,0x80,0x04,0x04,
    0x37,0xee,0x90,0x84,0x04,
    0x37,0xee,0x90,0x84,0x04,
    0x36,0xec,0xa0,0x04,0x05,
    0x36,0xec,0xa0,0x04,0x05,
    0x35,0xea,0xb0,0x84,0x05,
    0x35,0xea,0xb0,0x84,0x05,
    0x34,0xe8,0xc0,0x04,0x06,
    0x34,0xe8,0xc0,0x04,0x06,
    0x33,0xe6,0xd0,0x84,0x06,
    0x33,0xe6,0xd0,0x84,0x06,
    0x32,0xe4,0xe0,0x04,0x07,
    0x32,0xe4,0xe0,0x04,0x07,
    0x31,0xe2,0xf0,0x84,0x07,
    0x31,0xe2,0xf0,0x84,0x07,
    0x30,0xe0,0x00,0x05,0x08,
    0x30,0xe0,0x00,0x05,0x08,
    0x2f,0xde,0x10,0x85,0x08,
    0x2f,0xde,0x10,0x85,0x08,
    0x2e,0xdc,0x20,0x05,0x09,
    0x2e,0xdc,0x20,0x05,0x09,
    0x2d,0xda,0x30,0x85,0x09,
    0x2d,0xda,0x30,0x85,0x09,
    0x2c,0xd8,0x40,0x05,0x0a,
    0x2c,0xd8,0x40,0x05,0x0a,
    0x2b,0xd6,0x50,0x85,0x0a,
    0x2b,0xd6,0x50,0x85,0x0a,
    0x2a,0xd4,0x60,0x05,0x0b,
    0x2a,0xd4,0x60,0x05,0x0b,
    0x29,0xd2,0x70,0x85,0x0b,
    0x29,0xd2,0x70,0x85,0x0b,
    0x28,0xd0,0x80,0x05,0x0c,
    0x28,0xd0,0x80,0x05,0x0c,
    0x27,0xce,0x90,0x85,0x0c,
    0x27,0xce,0x90,0x85,0x0c,
    0x26,0xcc,0xa0,0x05,0x0d,
    0x26,0xcc,0xa0,0x05,0x0d,
    0x25,0xca,0xb0,0x85,0x0d,
    0x25,0xca,0xb0,0x85,0x0d,
    0x24,0xc8,0xc0,0x05,0x0e,
    0x24,0xc8,0xc0,0x05,0x0e,
    0x23,0xc6,0xd0,0x85,0x0e,
    0x23,0xc6,0xd0,0x85,0x0e,
    0x22,0xc4,0xe0,0x05,0x0f,
    0x22,0xc4,0xe0,0x05,0x0f,
    0x21,0xc2,0xf0,0x85,0x0f,
    0x21,0xc2,0xf0,0x85,0x0f,
    0x20,0xc0,0x00,0x06,0x10
},

};

//****************************************************
// C_SRAM4
//****************************************************
code U8 MST_C_SRAM4_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_C_SRAM4_SC2_Sub[][PQ_IP_C_SRAM4_SIZE_SC2_Sub]=
{
{//C2121
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x54,0x58,0x40,0x05,0x16,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x52,0x5c,0x20,0x05,0x17,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x50,0x60,0x00,0x05,0x18,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4e,0x64,0xe0,0x04,0x19,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4c,0x68,0xc0,0x04,0x1a,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x4a,0x6c,0xa0,0x04,0x1b,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x48,0x70,0x80,0x04,0x1c,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x46,0x74,0x60,0x04,0x1d,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x44,0x78,0x40,0x04,0x1e,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x42,0x7c,0x20,0x04,0x1f,
    0x40,0x80,0x00,0x04,0x20,
    0x40,0x80,0x00,0x04,0x20,
    0x40,0x80,0x00,0x04,0x20,
    0x40,0x80,0x00,0x04,0x20
},

{//C121
    0x40,0x00,0x01,0x04,0x00,
    0x3f,0xfe,0x10,0x84,0x00,
    0x3f,0xfe,0x10,0x84,0x00,
    0x3e,0xfc,0x20,0x04,0x01,
    0x3e,0xfc,0x20,0x04,0x01,
    0x3d,0xfa,0x30,0x84,0x01,
    0x3d,0xfa,0x30,0x84,0x01,
    0x3c,0xf8,0x40,0x04,0x02,
    0x3c,0xf8,0x40,0x04,0x02,
    0x3b,0xf6,0x50,0x84,0x02,
    0x3b,0xf6,0x50,0x84,0x02,
    0x3a,0xf4,0x60,0x04,0x03,
    0x3a,0xf4,0x60,0x04,0x03,
    0x39,0xf2,0x70,0x84,0x03,
    0x39,0xf2,0x70,0x84,0x03,
    0x38,0xf0,0x80,0x04,0x04,
    0x38,0xf0,0x80,0x04,0x04,
    0x37,0xee,0x90,0x84,0x04,
    0x37,0xee,0x90,0x84,0x04,
    0x36,0xec,0xa0,0x04,0x05,
    0x36,0xec,0xa0,0x04,0x05,
    0x35,0xea,0xb0,0x84,0x05,
    0x35,0xea,0xb0,0x84,0x05,
    0x34,0xe8,0xc0,0x04,0x06,
    0x34,0xe8,0xc0,0x04,0x06,
    0x33,0xe6,0xd0,0x84,0x06,
    0x33,0xe6,0xd0,0x84,0x06,
    0x32,0xe4,0xe0,0x04,0x07,
    0x32,0xe4,0xe0,0x04,0x07,
    0x31,0xe2,0xf0,0x84,0x07,
    0x31,0xe2,0xf0,0x84,0x07,
    0x30,0xe0,0x00,0x05,0x08,
    0x30,0xe0,0x00,0x05,0x08,
    0x2f,0xde,0x10,0x85,0x08,
    0x2f,0xde,0x10,0x85,0x08,
    0x2e,0xdc,0x20,0x05,0x09,
    0x2e,0xdc,0x20,0x05,0x09,
    0x2d,0xda,0x30,0x85,0x09,
    0x2d,0xda,0x30,0x85,0x09,
    0x2c,0xd8,0x40,0x05,0x0a,
    0x2c,0xd8,0x40,0x05,0x0a,
    0x2b,0xd6,0x50,0x85,0x0a,
    0x2b,0xd6,0x50,0x85,0x0a,
    0x2a,0xd4,0x60,0x05,0x0b,
    0x2a,0xd4,0x60,0x05,0x0b,
    0x29,0xd2,0x70,0x85,0x0b,
    0x29,0xd2,0x70,0x85,0x0b,
    0x28,0xd0,0x80,0x05,0x0c,
    0x28,0xd0,0x80,0x05,0x0c,
    0x27,0xce,0x90,0x85,0x0c,
    0x27,0xce,0x90,0x85,0x0c,
    0x26,0xcc,0xa0,0x05,0x0d,
    0x26,0xcc,0xa0,0x05,0x0d,
    0x25,0xca,0xb0,0x85,0x0d,
    0x25,0xca,0xb0,0x85,0x0d,
    0x24,0xc8,0xc0,0x05,0x0e,
    0x24,0xc8,0xc0,0x05,0x0e,
    0x23,0xc6,0xd0,0x85,0x0e,
    0x23,0xc6,0xd0,0x85,0x0e,
    0x22,0xc4,0xe0,0x05,0x0f,
    0x22,0xc4,0xe0,0x05,0x0f,
    0x21,0xc2,0xf0,0x85,0x0f,
    0x21,0xc2,0xf0,0x85,0x0f,
    0x20,0xc0,0x00,0x06,0x10
},

};

//****************************************************
// VIP
//****************************************************
code U8 MST_VIP_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_pseudo
//****************************************************
code U8 MST_VIP_pseudo_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_pseudo_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_pseudo_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_CSC
//****************************************************
code U8 MST_VIP_CSC_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_CSC_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_CSC_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_6E_L), 0x10, 0x00/*OFF*/, 
                              0x10/*L_RGB2YCC_SD*/, 
                              0x10/*F_RGB2YCC_SD*/, 
                              0x10/*L_RGB2YCC_HD*/, 
                              0x10/*F_RGB2YCC_HD*/, },
 { PQ_MAP_REG(REG_SC2_BK18_6F_L), 0x30, 0x00/*OFF*/, 
                              0x00/*L_RGB2YCC_SD*/, 
                              0x10/*F_RGB2YCC_SD*/, 
                              0x20/*L_RGB2YCC_HD*/, 
                              0x30/*F_RGB2YCC_HD*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_CSC_dither
//****************************************************
code U8 MST_VIP_CSC_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_CSC_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_CSC_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Post_YC_delay
//****************************************************
code U8 MST_VIP_Post_YC_delay_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK19_3B_L), 0xC0, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Post_YC_delay_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Post_YC_delay_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_3B_L), 0x02, 0x00/*$OFF*/, 
                              0x02/*$Y0Cb0Cr0*/, 
                              0x02/*$Y0Cb1Cr0*/, 
                              0x02/*$Y0Cb2Cr0*/, 
                              0x02/*$Y0Cb3Cr0*/, 
                              0x02/*$Y1Cb0Cr0*/, },
 { PQ_MAP_REG(REG_SC2_BK19_3B_H), 0xF0, 0x00/*$OFF*/, 
                              0x00/*$Y0Cb0Cr0*/, 
                              0x40/*$Y0Cb1Cr0*/, 
                              0x80/*$Y0Cb2Cr0*/, 
                              0xC0/*$Y0Cb3Cr0*/, 
                              0x10/*$Y1Cb0Cr0*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_HNMR_Y
//****************************************************
code U8 MST_VIP_HNMR_Y_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK18_5E_L), 0xFF, 0x11 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_HNMR_Y_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_HNMR_Y_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_5D_L), 0xBF, 0x00/*$OFF*/, 
                              0x81/*$S1*/, 
                              0x82/*$S2*/, 
                              0x83/*$S3*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_HNMR_C
//****************************************************
code U8 MST_VIP_HNMR_C_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK18_5E_H), 0xFF, 0x11 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_HNMR_C_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_HNMR_C_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_5D_H), 0xBF, 0x00/*$OFF*/, 
                              0x81/*$S1*/, 
                              0x82/*$S2*/, 
                              0x83/*$S3*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_HNMR_ad_C
//****************************************************
code U8 MST_VIP_HNMR_ad_C_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_HNMR_ad_C_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_HNMR_ad_C_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_5D_L), 0x40, 0x00/*OFF*/, 
                              0x40/*Yon_Con*/, 
                              0x40/*Yon_Coff*/, 
                              0x00/*Yoff_Con*/, },
 { PQ_MAP_REG(REG_SC2_BK18_5D_H), 0x40, 0x00/*OFF*/, 
                              0x40/*Yon_Con*/, 
                              0x00/*Yon_Coff*/, 
                              0x40/*Yoff_Con*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_HNMR_ad_C_gain
//****************************************************
code U8 MST_VIP_HNMR_ad_C_gain_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_HNMR_ad_C_gain_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_HNMR_ad_C_gain_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_57_H), 0x03, 0x00/*S0*/, 
                              0x01/*S1*/, 
                              0x02/*S2*/, 
                              0x03/*S3*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_HNMR_C_win1
//****************************************************
code U8 MST_VIP_HNMR_C_win1_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_HNMR_C_win1_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_HNMR_C_win1_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_69_L), 0x10, 0x00/*OFF*/, 
                              0x10/*Flesh_1*/, 
                              0x10/*Flesh_2*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_HNMR_C_win2
//****************************************************
code U8 MST_VIP_HNMR_C_win2_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_HNMR_C_win2_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_HNMR_C_win2_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_69_L), 0x20, 0x00/*OFF*/, 
                              0x20/*Blue_1*/, 
                              0x20/*Blue_2*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Pre_Yoffset
//****************************************************
code U8 MST_VIP_Pre_Yoffset_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Pre_Yoffset_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Pre_Yoffset_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1A_0F_H), 0xFF, 0x00/*OFF*/, 
                              0x05/*0x05*/, 
                              0xF4/*0xF4*/, 
                              0xF6/*0xF6*/, 
                              0xF7/*0xF7*/, 
                              0xFA/*0xFA*/, },
 { PQ_MAP_REG(REG_SC2_BK1A_0E_H), 0x03, 0x00/*OFF*/, 
                              0x00/*0x05*/, 
                              0x00/*0xF4*/, 
                              0x00/*0xF6*/, 
                              0x00/*0xF7*/, 
                              0x01/*0xFA*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Pre_Ygain
//****************************************************
code U8 MST_VIP_Pre_Ygain_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Pre_Ygain_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Pre_Ygain_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1A_16_H), 0xFF, 0x40/*OFF*/, 
                              0x42/*0x42*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Pre_Ygain_dither
//****************************************************
code U8 MST_VIP_Pre_Ygain_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Pre_Ygain_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Pre_Ygain_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_HLPF
//****************************************************
code U8 MST_VIP_HLPF_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_HLPF_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_HLPF_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_14_L), 0x70, 0x00/*OFF*/, 
                              0x10/*0x1*/, 
                              0x20/*0x2*/, 
                              0x30/*0x3*/, 
                              0x40/*0x4*/, 
                              0x50/*0x5*/, 
                              0x60/*0x6*/, 
                              0x70/*0x7*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_HLPF_dither
//****************************************************
code U8 MST_VIP_HLPF_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_HLPF_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_HLPF_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_VNMR
//****************************************************
code U8 MST_VIP_VNMR_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK19_3A_L), 0xFF, 0x88 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_VNMR_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_VNMR_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_16_L), 0xBF, 0x00/*$OFF*/, 
                              0x81/*$S1*/, 
                              0x82/*$S2*/, 
                              0x83/*$S3*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_VNMR_dither
//****************************************************
code U8 MST_VIP_VNMR_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_VNMR_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_VNMR_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_17_H), 0x80, 0x00/*OFF*/, 
                              0x80/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_VLPF_coef1
//****************************************************
code U8 MST_VIP_VLPF_coef1_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_VLPF_coef1_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_VLPF_coef1_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_16_H), 0x07, 0x00/*OFF*/, 
                              0x01/*0x1*/, 
                              0x02/*0x2*/, 
                              0x03/*0x3*/, 
                              0x04/*0x4*/, 
                              0x05/*0x5*/, 
                              0x06/*0x6*/, 
                              0x07/*0x7*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_VLPF_coef2
//****************************************************
code U8 MST_VIP_VLPF_coef2_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_VLPF_coef2_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_VLPF_coef2_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_16_H), 0x70, 0x00/*OFF*/, 
                              0x10/*0x1*/, 
                              0x20/*0x2*/, 
                              0x30/*0x3*/, 
                              0x40/*0x4*/, 
                              0x50/*0x5*/, 
                              0x60/*0x6*/, 
                              0x70/*0x7*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_VLPF_dither
//****************************************************
code U8 MST_VIP_VLPF_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_VLPF_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_VLPF_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_EE
//****************************************************
code U8 MST_VIP_EE_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_EE_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_EE_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_03_H), 0x01, 0x00/*OFF*/, 
                              0x01/*S2*/, },
 { PQ_MAP_REG(REG_SC2_BK19_06_L), 0xFF, 0x00/*OFF*/, 
                              0x40/*S2*/, },
 { PQ_MAP_REG(REG_SC2_BK19_06_H), 0xF3, 0x00/*$OFF*/, 
                              0x43/*$S2*/, },
 { PQ_MAP_REG(REG_SC2_BK19_07_L), 0x0F, 0x00/*OFF*/, 
                              0x06/*S2*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Peaking
//****************************************************
code U8 MST_VIP_Peaking_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Peaking_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Peaking_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_14_L), 0x01, 0x00/*OFF*/, 
                              0x01/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Peaking_band
//****************************************************
code U8 MST_VIP_Peaking_band_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK19_15_H), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK19_0F_L), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK19_6A_L), 0x7F, 0x10 },
 { PQ_MAP_REG(REG_SC2_BK19_6B_H), 0x7F, 0x10 },
 { PQ_MAP_REG(REG_SC2_BK19_2C_L), 0xFF, 0x01 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK19_2C_H), 0xFF, 0x23 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK19_2D_L), 0xFF, 0x01 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK19_2D_H), 0xFF, 0x23 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK19_2E_L), 0xFF, 0x44 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK19_2F_L), 0xFF, 0x77 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK19_3D_L), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK19_3D_H), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK19_38_H), 0xFF, 0x04 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Peaking_band_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Peaking_band_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_14_H), 0xFF, 0xFF/*$RF_NTSC*/, 
                              0xFF/*$RF_SECAM*/, 
                              0xFF/*$AV_NTSC*/, 
                              0xFF/*$AV_PAL*/, 
                              0xFF/*$AV_SECAM*/, 
                              0xFF/*$SV_NTSC*/, 
                              0xFF/*$480i*/, 
                              0xFF/*$720p*/, 
                              0xFF/*$1080i*/, 
                              0xFF/*$H_480i*/, 
                              0xFF/*$H_576i*/, 
                              0xFF/*$H_720p*/, 
                              0xFF/*$H_1080i*/, 
                              0xFF/*$DT_MPEG2_480is*/, 
                              0xFF/*$DT_MPEG2_720p*/, 
                              0xFF/*$DT_MPEG2_1080i*/, 
                              0xFF/*$DT_H264_480is*/, 
                              0xFF/*$DT_H264_720p*/, 
                              0x00/*$PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_0D_L), 0x0F, 0x0F/*$RF_NTSC*/, 
                              0x0F/*$RF_SECAM*/, 
                              0x0F/*$AV_NTSC*/, 
                              0x0F/*$AV_PAL*/, 
                              0x0F/*$AV_SECAM*/, 
                              0x0F/*$SV_NTSC*/, 
                              0x0F/*$480i*/, 
                              0x0F/*$720p*/, 
                              0x0F/*$1080i*/, 
                              0x0F/*$H_480i*/, 
                              0x0F/*$H_576i*/, 
                              0x0F/*$H_720p*/, 
                              0x0F/*$H_1080i*/, 
                              0x0F/*$DT_MPEG2_480is*/, 
                              0x0F/*$DT_MPEG2_720p*/, 
                              0x0F/*$DT_MPEG2_1080i*/, 
                              0x0F/*$DT_H264_480is*/, 
                              0x0F/*$DT_H264_720p*/, 
                              0x00/*$PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_15_L), 0xFF, 0x00/*$RF_NTSC*/, 
                              0x00/*$RF_SECAM*/, 
                              0x00/*$AV_NTSC*/, 
                              0x01/*$AV_PAL*/, 
                              0x01/*$AV_SECAM*/, 
                              0x01/*$SV_NTSC*/, 
                              0x00/*$480i*/, 
                              0x00/*$720p*/, 
                              0x00/*$1080i*/, 
                              0x00/*$H_480i*/, 
                              0x00/*$H_576i*/, 
                              0x00/*$H_720p*/, 
                              0x00/*$H_1080i*/, 
                              0x00/*$DT_MPEG2_480is*/, 
                              0x00/*$DT_MPEG2_720p*/, 
                              0x00/*$DT_MPEG2_1080i*/, 
                              0x00/*$DT_H264_480is*/, 
                              0x00/*$DT_H264_720p*/, 
                              0x00/*$PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_28_L), 0x7F, 0x28/*RF_NTSC*/, 
                              0x28/*RF_SECAM*/, 
                              0x30/*AV_NTSC*/, 
                              0x28/*AV_PAL*/, 
                              0x28/*AV_SECAM*/, 
                              0x28/*SV_NTSC*/, 
                              0x20/*480i*/, 
                              0x20/*720p*/, 
                              0x28/*1080i*/, 
                              0x24/*H_480i*/, 
                              0x16/*H_576i*/, 
                              0x1A/*H_720p*/, 
                              0x16/*H_1080i*/, 
                              0x28/*DT_MPEG2_480is*/, 
                              0x20/*DT_MPEG2_720p*/, 
                              0x20/*DT_MPEG2_1080i*/, 
                              0x28/*DT_H264_480is*/, 
                              0x20/*DT_H264_720p*/, 
                              0x16/*PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_28_H), 0x7F, 0x20/*RF_NTSC*/, 
                              0x20/*RF_SECAM*/, 
                              0x28/*AV_NTSC*/, 
                              0x20/*AV_PAL*/, 
                              0x20/*AV_SECAM*/, 
                              0x20/*SV_NTSC*/, 
                              0x24/*480i*/, 
                              0x18/*720p*/, 
                              0x18/*1080i*/, 
                              0x20/*H_480i*/, 
                              0x14/*H_576i*/, 
                              0x18/*H_720p*/, 
                              0x14/*H_1080i*/, 
                              0x20/*DT_MPEG2_480is*/, 
                              0x1C/*DT_MPEG2_720p*/, 
                              0x1C/*DT_MPEG2_1080i*/, 
                              0x20/*DT_H264_480is*/, 
                              0x1C/*DT_H264_720p*/, 
                              0x14/*PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_29_L), 0x7F, 0x1C/*RF_NTSC*/, 
                              0x1C/*RF_SECAM*/, 
                              0x20/*AV_NTSC*/, 
                              0x1C/*AV_PAL*/, 
                              0x1C/*AV_SECAM*/, 
                              0x1C/*SV_NTSC*/, 
                              0x24/*480i*/, 
                              0x10/*720p*/, 
                              0x10/*1080i*/, 
                              0x18/*H_480i*/, 
                              0x10/*H_576i*/, 
                              0x10/*H_720p*/, 
                              0x10/*H_1080i*/, 
                              0x1C/*DT_MPEG2_480is*/, 
                              0x18/*DT_MPEG2_720p*/, 
                              0x18/*DT_MPEG2_1080i*/, 
                              0x1C/*DT_H264_480is*/, 
                              0x18/*DT_H264_720p*/, 
                              0x10/*PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_29_H), 0x7F, 0x12/*RF_NTSC*/, 
                              0x12/*RF_SECAM*/, 
                              0x1C/*AV_NTSC*/, 
                              0x18/*AV_PAL*/, 
                              0x18/*AV_SECAM*/, 
                              0x18/*SV_NTSC*/, 
                              0x20/*480i*/, 
                              0x0C/*720p*/, 
                              0x0C/*1080i*/, 
                              0x14/*H_480i*/, 
                              0x0E/*H_576i*/, 
                              0x0C/*H_720p*/, 
                              0x0C/*H_1080i*/, 
                              0x10/*DT_MPEG2_480is*/, 
                              0x10/*DT_MPEG2_720p*/, 
                              0x10/*DT_MPEG2_1080i*/, 
                              0x10/*DT_H264_480is*/, 
                              0x10/*DT_H264_720p*/, 
                              0x0E/*PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_2A_L), 0x7F, 0x20/*RF_NTSC*/, 
                              0x20/*RF_SECAM*/, 
                              0x28/*AV_NTSC*/, 
                              0x28/*AV_PAL*/, 
                              0x28/*AV_SECAM*/, 
                              0x28/*SV_NTSC*/, 
                              0x20/*480i*/, 
                              0x10/*720p*/, 
                              0x18/*1080i*/, 
                              0x20/*H_480i*/, 
                              0x10/*H_576i*/, 
                              0x10/*H_720p*/, 
                              0x18/*H_1080i*/, 
                              0x20/*DT_MPEG2_480is*/, 
                              0x10/*DT_MPEG2_720p*/, 
                              0x20/*DT_MPEG2_1080i*/, 
                              0x20/*DT_H264_480is*/, 
                              0x10/*DT_H264_720p*/, 
                              0x10/*PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_2A_H), 0x7F, 0x14/*RF_NTSC*/, 
                              0x14/*RF_SECAM*/, 
                              0x18/*AV_NTSC*/, 
                              0x14/*AV_PAL*/, 
                              0x14/*AV_SECAM*/, 
                              0x14/*SV_NTSC*/, 
                              0x14/*480i*/, 
                              0x10/*720p*/, 
                              0x10/*1080i*/, 
                              0x14/*H_480i*/, 
                              0x10/*H_576i*/, 
                              0x10/*H_720p*/, 
                              0x10/*H_1080i*/, 
                              0x14/*DT_MPEG2_480is*/, 
                              0x10/*DT_MPEG2_720p*/, 
                              0x14/*DT_MPEG2_1080i*/, 
                              0x14/*DT_H264_480is*/, 
                              0x10/*DT_H264_720p*/, 
                              0x10/*PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_2B_L), 0x7F, 0x14/*RF_NTSC*/, 
                              0x14/*RF_SECAM*/, 
                              0x18/*AV_NTSC*/, 
                              0x14/*AV_PAL*/, 
                              0x14/*AV_SECAM*/, 
                              0x14/*SV_NTSC*/, 
                              0x14/*480i*/, 
                              0x10/*720p*/, 
                              0x10/*1080i*/, 
                              0x14/*H_480i*/, 
                              0x10/*H_576i*/, 
                              0x10/*H_720p*/, 
                              0x10/*H_1080i*/, 
                              0x14/*DT_MPEG2_480is*/, 
                              0x10/*DT_MPEG2_720p*/, 
                              0x14/*DT_MPEG2_1080i*/, 
                              0x14/*DT_H264_480is*/, 
                              0x10/*DT_H264_720p*/, 
                              0x10/*PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_2B_H), 0x7F, 0x1C/*RF_NTSC*/, 
                              0x18/*RF_SECAM*/, 
                              0x18/*AV_NTSC*/, 
                              0x12/*AV_PAL*/, 
                              0x12/*AV_SECAM*/, 
                              0x12/*SV_NTSC*/, 
                              0x1C/*480i*/, 
                              0x0E/*720p*/, 
                              0x14/*1080i*/, 
                              0x1C/*H_480i*/, 
                              0x0E/*H_576i*/, 
                              0x0E/*H_720p*/, 
                              0x14/*H_1080i*/, 
                              0x1C/*DT_MPEG2_480is*/, 
                              0x0E/*DT_MPEG2_720p*/, 
                              0x1C/*DT_MPEG2_1080i*/, 
                              0x1C/*DT_H264_480is*/, 
                              0x0E/*DT_H264_720p*/, 
                              0x0E/*PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_6A_H), 0x7F, 0x10/*RF_NTSC*/, 
                              0x10/*RF_SECAM*/, 
                              0x10/*AV_NTSC*/, 
                              0x10/*AV_PAL*/, 
                              0x10/*AV_SECAM*/, 
                              0x10/*SV_NTSC*/, 
                              0x10/*480i*/, 
                              0x06/*720p*/, 
                              0x10/*1080i*/, 
                              0x10/*H_480i*/, 
                              0x06/*H_576i*/, 
                              0x06/*H_720p*/, 
                              0x10/*H_1080i*/, 
                              0x10/*DT_MPEG2_480is*/, 
                              0x06/*DT_MPEG2_720p*/, 
                              0x10/*DT_MPEG2_1080i*/, 
                              0x10/*DT_H264_480is*/, 
                              0x06/*DT_H264_720p*/, 
                              0x06/*PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_6B_L), 0x7F, 0x10/*RF_NTSC*/, 
                              0x10/*RF_SECAM*/, 
                              0x10/*AV_NTSC*/, 
                              0x10/*AV_PAL*/, 
                              0x10/*AV_SECAM*/, 
                              0x10/*SV_NTSC*/, 
                              0x10/*480i*/, 
                              0x09/*720p*/, 
                              0x10/*1080i*/, 
                              0x10/*H_480i*/, 
                              0x09/*H_576i*/, 
                              0x09/*H_720p*/, 
                              0x10/*H_1080i*/, 
                              0x10/*DT_MPEG2_480is*/, 
                              0x09/*DT_MPEG2_720p*/, 
                              0x10/*DT_MPEG2_1080i*/, 
                              0x10/*DT_H264_480is*/, 
                              0x09/*DT_H264_720p*/, 
                              0x09/*PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_2E_H), 0xFF, 0x56/*$RF_NTSC*/, 
                              0x56/*$RF_SECAM*/, 
                              0x56/*$AV_NTSC*/, 
                              0x56/*$AV_PAL*/, 
                              0x56/*$AV_SECAM*/, 
                              0x56/*$SV_NTSC*/, 
                              0x56/*$480i*/, 
                              0x47/*$720p*/, 
                              0x44/*$1080i*/, 
                              0x56/*$H_480i*/, 
                              0x47/*$H_576i*/, 
                              0x47/*$H_720p*/, 
                              0x44/*$H_1080i*/, 
                              0x56/*$DT_MPEG2_480is*/, 
                              0x47/*$DT_MPEG2_720p*/, 
                              0x56/*$DT_MPEG2_1080i*/, 
                              0x56/*$DT_H264_480is*/, 
                              0x47/*$DT_H264_720p*/, 
                              0x47/*$PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_2F_H), 0xFF, 0x77/*$RF_NTSC*/, 
                              0x77/*$RF_SECAM*/, 
                              0x77/*$AV_NTSC*/, 
                              0x77/*$AV_PAL*/, 
                              0x77/*$AV_SECAM*/, 
                              0x77/*$SV_NTSC*/, 
                              0x77/*$480i*/, 
                              0x56/*$720p*/, 
                              0x77/*$1080i*/, 
                              0x77/*$H_480i*/, 
                              0x56/*$H_576i*/, 
                              0x56/*$H_720p*/, 
                              0x77/*$H_1080i*/, 
                              0x77/*$DT_MPEG2_480is*/, 
                              0x56/*$DT_MPEG2_720p*/, 
                              0x77/*$DT_MPEG2_1080i*/, 
                              0x77/*$DT_H264_480is*/, 
                              0x56/*$DT_H264_720p*/, 
                              0x56/*$PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_35_L), 0xFF, 0x11/*$RF_NTSC*/, 
                              0x11/*$RF_SECAM*/, 
                              0x00/*$AV_NTSC*/, 
                              0x11/*$AV_PAL*/, 
                              0x11/*$AV_SECAM*/, 
                              0x11/*$SV_NTSC*/, 
                              0x11/*$480i*/, 
                              0x11/*$720p*/, 
                              0x11/*$1080i*/, 
                              0x11/*$H_480i*/, 
                              0x11/*$H_576i*/, 
                              0x11/*$H_720p*/, 
                              0x00/*$H_1080i*/, 
                              0x11/*$DT_MPEG2_480is*/, 
                              0x11/*$DT_MPEG2_720p*/, 
                              0x11/*$DT_MPEG2_1080i*/, 
                              0x11/*$DT_H264_480is*/, 
                              0x11/*$DT_H264_720p*/, 
                              0x11/*$PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_35_H), 0xFF, 0x11/*$RF_NTSC*/, 
                              0x11/*$RF_SECAM*/, 
                              0x11/*$AV_NTSC*/, 
                              0x11/*$AV_PAL*/, 
                              0x11/*$AV_SECAM*/, 
                              0x11/*$SV_NTSC*/, 
                              0x11/*$480i*/, 
                              0x22/*$720p*/, 
                              0x11/*$1080i*/, 
                              0x11/*$H_480i*/, 
                              0x11/*$H_576i*/, 
                              0x22/*$H_720p*/, 
                              0x11/*$H_1080i*/, 
                              0x11/*$DT_MPEG2_480is*/, 
                              0x22/*$DT_MPEG2_720p*/, 
                              0x11/*$DT_MPEG2_1080i*/, 
                              0x11/*$DT_H264_480is*/, 
                              0x22/*$DT_H264_720p*/, 
                              0x22/*$PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_36_L), 0xFF, 0x11/*$RF_NTSC*/, 
                              0x11/*$RF_SECAM*/, 
                              0x00/*$AV_NTSC*/, 
                              0x11/*$AV_PAL*/, 
                              0x11/*$AV_SECAM*/, 
                              0x11/*$SV_NTSC*/, 
                              0x11/*$480i*/, 
                              0x12/*$720p*/, 
                              0x11/*$1080i*/, 
                              0x11/*$H_480i*/, 
                              0x11/*$H_576i*/, 
                              0x12/*$H_720p*/, 
                              0x00/*$H_1080i*/, 
                              0x11/*$DT_MPEG2_480is*/, 
                              0x12/*$DT_MPEG2_720p*/, 
                              0x11/*$DT_MPEG2_1080i*/, 
                              0x11/*$DT_H264_480is*/, 
                              0x12/*$DT_H264_720p*/, 
                              0x12/*$PC_mode*/, },
 { PQ_MAP_REG(REG_SC2_BK19_36_H), 0xFF, 0x11/*$RF_NTSC*/, 
                              0x11/*$RF_SECAM*/, 
                              0x11/*$AV_NTSC*/, 
                              0x11/*$AV_PAL*/, 
                              0x11/*$AV_SECAM*/, 
                              0x11/*$SV_NTSC*/, 
                              0x11/*$480i*/, 
                              0x21/*$720p*/, 
                              0x11/*$1080i*/, 
                              0x11/*$H_480i*/, 
                              0x11/*$H_576i*/, 
                              0x21/*$H_720p*/, 
                              0x11/*$H_1080i*/, 
                              0x11/*$DT_MPEG2_480is*/, 
                              0x21/*$DT_MPEG2_720p*/, 
                              0x11/*$DT_MPEG2_1080i*/, 
                              0x11/*$DT_H264_480is*/, 
                              0x21/*$DT_H264_720p*/, 
                              0x21/*$PC_mode*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Peaking_dering
//****************************************************
code U8 MST_VIP_Peaking_dering_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Peaking_dering_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Peaking_dering_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_62_H), 0x37, 0x20/*$OFF*/, 
                              0x07/*$W1_R0*/, },
 { PQ_MAP_REG(REG_SC2_BK19_63_L), 0xF0, 0x00/*OFF*/, 
                              0x80/*W1_R0*/, },
 { PQ_MAP_REG(REG_SC2_BK19_63_H), 0xF0, 0x00/*OFF*/, 
                              0x80/*W1_R0*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Peaking_Pcoring
//****************************************************
code U8 MST_VIP_Peaking_Pcoring_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Peaking_Pcoring_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Peaking_Pcoring_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_17_L), 0xFF, 0x00/*$S00_0*/, 
                              0x21/*$S21_1*/, 
                              0x30/*$S30_0*/, 
                              0x30/*$S30_1*/, 
                              0x31/*$S31_0*/, 
                              0x31/*$S31_1*/, 
                              0x21/*$S20_1*/, 
                              0x32/*$S32_0*/, 
                              0x32/*$S32_1*/, 
                              0x42/*$S42_1*/, },
 { PQ_MAP_REG(REG_SC2_BK19_30_H), 0x03, 0x00/*S00_0*/, 
                              0x01/*S21_1*/, 
                              0x00/*S30_0*/, 
                              0x01/*S30_1*/, 
                              0x00/*S31_0*/, 
                              0x01/*S31_1*/, 
                              0x01/*S20_1*/, 
                              0x00/*S32_0*/, 
                              0x01/*S32_1*/, 
                              0x01/*S42_1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Peaking_gain
//****************************************************
code U8 MST_VIP_Peaking_gain_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK19_3F_L), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK19_3F_H), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Peaking_gain_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Peaking_gain_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_17_H), 0x7F, 0x18/*0x18*/, 
                              0x1C/*0x1C*/, 
                              0x20/*0x20*/, 
                              0x24/*0x24*/, 
                              0x28/*0x28*/, 
                              0x2C/*0x2C*/, 
                              0x30/*0x30*/, 
                              0x34/*0x34*/, 
                              0x38/*0x38*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Peaking_gain_ad_C
//****************************************************
code U8 MST_VIP_Peaking_gain_ad_C_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK27_2B_L), 0xFF, 0x88 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Peaking_gain_ad_C_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Peaking_gain_ad_C_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_30_L), 0x0C, 0x00/*$OFF*/, 
                              0x08/*$T1*/, 
                              0x08/*$T2*/, 
                              0x08/*$T3*/, 
                              0x08/*$T4*/, 
                              0x0C/*$T5*/, 
                              0x0C/*$T6*/, },
 { PQ_MAP_REG(REG_SC2_BK27_2A_L), 0xFF, 0x88/*$OFF*/, 
                              0xA8/*$T1*/, 
                              0xA8/*$T2*/, 
                              0x88/*$T3*/, 
                              0x88/*$T4*/, 
                              0x88/*$T5*/, 
                              0x88/*$T6*/, },
 { PQ_MAP_REG(REG_SC2_BK27_2A_H), 0xFF, 0x88/*$OFF*/, 
                              0x66/*$T1*/, 
                              0x77/*$T2*/, 
                              0x86/*$T3*/, 
                              0x88/*$T4*/, 
                              0x88/*$T5*/, 
                              0x88/*$T6*/, },
 { PQ_MAP_REG(REG_SC2_BK27_2B_H), 0xFF, 0x88/*$OFF*/, 
                              0x85/*$T1*/, 
                              0x86/*$T2*/, 
                              0x87/*$T3*/, 
                              0x88/*$T4*/, 
                              0x88/*$T5*/, 
                              0x88/*$T6*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Peaking_gain_ad_Y
//****************************************************
code U8 MST_VIP_Peaking_gain_ad_Y_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK19_6D_H), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Peaking_gain_ad_Y_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Peaking_gain_ad_Y_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_6D_L), 0x33, 0x00/*$OFF*/, 
                              0x33/*$T2*/, },
 { PQ_MAP_REG(REG_SC2_BK19_6E_L), 0xFF, 0x00/*$OFF*/, 
                              0x54/*$T2*/, },
 { PQ_MAP_REG(REG_SC2_BK19_6E_H), 0xFF, 0x00/*$OFF*/, 
                              0x76/*$T2*/, },
 { PQ_MAP_REG(REG_SC2_BK19_6F_L), 0xFF, 0x00/*$OFF*/, 
                              0x88/*$T2*/, },
 { PQ_MAP_REG(REG_SC2_BK19_6F_H), 0xFF, 0x00/*$OFF*/, 
                              0x88/*$T2*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Post_SNR
//****************************************************
code U8 MST_VIP_Post_SNR_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK19_61_L), 0x38, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Post_SNR_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Post_SNR_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK19_61_L), 0x01, 0x00/*$OFF*/, 
                              0x01/*$S1*/, 
                              0x01/*$S2*/, 
                              0x01/*$S3*/, 
                              0x01/*$S4*/, 
                              0x01/*$S5*/, 
                              0x01/*$S6*/, 
                              0x01/*$S7*/, 
                              0x01/*$S8*/, 
                              0x01/*$S9*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Post_CTI
//****************************************************
code U8 MST_VIP_Post_CTI_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK27_20_L), 0x60, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Post_CTI_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Post_CTI_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK27_20_L), 0x10, 0x00/*$OFF*/, 
                              0x10/*$S0L0*/, 
                              0x10/*$S3L3*/, 
                              0x10/*$S1L6*/, 
                              0x10/*$S1L0*/, 
                              0x10/*$S2L3*/, 
                              0x10/*$S2L4*/, 
                              0x10/*$S2L5*/, 
                              0x10/*$S2L6*/, },
 { PQ_MAP_REG(REG_SC2_BK27_23_L), 0x37, 0x00/*$OFF*/, 
                              0x00/*$S0L0*/, 
                              0x33/*$S3L3*/, 
                              0x16/*$S1L6*/, 
                              0x10/*$S1L0*/, 
                              0x23/*$S2L3*/, 
                              0x24/*$S2L4*/, 
                              0x25/*$S2L5*/, 
                              0x26/*$S2L6*/, },
 { PQ_MAP_REG(REG_SC2_BK27_23_H), 0x0F, 0x00/*OFF*/, 
                              0x02/*S0L0*/, 
                              0x02/*S3L3*/, 
                              0x02/*S1L6*/, 
                              0x02/*S1L0*/, 
                              0x02/*S2L3*/, 
                              0x02/*S2L4*/, 
                              0x02/*S2L5*/, 
                              0x02/*S2L6*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Post_CTI_coef
//****************************************************
code U8 MST_VIP_Post_CTI_coef_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Post_CTI_coef_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Post_CTI_coef_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK27_24_L), 0x3F, 0x18/*0x18*/, 
                              0x1C/*0x1C*/, 
                              0x20/*0x20*/, 
                              0x24/*0x24*/, 
                              0x28/*0x28*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Post_CTI_gray
//****************************************************
code U8 MST_VIP_Post_CTI_gray_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK27_20_L), 0x80, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_26_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_26_H), 0x07, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Post_CTI_gray_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Post_CTI_gray_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_FCC_full_range
//****************************************************
code U8 MST_VIP_FCC_full_range_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_FCC_full_range_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_FCC_full_range_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1B_30_L), 0x02, 0x00/*OFF*/, 
                              0x02/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_FCC_T1
//****************************************************
code U8 MST_VIP_FCC_T1_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_FCC_T1_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_FCC_T1_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_11_L), 0x01, 0x00/*OFF*/, 
                              0x01/*S4*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_FCC_T2
//****************************************************
code U8 MST_VIP_FCC_T2_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_FCC_T2_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_FCC_T2_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_11_L), 0x02, 0x00/*OFF*/, 
                              0x02/*S8*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_FCC_T3
//****************************************************
code U8 MST_VIP_FCC_T3_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_FCC_T3_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_FCC_T3_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_11_L), 0x04, 0x00/*OFF*/, 
                              0x04/*S4*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_FCC_T4
//****************************************************
code U8 MST_VIP_FCC_T4_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_FCC_T4_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_FCC_T4_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_11_L), 0x08, 0x00/*OFF*/, 
                              0x08/*S4*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_FCC_T5
//****************************************************
code U8 MST_VIP_FCC_T5_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_FCC_T5_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_FCC_T5_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_11_L), 0x10, 0x00/*OFF*/, 
                              0x10/*S6*/, 
                              0x10/*S8*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_FCC_T6
//****************************************************
code U8 MST_VIP_FCC_T6_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_FCC_T6_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_FCC_T6_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_11_L), 0x20, 0x00/*OFF*/, 
                              0x20/*S6*/, 
                              0x04/*S8*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_FCC_T7
//****************************************************
code U8 MST_VIP_FCC_T7_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_FCC_T7_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_FCC_T7_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_11_L), 0x40, 0x00/*OFF*/, 
                              0x04/*S8*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_FCC_T8
//****************************************************
code U8 MST_VIP_FCC_T8_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_FCC_T8_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_FCC_T8_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_11_L), 0x80, 0x00/*OFF*/, 
                              0x04/*S5*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_FCC_T9
//****************************************************
code U8 MST_VIP_FCC_T9_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK18_11_H), 0x02, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_FCC_T9_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_FCC_T9_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_11_H), 0x01, 0x00/*$OFF*/, 
                              0x01/*$S5*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_IHC
//****************************************************
code U8 MST_VIP_IHC_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_IHC_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_IHC_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_60_L), 0x40, 0x00/*OFF*/, 
                              0x40/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_IHC_Ymode
//****************************************************
code U8 MST_VIP_IHC_Ymode_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK27_60_L), 0x01, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_IHC_Ymode_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_IHC_Ymode_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK27_60_L), 0x40, 0x00/*$OFF*/, 
                              0x40/*$ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_IHC_dither
//****************************************************
code U8 MST_VIP_IHC_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_IHC_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_IHC_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_IHC_CRD_SRAM
//****************************************************
code U8 MST_VIP_IHC_CRD_SRAM_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_IHC_CRD_SRAM_SC2_Sub[][PQ_IP_VIP_IHC_CRD_SRAM_SIZE_SC2_Sub]=
{
{//OFF
    0x00
},

};

//****************************************************
// VIP_IHC_SETTING
//****************************************************
code U8 MST_VIP_IHC_SETTING_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK27_73_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_77_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_7B_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_73_H), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_77_H), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_7B_H), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK18_66_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_74_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_78_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_7C_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_74_H), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_78_H), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_7C_H), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_75_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_79_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_7D_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_75_H), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_79_H), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_7D_H), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_76_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_7A_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_7E_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_IHC_SETTING_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_IHC_SETTING_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_65_L), 0x7F, 0x00/*OFF*/, 
                              0x60/*N_20*/, 
                              0x20/*P_20*/, },
 { PQ_MAP_REG(REG_SC2_BK18_65_H), 0x7F, 0x00/*OFF*/, 
                              0x70/*N_20*/, 
                              0x50/*P_20*/, },
 { PQ_MAP_REG(REG_SC2_BK18_66_H), 0x7F, 0x00/*OFF*/, 
                              0x7F/*N_20*/, 
                              0x70/*P_20*/, },
 { PQ_MAP_REG(REG_SC2_BK18_67_L), 0x7F, 0x00/*OFF*/, 
                              0x10/*N_20*/, 
                              0x00/*P_20*/, },
 { PQ_MAP_REG(REG_SC2_BK18_67_H), 0x7F, 0x00/*OFF*/, 
                              0x08/*N_20*/, 
                              0x10/*P_20*/, },
 { PQ_MAP_REG(REG_SC2_BK18_68_L), 0x7F, 0x00/*OFF*/, 
                              0x50/*N_20*/, 
                              0x10/*P_20*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_ICC
//****************************************************
code U8 MST_VIP_ICC_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_ICC_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_ICC_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_30_L), 0x0C, 0x00/*$OFF*/, 
                              0x0C/*$ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_ICC_Ymode
//****************************************************
code U8 MST_VIP_ICC_Ymode_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK27_30_L), 0x01, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK27_31_L), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_35_H), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK27_36_L), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_3A_H), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK27_3B_L), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_3F_H), 0xFF, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK27_31_H), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_36_H), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_3B_H), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_32_L), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_37_L), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_3C_L), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_32_H), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_37_H), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_3C_H), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_33_L), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_38_L), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_3D_L), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_33_H), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_38_H), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_3D_H), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_34_L), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_39_L), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_3E_L), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_34_H), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_39_H), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_3E_H), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_ICC_Ymode_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_ICC_Ymode_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK27_30_L), 0x40, 0x00/*$OFF*/, 
                              0x40/*$ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_ICC_dither
//****************************************************
code U8 MST_VIP_ICC_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_ICC_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_ICC_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_ICC_CRD_SRAM
//****************************************************
code U8 MST_VIP_ICC_CRD_SRAM_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_ICC_CRD_SRAM_SC2_Sub[][PQ_IP_VIP_ICC_CRD_SRAM_SIZE_SC2_Sub]=
{
{//OFF
    0x00
},

};

//****************************************************
// VIP_ICC_SETTING
//****************************************************
code U8 MST_VIP_ICC_SETTING_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK18_35_H), 0xFD, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK18_37_L), 0xF0, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_ICC_SETTING_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_ICC_SETTING_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_31_L), 0xF0, 0x00/*OFF*/, 
                              0x88/*INC_8*/, 
                              0x33/*INC_3*/, 
                              0xBB/*INC_B*/, 
                              0x33/*DEC_3*/, },
 { PQ_MAP_REG(REG_SC2_BK18_35_H), 0x02, 0x00/*$OFF*/, 
                              0x00/*$INC_8*/, 
                              0x00/*$INC_3*/, 
                              0x00/*$INC_B*/, 
                              0x02/*$DEC_3*/, },
 { PQ_MAP_REG(REG_SC2_BK18_31_H), 0xF0, 0x00/*OFF*/, 
                              0x88/*INC_8*/, 
                              0x66/*INC_3*/, 
                              0xBB/*INC_B*/, 
                              0x00/*DEC_3*/, },
 { PQ_MAP_REG(REG_SC2_BK18_32_L), 0xF0, 0x00/*OFF*/, 
                              0xAA/*INC_8*/, 
                              0xBB/*INC_3*/, 
                              0x99/*INC_B*/, 
                              0x66/*DEC_3*/, },
 { PQ_MAP_REG(REG_SC2_BK18_32_H), 0xF0, 0x00/*OFF*/, 
                              0x66/*INC_8*/, 
                              0x99/*INC_3*/, 
                              0xAA/*INC_B*/, 
                              0xBB/*DEC_3*/, },
 { PQ_MAP_REG(REG_SC2_BK18_33_L), 0xF0, 0x00/*OFF*/, 
                              0x66/*INC_8*/, 
                              0x99/*INC_3*/, 
                              0x00/*INC_B*/, 
                              0x00/*DEC_3*/, },
 { PQ_MAP_REG(REG_SC2_BK18_33_H), 0xF0, 0x00/*OFF*/, 
                              0x77/*INC_8*/, 
                              0x88/*INC_3*/, 
                              0xAA/*INC_B*/, 
                              0x00/*DEC_3*/, },
 { PQ_MAP_REG(REG_SC2_BK18_34_L), 0xF0, 0x00/*OFF*/, 
                              0x22/*INC_8*/, 
                              0x33/*INC_3*/, 
                              0x00/*INC_B*/, 
                              0x00/*DEC_3*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Ymode_Yvalue_ALL
//****************************************************
code U8 MST_VIP_Ymode_Yvalue_ALL_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK27_71_L), 0xFF, 0x20 },
 { PQ_MAP_REG(REG_SC2_BK27_71_H), 0xFF, 0x40 },
 { PQ_MAP_REG(REG_SC2_BK27_72_L), 0xFF, 0x60 },
 { PQ_MAP_REG(REG_SC2_BK27_72_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Ymode_Yvalue_ALL_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Ymode_Yvalue_ALL_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Ymode_Yvalue_SETTING
//****************************************************
code U8 MST_VIP_Ymode_Yvalue_SETTING_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK27_10_L), 0xFF, 0x20 },
 { PQ_MAP_REG(REG_SC2_BK27_10_H), 0xFF, 0x40 },
 { PQ_MAP_REG(REG_SC2_BK27_11_L), 0xFF, 0x60 },
 { PQ_MAP_REG(REG_SC2_BK27_11_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK27_12_L), 0xFF, 0x20 },
 { PQ_MAP_REG(REG_SC2_BK27_12_H), 0xFF, 0x40 },
 { PQ_MAP_REG(REG_SC2_BK27_13_L), 0xFF, 0x60 },
 { PQ_MAP_REG(REG_SC2_BK27_13_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK27_14_L), 0xFF, 0x20 },
 { PQ_MAP_REG(REG_SC2_BK27_14_H), 0xFF, 0x40 },
 { PQ_MAP_REG(REG_SC2_BK27_15_L), 0xFF, 0x60 },
 { PQ_MAP_REG(REG_SC2_BK27_15_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK27_16_L), 0xFF, 0x20 },
 { PQ_MAP_REG(REG_SC2_BK27_16_H), 0xFF, 0x40 },
 { PQ_MAP_REG(REG_SC2_BK27_17_L), 0xFF, 0x60 },
 { PQ_MAP_REG(REG_SC2_BK27_17_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK27_18_L), 0xFF, 0x20 },
 { PQ_MAP_REG(REG_SC2_BK27_18_H), 0xFF, 0x40 },
 { PQ_MAP_REG(REG_SC2_BK27_19_L), 0xFF, 0x60 },
 { PQ_MAP_REG(REG_SC2_BK27_19_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK27_1A_L), 0xFF, 0x20 },
 { PQ_MAP_REG(REG_SC2_BK27_1A_H), 0xFF, 0x40 },
 { PQ_MAP_REG(REG_SC2_BK27_1B_L), 0xFF, 0x60 },
 { PQ_MAP_REG(REG_SC2_BK27_1B_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK27_1C_L), 0xFF, 0x20 },
 { PQ_MAP_REG(REG_SC2_BK27_1C_H), 0xFF, 0x40 },
 { PQ_MAP_REG(REG_SC2_BK27_1D_L), 0xFF, 0x60 },
 { PQ_MAP_REG(REG_SC2_BK27_1D_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK27_1E_L), 0xFF, 0x20 },
 { PQ_MAP_REG(REG_SC2_BK27_1E_H), 0xFF, 0x40 },
 { PQ_MAP_REG(REG_SC2_BK27_1F_L), 0xFF, 0x60 },
 { PQ_MAP_REG(REG_SC2_BK27_1F_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Ymode_Yvalue_SETTING_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Ymode_Yvalue_SETTING_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_IBC
//****************************************************
code U8 MST_VIP_IBC_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_IBC_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_IBC_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_40_L), 0x40, 0x00/*OFF*/, 
                              0x40/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_IBC_dither
//****************************************************
code U8 MST_VIP_IBC_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_IBC_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_IBC_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_IBC_SETTING
//****************************************************
code U8 MST_VIP_IBC_SETTING_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_IBC_SETTING_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_IBC_SETTING_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_45_L), 0x3F, 0x20/*OFF*/, 
                              0x10/*DEC_10*/, 
                              0x18/*DEC_18*/, },
 { PQ_MAP_REG(REG_SC2_BK18_45_H), 0x3F, 0x20/*OFF*/, 
                              0x10/*DEC_10*/, 
                              0x1C/*DEC_18*/, },
 { PQ_MAP_REG(REG_SC2_BK18_46_L), 0x3F, 0x20/*OFF*/, 
                              0x10/*DEC_10*/, 
                              0x18/*DEC_18*/, },
 { PQ_MAP_REG(REG_SC2_BK18_46_H), 0x3F, 0x20/*OFF*/, 
                              0x10/*DEC_10*/, 
                              0x18/*DEC_18*/, },
 { PQ_MAP_REG(REG_SC2_BK18_47_L), 0x3F, 0x20/*OFF*/, 
                              0x18/*DEC_10*/, 
                              0x18/*DEC_18*/, },
 { PQ_MAP_REG(REG_SC2_BK18_47_H), 0x3F, 0x20/*OFF*/, 
                              0x18/*DEC_10*/, 
                              0x18/*DEC_18*/, },
 { PQ_MAP_REG(REG_SC2_BK18_48_L), 0x3F, 0x20/*OFF*/, 
                              0x28/*DEC_10*/, 
                              0x20/*DEC_18*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_DLC
//****************************************************
code U8 MST_VIP_DLC_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_DLC_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_DLC_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1A_04_L), 0x41, 0x00/*$OFF*/, 
                              0x41/*$ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_DLC_dither
//****************************************************
code U8 MST_VIP_DLC_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_DLC_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_DLC_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_DLC_His_range
//****************************************************
code U8 MST_VIP_DLC_His_range_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_DLC_His_range_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_DLC_His_range_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1A_08_L), 0x08, 0x00/*OFF*/, 
                              0x08/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_DLC_His_rangeH
//****************************************************
code U8 MST_VIP_DLC_His_rangeH_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_DLC_His_rangeH_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_DLC_His_rangeH_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1A_1B_L), 0xFF, 0x08/*90pa_1366*/, 
                              0x0C/*90pa_1920*/, },
 { PQ_MAP_REG(REG_SC2_BK1A_1B_H), 0xFF, 0xA2/*90pa_1366*/, 
                              0xE4/*90pa_1920*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_DLC_His_rangeV
//****************************************************
code U8 MST_VIP_DLC_His_rangeV_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_DLC_His_rangeV_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_DLC_His_rangeV_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1A_03_L), 0xFF, 0x04/*90pa_1366*/, 
                              0x06/*90pa_1920*/, },
 { PQ_MAP_REG(REG_SC2_BK1A_03_H), 0xFF, 0x5B/*90pa_1366*/, 
                              0x7A/*90pa_1920*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_DLC_PC
//****************************************************
code U8 MST_VIP_DLC_PC_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_DLC_PC_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_DLC_PC_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1A_04_H), 0x10, 0x00/*OFF*/, 
                              0x10/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_BLE
//****************************************************
code U8 MST_VIP_BLE_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_BLE_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_BLE_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1A_12_L), 0x7F, 0x00/*OFF*/, 
                              0x40/*0x82_0x40*/, 
                              0x50/*0x82_0x50*/, 
                              0x60/*0x82_0x60*/, 
                              0x40/*0x84_0x40*/, 
                              0x40/*0x86_0x40*/, 
                              0x40/*0x88_0x40*/, 
                              0x60/*0x88_0x60*/, 
                              0x40/*0x8A_0x40*/, },
 { PQ_MAP_REG(REG_SC2_BK1A_12_H), 0xFF, 0x80/*OFF*/, 
                              0x82/*0x82_0x40*/, 
                              0x82/*0x82_0x50*/, 
                              0x82/*0x82_0x60*/, 
                              0x84/*0x84_0x40*/, 
                              0x86/*0x86_0x40*/, 
                              0x88/*0x88_0x40*/, 
                              0x88/*0x88_0x60*/, 
                              0x8A/*0x8A_0x40*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_WLE
//****************************************************
code U8 MST_VIP_WLE_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_WLE_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_WLE_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1A_13_L), 0x7F, 0x00/*OFF*/, 
                              0x20/*0x78_0x20*/, },
 { PQ_MAP_REG(REG_SC2_BK1A_13_H), 0xFF, 0x80/*OFF*/, 
                              0x78/*0x78_0x20*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_BWLE_dither
//****************************************************
code U8 MST_VIP_BWLE_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_BWLE_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_BWLE_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_UVC
//****************************************************
code U8 MST_VIP_UVC_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK1A_67_L), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_UVC_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_UVC_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1A_08_H), 0x30, 0x00/*$OFF*/, 
                              0x00/*$ON*/, },
 { PQ_MAP_REG(REG_SC2_BK1A_66_L), 0x0F, 0x00/*OFF*/, 
                              0x01/*ON*/, },
 { PQ_MAP_REG(REG_SC2_BK1A_66_H), 0xFF, 0x00/*OFF*/, 
                              0x60/*ON*/, },
 { PQ_MAP_REG(REG_SC2_BK1A_67_H), 0xFF, 0x00/*OFF*/, 
                              0xC0/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Post_Yoffset
//****************************************************
code U8 MST_VIP_Post_Yoffset_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK1A_17_H), 0x03, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Post_Yoffset_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Post_Yoffset_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1A_18_H), 0xFF, 0x00/*OFF*/, 
                              0x05/*0x05*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Post_Ygain
//****************************************************
code U8 MST_VIP_Post_Ygain_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Post_Ygain_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Post_Ygain_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1A_15_L), 0xFF, 0x40/*OFF*/, 
                              0x3C/*0x3C*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Post_Yoffset_2
//****************************************************
code U8 MST_VIP_Post_Yoffset_2_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK1A_17_H), 0x0C, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Post_Yoffset_2_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Post_Yoffset_2_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1A_19_H), 0xFF, 0x00/*OFF*/, 
                              0x05/*0x05*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Post_Cgain
//****************************************************
code U8 MST_VIP_Post_Cgain_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Post_Cgain_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Post_Cgain_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK1A_15_H), 0xFF, 0x40/*OFF*/, 
                              0x44/*0x44*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Post_Cgain_by_Y
//****************************************************
code U8 MST_VIP_Post_Cgain_by_Y_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK27_48_L), 0x33, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK27_49_H), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_4A_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_4A_H), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_4B_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_4B_H), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_4C_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_4C_H), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_4D_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK27_4D_H), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Post_Cgain_by_Y_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Post_Cgain_by_Y_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Hcoring_Y
//****************************************************
code U8 MST_VIP_Hcoring_Y_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Hcoring_Y_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Hcoring_Y_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_58_L), 0xFB, 0x00/*$OFF*/, 
                              0x23/*$C4*/, 
                              0x23/*$C3*/, 
                              0x23/*$C2*/, 
                              0x23/*$C1*/, 
                              0xA3/*$P6*/, 
                              0xA3/*$P5*/, 
                              0xA3/*$P4*/, 
                              0xA3/*$P3*/, 
                              0xA3/*$P2*/, 
                              0xA3/*$P1*/, 
                              0xAB/*$PC_P6*/, 
                              0xAB/*$PC_P5*/, 
                              0xAB/*$PC_P4*/, 
                              0xAB/*$PC_P3*/, 
                              0xAB/*$PC_P2*/, 
                              0xAB/*$PC_P1*/, },
 { PQ_MAP_REG(REG_SC2_BK18_59_L), 0xFF, 0x00/*OFF*/, 
                              0xEF/*C4*/, 
                              0xCF/*C3*/, 
                              0xAD/*C2*/, 
                              0x7A/*C1*/, 
                              0x21/*P6*/, 
                              0x10/*P5*/, 
                              0x00/*P4*/, 
                              0x00/*P3*/, 
                              0x00/*P2*/, 
                              0x00/*P1*/, 
                              0x21/*PC_P6*/, 
                              0x10/*PC_P5*/, 
                              0x00/*PC_P4*/, 
                              0x00/*PC_P3*/, 
                              0x00/*PC_P2*/, 
                              0x00/*PC_P1*/, },
 { PQ_MAP_REG(REG_SC2_BK18_59_H), 0xFF, 0x00/*OFF*/, 
                              0x9C/*C4*/, 
                              0x69/*C3*/, 
                              0x47/*C2*/, 
                              0x24/*C1*/, 
                              0x64/*P6*/, 
                              0x42/*P5*/, 
                              0x21/*P4*/, 
                              0x10/*P3*/, 
                              0x11/*P2*/, 
                              0x10/*P1*/, 
                              0x64/*PC_P6*/, 
                              0x42/*PC_P5*/, 
                              0x21/*PC_P4*/, 
                              0x10/*PC_P3*/, 
                              0x11/*PC_P2*/, 
                              0x10/*PC_P1*/, },
 { PQ_MAP_REG(REG_SC2_BK18_5A_L), 0xFF, 0x00/*OFF*/, 
                              0x46/*C4*/, 
                              0x24/*C3*/, 
                              0x12/*C2*/, 
                              0x01/*C1*/, 
                              0xC9/*P6*/, 
                              0x96/*P5*/, 
                              0x64/*P4*/, 
                              0x42/*P3*/, 
                              0x22/*P2*/, 
                              0x22/*P1*/, 
                              0xC9/*PC_P6*/, 
                              0x96/*PC_P5*/, 
                              0x64/*PC_P4*/, 
                              0x42/*PC_P3*/, 
                              0x22/*PC_P2*/, 
                              0x22/*PC_P1*/, },
 { PQ_MAP_REG(REG_SC2_BK18_5A_H), 0xFF, 0x00/*OFF*/, 
                              0x12/*C4*/, 
                              0x01/*C3*/, 
                              0x00/*C2*/, 
                              0x00/*C1*/, 
                              0xFF/*P6*/, 
                              0xFC/*P5*/, 
                              0xc9/*P4*/, 
                              0x96/*P3*/, 
                              0x33/*P2*/, 
                              0x33/*P1*/, 
                              0xFF/*PC_P6*/, 
                              0xFC/*PC_P5*/, 
                              0xc9/*PC_P4*/, 
                              0x96/*PC_P3*/, 
                              0x33/*PC_P2*/, 
                              0x33/*PC_P1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Hcoring_C
//****************************************************
code U8 MST_VIP_Hcoring_C_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Hcoring_C_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Hcoring_C_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK18_58_H), 0xF3, 0x00/*$OFF*/, 
                              0x23/*$C4*/, 
                              0x33/*$C3*/, 
                              0x23/*$C2*/, 
                              0x33/*$C1*/, 
                              0xA3/*$P5*/, 
                              0xA3/*$P4*/, 
                              0xA3/*$P3*/, 
                              0xA3/*$P2*/, 
                              0xA3/*$P1*/, },
 { PQ_MAP_REG(REG_SC2_BK18_5B_L), 0xFF, 0x00/*OFF*/, 
                              0xEF/*C4*/, 
                              0xCF/*C3*/, 
                              0x88/*C2*/, 
                              0x33/*C1*/, 
                              0x21/*P5*/, 
                              0x10/*P4*/, 
                              0x00/*P3*/, 
                              0x00/*P2*/, 
                              0x33/*P1*/, },
 { PQ_MAP_REG(REG_SC2_BK18_5B_H), 0xFF, 0x00/*OFF*/, 
                              0x9C/*C4*/, 
                              0x69/*C3*/, 
                              0x88/*C2*/, 
                              0x33/*C1*/, 
                              0x64/*P5*/, 
                              0x42/*P4*/, 
                              0x21/*P3*/, 
                              0x10/*P2*/, 
                              0x33/*P1*/, },
 { PQ_MAP_REG(REG_SC2_BK18_5C_L), 0xFF, 0x00/*OFF*/, 
                              0x46/*C4*/, 
                              0x24/*C3*/, 
                              0x88/*C2*/, 
                              0x33/*C1*/, 
                              0xC9/*P5*/, 
                              0x96/*P4*/, 
                              0x64/*P3*/, 
                              0x42/*P2*/, 
                              0x33/*P1*/, },
 { PQ_MAP_REG(REG_SC2_BK18_5C_H), 0xFF, 0x00/*OFF*/, 
                              0x12/*C4*/, 
                              0x01/*C3*/, 
                              0x88/*C2*/, 
                              0x33/*C1*/, 
                              0xFF/*P5*/, 
                              0xFC/*P4*/, 
                              0xc9/*P3*/, 
                              0x96/*P2*/, 
                              0x33/*P1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_Hcoring_dither
//****************************************************
code U8 MST_VIP_Hcoring_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_Hcoring_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_Hcoring_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// VIP_YCbCr_Clip
//****************************************************
code U8 MST_VIP_YCbCr_Clip_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK1B_70_H), 0x01, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK1B_7A_H), 0x03, 0x03 },
 { PQ_MAP_REG(REG_SC2_BK1B_7A_L), 0xFF, 0xFF },
 { PQ_MAP_REG(REG_SC2_BK1B_7B_H), 0x03, 0x03 },
 { PQ_MAP_REG(REG_SC2_BK1B_7B_L), 0xFF, 0xFF },
 { PQ_MAP_REG(REG_SC2_BK1B_7C_H), 0x03, 0x03 },
 { PQ_MAP_REG(REG_SC2_BK1B_7C_L), 0xFF, 0xFF },
 { PQ_MAP_REG(REG_SC2_BK1B_7D_H), 0x03, 0x03 },
 { PQ_MAP_REG(REG_SC2_BK1B_7D_L), 0xFF, 0xFF },
 { PQ_MAP_REG(REG_SC2_BK1B_7E_H), 0x03, 0x03 },
 { PQ_MAP_REG(REG_SC2_BK1B_7E_L), 0xFF, 0xFF },
 { PQ_MAP_REG(REG_SC2_BK1B_7F_H), 0x03, 0x03 },
 { PQ_MAP_REG(REG_SC2_BK1B_7F_L), 0xFF, 0xFF },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_VIP_YCbCr_Clip_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_VIP_YCbCr_Clip_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SwDriver
//****************************************************
code U8 MST_SwDriver_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK0B_74_L), 0xFF, 0x08 },
 { PQ_MAP_REG(REG_SC2_BK0B_75_L), 0xFF, 0x01 },
 { PQ_MAP_REG(REG_SC2_BK0B_76_L), 0xFF, 0x01 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK0B_72_L), 0xFF, 0x0A },
 { PQ_MAP_REG(REG_SC2_BK0B_73_L), 0xFF, 0x08 },
 { PQ_MAP_REG(REG_SC2_BK0B_77_L), 0xFF, 0x0A },
 { PQ_MAP_REG(REG_SC2_BK0A_53_L), 0xFF, 0xCE },
 { PQ_MAP_REG(REG_SC2_BK0A_54_L), 0xFF, 0xAC },
 { PQ_MAP_REG(REG_SC2_BK0A_55_L), 0xFF, 0x78 },
 { PQ_MAP_REG(REG_SC2_BK0A_56_L), 0xFF, 0x34 },
 { PQ_MAP_REG(REG_SC2_BK0A_57_L), 0xFF, 0xCD },
 { PQ_MAP_REG(REG_SC2_BK0A_58_L), 0xFF, 0x39 },
 { PQ_MAP_REG(REG_SC2_BK0A_59_L), 0xFF, 0x33 },
 { PQ_MAP_REG(REG_SC2_BK0A_5A_L), 0xFF, 0x11 },
 { PQ_MAP_REG(REG_SC2_BK0A_5B_L), 0xFF, 0xDE },
 { PQ_MAP_REG(REG_SC2_BK0A_5C_L), 0xFF, 0xDD },
 { PQ_MAP_REG(REG_SC2_BK0A_5D_L), 0xFF, 0x79 },
 { PQ_MAP_REG(REG_SC2_BK0A_5E_L), 0xFF, 0x67 },
 { PQ_MAP_REG(REG_SC2_BK0A_5F_L), 0xF3, 0x53 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SwDriver_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_SwDriver_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK22_7C_L), 0xFF, 0x00/*OFF*/, 
                              0x47/*ALL*/, 
                              0x57/*DynamicDNR_ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// 3x3
//****************************************************
code U8 MST_3x3_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK0F_26_L), 0x02, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK0F_1F_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_1F_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_23_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_23_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_57_L), 0x80, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_3x3_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_3x3_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0F_26_L), 0x35, 0x00/*$OFF*/, 
                              0x35/*$SD*/, 
                              0x35/*$HD*/, },
 { PQ_MAP_REG(REG_SC2_BK0F_1D_L), 0xFF, 0x00/*OFF*/, 
                              0x62/*SD*/, 
                              0x2C/*HD*/, },
 { PQ_MAP_REG(REG_SC2_BK0F_1D_H), 0x1F, 0x00/*OFF*/, 
                              0x06/*SD*/, 
                              0x07/*HD*/, },
 { PQ_MAP_REG(REG_SC2_BK0F_1E_L), 0xFF, 0x00/*OFF*/, 
                              0xA8/*SD*/, 
                              0xA8/*HD*/, },
 { PQ_MAP_REG(REG_SC2_BK0F_1E_H), 0x1F, 0x00/*OFF*/, 
                              0x04/*SD*/, 
                              0x04/*HD*/, },
 { PQ_MAP_REG(REG_SC2_BK0F_20_L), 0xFF, 0x00/*OFF*/, 
                              0x41/*SD*/, 
                              0x23/*HD*/, },
 { PQ_MAP_REG(REG_SC2_BK0F_20_H), 0x1F, 0x00/*OFF*/, 
                              0x13/*SD*/, 
                              0x12/*HD*/, },
 { PQ_MAP_REG(REG_SC2_BK0F_21_L), 0xFF, 0x00/*OFF*/, 
                              0xA8/*SD*/, 
                              0xA8/*HD*/, },
 { PQ_MAP_REG(REG_SC2_BK0F_21_H), 0x1F, 0x00/*OFF*/, 
                              0x04/*SD*/, 
                              0x04/*HD*/, },
 { PQ_MAP_REG(REG_SC2_BK0F_22_L), 0xFF, 0x00/*OFF*/, 
                              0x90/*SD*/, 
                              0xDA/*HD*/, },
 { PQ_MAP_REG(REG_SC2_BK0F_22_H), 0x1F, 0x00/*OFF*/, 
                              0x11/*SD*/, 
                              0x10/*HD*/, },
 { PQ_MAP_REG(REG_SC2_BK0F_24_L), 0xFF, 0x00/*OFF*/, 
                              0xA8/*SD*/, 
                              0xA8/*HD*/, },
 { PQ_MAP_REG(REG_SC2_BK0F_24_H), 0x1F, 0x00/*OFF*/, 
                              0x04/*SD*/, 
                              0x04/*HD*/, },
 { PQ_MAP_REG(REG_SC2_BK0F_25_L), 0xFF, 0x00/*OFF*/, 
                              0x12/*SD*/, 
                              0x76/*HD*/, },
 { PQ_MAP_REG(REG_SC2_BK0F_25_H), 0x1F, 0x00/*OFF*/, 
                              0x08/*SD*/, 
                              0x08/*HD*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// RGB_Offset
//****************************************************
code U8 MST_RGB_Offset_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK0F_18_H), 0x01, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_39_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_39_H), 0x0F, 0x04 },
 { PQ_MAP_REG(REG_SC2_BK0F_3A_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_3A_H), 0x0F, 0x04 },
 { PQ_MAP_REG(REG_SC2_BK0F_3B_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_3B_H), 0x0F, 0x04 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_RGB_Offset_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_RGB_Offset_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// RGB_Clip
//****************************************************
code U8 MST_RGB_Clip_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK0F_57_L), 0x10, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_5E_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_5E_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_5F_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_5F_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_60_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_60_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_61_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_61_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_62_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_62_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_63_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_63_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_RGB_Clip_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_RGB_Clip_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// xvYCC_bypass
//****************************************************
code U8 MST_xvYCC_bypass_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK25_11_L), 0x80, 0x80 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_xvYCC_bypass_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_xvYCC_bypass_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK25_11_H), 0x01, 0x00/*OFF*/, 
                              0x01/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// xvYCC_de_gamma
//****************************************************
code U8 MST_xvYCC_de_gamma_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_xvYCC_de_gamma_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_xvYCC_de_gamma_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK25_11_L), 0x01, 0x00/*OFF*/, 
                              0x01/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// xvYCC_de_gamma_dither
//****************************************************
code U8 MST_xvYCC_de_gamma_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_xvYCC_de_gamma_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_xvYCC_de_gamma_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK25_11_H), 0x10, 0x00/*OFF*/, 
                              0x10/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// xvYCC_3x3
//****************************************************
code U8 MST_xvYCC_3x3_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK25_11_L), 0x02, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_12_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_12_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_13_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_13_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_14_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_14_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_15_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_15_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_16_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_16_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_17_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_17_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_18_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_18_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_19_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_19_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_1A_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_1A_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_xvYCC_3x3_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_xvYCC_3x3_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// xvYCC_Comp
//****************************************************
code U8 MST_xvYCC_Comp_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK25_11_H), 0x86, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK0F_6E_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_6E_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK0F_6F_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_6F_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK25_42_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_42_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK25_43_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_43_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK25_46_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_46_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK25_47_L), 0x7F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_47_H), 0xFF, 0x80 },
 { PQ_MAP_REG(REG_SC2_BK25_49_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_49_H), 0xF3, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK25_4C_L), 0x07, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK25_4C_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_4D_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_4D_H), 0x1F, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_xvYCC_Comp_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_xvYCC_Comp_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// xvYCC_Comp_dither
//****************************************************
code U8 MST_xvYCC_Comp_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_xvYCC_Comp_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_xvYCC_Comp_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK25_11_H), 0x04, 0x00/*OFF*/, 
                              0x04/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// xvYCC_Clip
//****************************************************
code U8 MST_xvYCC_Clip_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK25_11_L), 0x08, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_1B_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_1B_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_1C_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_1C_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_1D_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_1D_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_1E_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_1E_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_1F_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_1F_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_20_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_20_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_xvYCC_Clip_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_xvYCC_Clip_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// xvYCC_gamma
//****************************************************
code U8 MST_xvYCC_gamma_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_xvYCC_gamma_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_xvYCC_gamma_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK25_11_L), 0x04, 0x00/*OFF*/, 
                              0x04/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// xvYCC_gamma_dither
//****************************************************
code U8 MST_xvYCC_gamma_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_xvYCC_gamma_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_xvYCC_gamma_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK25_11_H), 0x08, 0x00/*OFF*/, 
                              0x08/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// rgb_3d
//****************************************************
code U8 MST_rgb_3d_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_rgb_3d_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_rgb_3d_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK14_52_L), 0x02, 0x00/*OFF*/, 
                              0x02/*ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// HBC
//****************************************************
code U8 MST_HBC_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK0F_18_H), 0x04, 0x00 },//Same mark
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_HBC_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_HBC_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0F_18_H), 0xF8, 0x00/*$OFF*/, 
                              0x18/*$HBC1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// Pre_CON_BRI
//****************************************************
code U8 MST_Pre_CON_BRI_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK0F_53_H), 0x07, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK0F_4A_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_4A_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_4B_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_4B_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_4C_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_4C_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_50_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_50_H), 0x07, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_51_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_51_H), 0x07, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_52_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK0F_52_H), 0x07, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_Pre_CON_BRI_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_Pre_CON_BRI_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// Blue_Stretch
//****************************************************
code U8 MST_Blue_Stretch_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_Blue_Stretch_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_Blue_Stretch_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0F_70_L), 0x10, 0x00/*OFF*/, 
                              0x10/*BS1*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// Blue_Stretch_dither
//****************************************************
code U8 MST_Blue_Stretch_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_Blue_Stretch_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_Blue_Stretch_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// Gamma
//****************************************************
code U8 MST_Gamma_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_Gamma_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_Gamma_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_SC2_BK0F_18_L), 0x11, 0x00/*$OFF*/, 
                              0x11/*$ON*/, },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// Gamma_dither
//****************************************************
code U8 MST_Gamma_dither_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_Gamma_dither_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_Gamma_dither_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// Post_CON_BRI
//****************************************************
code U8 MST_Post_CON_BRI_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_SC2_BK25_11_L), 0x70, 0x00 },//Same mark
 { PQ_MAP_REG(REG_SC2_BK25_27_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_27_H), 0x07, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_28_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_28_H), 0x07, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_29_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_29_H), 0x07, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_2A_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_2A_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_2B_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_2B_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_2C_L), 0xFF, 0x00 },
 { PQ_MAP_REG(REG_SC2_BK25_2C_H), 0x0F, 0x00 },
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_Post_CON_BRI_SC2_Sub[][REG_ADDR_SIZE+REG_MASK_SIZE+PQ_IP_Post_CON_BRI_NUMS_SC2_Sub]=
{
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

//****************************************************
// SRAM_3x3matrix_PIC2
//****************************************************
code U8 MST_SRAM_3x3matrix_PIC2_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U16 MST_SRAM_3x3matrix_PIC2_SC2_Sub[][PQ_IP_SRAM_3x3matrix_PIC2_SIZE_Sub]=
{
{//Build_IN
     0x0400,
     0x0000,
     0x0000,
     0x0000 ,
     0x0400 ,
     0x0000 ,
     0x0000 ,
     0x0000,
     0x0400,
     -0x02E6,
     0x0288,
     -0x05BB,
     0x07A4,
     -0x062C,
     0x06F3,
     -0x073C,
    -0x0024,
    0x01BF,
    0x07EF,
    -0x0116 ,
    0x01EE ,
    0x052C,
    -0x03BB ,
    0x00B1,
    -0x0831,
    0x0100,
    -0x0000,
    0x0000,
    -0x0000 ,
    0x0000 ,
    0x0000 ,
    0x0000
},

};

//****************************************************
// SRAM_DLC_PIC1
//****************************************************
code U8 MST_SRAM_DLC_PIC1_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SRAM_DLC_PIC1_SC2_Sub[][PQ_IP_SRAM_DLC_PIC1_SIZE_SC2_Sub]=
{
{//Build_IN
    0x02,
    0x0C,
    0x1C,
    0x2F,
    0x41,
    0x53,
    0x65,
    0x78,
    0x8B,
    0x9B,
    0xAC,
    0xBA,
    0xC8,
    0xD5,
    0xE5,
    0xF7,
    0x02,
    0x0C,
    0x1A,
    0x2C,
    0x3E,
    0x4D,
    0x5D,
    0x6E,
    0x7E,
    0x8F,
    0x9E,
    0xB0,
    0xC0,
    0xD2,
    0xE3,
    0xF6,
    0x07,
    0x1E,
    0x33,
    0x43,
    0x51,
    0x5F,
    0x6D,
    0x7B,
    0x89,
    0x9A,
    0xA8,
    0xB7,
    0xC7,
    0xD7,
    0xE7,
    0xF8,
    0x88,
    0x90,
    0x93,
    0x92,
    0x8E,
    0x89,
    0x84,
    0x80,
    0x7E,
    0x7D,
    0x7E,
    0x81,
    0x85,
    0x88,
    0x8B,
    0x8C,
    0x8A
},

};

//****************************************************
// SRAM_Bri_Con_Hue_Sat_Sha_PIC1
//****************************************************
code U8 MST_SRAM_Bri_Con_Hue_Sat_Sha_PIC1_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SRAM_Bri_Con_Hue_Sat_Sha_PIC1_SC2_Sub[][PQ_IP_SRAM_Bri_Con_Hue_Sat_Sha_PIC1_SIZE_SC2_Sub]=
{
{//Build_IN
    0x80,
    0x80,
    0x32,
    0x80,
    0x0F
},

};

//****************************************************
// SRAM_GammaTbl_R_PIC1
//****************************************************
code U8 MST_SRAM_GammaTbl_R_PIC1_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SRAM_GammaTbl_R_PIC1_SC2_Sub[][PQ_IP_SRAM_GammaTbl_R_PIC1_SIZE_SC2_Sub]=
{
{//Build_IN
    0x00,
    0x00,
    0x01,
    0x00,
    0x02,
    0x03,
    0x00,
    0x04,
    0x05,
    0x00,
    0x06,
    0x07,
    0x00,
    0x08,
    0x09,
    0x00,
    0x0A,
    0x0B,
    0x00,
    0x0C,
    0x0D,
    0x00,
    0x0E,
    0x0F,
    0x00,
    0x10,
    0x11,
    0x00,
    0x12,
    0x13,
    0x00,
    0x14,
    0x15,
    0x00,
    0x16,
    0x17,
    0x00,
    0x18,
    0x19,
    0x00,
    0x1A,
    0x1B,
    0x00,
    0x1C,
    0x1D,
    0x00,
    0x1E,
    0x1F,
    0x00,
    0x20,
    0x21,
    0x00,
    0x22,
    0x23,
    0x00,
    0x24,
    0x25,
    0x00,
    0x26,
    0x27,
    0x00,
    0x28,
    0x29,
    0x00,
    0x2A,
    0x2B,
    0x00,
    0x2C,
    0x2D,
    0x00,
    0x2E,
    0x2F,
    0x00,
    0x30,
    0x31,
    0x00,
    0x32,
    0x33,
    0x00,
    0x34,
    0x35,
    0x00,
    0x36,
    0x37,
    0x00,
    0x38,
    0x39,
    0x00,
    0x3A,
    0x3B,
    0x00,
    0x3C,
    0x3D,
    0x00,
    0x3E,
    0x3F,
    0x00,
    0x40,
    0x41,
    0x00,
    0x42,
    0x43,
    0x00,
    0x44,
    0x45,
    0x00,
    0x46,
    0x47,
    0x00,
    0x48,
    0x49,
    0x00,
    0x4A,
    0x4B,
    0x00,
    0x4C,
    0x4D,
    0x00,
    0x4E,
    0x4F,
    0x00,
    0x50,
    0x51,
    0x00,
    0x52,
    0x53,
    0x00,
    0x54,
    0x55,
    0x00,
    0x56,
    0x57,
    0x00,
    0x58,
    0x59,
    0x00,
    0x5A,
    0x5B,
    0x00,
    0x5C,
    0x5D,
    0x00,
    0x5E,
    0x5F,
    0x00,
    0x60,
    0x61,
    0x00,
    0x62,
    0x63,
    0x00,
    0x64,
    0x65,
    0x00,
    0x66,
    0x67,
    0x00,
    0x68,
    0x69,
    0x00,
    0x6A,
    0x6B,
    0x00,
    0x6C,
    0x6D,
    0x00,
    0x6E,
    0x6F,
    0x00,
    0x70,
    0x71,
    0x00,
    0x72,
    0x73,
    0x00,
    0x74,
    0x75,
    0x00,
    0x76,
    0x77,
    0x00,
    0x78,
    0x79,
    0x00,
    0x7A,
    0x7B,
    0x00,
    0x7C,
    0x7D,
    0x00,
    0x7E,
    0x7F,
    0x00,
    0x80,
    0x81,
    0x00,
    0x82,
    0x83,
    0x00,
    0x84,
    0x85,
    0x00,
    0x86,
    0x87,
    0x00,
    0x88,
    0x89,
    0x00,
    0x8A,
    0x8B,
    0x00,
    0x8C,
    0x8D,
    0x00,
    0x8E,
    0x8F,
    0x00,
    0x90,
    0x91,
    0x00,
    0x92,
    0x93,
    0x00,
    0x94,
    0x95,
    0x00,
    0x96,
    0x97,
    0x00,
    0x98,
    0x99,
    0x00,
    0x9A,
    0x9B,
    0x00,
    0x9C,
    0x9D,
    0x00,
    0x9E,
    0x9F,
    0x00,
    0xA0,
    0xA1,
    0x00,
    0xA2,
    0xA3,
    0x00,
    0xA4,
    0xA5,
    0x00,
    0xA6,
    0xA7,
    0x00,
    0xA8,
    0xA9,
    0x00,
    0xAA,
    0xAB,
    0x00,
    0xAC,
    0xAD,
    0x00,
    0xAE,
    0xAF,
    0x00,
    0xB0,
    0xB1,
    0x00,
    0xB2,
    0xB3,
    0x00,
    0xB4,
    0xB5,
    0x00,
    0xB6,
    0xB7,
    0x00,
    0xB8,
    0xB9,
    0x00,
    0xBA,
    0xBB,
    0x00,
    0xBC,
    0xBD,
    0x00,
    0xBE,
    0xBF,
    0x00,
    0xC0,
    0xC1,
    0x00,
    0xC2,
    0xC3,
    0x00,
    0xC4,
    0xC5,
    0x00,
    0xC6,
    0xC7,
    0x00,
    0xC8,
    0xC9,
    0x00,
    0xCA,
    0xCB,
    0x00,
    0xCC,
    0xCD,
    0x00,
    0xCE,
    0xCF,
    0x00,
    0xD0,
    0xD1,
    0x00,
    0xD2,
    0xD3,
    0x00,
    0xD4,
    0xD5,
    0x00,
    0xD6,
    0xD7,
    0x00,
    0xD8,
    0xD9,
    0x00,
    0xDA,
    0xDB,
    0x00,
    0xDC,
    0xDD,
    0x00,
    0xDE,
    0xDF,
    0x00,
    0xE0,
    0xE1,
    0x00,
    0xE2,
    0xE3,
    0x00,
    0xE4,
    0xE5,
    0x00,
    0xE6,
    0xE7,
    0x00,
    0xE8,
    0xE9,
    0x00,
    0xEA,
    0xEB,
    0x00,
    0xEC,
    0xED,
    0x00,
    0xEE,
    0xEF,
    0x00,
    0xF0,
    0xF1,
    0x00,
    0xF2,
    0xF3,
    0x00,
    0xF4,
    0xF5,
    0x00,
    0xF6,
    0xF7,
    0x00,
    0xF8,
    0xF9,
    0x00,
    0xFA,
    0xFB,
    0x00,
    0xFC,
    0xFD,
    0x00,
    0xFE,
    0xFF,
    0x00,
    0xFF
},

};

//****************************************************
// SRAM_GammaTbl_G_PIC1
//****************************************************
code U8 MST_SRAM_GammaTbl_G_PIC1_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SRAM_GammaTbl_G_PIC1_SC2_Sub[][PQ_IP_SRAM_GammaTbl_G_PIC1_SIZE_SC2_Sub]=
{
{//Build_IN
    0x00,
    0x00,
    0x01,
    0x00,
    0x02,
    0x03,
    0x00,
    0x04,
    0x05,
    0x00,
    0x06,
    0x07,
    0x00,
    0x08,
    0x09,
    0x00,
    0x0A,
    0x0B,
    0x00,
    0x0C,
    0x0D,
    0x00,
    0x0E,
    0x0F,
    0x00,
    0x10,
    0x11,
    0x00,
    0x12,
    0x13,
    0x00,
    0x14,
    0x15,
    0x00,
    0x16,
    0x17,
    0x00,
    0x18,
    0x19,
    0x00,
    0x1A,
    0x1B,
    0x00,
    0x1C,
    0x1D,
    0x00,
    0x1E,
    0x1F,
    0x00,
    0x20,
    0x21,
    0x00,
    0x22,
    0x23,
    0x00,
    0x24,
    0x25,
    0x00,
    0x26,
    0x27,
    0x00,
    0x28,
    0x29,
    0x00,
    0x2A,
    0x2B,
    0x00,
    0x2C,
    0x2D,
    0x00,
    0x2E,
    0x2F,
    0x00,
    0x30,
    0x31,
    0x00,
    0x32,
    0x33,
    0x00,
    0x34,
    0x35,
    0x00,
    0x36,
    0x37,
    0x00,
    0x38,
    0x39,
    0x00,
    0x3A,
    0x3B,
    0x00,
    0x3C,
    0x3D,
    0x00,
    0x3E,
    0x3F,
    0x00,
    0x40,
    0x41,
    0x00,
    0x42,
    0x43,
    0x00,
    0x44,
    0x45,
    0x00,
    0x46,
    0x47,
    0x00,
    0x48,
    0x49,
    0x00,
    0x4A,
    0x4B,
    0x00,
    0x4C,
    0x4D,
    0x00,
    0x4E,
    0x4F,
    0x00,
    0x50,
    0x51,
    0x00,
    0x52,
    0x53,
    0x00,
    0x54,
    0x55,
    0x00,
    0x56,
    0x57,
    0x00,
    0x58,
    0x59,
    0x00,
    0x5A,
    0x5B,
    0x00,
    0x5C,
    0x5D,
    0x00,
    0x5E,
    0x5F,
    0x00,
    0x60,
    0x61,
    0x00,
    0x62,
    0x63,
    0x00,
    0x64,
    0x65,
    0x00,
    0x66,
    0x67,
    0x00,
    0x68,
    0x69,
    0x00,
    0x6A,
    0x6B,
    0x00,
    0x6C,
    0x6D,
    0x00,
    0x6E,
    0x6F,
    0x00,
    0x70,
    0x71,
    0x00,
    0x72,
    0x73,
    0x00,
    0x74,
    0x75,
    0x00,
    0x76,
    0x77,
    0x00,
    0x78,
    0x79,
    0x00,
    0x7A,
    0x7B,
    0x00,
    0x7C,
    0x7D,
    0x00,
    0x7E,
    0x7F,
    0x00,
    0x80,
    0x81,
    0x00,
    0x82,
    0x83,
    0x00,
    0x84,
    0x85,
    0x00,
    0x86,
    0x87,
    0x00,
    0x88,
    0x89,
    0x00,
    0x8A,
    0x8B,
    0x00,
    0x8C,
    0x8D,
    0x00,
    0x8E,
    0x8F,
    0x00,
    0x90,
    0x91,
    0x00,
    0x92,
    0x93,
    0x00,
    0x94,
    0x95,
    0x00,
    0x96,
    0x97,
    0x00,
    0x98,
    0x99,
    0x00,
    0x9A,
    0x9B,
    0x00,
    0x9C,
    0x9D,
    0x00,
    0x9E,
    0x9F,
    0x00,
    0xA0,
    0xA1,
    0x00,
    0xA2,
    0xA3,
    0x00,
    0xA4,
    0xA5,
    0x00,
    0xA6,
    0xA7,
    0x00,
    0xA8,
    0xA9,
    0x00,
    0xAA,
    0xAB,
    0x00,
    0xAC,
    0xAD,
    0x00,
    0xAE,
    0xAF,
    0x00,
    0xB0,
    0xB1,
    0x00,
    0xB2,
    0xB3,
    0x00,
    0xB4,
    0xB5,
    0x00,
    0xB6,
    0xB7,
    0x00,
    0xB8,
    0xB9,
    0x00,
    0xBA,
    0xBB,
    0x00,
    0xBC,
    0xBD,
    0x00,
    0xBE,
    0xBF,
    0x00,
    0xC0,
    0xC1,
    0x00,
    0xC2,
    0xC3,
    0x00,
    0xC4,
    0xC5,
    0x00,
    0xC6,
    0xC7,
    0x00,
    0xC8,
    0xC9,
    0x00,
    0xCA,
    0xCB,
    0x00,
    0xCC,
    0xCD,
    0x00,
    0xCE,
    0xCF,
    0x00,
    0xD0,
    0xD1,
    0x00,
    0xD2,
    0xD3,
    0x00,
    0xD4,
    0xD5,
    0x00,
    0xD6,
    0xD7,
    0x00,
    0xD8,
    0xD9,
    0x00,
    0xDA,
    0xDB,
    0x00,
    0xDC,
    0xDD,
    0x00,
    0xDE,
    0xDF,
    0x00,
    0xE0,
    0xE1,
    0x00,
    0xE2,
    0xE3,
    0x00,
    0xE4,
    0xE5,
    0x00,
    0xE6,
    0xE7,
    0x00,
    0xE8,
    0xE9,
    0x00,
    0xEA,
    0xEB,
    0x00,
    0xEC,
    0xED,
    0x00,
    0xEE,
    0xEF,
    0x00,
    0xF0,
    0xF1,
    0x00,
    0xF2,
    0xF3,
    0x00,
    0xF4,
    0xF5,
    0x00,
    0xF6,
    0xF7,
    0x00,
    0xF8,
    0xF9,
    0x00,
    0xFA,
    0xFB,
    0x00,
    0xFC,
    0xFD,
    0x00,
    0xFE,
    0xFF,
    0x00,
    0xFF
},

};

//****************************************************
// SRAM_GammaTbl_B_PIC1
//****************************************************
code U8 MST_SRAM_GammaTbl_B_PIC1_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SRAM_GammaTbl_B_PIC1_SC2_Sub[][PQ_IP_SRAM_GammaTbl_B_PIC1_SIZE_SC2_Sub]=
{
{//Build_IN
    0x00,
    0x00,
    0x01,
    0x00,
    0x02,
    0x03,
    0x00,
    0x04,
    0x05,
    0x00,
    0x06,
    0x07,
    0x00,
    0x08,
    0x09,
    0x00,
    0x0A,
    0x0B,
    0x00,
    0x0C,
    0x0D,
    0x00,
    0x0E,
    0x0F,
    0x00,
    0x10,
    0x11,
    0x00,
    0x12,
    0x13,
    0x00,
    0x14,
    0x15,
    0x00,
    0x16,
    0x17,
    0x00,
    0x18,
    0x19,
    0x00,
    0x1A,
    0x1B,
    0x00,
    0x1C,
    0x1D,
    0x00,
    0x1E,
    0x1F,
    0x00,
    0x20,
    0x21,
    0x00,
    0x22,
    0x23,
    0x00,
    0x24,
    0x25,
    0x00,
    0x26,
    0x27,
    0x00,
    0x28,
    0x29,
    0x00,
    0x2A,
    0x2B,
    0x00,
    0x2C,
    0x2D,
    0x00,
    0x2E,
    0x2F,
    0x00,
    0x30,
    0x31,
    0x00,
    0x32,
    0x33,
    0x00,
    0x34,
    0x35,
    0x00,
    0x36,
    0x37,
    0x00,
    0x38,
    0x39,
    0x00,
    0x3A,
    0x3B,
    0x00,
    0x3C,
    0x3D,
    0x00,
    0x3E,
    0x3F,
    0x00,
    0x40,
    0x41,
    0x00,
    0x42,
    0x43,
    0x00,
    0x44,
    0x45,
    0x00,
    0x46,
    0x47,
    0x00,
    0x48,
    0x49,
    0x00,
    0x4A,
    0x4B,
    0x00,
    0x4C,
    0x4D,
    0x00,
    0x4E,
    0x4F,
    0x00,
    0x50,
    0x51,
    0x00,
    0x52,
    0x53,
    0x00,
    0x54,
    0x55,
    0x00,
    0x56,
    0x57,
    0x00,
    0x58,
    0x59,
    0x00,
    0x5A,
    0x5B,
    0x00,
    0x5C,
    0x5D,
    0x00,
    0x5E,
    0x5F,
    0x00,
    0x60,
    0x61,
    0x00,
    0x62,
    0x63,
    0x00,
    0x64,
    0x65,
    0x00,
    0x66,
    0x67,
    0x00,
    0x68,
    0x69,
    0x00,
    0x6A,
    0x6B,
    0x00,
    0x6C,
    0x6D,
    0x00,
    0x6E,
    0x6F,
    0x00,
    0x70,
    0x71,
    0x00,
    0x72,
    0x73,
    0x00,
    0x74,
    0x75,
    0x00,
    0x76,
    0x77,
    0x00,
    0x78,
    0x79,
    0x00,
    0x7A,
    0x7B,
    0x00,
    0x7C,
    0x7D,
    0x00,
    0x7E,
    0x7F,
    0x00,
    0x80,
    0x81,
    0x00,
    0x82,
    0x83,
    0x00,
    0x84,
    0x85,
    0x00,
    0x86,
    0x87,
    0x00,
    0x88,
    0x89,
    0x00,
    0x8A,
    0x8B,
    0x00,
    0x8C,
    0x8D,
    0x00,
    0x8E,
    0x8F,
    0x00,
    0x90,
    0x91,
    0x00,
    0x92,
    0x93,
    0x00,
    0x94,
    0x95,
    0x00,
    0x96,
    0x97,
    0x00,
    0x98,
    0x99,
    0x00,
    0x9A,
    0x9B,
    0x00,
    0x9C,
    0x9D,
    0x00,
    0x9E,
    0x9F,
    0x00,
    0xA0,
    0xA1,
    0x00,
    0xA2,
    0xA3,
    0x00,
    0xA4,
    0xA5,
    0x00,
    0xA6,
    0xA7,
    0x00,
    0xA8,
    0xA9,
    0x00,
    0xAA,
    0xAB,
    0x00,
    0xAC,
    0xAD,
    0x00,
    0xAE,
    0xAF,
    0x00,
    0xB0,
    0xB1,
    0x00,
    0xB2,
    0xB3,
    0x00,
    0xB4,
    0xB5,
    0x00,
    0xB6,
    0xB7,
    0x00,
    0xB8,
    0xB9,
    0x00,
    0xBA,
    0xBB,
    0x00,
    0xBC,
    0xBD,
    0x00,
    0xBE,
    0xBF,
    0x00,
    0xC0,
    0xC1,
    0x00,
    0xC2,
    0xC3,
    0x00,
    0xC4,
    0xC5,
    0x00,
    0xC6,
    0xC7,
    0x00,
    0xC8,
    0xC9,
    0x00,
    0xCA,
    0xCB,
    0x00,
    0xCC,
    0xCD,
    0x00,
    0xCE,
    0xCF,
    0x00,
    0xD0,
    0xD1,
    0x00,
    0xD2,
    0xD3,
    0x00,
    0xD4,
    0xD5,
    0x00,
    0xD6,
    0xD7,
    0x00,
    0xD8,
    0xD9,
    0x00,
    0xDA,
    0xDB,
    0x00,
    0xDC,
    0xDD,
    0x00,
    0xDE,
    0xDF,
    0x00,
    0xE0,
    0xE1,
    0x00,
    0xE2,
    0xE3,
    0x00,
    0xE4,
    0xE5,
    0x00,
    0xE6,
    0xE7,
    0x00,
    0xE8,
    0xE9,
    0x00,
    0xEA,
    0xEB,
    0x00,
    0xEC,
    0xED,
    0x00,
    0xEE,
    0xEF,
    0x00,
    0xF0,
    0xF1,
    0x00,
    0xF2,
    0xF3,
    0x00,
    0xF4,
    0xF5,
    0x00,
    0xF6,
    0xF7,
    0x00,
    0xF8,
    0xF9,
    0x00,
    0xFA,
    0xFB,
    0x00,
    0xFC,
    0xFD,
    0x00,
    0xFE,
    0xFF,
    0x00,
    0xFF
},

};

//****************************************************
// SRAM_Auto_Color_PIC2
//****************************************************
code U8 MST_SRAM_Auto_Color_PIC2_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U16 MST_SRAM_Auto_Color_PIC2_SC2_Sub[][PQ_IP_SRAM_Auto_Color_PIC2_SIZE_Sub]=
{
{//Build_IN
    0x1687,
    0x10A7,
    0x167F,
    0x0800,
    0x0100,
    0x0800
},

};

//****************************************************
// SRAM_Color_Temp_PIC1
//****************************************************
code U8 MST_SRAM_Color_Temp_PIC1_COM_SC2_Sub[][4] =
{      // Reg           Mask  Value
 { PQ_MAP_REG(REG_TABLE_END), 0x00, 0x00 }
};

code U8 MST_SRAM_Color_Temp_PIC1_SC2_Sub[][PQ_IP_SRAM_Color_Temp_PIC1_SIZE_SC2_Sub]=
{
{//Build_IN
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x80,
    0x20,
    0x20,
    0x20
},

};


code EN_IPTAB_INFO PQ_IPTAB_INFO_SC2_Sub[]=
{
{*MST_AFEC_COM_SC2_Sub, *MST_AFEC_SC2_Sub, PQ_IP_AFEC_NUMS_SC2_Sub, PQ_TABTYPE_GENERAL},
{*MST_Comb_COM_SC2_Sub, *MST_Comb_SC2_Sub, PQ_IP_Comb_NUMS_SC2_Sub, PQ_TABTYPE_COMB},
{*MST_Comb2_COM_SC2_Sub, *MST_Comb2_SC2_Sub, PQ_IP_Comb2_NUMS_SC2_Sub, PQ_TABTYPE_GENERAL},
{*MST_SECAM_COM_SC2_Sub, *MST_SECAM_SC2_Sub, PQ_IP_SECAM_NUMS_SC2_Sub, PQ_TABTYPE_GENERAL},
{*MST_VD_Sampling_no_comm_COM_SC2_Sub, *MST_VD_Sampling_no_comm_SC2_Sub, PQ_IP_VD_Sampling_no_comm_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SCinit_COM_SC2_Sub, *MST_SCinit_SC2_Sub, PQ_IP_SCinit_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_CSC_COM_SC2_Sub, *MST_CSC_SC2_Sub, PQ_IP_CSC_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_CSC_Dither_COM_SC2_Sub, *MST_CSC_Dither_SC2_Sub, PQ_IP_CSC_Dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_YCdelay_COM_SC2_Sub, *MST_YCdelay_SC2_Sub, PQ_IP_YCdelay_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_PreFilter_COM_SC2_Sub, *MST_PreFilter_SC2_Sub, PQ_IP_PreFilter_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_PreFilter_Dither_COM_SC2_Sub, *MST_PreFilter_Dither_SC2_Sub, PQ_IP_PreFilter_Dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_HDSDD_COM_SC2_Sub, *MST_HDSDD_SC2_Sub, PQ_IP_HDSDD_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_HSD_Y_COM_SC2_Sub, *MST_HSD_Y_SC2_Sub, PQ_IP_HSD_Y_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_HSD_C_COM_SC2_Sub, *MST_HSD_C_SC2_Sub, PQ_IP_HSD_C_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_444To422_COM_SC2_Sub, *MST_444To422_SC2_Sub, PQ_IP_444To422_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VSD_COM_SC2_Sub, *MST_VSD_SC2_Sub, PQ_IP_VSD_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_HVSD_Dither_COM_SC2_Sub, *MST_HVSD_Dither_SC2_Sub, PQ_IP_HVSD_Dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_10to8_Dither_COM_SC2_Sub, *MST_10to8_Dither_SC2_Sub, PQ_IP_10to8_Dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_MemFormat_COM_SC2_Sub, *MST_MemFormat_SC2_Sub, PQ_IP_MemFormat_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_PreSNR_COM_SC2_Sub, *MST_PreSNR_SC2_Sub, PQ_IP_PreSNR_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_PreSNR_Patch_COM_SC2_Sub, *MST_PreSNR_Patch_SC2_Sub, PQ_IP_PreSNR_Patch_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_DNR_COM_SC2_Sub, *MST_DNR_SC2_Sub, PQ_IP_DNR_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_DNR_Motion_COM_SC2_Sub, *MST_DNR_Motion_SC2_Sub, PQ_IP_DNR_Motion_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_DNR_Y_COM_SC2_Sub, *MST_DNR_Y_SC2_Sub, PQ_IP_DNR_Y_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_DNR_Y_COLOR_DEP_COM_SC2_Sub, *MST_DNR_Y_COLOR_DEP_SC2_Sub, PQ_IP_DNR_Y_COLOR_DEP_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SRAM_COLOR_INDEX_COM_SC2_Sub, *MST_SRAM_COLOR_INDEX_SC2_Sub, PQ_IP_SRAM_COLOR_INDEX_NUMS_SC2_Sub, PQ_TABTYPE_SRAM_COLOR_INDEX},
{*MST_SRAM_COLOR_GAIN_SNR_COM_SC2_Sub, *MST_SRAM_COLOR_GAIN_SNR_SC2_Sub, PQ_IP_SRAM_COLOR_GAIN_SNR_NUMS_SC2_Sub, PQ_TABTYPE_SRAM_COLOR_GAIN_SNR},
{*MST_SRAM_COLOR_GAIN_DNR_COM_SC2_Sub, *MST_SRAM_COLOR_GAIN_DNR_SC2_Sub, PQ_IP_SRAM_COLOR_GAIN_DNR_NUMS_SC2_Sub, PQ_TABTYPE_SRAM_COLOR_GAIN_DNR},
{*MST_DNR_Y_LUMA_ADAPTIVE_COM_SC2_Sub, *MST_DNR_Y_LUMA_ADAPTIVE_SC2_Sub, PQ_IP_DNR_Y_LUMA_ADAPTIVE_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_DNR_POSTTUNE_COM_SC2_Sub, *MST_DNR_POSTTUNE_SC2_Sub, PQ_IP_DNR_POSTTUNE_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_DNR_C_COM_SC2_Sub, *MST_DNR_C_SC2_Sub, PQ_IP_DNR_C_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_HISDNR_COM_SC2_Sub, *MST_HISDNR_SC2_Sub, PQ_IP_HISDNR_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_PNR_COM_SC2_Sub, *MST_PNR_SC2_Sub, PQ_IP_PNR_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_PNR_Y_COM_SC2_Sub, *MST_PNR_Y_SC2_Sub, PQ_IP_PNR_Y_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_PNR_C_COM_SC2_Sub, *MST_PNR_C_SC2_Sub, PQ_IP_PNR_C_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_PostCCS_COM_SC2_Sub, *MST_PostCCS_SC2_Sub, PQ_IP_PostCCS_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_PostCCS_Smooth_COM_SC2_Sub, *MST_PostCCS_Smooth_SC2_Sub, PQ_IP_PostCCS_Smooth_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_420CUP_COM_SC2_Sub, *MST_420CUP_SC2_Sub, PQ_IP_420CUP_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_MADi_COM_SC2_Sub, *MST_MADi_SC2_Sub, PQ_IP_MADi_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_MADi_Motion_COM_SC2_Sub, *MST_MADi_Motion_SC2_Sub, PQ_IP_MADi_Motion_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_MADi_ADP3x3_COM_SC2_Sub, *MST_MADi_ADP3x3_SC2_Sub, PQ_IP_MADi_ADP3x3_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_MADi_MORPHO_COM_SC2_Sub, *MST_MADi_MORPHO_SC2_Sub, PQ_IP_MADi_MORPHO_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_MADi_DFK_COM_SC2_Sub, *MST_MADi_DFK_SC2_Sub, PQ_IP_MADi_DFK_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_MADi_SST_COM_SC2_Sub, *MST_MADi_SST_SC2_Sub, PQ_IP_MADi_SST_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_MADi_EODiW_COM_SC2_Sub, *MST_MADi_EODiW_SC2_Sub, PQ_IP_MADi_EODiW_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_MADi_Force_COM_SC2_Sub, *MST_MADi_Force_SC2_Sub, PQ_IP_MADi_Force_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_EODi_COM_SC2_Sub, *MST_EODi_SC2_Sub, PQ_IP_EODi_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_Film_COM_SC2_Sub, *MST_Film_SC2_Sub, PQ_IP_Film_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_Film32_COM_SC2_Sub, *MST_Film32_SC2_Sub, PQ_IP_Film32_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_Film22_COM_SC2_Sub, *MST_Film22_SC2_Sub, PQ_IP_Film22_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_Film_any_COM_SC2_Sub, *MST_Film_any_SC2_Sub, PQ_IP_Film_any_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_DIPF_COM_SC2_Sub, *MST_DIPF_SC2_Sub, PQ_IP_DIPF_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VCLPF_COM_SC2_Sub, *MST_VCLPF_SC2_Sub, PQ_IP_VCLPF_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_Spike_NR_COM_SC2_Sub, *MST_Spike_NR_SC2_Sub, PQ_IP_Spike_NR_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SPF_COM_SC2_Sub, *MST_SPF_SC2_Sub, PQ_IP_SPF_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SPF_DBK_COM_SC2_Sub, *MST_SPF_DBK_SC2_Sub, PQ_IP_SPF_DBK_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SPF_DBK_BKN_COM_SC2_Sub, *MST_SPF_DBK_BKN_SC2_Sub, PQ_IP_SPF_DBK_BKN_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SPF_DBK_MR_COM_SC2_Sub, *MST_SPF_DBK_MR_SC2_Sub, PQ_IP_SPF_DBK_MR_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SPF_SNR_COM_SC2_Sub, *MST_SPF_SNR_SC2_Sub, PQ_IP_SPF_SNR_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SPF_SNR_MR_COM_SC2_Sub, *MST_SPF_SNR_MR_SC2_Sub, PQ_IP_SPF_SNR_MR_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SPF_MR_LPF_COM_SC2_Sub, *MST_SPF_MR_LPF_SC2_Sub, PQ_IP_SPF_MR_LPF_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SPF_NMR_Y_COM_SC2_Sub, *MST_SPF_NMR_Y_SC2_Sub, PQ_IP_SPF_NMR_Y_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SPF_NMR_Y_MR_COM_SC2_Sub, *MST_SPF_NMR_Y_MR_SC2_Sub, PQ_IP_SPF_NMR_Y_MR_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SPF_NMR_C_COM_SC2_Sub, *MST_SPF_NMR_C_SC2_Sub, PQ_IP_SPF_NMR_C_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_DMS_COM_SC2_Sub, *MST_DMS_SC2_Sub, PQ_IP_DMS_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_DMS_H_COM_SC2_Sub, *MST_DMS_H_SC2_Sub, PQ_IP_DMS_H_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_DMS_V_COM_SC2_Sub, *MST_DMS_V_SC2_Sub, PQ_IP_DMS_V_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_DMS_V_12L_COM_SC2_Sub, *MST_DMS_V_12L_SC2_Sub, PQ_IP_DMS_V_12L_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VSP_Y_COM_SC2_Sub, *MST_VSP_Y_SC2_Sub, PQ_IP_VSP_Y_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VSP_C_COM_SC2_Sub, *MST_VSP_C_SC2_Sub, PQ_IP_VSP_C_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VSP_CoRing_COM_SC2_Sub, *MST_VSP_CoRing_SC2_Sub, PQ_IP_VSP_CoRing_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VSP_DeRing_COM_SC2_Sub, *MST_VSP_DeRing_SC2_Sub, PQ_IP_VSP_DeRing_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VSP_Dither_COM_SC2_Sub, *MST_VSP_Dither_SC2_Sub, PQ_IP_VSP_Dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VSP_PreVBound_COM_SC2_Sub, *MST_VSP_PreVBound_SC2_Sub, PQ_IP_VSP_PreVBound_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_422To444_COM_SC2_Sub, *MST_422To444_SC2_Sub, PQ_IP_422To444_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_PreCTI_COM_SC2_Sub, *MST_PreCTI_SC2_Sub, PQ_IP_PreCTI_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_HSP_Y_COM_SC2_Sub, *MST_HSP_Y_SC2_Sub, PQ_IP_HSP_Y_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_HSP_C_COM_SC2_Sub, *MST_HSP_C_SC2_Sub, PQ_IP_HSP_C_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_HSP_CoRing_COM_SC2_Sub, *MST_HSP_CoRing_SC2_Sub, PQ_IP_HSP_CoRing_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_HSP_DeRing_COM_SC2_Sub, *MST_HSP_DeRing_SC2_Sub, PQ_IP_HSP_DeRing_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_HSP_Dither_COM_SC2_Sub, *MST_HSP_Dither_SC2_Sub, PQ_IP_HSP_Dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_HnonLinear_COM_SC2_Sub, *MST_HnonLinear_SC2_Sub, PQ_IP_HnonLinear_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SRAM1_COM_SC2_Sub, *MST_SRAM1_SC2_Sub, PQ_IP_SRAM1_NUMS_SC2_Sub, PQ_TABTYPE_SRAM1},
{*MST_SRAM2_COM_SC2_Sub, *MST_SRAM2_SC2_Sub, PQ_IP_SRAM2_NUMS_SC2_Sub, PQ_TABTYPE_SRAM2},
{*MST_SRAM3_COM_SC2_Sub, *MST_SRAM3_SC2_Sub, PQ_IP_SRAM3_NUMS_SC2_Sub, PQ_TABTYPE_SRAM3},
{*MST_SRAM4_COM_SC2_Sub, *MST_SRAM4_SC2_Sub, PQ_IP_SRAM4_NUMS_SC2_Sub, PQ_TABTYPE_SRAM4},
{*MST_C_SRAM1_COM_SC2_Sub, *MST_C_SRAM1_SC2_Sub, PQ_IP_C_SRAM1_NUMS_SC2_Sub, PQ_TABTYPE_C_SRAM1},
{*MST_C_SRAM2_COM_SC2_Sub, *MST_C_SRAM2_SC2_Sub, PQ_IP_C_SRAM2_NUMS_SC2_Sub, PQ_TABTYPE_C_SRAM2},
{*MST_C_SRAM3_COM_SC2_Sub, *MST_C_SRAM3_SC2_Sub, PQ_IP_C_SRAM3_NUMS_SC2_Sub, PQ_TABTYPE_C_SRAM3},
{*MST_C_SRAM4_COM_SC2_Sub, *MST_C_SRAM4_SC2_Sub, PQ_IP_C_SRAM4_NUMS_SC2_Sub, PQ_TABTYPE_C_SRAM4},
{*MST_VIP_COM_SC2_Sub, *MST_VIP_SC2_Sub, PQ_IP_VIP_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_pseudo_COM_SC2_Sub, *MST_VIP_pseudo_SC2_Sub, PQ_IP_VIP_pseudo_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_CSC_COM_SC2_Sub, *MST_VIP_CSC_SC2_Sub, PQ_IP_VIP_CSC_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_CSC_dither_COM_SC2_Sub, *MST_VIP_CSC_dither_SC2_Sub, PQ_IP_VIP_CSC_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Post_YC_delay_COM_SC2_Sub, *MST_VIP_Post_YC_delay_SC2_Sub, PQ_IP_VIP_Post_YC_delay_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_HNMR_Y_COM_SC2_Sub, *MST_VIP_HNMR_Y_SC2_Sub, PQ_IP_VIP_HNMR_Y_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_HNMR_C_COM_SC2_Sub, *MST_VIP_HNMR_C_SC2_Sub, PQ_IP_VIP_HNMR_C_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_HNMR_ad_C_COM_SC2_Sub, *MST_VIP_HNMR_ad_C_SC2_Sub, PQ_IP_VIP_HNMR_ad_C_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_HNMR_ad_C_gain_COM_SC2_Sub, *MST_VIP_HNMR_ad_C_gain_SC2_Sub, PQ_IP_VIP_HNMR_ad_C_gain_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_HNMR_C_win1_COM_SC2_Sub, *MST_VIP_HNMR_C_win1_SC2_Sub, PQ_IP_VIP_HNMR_C_win1_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_HNMR_C_win2_COM_SC2_Sub, *MST_VIP_HNMR_C_win2_SC2_Sub, PQ_IP_VIP_HNMR_C_win2_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Pre_Yoffset_COM_SC2_Sub, *MST_VIP_Pre_Yoffset_SC2_Sub, PQ_IP_VIP_Pre_Yoffset_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Pre_Ygain_COM_SC2_Sub, *MST_VIP_Pre_Ygain_SC2_Sub, PQ_IP_VIP_Pre_Ygain_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Pre_Ygain_dither_COM_SC2_Sub, *MST_VIP_Pre_Ygain_dither_SC2_Sub, PQ_IP_VIP_Pre_Ygain_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_HLPF_COM_SC2_Sub, *MST_VIP_HLPF_SC2_Sub, PQ_IP_VIP_HLPF_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_HLPF_dither_COM_SC2_Sub, *MST_VIP_HLPF_dither_SC2_Sub, PQ_IP_VIP_HLPF_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_VNMR_COM_SC2_Sub, *MST_VIP_VNMR_SC2_Sub, PQ_IP_VIP_VNMR_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_VNMR_dither_COM_SC2_Sub, *MST_VIP_VNMR_dither_SC2_Sub, PQ_IP_VIP_VNMR_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_VLPF_coef1_COM_SC2_Sub, *MST_VIP_VLPF_coef1_SC2_Sub, PQ_IP_VIP_VLPF_coef1_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_VLPF_coef2_COM_SC2_Sub, *MST_VIP_VLPF_coef2_SC2_Sub, PQ_IP_VIP_VLPF_coef2_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_VLPF_dither_COM_SC2_Sub, *MST_VIP_VLPF_dither_SC2_Sub, PQ_IP_VIP_VLPF_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_EE_COM_SC2_Sub, *MST_VIP_EE_SC2_Sub, PQ_IP_VIP_EE_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Peaking_COM_SC2_Sub, *MST_VIP_Peaking_SC2_Sub, PQ_IP_VIP_Peaking_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Peaking_band_COM_SC2_Sub, *MST_VIP_Peaking_band_SC2_Sub, PQ_IP_VIP_Peaking_band_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Peaking_dering_COM_SC2_Sub, *MST_VIP_Peaking_dering_SC2_Sub, PQ_IP_VIP_Peaking_dering_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Peaking_Pcoring_COM_SC2_Sub, *MST_VIP_Peaking_Pcoring_SC2_Sub, PQ_IP_VIP_Peaking_Pcoring_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Peaking_gain_COM_SC2_Sub, *MST_VIP_Peaking_gain_SC2_Sub, PQ_IP_VIP_Peaking_gain_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Peaking_gain_ad_C_COM_SC2_Sub, *MST_VIP_Peaking_gain_ad_C_SC2_Sub, PQ_IP_VIP_Peaking_gain_ad_C_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Peaking_gain_ad_Y_COM_SC2_Sub, *MST_VIP_Peaking_gain_ad_Y_SC2_Sub, PQ_IP_VIP_Peaking_gain_ad_Y_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Post_SNR_COM_SC2_Sub, *MST_VIP_Post_SNR_SC2_Sub, PQ_IP_VIP_Post_SNR_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Post_CTI_COM_SC2_Sub, *MST_VIP_Post_CTI_SC2_Sub, PQ_IP_VIP_Post_CTI_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Post_CTI_coef_COM_SC2_Sub, *MST_VIP_Post_CTI_coef_SC2_Sub, PQ_IP_VIP_Post_CTI_coef_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Post_CTI_gray_COM_SC2_Sub, *MST_VIP_Post_CTI_gray_SC2_Sub, PQ_IP_VIP_Post_CTI_gray_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_FCC_full_range_COM_SC2_Sub, *MST_VIP_FCC_full_range_SC2_Sub, PQ_IP_VIP_FCC_full_range_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_FCC_T1_COM_SC2_Sub, *MST_VIP_FCC_T1_SC2_Sub, PQ_IP_VIP_FCC_T1_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_FCC_T2_COM_SC2_Sub, *MST_VIP_FCC_T2_SC2_Sub, PQ_IP_VIP_FCC_T2_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_FCC_T3_COM_SC2_Sub, *MST_VIP_FCC_T3_SC2_Sub, PQ_IP_VIP_FCC_T3_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_FCC_T4_COM_SC2_Sub, *MST_VIP_FCC_T4_SC2_Sub, PQ_IP_VIP_FCC_T4_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_FCC_T5_COM_SC2_Sub, *MST_VIP_FCC_T5_SC2_Sub, PQ_IP_VIP_FCC_T5_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_FCC_T6_COM_SC2_Sub, *MST_VIP_FCC_T6_SC2_Sub, PQ_IP_VIP_FCC_T6_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_FCC_T7_COM_SC2_Sub, *MST_VIP_FCC_T7_SC2_Sub, PQ_IP_VIP_FCC_T7_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_FCC_T8_COM_SC2_Sub, *MST_VIP_FCC_T8_SC2_Sub, PQ_IP_VIP_FCC_T8_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_FCC_T9_COM_SC2_Sub, *MST_VIP_FCC_T9_SC2_Sub, PQ_IP_VIP_FCC_T9_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_IHC_COM_SC2_Sub, *MST_VIP_IHC_SC2_Sub, PQ_IP_VIP_IHC_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_IHC_Ymode_COM_SC2_Sub, *MST_VIP_IHC_Ymode_SC2_Sub, PQ_IP_VIP_IHC_Ymode_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_IHC_dither_COM_SC2_Sub, *MST_VIP_IHC_dither_SC2_Sub, PQ_IP_VIP_IHC_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_IHC_CRD_SRAM_COM_SC2_Sub, *MST_VIP_IHC_CRD_SRAM_SC2_Sub, PQ_IP_VIP_IHC_CRD_SRAM_NUMS_SC2_Sub, PQ_TABTYPE_VIP_IHC_CRD_SRAM},
{*MST_VIP_IHC_SETTING_COM_SC2_Sub, *MST_VIP_IHC_SETTING_SC2_Sub, PQ_IP_VIP_IHC_SETTING_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_ICC_COM_SC2_Sub, *MST_VIP_ICC_SC2_Sub, PQ_IP_VIP_ICC_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_ICC_Ymode_COM_SC2_Sub, *MST_VIP_ICC_Ymode_SC2_Sub, PQ_IP_VIP_ICC_Ymode_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_ICC_dither_COM_SC2_Sub, *MST_VIP_ICC_dither_SC2_Sub, PQ_IP_VIP_ICC_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_ICC_CRD_SRAM_COM_SC2_Sub, *MST_VIP_ICC_CRD_SRAM_SC2_Sub, PQ_IP_VIP_ICC_CRD_SRAM_NUMS_SC2_Sub, PQ_TABTYPE_VIP_ICC_CRD_SRAM},
{*MST_VIP_ICC_SETTING_COM_SC2_Sub, *MST_VIP_ICC_SETTING_SC2_Sub, PQ_IP_VIP_ICC_SETTING_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Ymode_Yvalue_ALL_COM_SC2_Sub, *MST_VIP_Ymode_Yvalue_ALL_SC2_Sub, PQ_IP_VIP_Ymode_Yvalue_ALL_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Ymode_Yvalue_SETTING_COM_SC2_Sub, *MST_VIP_Ymode_Yvalue_SETTING_SC2_Sub, PQ_IP_VIP_Ymode_Yvalue_SETTING_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_IBC_COM_SC2_Sub, *MST_VIP_IBC_SC2_Sub, PQ_IP_VIP_IBC_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_IBC_dither_COM_SC2_Sub, *MST_VIP_IBC_dither_SC2_Sub, PQ_IP_VIP_IBC_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_IBC_SETTING_COM_SC2_Sub, *MST_VIP_IBC_SETTING_SC2_Sub, PQ_IP_VIP_IBC_SETTING_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_DLC_COM_SC2_Sub, *MST_VIP_DLC_SC2_Sub, PQ_IP_VIP_DLC_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_DLC_dither_COM_SC2_Sub, *MST_VIP_DLC_dither_SC2_Sub, PQ_IP_VIP_DLC_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_DLC_His_range_COM_SC2_Sub, *MST_VIP_DLC_His_range_SC2_Sub, PQ_IP_VIP_DLC_His_range_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_DLC_His_rangeH_COM_SC2_Sub, *MST_VIP_DLC_His_rangeH_SC2_Sub, PQ_IP_VIP_DLC_His_rangeH_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_DLC_His_rangeV_COM_SC2_Sub, *MST_VIP_DLC_His_rangeV_SC2_Sub, PQ_IP_VIP_DLC_His_rangeV_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_DLC_PC_COM_SC2_Sub, *MST_VIP_DLC_PC_SC2_Sub, PQ_IP_VIP_DLC_PC_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_BLE_COM_SC2_Sub, *MST_VIP_BLE_SC2_Sub, PQ_IP_VIP_BLE_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_WLE_COM_SC2_Sub, *MST_VIP_WLE_SC2_Sub, PQ_IP_VIP_WLE_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_BWLE_dither_COM_SC2_Sub, *MST_VIP_BWLE_dither_SC2_Sub, PQ_IP_VIP_BWLE_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_UVC_COM_SC2_Sub, *MST_VIP_UVC_SC2_Sub, PQ_IP_VIP_UVC_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Post_Yoffset_COM_SC2_Sub, *MST_VIP_Post_Yoffset_SC2_Sub, PQ_IP_VIP_Post_Yoffset_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Post_Ygain_COM_SC2_Sub, *MST_VIP_Post_Ygain_SC2_Sub, PQ_IP_VIP_Post_Ygain_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Post_Yoffset_2_COM_SC2_Sub, *MST_VIP_Post_Yoffset_2_SC2_Sub, PQ_IP_VIP_Post_Yoffset_2_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Post_Cgain_COM_SC2_Sub, *MST_VIP_Post_Cgain_SC2_Sub, PQ_IP_VIP_Post_Cgain_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Post_Cgain_by_Y_COM_SC2_Sub, *MST_VIP_Post_Cgain_by_Y_SC2_Sub, PQ_IP_VIP_Post_Cgain_by_Y_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Hcoring_Y_COM_SC2_Sub, *MST_VIP_Hcoring_Y_SC2_Sub, PQ_IP_VIP_Hcoring_Y_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Hcoring_C_COM_SC2_Sub, *MST_VIP_Hcoring_C_SC2_Sub, PQ_IP_VIP_Hcoring_C_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_Hcoring_dither_COM_SC2_Sub, *MST_VIP_Hcoring_dither_SC2_Sub, PQ_IP_VIP_Hcoring_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_VIP_YCbCr_Clip_COM_SC2_Sub, *MST_VIP_YCbCr_Clip_SC2_Sub, PQ_IP_VIP_YCbCr_Clip_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SwDriver_COM_SC2_Sub, *MST_SwDriver_SC2_Sub, PQ_IP_SwDriver_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_3x3_COM_SC2_Sub, *MST_3x3_SC2_Sub, PQ_IP_3x3_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_RGB_Offset_COM_SC2_Sub, *MST_RGB_Offset_SC2_Sub, PQ_IP_RGB_Offset_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_RGB_Clip_COM_SC2_Sub, *MST_RGB_Clip_SC2_Sub, PQ_IP_RGB_Clip_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_xvYCC_bypass_COM_SC2_Sub, *MST_xvYCC_bypass_SC2_Sub, PQ_IP_xvYCC_bypass_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_xvYCC_de_gamma_COM_SC2_Sub, *MST_xvYCC_de_gamma_SC2_Sub, PQ_IP_xvYCC_de_gamma_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_xvYCC_de_gamma_dither_COM_SC2_Sub, *MST_xvYCC_de_gamma_dither_SC2_Sub, PQ_IP_xvYCC_de_gamma_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_xvYCC_3x3_COM_SC2_Sub, *MST_xvYCC_3x3_SC2_Sub, PQ_IP_xvYCC_3x3_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_xvYCC_Comp_COM_SC2_Sub, *MST_xvYCC_Comp_SC2_Sub, PQ_IP_xvYCC_Comp_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_xvYCC_Comp_dither_COM_SC2_Sub, *MST_xvYCC_Comp_dither_SC2_Sub, PQ_IP_xvYCC_Comp_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_xvYCC_Clip_COM_SC2_Sub, *MST_xvYCC_Clip_SC2_Sub, PQ_IP_xvYCC_Clip_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_xvYCC_gamma_COM_SC2_Sub, *MST_xvYCC_gamma_SC2_Sub, PQ_IP_xvYCC_gamma_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_xvYCC_gamma_dither_COM_SC2_Sub, *MST_xvYCC_gamma_dither_SC2_Sub, PQ_IP_xvYCC_gamma_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_rgb_3d_COM_SC2_Sub, *MST_rgb_3d_SC2_Sub, PQ_IP_rgb_3d_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_HBC_COM_SC2_Sub, *MST_HBC_SC2_Sub, PQ_IP_HBC_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_Pre_CON_BRI_COM_SC2_Sub, *MST_Pre_CON_BRI_SC2_Sub, PQ_IP_Pre_CON_BRI_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_Blue_Stretch_COM_SC2_Sub, *MST_Blue_Stretch_SC2_Sub, PQ_IP_Blue_Stretch_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_Blue_Stretch_dither_COM_SC2_Sub, *MST_Blue_Stretch_dither_SC2_Sub, PQ_IP_Blue_Stretch_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_Gamma_COM_SC2_Sub, *MST_Gamma_SC2_Sub, PQ_IP_Gamma_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_Gamma_dither_COM_SC2_Sub, *MST_Gamma_dither_SC2_Sub, PQ_IP_Gamma_dither_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_Post_CON_BRI_COM_SC2_Sub, *MST_Post_CON_BRI_SC2_Sub, PQ_IP_Post_CON_BRI_NUMS_SC2_Sub, PQ_TABTYPE_SCALER},
{*MST_SRAM_3x3matrix_PIC2_COM_SC2_Sub, (U8 *)MST_SRAM_3x3matrix_PIC2_SC2_Sub, PQ_IP_SRAM_3x3matrix_PIC2_NUMS_SC2_Sub, PQ_TABTYPE_PICTURE_2},
{*MST_SRAM_DLC_PIC1_COM_SC2_Sub, *MST_SRAM_DLC_PIC1_SC2_Sub, PQ_IP_SRAM_DLC_PIC1_NUMS_SC2_Sub, PQ_TABTYPE_PICTURE_1},
{*MST_SRAM_Bri_Con_Hue_Sat_Sha_PIC1_COM_SC2_Sub, *MST_SRAM_Bri_Con_Hue_Sat_Sha_PIC1_SC2_Sub, PQ_IP_SRAM_Bri_Con_Hue_Sat_Sha_PIC1_NUMS_SC2_Sub, PQ_TABTYPE_PICTURE_1},
{*MST_SRAM_GammaTbl_R_PIC1_COM_SC2_Sub, *MST_SRAM_GammaTbl_R_PIC1_SC2_Sub, PQ_IP_SRAM_GammaTbl_R_PIC1_NUMS_SC2_Sub, PQ_TABTYPE_PICTURE_1},
{*MST_SRAM_GammaTbl_G_PIC1_COM_SC2_Sub, *MST_SRAM_GammaTbl_G_PIC1_SC2_Sub, PQ_IP_SRAM_GammaTbl_G_PIC1_NUMS_SC2_Sub, PQ_TABTYPE_PICTURE_1},
{*MST_SRAM_GammaTbl_B_PIC1_COM_SC2_Sub, *MST_SRAM_GammaTbl_B_PIC1_SC2_Sub, PQ_IP_SRAM_GammaTbl_B_PIC1_NUMS_SC2_Sub, PQ_TABTYPE_PICTURE_1},
{*MST_SRAM_Auto_Color_PIC2_COM_SC2_Sub, (U8 *)MST_SRAM_Auto_Color_PIC2_SC2_Sub, PQ_IP_SRAM_Auto_Color_PIC2_NUMS_SC2_Sub, PQ_TABTYPE_PICTURE_2},
{*MST_SRAM_Color_Temp_PIC1_COM_SC2_Sub, *MST_SRAM_Color_Temp_PIC1_SC2_Sub, PQ_IP_SRAM_Color_Temp_PIC1_NUMS_SC2_Sub, PQ_TABTYPE_PICTURE_1},
};

#endif
