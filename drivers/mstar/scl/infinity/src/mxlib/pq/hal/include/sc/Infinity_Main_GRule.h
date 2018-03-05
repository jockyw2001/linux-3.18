#define PQ_GRULE_UFSC_DYNAMIC_CONTRAST_ENABLE 1
#define PQ_GRULE_DEFINE_AUTO_GEN 1
#if (PQ_GRULE_UFSC_DYNAMIC_CONTRAST_ENABLE)
typedef enum
{
#if PQ_GRULE_UFSC_DYNAMIC_CONTRAST_ENABLE
    PQ_GRule_DYNAMIC_CONTRAST_Main,
#endif

}
MST_GRule_Index_Main;
#endif

#if PQ_GRULE_UFSC_DYNAMIC_CONTRAST_ENABLE
typedef enum
{
    PQ_GRule_DYNAMIC_CONTRAST_Off_Main,
    PQ_GRule_DYNAMIC_CONTRAST_On_Main,
}
MST_GRule_DYNAMIC_CONTRAST_Index_Main;
#endif

#if PQ_GRULE_UFSC_DYNAMIC_CONTRAST_ENABLE
typedef enum
{
    PQ_GRule_Lvl_DYNAMIC_CONTRAST_Off_Main,
    PQ_GRule_Lvl_DYNAMIC_CONTRAST_On_Main,
}
MST_GRule_DYNAMIC_CONTRAST_LvL_Index_Main;
#endif


#define PQ_GRULE_RULE_NUM_Main 1

#if PQ_GRULE_UFSC_DYNAMIC_CONTRAST_ENABLE
#define PQ_GRULE_DYNAMIC_CONTRAST_IP_NUM_Main 1
#define PQ_GRULE_DYNAMIC_CONTRAST_NUM_Main 2
#define PQ_GRULE_DYNAMIC_CONTRAST_LVL_NUM_Main 2
#endif

#if PQ_GRULE_UFSC_DYNAMIC_CONTRAST_ENABLE
extern  unsigned char MST_GRule_DYNAMIC_CONTRAST_IP_Index_Main[PQ_GRULE_DYNAMIC_CONTRAST_IP_NUM_Main];
extern  unsigned char MST_GRule_DYNAMIC_CONTRAST_Main[QM_INPUTTYPE_NUM_Main][PQ_GRULE_DYNAMIC_CONTRAST_NUM_Main][PQ_GRULE_DYNAMIC_CONTRAST_IP_NUM_Main];
#endif

#if PQ_GRULE_UFSC_DYNAMIC_CONTRAST_ENABLE
extern  unsigned char MST_GRule_1920_DYNAMIC_CONTRAST_Main[PQ_GRULE_DYNAMIC_CONTRAST_LVL_NUM_Main];
#endif
