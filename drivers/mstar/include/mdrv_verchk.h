#ifndef _MDRV_VERCHK_H
#define _MDRV_VERCHK_H


//----------------------------------------------------------------------------------
//        define & Macro
//----------------------------------------------------------------------------------
#define VERCHK_HEADER       0x4D530000
#define VERCHK_HADER_MASK   0xFFFF0000
#define VERCHK_VERSION_MASK 0x0000FFFF
#define VERCHK_MAJORVERSION_MASK 0x0000FF00

#define FILL_VERCHK_TYPE(var, var_ver, var_size, version)        \
({                                                               \
    var_ver = (VERCHK_HEADER | (version & VERCHK_VERSION_MASK)); \
    var_size = sizeof(var);                                      \
    var;                                                         \
})


#define CHK_VERCHK_HEADER(pvar)                                \
({															   \
    unsigned int *p = (unsigned int *)pvar;                    \
    unsigned char  bH;                                         \
    bH = ((*p & VERCHK_HADER_MASK) == VERCHK_HEADER) ? 1 : 0;  \
})


#define CHK_VERCHK_VERSION_EQU(pvar, v)                        \
({                                                             \
    unsigned int *p = (unsigned int *)pvar;                    \
    unsigned char bV;                                          \
    bV = ((*p & VERCHK_VERSION_MASK) == v) ? 1 : 0;            \
})

#define CHK_VERCHK_VERSION_LESS(pvar, v)                       \
({                                                             \
    unsigned int *p = (unsigned int *)pvar;                    \
    unsigned char bV;                                          \
    bV = ((*p & VERCHK_VERSION_MASK) < v) ? 1 : 0;             \
})

#define CHK_VERCHK_MAJORVERSION_LESS(pvar, v)                       \
    ({                                                             \
        unsigned int *p = (unsigned int *)pvar;                    \
        unsigned char bV;                                          \
        bV = ((*p & VERCHK_MAJORVERSION_MASK) < (v& VERCHK_MAJORVERSION_MASK)) ? 1 : 0;             \
    })

#define CHK_VERCHK_VERSION_GREATER(pvar, v)                    \
({                                                             \
    unsigned int *p = (unsigned int *)pvar;                    \
    unsigned char bV;                                          \
    bV = ((*p & VERCHK_VERSION_MASK) > v) ? 1 : 0;             \
})


#define CHK_VERCHK_VERSION_LESS_EQU(pvar, v)                   \
({                                                             \
    unsigned int *p = (unsigned int *)pvar;                    \
    unsigned char bV;                                          \
    bV = ((*p & VERCHK_VERSION_MASK) <= v) ? 1 : 0;            \
})

#define CHK_VERCHK_VERSION_GREATER_EQU(pvar, v)                \
({                                                             \
    unsigned int *p = (unsigned int *)pvar;                    \
    unsigned char bV;                                          \
    bV = ((*p & VERCHK_VERSION_MASK) >= v) ? 1 : 0;            \
})


#define CHK_VERCHK_SIZE(pvar,s)                                \
({                                                             \
    unsigned int *p = (unsigned int *)pvar;                    \
    unsigned char bS;                                          \
    bS = (*p == s ) ? 1 : 0;                                   \
})


#define VERCHK_ERR(_fmt, _args...)                 \
    do                                             \
    {                                              \
        printk(KERN_WARNING _fmt, ## _args);       \
    }while(0);

#endif
