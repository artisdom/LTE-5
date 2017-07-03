#ifndef _CSLR_TPCC_H_
#define _CSLR_TPCC_H_



#include "cslr.h"


/* Minimum unit = 1 byte */

typedef struct CSL_EDMA3_TPCC_DRA
{
    volatile unsigned int DRAE;
    volatile unsigned int DRAEH;
}CSL_EDMA3_TPCC_DRA;

/**************************************************************************\
* Register Overlay Structure for SHADOW 
\**************************************************************************/
typedef struct  {
    volatile unsigned int TPCC_ER;
    volatile unsigned int TPCC_ERH;
    volatile unsigned int TPCC_ECR;
    volatile unsigned int TPCC_ECRH;
    volatile unsigned int TPCC_ESR;
    volatile unsigned int TPCC_ESRH;
    volatile unsigned int TPCC_CER;
    volatile unsigned int TPCC_CERH;
    volatile unsigned int TPCC_EER;
    volatile unsigned int TPCC_EERH;
    volatile unsigned int TPCC_EECR;
    volatile unsigned int TPCC_EECRH;
    volatile unsigned int TPCC_EESR;
    volatile unsigned int TPCC_EESRH;
    volatile unsigned int TPCC_SER;
    volatile unsigned int TPCC_SERH;
    volatile unsigned int TPCC_SECR;
    volatile unsigned int TPCC_SECRH;
    volatile unsigned char RSVD0[8];
    volatile unsigned int TPCC_IER;
    volatile unsigned int TPCC_IERH;
    volatile unsigned int TPCC_IECR;
    volatile unsigned int TPCC_IECRH;
    volatile unsigned int TPCC_IESR;
    volatile unsigned int TPCC_IESRH;
    volatile unsigned int TPCC_IPR;
    volatile unsigned int TPCC_IPRH;
    volatile unsigned int TPCC_ICR;
    volatile unsigned int TPCC_ICRH;
    volatile unsigned int TPCC_IEVAL;
    volatile unsigned char RSVD1[4];
    volatile unsigned int TPCC_QER;
    volatile unsigned int TPCC_QEER;
    volatile unsigned int TPCC_QEECR;
    volatile unsigned int TPCC_QEESR;
    volatile unsigned int TPCC_QSER;
    volatile unsigned int TPCC_QSECR;
    volatile unsigned char RSVD2[360];
} CSL_TPCC_ShadowRegs;

/**************************************************************************\
* Register Overlay Structure for PARAMSET 
\**************************************************************************/
typedef struct  {
    volatile unsigned int OPT;
    volatile unsigned int SRC;
    volatile unsigned int A_B_CNT;
    volatile unsigned int DST;
    volatile unsigned int SRC_DST_BIDX;
    volatile unsigned int LINK_BCNTRLD;
    volatile unsigned int SRC_DST_CIDX;
    volatile unsigned int CCNT;
} CSL_TPCC_ParamsetRegs;

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile unsigned int TPCC_PID;
    volatile unsigned int TPCC_CFG;
    volatile unsigned char RSVD0[244];
    volatile unsigned int TPCC_CLKGDIS;
#ifdef CSL_MODIFICATION
    volatile unsigned int TPCC_DCHMAP0;
    volatile unsigned int TPCC_DCHMAP1;
    volatile unsigned int TPCC_DCHMAP2;
    volatile unsigned int TPCC_DCHMAP3;
    volatile unsigned int TPCC_DCHMAP4;
    volatile unsigned int TPCC_DCHMAP5;
    volatile unsigned int TPCC_DCHMAP6;
    volatile unsigned int TPCC_DCHMAP7;
    volatile unsigned int TPCC_DCHMAP8;
    volatile unsigned int TPCC_DCHMAP9;
    volatile unsigned int TPCC_DCHMAP10;
    volatile unsigned int TPCC_DCHMAP11;
    volatile unsigned int TPCC_DCHMAP12;
    volatile unsigned int TPCC_DCHMAP13;
    volatile unsigned int TPCC_DCHMAP14;
    volatile unsigned int TPCC_DCHMAP15;
    volatile unsigned int TPCC_DCHMAP16;
    volatile unsigned int TPCC_DCHMAP17;
    volatile unsigned int TPCC_DCHMAP18;
    volatile unsigned int TPCC_DCHMAP19;
    volatile unsigned int TPCC_DCHMAP20;
    volatile unsigned int TPCC_DCHMAP21;
    volatile unsigned int TPCC_DCHMAP22;
    volatile unsigned int TPCC_DCHMAP23;
    volatile unsigned int TPCC_DCHMAP24;
    volatile unsigned int TPCC_DCHMAP25;
    volatile unsigned int TPCC_DCHMAP26;
    volatile unsigned int TPCC_DCHMAP27;
    volatile unsigned int TPCC_DCHMAP28;
    volatile unsigned int TPCC_DCHMAP29;
    volatile unsigned int TPCC_DCHMAP30;
    volatile unsigned int TPCC_DCHMAP31;
    volatile unsigned int TPCC_DCHMAP32;
    volatile unsigned int TPCC_DCHMAP33;
    volatile unsigned int TPCC_DCHMAP34;
    volatile unsigned int TPCC_DCHMAP35;
    volatile unsigned int TPCC_DCHMAP36;
    volatile unsigned int TPCC_DCHMAP37;
    volatile unsigned int TPCC_DCHMAP38;
    volatile unsigned int TPCC_DCHMAP39;
    volatile unsigned int TPCC_DCHMAP40;
    volatile unsigned int TPCC_DCHMAP41;
    volatile unsigned int TPCC_DCHMAP42;
    volatile unsigned int TPCC_DCHMAP43;
    volatile unsigned int TPCC_DCHMAP44;
    volatile unsigned int TPCC_DCHMAP45;
    volatile unsigned int TPCC_DCHMAP46;
    volatile unsigned int TPCC_DCHMAP47;
    volatile unsigned int TPCC_DCHMAP48;
    volatile unsigned int TPCC_DCHMAP49;
    volatile unsigned int TPCC_DCHMAP50;
    volatile unsigned int TPCC_DCHMAP51;
    volatile unsigned int TPCC_DCHMAP52;
    volatile unsigned int TPCC_DCHMAP53;
    volatile unsigned int TPCC_DCHMAP54;
    volatile unsigned int TPCC_DCHMAP55;
    volatile unsigned int TPCC_DCHMAP56;
    volatile unsigned int TPCC_DCHMAP57;
    volatile unsigned int TPCC_DCHMAP58;
    volatile unsigned int TPCC_DCHMAP59;
    volatile unsigned int TPCC_DCHMAP60;
    volatile unsigned int TPCC_DCHMAP61;
    volatile unsigned int TPCC_DCHMAP62;
    volatile unsigned int TPCC_DCHMAP63;
#else
    volatile unsigned int TPCC_DCHMAP[64];
#endif
#ifdef CSL_MODIFICATION
    volatile unsigned int TPCC_QCHMAP0;
    volatile unsigned int TPCC_QCHMAP1;
    volatile unsigned int TPCC_QCHMAP2;
    volatile unsigned int TPCC_QCHMAP3;
    volatile unsigned int TPCC_QCHMAP4;
    volatile unsigned int TPCC_QCHMAP5;
    volatile unsigned int TPCC_QCHMAP6;
    volatile unsigned int TPCC_QCHMAP7;
#else
    volatile unsigned int TPCC_QCHMAP[8];
#endif
    volatile unsigned char RSVD1[32];
#ifdef CSL_MODIFICATION
    volatile unsigned int TPCC_DMAQNUM0;
    volatile unsigned int TPCC_DMAQNUM1;
    volatile unsigned int TPCC_DMAQNUM2;
    volatile unsigned int TPCC_DMAQNUM3;
    volatile unsigned int TPCC_DMAQNUM4;
    volatile unsigned int TPCC_DMAQNUM5;
    volatile unsigned int TPCC_DMAQNUM6;
    volatile unsigned int TPCC_DMAQNUM7;
#else
    volatile unsigned int TPCC_DMAQNUM[8];
#endif    
    volatile unsigned int TPCC_QDMAQNUM;
    volatile unsigned char RSVD2[28];
    volatile unsigned int TPCC_QUETCMAP;
    volatile unsigned int TPCC_QUEPRI;
    volatile unsigned char RSVD3[120];
    volatile unsigned int TPCC_EMR;
    volatile unsigned int TPCC_EMRH;
    volatile unsigned int TPCC_EMCR;
    volatile unsigned int TPCC_EMCRH;
    volatile unsigned int TPCC_QEMR;
    volatile unsigned int TPCC_QEMCR;
    volatile unsigned int TPCC_CCERR;
    volatile unsigned int TPCC_CCERRCLR;
    volatile unsigned int TPCC_EEVAL;
    volatile unsigned char RSVD4[28];
#ifdef CSL_MODIFICATION
    volatile unsigned int TPCC_DRAE0;
    volatile unsigned int TPCC_DRAEH0;
    volatile unsigned int TPCC_DRAE1;
    volatile unsigned int TPCC_DRAEH1;
    volatile unsigned int TPCC_DRAE2;
    volatile unsigned int TPCC_DRAEH2;
    volatile unsigned int TPCC_DRAE3;
    volatile unsigned int TPCC_DRAEH3;
    volatile unsigned int TPCC_DRAE4;
    volatile unsigned int TPCC_DRAEH4;
    volatile unsigned int TPCC_DRAE5;
    volatile unsigned int TPCC_DRAEH5;
    volatile unsigned int TPCC_DRAE6;
    volatile unsigned int TPCC_DRAEH6;
    volatile unsigned int TPCC_DRAE7;
    volatile unsigned int TPCC_DRAEH7;
#else
    CSL_EDMA3_TPCC_DRA  TPCC_DRA[8];
#endif
#ifdef CSL_MODIFICATION
    volatile unsigned int TPCC_QRAE0;
    volatile unsigned int TPCC_QRAE1;
    volatile unsigned int TPCC_QRAE2;
    volatile unsigned int TPCC_QRAE3;
    volatile unsigned int TPCC_QRAE4;
    volatile unsigned int TPCC_QRAE5;
    volatile unsigned int TPCC_QRAE6;
    volatile unsigned int TPCC_QRAE7;
#else
    volatile unsigned int TPCC_QRAE[8];
#endif    
    volatile unsigned char RSVD5[96];
#ifdef CSL_MODIFICATION    
    volatile unsigned int TPCC_Q0E0;
    volatile unsigned int TPCC_Q0E1;
    volatile unsigned int TPCC_Q0E2;
    volatile unsigned int TPCC_Q0E3;
    volatile unsigned int TPCC_Q0E4;
    volatile unsigned int TPCC_Q0E5;
    volatile unsigned int TPCC_Q0E6;
    volatile unsigned int TPCC_Q0E7;
    volatile unsigned int TPCC_Q0E8;
    volatile unsigned int TPCC_Q0E9;
    volatile unsigned int TPCC_Q0E10;
    volatile unsigned int TPCC_Q0E11;
    volatile unsigned int TPCC_Q0E12;
    volatile unsigned int TPCC_Q0E13;
    volatile unsigned int TPCC_Q0E14;
    volatile unsigned int TPCC_Q0E15;
    volatile unsigned int TPCC_Q1E0;
    volatile unsigned int TPCC_Q1E1;
    volatile unsigned int TPCC_Q1E2;
    volatile unsigned int TPCC_Q1E3;
    volatile unsigned int TPCC_Q1E4;
    volatile unsigned int TPCC_Q1E5;
    volatile unsigned int TPCC_Q1E6;
    volatile unsigned int TPCC_Q1E7;
    volatile unsigned int TPCC_Q1E8;
    volatile unsigned int TPCC_Q1E9;
    volatile unsigned int TPCC_Q1E10;
    volatile unsigned int TPCC_Q1E11;
    volatile unsigned int TPCC_Q1E12;
    volatile unsigned int TPCC_Q1E13;
    volatile unsigned int TPCC_Q1E14;
    volatile unsigned int TPCC_Q1E15;
    volatile unsigned int TPCC_Q2E0;
    volatile unsigned int TPCC_Q2E1;
    volatile unsigned int TPCC_Q2E2;
    volatile unsigned int TPCC_Q2E3;
    volatile unsigned int TPCC_Q2E4;
    volatile unsigned int TPCC_Q2E5;
    volatile unsigned int TPCC_Q2E6;
    volatile unsigned int TPCC_Q2E7;
    volatile unsigned int TPCC_Q2E8;
    volatile unsigned int TPCC_Q2E9;
    volatile unsigned int TPCC_Q2E10;
    volatile unsigned int TPCC_Q2E11;
    volatile unsigned int TPCC_Q2E12;
    volatile unsigned int TPCC_Q2E13;
    volatile unsigned int TPCC_Q2E14;
    volatile unsigned int TPCC_Q2E15;
    volatile unsigned int TPCC_Q3E0;
    volatile unsigned int TPCC_Q3E1;
    volatile unsigned int TPCC_Q3E2;
    volatile unsigned int TPCC_Q3E3;
    volatile unsigned int TPCC_Q3E4;
    volatile unsigned int TPCC_Q3E5;
    volatile unsigned int TPCC_Q3E6;
    volatile unsigned int TPCC_Q3E7;
    volatile unsigned int TPCC_Q3E8;
    volatile unsigned int TPCC_Q3E9;
    volatile unsigned int TPCC_Q3E10;
    volatile unsigned int TPCC_Q3E11;
    volatile unsigned int TPCC_Q3E12;
    volatile unsigned int TPCC_Q3E13;
    volatile unsigned int TPCC_Q3E14;
    volatile unsigned int TPCC_Q3E15;
    volatile unsigned int TPCC_Q4E0;
    volatile unsigned int TPCC_Q4E1;
    volatile unsigned int TPCC_Q4E2;
    volatile unsigned int TPCC_Q4E3;
    volatile unsigned int TPCC_Q4E4;
    volatile unsigned int TPCC_Q4E5;
    volatile unsigned int TPCC_Q4E6;
    volatile unsigned int TPCC_Q4E7;
    volatile unsigned int TPCC_Q4E8;
    volatile unsigned int TPCC_Q4E9;
    volatile unsigned int TPCC_Q4E10;
    volatile unsigned int TPCC_Q4E11;
    volatile unsigned int TPCC_Q4E12;
    volatile unsigned int TPCC_Q4E13;
    volatile unsigned int TPCC_Q4E14;
    volatile unsigned int TPCC_Q4E15;
    volatile unsigned int TPCC_Q5E0;
    volatile unsigned int TPCC_Q5E1;
    volatile unsigned int TPCC_Q5E2;
    volatile unsigned int TPCC_Q5E3;
    volatile unsigned int TPCC_Q5E4;
    volatile unsigned int TPCC_Q5E5;
    volatile unsigned int TPCC_Q5E6;
    volatile unsigned int TPCC_Q5E7;
    volatile unsigned int TPCC_Q5E8;
    volatile unsigned int TPCC_Q5E9;
    volatile unsigned int TPCC_Q5E10;
    volatile unsigned int TPCC_Q5E11;
    volatile unsigned int TPCC_Q5E12;
    volatile unsigned int TPCC_Q5E13;
    volatile unsigned int TPCC_Q5E14;
    volatile unsigned int TPCC_Q5E15;
    volatile unsigned int TPCC_Q6E0;
    volatile unsigned int TPCC_Q6E1;
    volatile unsigned int TPCC_Q6E2;
    volatile unsigned int TPCC_Q6E3;
    volatile unsigned int TPCC_Q6E4;
    volatile unsigned int TPCC_Q6E5;
    volatile unsigned int TPCC_Q6E6;
    volatile unsigned int TPCC_Q6E7;
    volatile unsigned int TPCC_Q6E8;
    volatile unsigned int TPCC_Q6E9;
    volatile unsigned int TPCC_Q6E10;
    volatile unsigned int TPCC_Q6E11;
    volatile unsigned int TPCC_Q6E12;
    volatile unsigned int TPCC_Q6E13;
    volatile unsigned int TPCC_Q6E14;
    volatile unsigned int TPCC_Q6E15;
    volatile unsigned int TPCC_Q7E0;
    volatile unsigned int TPCC_Q7E1;
    volatile unsigned int TPCC_Q7E2;
    volatile unsigned int TPCC_Q7E3;
    volatile unsigned int TPCC_Q7E4;
    volatile unsigned int TPCC_Q7E5;
    volatile unsigned int TPCC_Q7E6;
    volatile unsigned int TPCC_Q7E7;
    volatile unsigned int TPCC_Q7E8;
    volatile unsigned int TPCC_Q7E9;
    volatile unsigned int TPCC_Q7E10;
    volatile unsigned int TPCC_Q7E11;
    volatile unsigned int TPCC_Q7E12;
    volatile unsigned int TPCC_Q7E13;
    volatile unsigned int TPCC_Q7E14;
    volatile unsigned int TPCC_Q7E15;
#else
    volatile unsigned int TPCC_QE[128];
#endif
#ifdef CSL_MODIFICATION
    volatile unsigned int TPCC_QSTAT0;
    volatile unsigned int TPCC_QSTAT1;
    volatile unsigned int TPCC_QSTAT2;
    volatile unsigned int TPCC_QSTAT3;
    volatile unsigned int TPCC_QSTAT4;
    volatile unsigned int TPCC_QSTAT5;
    volatile unsigned int TPCC_QSTAT6;
    volatile unsigned int TPCC_QSTAT7;
#else
    volatile unsigned int TPCC_QSTAT[8];
#endif
    volatile unsigned int TPCC_QWMTHRA;
    volatile unsigned int TPCC_QWMTHRB;
    volatile unsigned char RSVD6[24];
    volatile unsigned int TPCC_CCSTAT;
    volatile unsigned char RSVD7[188];
    volatile unsigned int TPCC_AETCTL;
    volatile unsigned int TPCC_AETSTAT;
    volatile unsigned int TPCC_AETCMD;
    volatile unsigned char RSVD8[244];
    volatile unsigned int TPCC_MPFAR;
    volatile unsigned int TPCC_MPFSR;
    volatile unsigned int TPCC_MPFCR;
    volatile unsigned int TPCC_MPPAG;
#ifdef CSL_MODIFICATION
    volatile unsigned int TPCC_MPPA0;
    volatile unsigned int TPCC_MPPA1;
    volatile unsigned int TPCC_MPPA2;
    volatile unsigned int TPCC_MPPA3;
    volatile unsigned int TPCC_MPPA4;
    volatile unsigned int TPCC_MPPA5;
    volatile unsigned int TPCC_MPPA6;
    volatile unsigned int TPCC_MPPA7;
#else
    volatile unsigned int TPCC_MPPA[8];
#endif
    volatile unsigned char RSVD9[2000];
    volatile unsigned int TPCC_ER;
    volatile unsigned int TPCC_ERH;
    volatile unsigned int TPCC_ECR;
    volatile unsigned int TPCC_ECRH;
    volatile unsigned int TPCC_ESR;
    volatile unsigned int TPCC_ESRH;
    volatile unsigned int TPCC_CER;
    volatile unsigned int TPCC_CERH;
    volatile unsigned int TPCC_EER;
    volatile unsigned int TPCC_EERH;
    volatile unsigned int TPCC_EECR;
    volatile unsigned int TPCC_EECRH;
    volatile unsigned int TPCC_EESR;
    volatile unsigned int TPCC_EESRH;
    volatile unsigned int TPCC_SER;
    volatile unsigned int TPCC_SERH;
    volatile unsigned int TPCC_SECR;
    volatile unsigned int TPCC_SECRH;
    volatile unsigned char RSVD10[8];
    volatile unsigned int TPCC_IER;
    volatile unsigned int TPCC_IERH;
    volatile unsigned int TPCC_IECR;
    volatile unsigned int TPCC_IECRH;
    volatile unsigned int TPCC_IESR;
    volatile unsigned int TPCC_IESRH;
    volatile unsigned int TPCC_IPR;
    volatile unsigned int TPCC_IPRH;
    volatile unsigned int TPCC_ICR;
    volatile unsigned int TPCC_ICRH;
    volatile unsigned int TPCC_IEVAL;
    volatile unsigned char RSVD11[4];
    volatile unsigned int TPCC_QER;
    volatile unsigned int TPCC_QEER;
    volatile unsigned int TPCC_QEECR;
    volatile unsigned int TPCC_QEESR;
    volatile unsigned int TPCC_QSER;
    volatile unsigned int TPCC_QSECR;
#ifndef CSL_MODIFICATION
    volatile unsigned char RSVD14[3944];
    CSL_TPCC_ShadowRegs SHADOW[8];
    volatile unsigned char RSVD15[4096];
    CSL_TPCC_ParamsetRegs PARAMSET[512];    
#endif
} CSL_TpccRegs;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* TPCC_PID */

#define CSL_TPCC_TPCC_PID_SCHEME_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_PID_SCHEME_SHIFT   (0x0000001Fu)
#define CSL_TPCC_TPCC_PID_SCHEME_RESETVAL (0x00000001u)


#define CSL_TPCC_TPCC_PID_FUNC_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_PID_FUNC_SHIFT     (0x0000001Bu)
#define CSL_TPCC_TPCC_PID_FUNC_RESETVAL  (0x00000001u)

#define CSL_TPCC_TPCC_PID_RTL_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_PID_RTL_SHIFT      (0x0000000Fu)
#define CSL_TPCC_TPCC_PID_RTL_RESETVAL   (0x00000011u)

#define CSL_TPCC_TPCC_PID_MAJOR_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_PID_MAJOR_SHIFT    (0x0000000Au)
#define CSL_TPCC_TPCC_PID_MAJOR_RESETVAL (0x00000003u)


#define CSL_TPCC_TPCC_PID_MINOR_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_PID_MINOR_SHIFT    (0x00000005u)
#define CSL_TPCC_TPCC_PID_MINOR_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_PID_RESETVAL       (0x00000000u)

/* TPCC_CFG */

#define CSL_TPCC_TPCC_CFG_MP_EXIST_MASK  (0x02000000u)
#define CSL_TPCC_TPCC_CFG_MP_EXIST_SHIFT (0x00000019u)

#define CSL_TPCC_TPCC_CFG_CHMAP_EXIST_MASK (0x01000000u)
#define CSL_TPCC_TPCC_CFG_CHMAP_EXIST_SHIFT (0x00000018u)

#define CSL_TPCC_TPCC_CFG_NUM_REGN_MASK  (0x00300000u)
#define CSL_TPCC_TPCC_CFG_NUM_REGN_SHIFT (0x00000014u)

#define CSL_TPCC_TPCC_CFG_RESETVAL       (0x00000000u)

/* TPCC_CLKGDIS */

#define CSL_TPCC_TPCC_CLKGDIS_CLKGDIS_MASK (0x00000001u)
#define CSL_TPCC_TPCC_CLKGDIS_CLKGDIS_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_CLKGDIS_CLKGDIS_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CLKGDIS_RESETVAL   (0x00000000u)

/* TPCC_DCHMAP0 */

#define CSL_TPCC_TPCC_DCHMAP0_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP0_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP0_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP0_RESETVAL   (0x00000000u)

/* TPCC_DCHMAP1 */

#define CSL_TPCC_TPCC_DCHMAP1_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP1_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP1_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP1_RESETVAL   (0x00000000u)

/* TPCC_DCHMAP2 */

#define CSL_TPCC_TPCC_DCHMAP2_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP2_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP2_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP2_RESETVAL   (0x00000000u)

/* TPCC_DCHMAP3 */

#define CSL_TPCC_TPCC_DCHMAP3_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP3_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP3_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP3_RESETVAL   (0x00000000u)

/* TPCC_DCHMAP4 */

#define CSL_TPCC_TPCC_DCHMAP4_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP4_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP4_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP4_RESETVAL   (0x00000000u)

/* TPCC_DCHMAP5 */

#define CSL_TPCC_TPCC_DCHMAP5_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP5_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP5_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP5_RESETVAL   (0x00000000u)

/* TPCC_DCHMAP6 */

#define CSL_TPCC_TPCC_DCHMAP6_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP6_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP6_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP6_RESETVAL   (0x00000000u)

/* TPCC_DCHMAP7 */

#define CSL_TPCC_TPCC_DCHMAP7_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP7_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP7_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP7_RESETVAL   (0x00000000u)

/* TPCC_DCHMAP8 */

#define CSL_TPCC_TPCC_DCHMAP8_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP8_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP8_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP8_RESETVAL   (0x00000000u)

/* TPCC_DCHMAP9 */

#define CSL_TPCC_TPCC_DCHMAP9_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP9_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP9_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP9_RESETVAL   (0x00000000u)

/* TPCC_DCHMAP10 */

#define CSL_TPCC_TPCC_DCHMAP10_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP10_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP10_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP10_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP11 */

#define CSL_TPCC_TPCC_DCHMAP11_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP11_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP11_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP11_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP12 */

#define CSL_TPCC_TPCC_DCHMAP12_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP12_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP12_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP12_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP13 */

#define CSL_TPCC_TPCC_DCHMAP13_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP13_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP13_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP13_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP14 */

#define CSL_TPCC_TPCC_DCHMAP14_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP14_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP14_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP14_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP15 */

#define CSL_TPCC_TPCC_DCHMAP15_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP15_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP15_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP15_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP16 */

#define CSL_TPCC_TPCC_DCHMAP16_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP16_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP16_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP16_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP17 */

#define CSL_TPCC_TPCC_DCHMAP17_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP17_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP17_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP17_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP18 */

#define CSL_TPCC_TPCC_DCHMAP18_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP18_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP18_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP18_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP19 */

#define CSL_TPCC_TPCC_DCHMAP19_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP19_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP19_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP19_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP20 */

#define CSL_TPCC_TPCC_DCHMAP20_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP20_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP20_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP20_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP21 */

#define CSL_TPCC_TPCC_DCHMAP21_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP21_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP21_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP21_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP22 */

#define CSL_TPCC_TPCC_DCHMAP22_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP22_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP22_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP22_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP23 */

#define CSL_TPCC_TPCC_DCHMAP23_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP23_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP23_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP23_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP24 */

#define CSL_TPCC_TPCC_DCHMAP24_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP24_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP24_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP24_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP25 */

#define CSL_TPCC_TPCC_DCHMAP25_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP25_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP25_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP25_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP26 */

#define CSL_TPCC_TPCC_DCHMAP26_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP26_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP26_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP26_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP27 */

#define CSL_TPCC_TPCC_DCHMAP27_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP27_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP27_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP27_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP28 */

#define CSL_TPCC_TPCC_DCHMAP28_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP28_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP28_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP28_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP29 */

#define CSL_TPCC_TPCC_DCHMAP29_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP29_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP29_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP29_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP30 */

#define CSL_TPCC_TPCC_DCHMAP30_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP30_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP30_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP30_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP31 */

#define CSL_TPCC_TPCC_DCHMAP31_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP31_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP31_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP31_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP32 */

#define CSL_TPCC_TPCC_DCHMAP32_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP32_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP32_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP32_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP33 */

#define CSL_TPCC_TPCC_DCHMAP33_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP33_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP33_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP33_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP34 */

#define CSL_TPCC_TPCC_DCHMAP34_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP34_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP34_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP34_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP35 */

#define CSL_TPCC_TPCC_DCHMAP35_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP35_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP35_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP35_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP36 */

#define CSL_TPCC_TPCC_DCHMAP36_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP36_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP36_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP36_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP37 */

#define CSL_TPCC_TPCC_DCHMAP37_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP37_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP37_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP37_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP38 */

#define CSL_TPCC_TPCC_DCHMAP38_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP38_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP38_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP38_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP39 */

#define CSL_TPCC_TPCC_DCHMAP39_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP39_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP39_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP39_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP40 */

#define CSL_TPCC_TPCC_DCHMAP40_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP40_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP40_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP40_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP41 */

#define CSL_TPCC_TPCC_DCHMAP41_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP41_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP41_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP41_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP42 */

#define CSL_TPCC_TPCC_DCHMAP42_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP42_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP42_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP42_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP43 */

#define CSL_TPCC_TPCC_DCHMAP43_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP43_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP43_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP43_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP44 */

#define CSL_TPCC_TPCC_DCHMAP44_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP44_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP44_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP44_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP45 */

#define CSL_TPCC_TPCC_DCHMAP45_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP45_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP45_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP45_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP46 */

#define CSL_TPCC_TPCC_DCHMAP46_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP46_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP46_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP46_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP47 */

#define CSL_TPCC_TPCC_DCHMAP47_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP47_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP47_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP47_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP48 */

#define CSL_TPCC_TPCC_DCHMAP48_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP48_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP48_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP48_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP49 */

#define CSL_TPCC_TPCC_DCHMAP49_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP49_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP49_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP49_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP50 */

#define CSL_TPCC_TPCC_DCHMAP50_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP50_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP50_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP50_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP51 */

#define CSL_TPCC_TPCC_DCHMAP51_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP51_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP51_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP51_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP52 */

#define CSL_TPCC_TPCC_DCHMAP52_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP52_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP52_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP52_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP53 */

#define CSL_TPCC_TPCC_DCHMAP53_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP53_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP53_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP53_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP54 */

#define CSL_TPCC_TPCC_DCHMAP54_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP54_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP54_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP54_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP55 */

#define CSL_TPCC_TPCC_DCHMAP55_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP55_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP55_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP55_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP56 */

#define CSL_TPCC_TPCC_DCHMAP56_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP56_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP56_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP56_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP57 */

#define CSL_TPCC_TPCC_DCHMAP57_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP57_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP57_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP57_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP58 */

#define CSL_TPCC_TPCC_DCHMAP58_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP58_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP58_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP58_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP59 */

#define CSL_TPCC_TPCC_DCHMAP59_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP59_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP59_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP59_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP60 */

#define CSL_TPCC_TPCC_DCHMAP60_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP60_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP60_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP60_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP61 */

#define CSL_TPCC_TPCC_DCHMAP61_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP61_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP61_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP61_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP62 */

#define CSL_TPCC_TPCC_DCHMAP62_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP62_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP62_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP62_RESETVAL  (0x00000000u)

/* TPCC_DCHMAP63 */

#define CSL_TPCC_TPCC_DCHMAP63_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_DCHMAP63_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DCHMAP63_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DCHMAP63_RESETVAL  (0x00000000u)

/* TPCC_QCHMAP0 */

#define CSL_TPCC_TPCC_QCHMAP0_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_QCHMAP0_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QCHMAP0_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP0_TRWORD_MASK (0x0000001Cu)
#define CSL_TPCC_TPCC_QCHMAP0_TRWORD_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QCHMAP0_TRWORD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP0_RESETVAL   (0x00000000u)

/* TPCC_QCHMAP1 */

#define CSL_TPCC_TPCC_QCHMAP1_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_QCHMAP1_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QCHMAP1_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP1_TRWORD_MASK (0x0000001Cu)
#define CSL_TPCC_TPCC_QCHMAP1_TRWORD_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QCHMAP1_TRWORD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP1_RESETVAL   (0x00000000u)

/* TPCC_QCHMAP2 */

#define CSL_TPCC_TPCC_QCHMAP2_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_QCHMAP2_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QCHMAP2_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP2_TRWORD_MASK (0x0000001Cu)
#define CSL_TPCC_TPCC_QCHMAP2_TRWORD_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QCHMAP2_TRWORD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP2_RESETVAL   (0x00000000u)

/* TPCC_QCHMAP3 */

#define CSL_TPCC_TPCC_QCHMAP3_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_QCHMAP3_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QCHMAP3_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP3_TRWORD_MASK (0x0000001Cu)
#define CSL_TPCC_TPCC_QCHMAP3_TRWORD_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QCHMAP3_TRWORD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP3_RESETVAL   (0x00000000u)

/* TPCC_QCHMAP4 */

#define CSL_TPCC_TPCC_QCHMAP4_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_QCHMAP4_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QCHMAP4_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP4_TRWORD_MASK (0x0000001Cu)
#define CSL_TPCC_TPCC_QCHMAP4_TRWORD_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QCHMAP4_TRWORD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP4_RESETVAL   (0x00000000u)

/* TPCC_QCHMAP5 */

#define CSL_TPCC_TPCC_QCHMAP5_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_QCHMAP5_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QCHMAP5_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP5_TRWORD_MASK (0x0000001Cu)
#define CSL_TPCC_TPCC_QCHMAP5_TRWORD_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QCHMAP5_TRWORD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP5_RESETVAL   (0x00000000u)

/* TPCC_QCHMAP6 */

#define CSL_TPCC_TPCC_QCHMAP6_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_QCHMAP6_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QCHMAP6_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP6_TRWORD_MASK (0x0000001Cu)
#define CSL_TPCC_TPCC_QCHMAP6_TRWORD_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QCHMAP6_TRWORD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP6_RESETVAL   (0x00000000u)

/* TPCC_QCHMAP7 */

#define CSL_TPCC_TPCC_QCHMAP7_PAENTRY_MASK (0x00003FE0u)
#define CSL_TPCC_TPCC_QCHMAP7_PAENTRY_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QCHMAP7_PAENTRY_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP7_TRWORD_MASK (0x0000001Cu)
#define CSL_TPCC_TPCC_QCHMAP7_TRWORD_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QCHMAP7_TRWORD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QCHMAP7_RESETVAL   (0x00000000u)

/* TPCC_DMAQNUM0 */

#define CSL_TPCC_TPCC_DMAQNUM0_E0_MASK   (0x00000007u)
#define CSL_TPCC_TPCC_DMAQNUM0_E0_SHIFT  (0x00000000u)
#define CSL_TPCC_TPCC_DMAQNUM0_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM0_E1_MASK   (0x00000070u)
#define CSL_TPCC_TPCC_DMAQNUM0_E1_SHIFT  (0x00000004u)
#define CSL_TPCC_TPCC_DMAQNUM0_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM0_E2_MASK   (0x00000700u)
#define CSL_TPCC_TPCC_DMAQNUM0_E2_SHIFT  (0x00000008u)
#define CSL_TPCC_TPCC_DMAQNUM0_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM0_E3_MASK   (0x00007000u)
#define CSL_TPCC_TPCC_DMAQNUM0_E3_SHIFT  (0x0000000Cu)
#define CSL_TPCC_TPCC_DMAQNUM0_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM0_E4_MASK   (0x00070000u)
#define CSL_TPCC_TPCC_DMAQNUM0_E4_SHIFT  (0x00000010u)
#define CSL_TPCC_TPCC_DMAQNUM0_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM0_E5_MASK   (0x00700000u)
#define CSL_TPCC_TPCC_DMAQNUM0_E5_SHIFT  (0x00000014u)
#define CSL_TPCC_TPCC_DMAQNUM0_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM0_E6_MASK   (0x07000000u)
#define CSL_TPCC_TPCC_DMAQNUM0_E6_SHIFT  (0x00000018u)
#define CSL_TPCC_TPCC_DMAQNUM0_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM0_E7_MASK   (0x70000000u)
#define CSL_TPCC_TPCC_DMAQNUM0_E7_SHIFT  (0x0000001Cu)
#define CSL_TPCC_TPCC_DMAQNUM0_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM0_RESETVAL  (0x00000000u)

/* TPCC_DMAQNUM1 */

#define CSL_TPCC_TPCC_DMAQNUM1_E8_MASK   (0x00000007u)
#define CSL_TPCC_TPCC_DMAQNUM1_E8_SHIFT  (0x00000000u)
#define CSL_TPCC_TPCC_DMAQNUM1_E8_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM1_E9_MASK   (0x00000070u)
#define CSL_TPCC_TPCC_DMAQNUM1_E9_SHIFT  (0x00000004u)
#define CSL_TPCC_TPCC_DMAQNUM1_E9_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM1_E10_MASK  (0x00000700u)
#define CSL_TPCC_TPCC_DMAQNUM1_E10_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DMAQNUM1_E10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM1_E11_MASK  (0x00007000u)
#define CSL_TPCC_TPCC_DMAQNUM1_E11_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DMAQNUM1_E11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM1_E12_MASK  (0x00070000u)
#define CSL_TPCC_TPCC_DMAQNUM1_E12_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DMAQNUM1_E12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM1_E13_MASK  (0x00700000u)
#define CSL_TPCC_TPCC_DMAQNUM1_E13_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DMAQNUM1_E13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM1_E14_MASK  (0x07000000u)
#define CSL_TPCC_TPCC_DMAQNUM1_E14_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DMAQNUM1_E14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM1_E15_MASK  (0x70000000u)
#define CSL_TPCC_TPCC_DMAQNUM1_E15_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DMAQNUM1_E15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM1_RESETVAL  (0x00000000u)

/* TPCC_DMAQNUM2 */

#define CSL_TPCC_TPCC_DMAQNUM2_E16_MASK  (0x00000007u)
#define CSL_TPCC_TPCC_DMAQNUM2_E16_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_DMAQNUM2_E16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM2_E17_MASK  (0x00000070u)
#define CSL_TPCC_TPCC_DMAQNUM2_E17_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_DMAQNUM2_E17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM2_E18_MASK  (0x00000700u)
#define CSL_TPCC_TPCC_DMAQNUM2_E18_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DMAQNUM2_E18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM2_E19_MASK  (0x00007000u)
#define CSL_TPCC_TPCC_DMAQNUM2_E19_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DMAQNUM2_E19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM2_E20_MASK  (0x00070000u)
#define CSL_TPCC_TPCC_DMAQNUM2_E20_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DMAQNUM2_E20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM2_E21_MASK  (0x00700000u)
#define CSL_TPCC_TPCC_DMAQNUM2_E21_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DMAQNUM2_E21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM2_E22_MASK  (0x07000000u)
#define CSL_TPCC_TPCC_DMAQNUM2_E22_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DMAQNUM2_E22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM2_E23_MASK  (0x70000000u)
#define CSL_TPCC_TPCC_DMAQNUM2_E23_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DMAQNUM2_E23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM2_RESETVAL  (0x00000000u)

/* TPCC_DMAQNUM3 */

#define CSL_TPCC_TPCC_DMAQNUM3_E24_MASK  (0x00000007u)
#define CSL_TPCC_TPCC_DMAQNUM3_E24_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_DMAQNUM3_E24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM3_E25_MASK  (0x00000070u)
#define CSL_TPCC_TPCC_DMAQNUM3_E25_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_DMAQNUM3_E25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM3_E26_MASK  (0x00000700u)
#define CSL_TPCC_TPCC_DMAQNUM3_E26_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DMAQNUM3_E26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM3_E27_MASK  (0x00007000u)
#define CSL_TPCC_TPCC_DMAQNUM3_E27_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DMAQNUM3_E27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM3_E28_MASK  (0x00070000u)
#define CSL_TPCC_TPCC_DMAQNUM3_E28_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DMAQNUM3_E28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM3_E29_MASK  (0x00700000u)
#define CSL_TPCC_TPCC_DMAQNUM3_E29_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DMAQNUM3_E29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM3_E30_MASK  (0x07000000u)
#define CSL_TPCC_TPCC_DMAQNUM3_E30_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DMAQNUM3_E30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM3_E31_MASK  (0x70000000u)
#define CSL_TPCC_TPCC_DMAQNUM3_E31_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DMAQNUM3_E31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM3_RESETVAL  (0x00000000u)

/* TPCC_DMAQNUM4 */

#define CSL_TPCC_TPCC_DMAQNUM4_E32_MASK  (0x00000007u)
#define CSL_TPCC_TPCC_DMAQNUM4_E32_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_DMAQNUM4_E32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM4_E33_MASK  (0x00000070u)
#define CSL_TPCC_TPCC_DMAQNUM4_E33_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_DMAQNUM4_E33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM4_E34_MASK  (0x00000700u)
#define CSL_TPCC_TPCC_DMAQNUM4_E34_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DMAQNUM4_E34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM4_E35_MASK  (0x00007000u)
#define CSL_TPCC_TPCC_DMAQNUM4_E35_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DMAQNUM4_E35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM4_E36_MASK  (0x00070000u)
#define CSL_TPCC_TPCC_DMAQNUM4_E36_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DMAQNUM4_E36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM4_E37_MASK  (0x00700000u)
#define CSL_TPCC_TPCC_DMAQNUM4_E37_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DMAQNUM4_E37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM4_E38_MASK  (0x07000000u)
#define CSL_TPCC_TPCC_DMAQNUM4_E38_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DMAQNUM4_E38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM4_E39_MASK  (0x70000000u)
#define CSL_TPCC_TPCC_DMAQNUM4_E39_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DMAQNUM4_E39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM4_RESETVAL  (0x00000000u)

/* TPCC_DMAQNUM5 */

#define CSL_TPCC_TPCC_DMAQNUM5_E40_MASK  (0x00000007u)
#define CSL_TPCC_TPCC_DMAQNUM5_E40_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_DMAQNUM5_E40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM5_E41_MASK  (0x00000070u)
#define CSL_TPCC_TPCC_DMAQNUM5_E41_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_DMAQNUM5_E41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM5_E42_MASK  (0x00000700u)
#define CSL_TPCC_TPCC_DMAQNUM5_E42_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DMAQNUM5_E42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM5_E43_MASK  (0x00007000u)
#define CSL_TPCC_TPCC_DMAQNUM5_E43_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DMAQNUM5_E43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM5_E44_MASK  (0x00070000u)
#define CSL_TPCC_TPCC_DMAQNUM5_E44_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DMAQNUM5_E44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM5_E45_MASK  (0x00700000u)
#define CSL_TPCC_TPCC_DMAQNUM5_E45_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DMAQNUM5_E45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM5_E46_MASK  (0x07000000u)
#define CSL_TPCC_TPCC_DMAQNUM5_E46_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DMAQNUM5_E46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM5_E47_MASK  (0x70000000u)
#define CSL_TPCC_TPCC_DMAQNUM5_E47_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DMAQNUM5_E47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM5_RESETVAL  (0x00000000u)

/* TPCC_DMAQNUM6 */

#define CSL_TPCC_TPCC_DMAQNUM6_E48_MASK  (0x00000007u)
#define CSL_TPCC_TPCC_DMAQNUM6_E48_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_DMAQNUM6_E48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM6_E49_MASK  (0x00000070u)
#define CSL_TPCC_TPCC_DMAQNUM6_E49_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_DMAQNUM6_E49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM6_E50_MASK  (0x00000700u)
#define CSL_TPCC_TPCC_DMAQNUM6_E50_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DMAQNUM6_E50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM6_E51_MASK  (0x00007000u)
#define CSL_TPCC_TPCC_DMAQNUM6_E51_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DMAQNUM6_E51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM6_E52_MASK  (0x00070000u)
#define CSL_TPCC_TPCC_DMAQNUM6_E52_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DMAQNUM6_E52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM6_E53_MASK  (0x00700000u)
#define CSL_TPCC_TPCC_DMAQNUM6_E53_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DMAQNUM6_E53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM6_E54_MASK  (0x07000000u)
#define CSL_TPCC_TPCC_DMAQNUM6_E54_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DMAQNUM6_E54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM6_E55_MASK  (0x70000000u)
#define CSL_TPCC_TPCC_DMAQNUM6_E55_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DMAQNUM6_E55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM6_RESETVAL  (0x00000000u)

/* TPCC_DMAQNUM7 */

#define CSL_TPCC_TPCC_DMAQNUM7_E56_MASK  (0x00000007u)
#define CSL_TPCC_TPCC_DMAQNUM7_E56_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_DMAQNUM7_E56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM7_E57_MASK  (0x00000070u)
#define CSL_TPCC_TPCC_DMAQNUM7_E57_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_DMAQNUM7_E57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM7_E58_MASK  (0x00000700u)
#define CSL_TPCC_TPCC_DMAQNUM7_E58_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DMAQNUM7_E58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM7_E59_MASK  (0x00007000u)
#define CSL_TPCC_TPCC_DMAQNUM7_E59_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DMAQNUM7_E59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM7_E60_MASK  (0x00070000u)
#define CSL_TPCC_TPCC_DMAQNUM7_E60_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DMAQNUM7_E60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM7_E61_MASK  (0x00700000u)
#define CSL_TPCC_TPCC_DMAQNUM7_E61_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DMAQNUM7_E61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM7_E62_MASK  (0x07000000u)
#define CSL_TPCC_TPCC_DMAQNUM7_E62_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DMAQNUM7_E62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM7_E63_MASK  (0x70000000u)
#define CSL_TPCC_TPCC_DMAQNUM7_E63_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DMAQNUM7_E63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DMAQNUM7_RESETVAL  (0x00000000u)

/* TPCC_QDMAQNUM */

#define CSL_TPCC_TPCC_QDMAQNUM_E0_MASK   (0x00000007u)
#define CSL_TPCC_TPCC_QDMAQNUM_E0_SHIFT  (0x00000000u)
#define CSL_TPCC_TPCC_QDMAQNUM_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QDMAQNUM_E1_MASK   (0x00000070u)
#define CSL_TPCC_TPCC_QDMAQNUM_E1_SHIFT  (0x00000004u)
#define CSL_TPCC_TPCC_QDMAQNUM_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QDMAQNUM_E2_MASK   (0x00000700u)
#define CSL_TPCC_TPCC_QDMAQNUM_E2_SHIFT  (0x00000008u)
#define CSL_TPCC_TPCC_QDMAQNUM_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QDMAQNUM_E3_MASK   (0x00007000u)
#define CSL_TPCC_TPCC_QDMAQNUM_E3_SHIFT  (0x0000000Cu)
#define CSL_TPCC_TPCC_QDMAQNUM_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QDMAQNUM_E4_MASK   (0x00070000u)
#define CSL_TPCC_TPCC_QDMAQNUM_E4_SHIFT  (0x00000010u)
#define CSL_TPCC_TPCC_QDMAQNUM_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QDMAQNUM_E5_MASK   (0x00700000u)
#define CSL_TPCC_TPCC_QDMAQNUM_E5_SHIFT  (0x00000014u)
#define CSL_TPCC_TPCC_QDMAQNUM_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QDMAQNUM_E6_MASK   (0x07000000u)
#define CSL_TPCC_TPCC_QDMAQNUM_E6_SHIFT  (0x00000018u)
#define CSL_TPCC_TPCC_QDMAQNUM_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QDMAQNUM_E7_MASK   (0x70000000u)
#define CSL_TPCC_TPCC_QDMAQNUM_E7_SHIFT  (0x0000001Cu)
#define CSL_TPCC_TPCC_QDMAQNUM_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QDMAQNUM_RESETVAL  (0x00000000u)

/* TPCC_QUETCMAP */

#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ0_MASK (0x00000007u)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ1_MASK (0x00000070u)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ1_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ2_MASK (0x00000700u)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ2_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ3_MASK (0x00007000u)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ3_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ4_MASK (0x00070000u)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ4_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ5_MASK (0x00700000u)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ5_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ6_MASK (0x07000000u)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ6_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ7_MASK (0x70000000u)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ7_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_QUETCMAP_TCNUMQ7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUETCMAP_RESETVAL  (0x00000000u)

/* TPCC_QUEPRI */

#define CSL_TPCC_TPCC_QUEPRI_PRIQ0_MASK  (0x00000007u)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUEPRI_PRIQ1_MASK  (0x00000070u)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ1_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUEPRI_PRIQ2_MASK  (0x00000700u)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ2_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUEPRI_PRIQ3_MASK  (0x00007000u)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ3_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUEPRI_PRIQ4_MASK  (0x00070000u)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ4_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUEPRI_PRIQ5_MASK  (0x00700000u)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ5_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUEPRI_PRIQ6_MASK  (0x07000000u)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ6_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUEPRI_PRIQ7_MASK  (0x70000000u)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ7_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_QUEPRI_PRIQ7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QUEPRI_RESETVAL    (0x00000000u)

/* TPCC_EMR */

#define CSL_TPCC_TPCC_EMR_EMR0_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_EMR_EMR0_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_EMR_EMR0_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR1_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_EMR_EMR1_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_EMR_EMR1_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR2_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_EMR_EMR2_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_EMR_EMR2_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR3_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_EMR_EMR3_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_EMR_EMR3_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR4_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_EMR_EMR4_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_EMR_EMR4_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR5_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_EMR_EMR5_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_EMR_EMR5_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR6_MASK      (0x00000040u)
#define CSL_TPCC_TPCC_EMR_EMR6_SHIFT     (0x00000006u)
#define CSL_TPCC_TPCC_EMR_EMR6_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR7_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_EMR_EMR7_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_EMR_EMR7_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR8_MASK      (0x00000100u)
#define CSL_TPCC_TPCC_EMR_EMR8_SHIFT     (0x00000008u)
#define CSL_TPCC_TPCC_EMR_EMR8_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR9_MASK      (0x00000200u)
#define CSL_TPCC_TPCC_EMR_EMR9_SHIFT     (0x00000009u)
#define CSL_TPCC_TPCC_EMR_EMR9_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR10_MASK     (0x00000400u)
#define CSL_TPCC_TPCC_EMR_EMR10_SHIFT    (0x0000000Au)
#define CSL_TPCC_TPCC_EMR_EMR10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR11_MASK     (0x00000800u)
#define CSL_TPCC_TPCC_EMR_EMR11_SHIFT    (0x0000000Bu)
#define CSL_TPCC_TPCC_EMR_EMR11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR12_MASK     (0x00001000u)
#define CSL_TPCC_TPCC_EMR_EMR12_SHIFT    (0x0000000Cu)
#define CSL_TPCC_TPCC_EMR_EMR12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR13_MASK     (0x00002000u)
#define CSL_TPCC_TPCC_EMR_EMR13_SHIFT    (0x0000000Du)
#define CSL_TPCC_TPCC_EMR_EMR13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR14_MASK     (0x00004000u)
#define CSL_TPCC_TPCC_EMR_EMR14_SHIFT    (0x0000000Eu)
#define CSL_TPCC_TPCC_EMR_EMR14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR15_MASK     (0x00008000u)
#define CSL_TPCC_TPCC_EMR_EMR15_SHIFT    (0x0000000Fu)
#define CSL_TPCC_TPCC_EMR_EMR15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR16_MASK     (0x00010000u)
#define CSL_TPCC_TPCC_EMR_EMR16_SHIFT    (0x00000010u)
#define CSL_TPCC_TPCC_EMR_EMR16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR17_MASK     (0x00020000u)
#define CSL_TPCC_TPCC_EMR_EMR17_SHIFT    (0x00000011u)
#define CSL_TPCC_TPCC_EMR_EMR17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR18_MASK     (0x00040000u)
#define CSL_TPCC_TPCC_EMR_EMR18_SHIFT    (0x00000012u)
#define CSL_TPCC_TPCC_EMR_EMR18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR19_MASK     (0x00080000u)
#define CSL_TPCC_TPCC_EMR_EMR19_SHIFT    (0x00000013u)
#define CSL_TPCC_TPCC_EMR_EMR19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR20_MASK     (0x00100000u)
#define CSL_TPCC_TPCC_EMR_EMR20_SHIFT    (0x00000014u)
#define CSL_TPCC_TPCC_EMR_EMR20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR21_MASK     (0x00200000u)
#define CSL_TPCC_TPCC_EMR_EMR21_SHIFT    (0x00000015u)
#define CSL_TPCC_TPCC_EMR_EMR21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR22_MASK     (0x00400000u)
#define CSL_TPCC_TPCC_EMR_EMR22_SHIFT    (0x00000016u)
#define CSL_TPCC_TPCC_EMR_EMR22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR23_MASK     (0x00800000u)
#define CSL_TPCC_TPCC_EMR_EMR23_SHIFT    (0x00000017u)
#define CSL_TPCC_TPCC_EMR_EMR23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR24_MASK     (0x01000000u)
#define CSL_TPCC_TPCC_EMR_EMR24_SHIFT    (0x00000018u)
#define CSL_TPCC_TPCC_EMR_EMR24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR25_MASK     (0x02000000u)
#define CSL_TPCC_TPCC_EMR_EMR25_SHIFT    (0x00000019u)
#define CSL_TPCC_TPCC_EMR_EMR25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR26_MASK     (0x04000000u)
#define CSL_TPCC_TPCC_EMR_EMR26_SHIFT    (0x0000001Au)
#define CSL_TPCC_TPCC_EMR_EMR26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR27_MASK     (0x08000000u)
#define CSL_TPCC_TPCC_EMR_EMR27_SHIFT    (0x0000001Bu)
#define CSL_TPCC_TPCC_EMR_EMR27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR28_MASK     (0x10000000u)
#define CSL_TPCC_TPCC_EMR_EMR28_SHIFT    (0x0000001Cu)
#define CSL_TPCC_TPCC_EMR_EMR28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR29_MASK     (0x20000000u)
#define CSL_TPCC_TPCC_EMR_EMR29_SHIFT    (0x0000001Du)
#define CSL_TPCC_TPCC_EMR_EMR29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR30_MASK     (0x40000000u)
#define CSL_TPCC_TPCC_EMR_EMR30_SHIFT    (0x0000001Eu)
#define CSL_TPCC_TPCC_EMR_EMR30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_EMR31_MASK     (0x80000000u)
#define CSL_TPCC_TPCC_EMR_EMR31_SHIFT    (0x0000001Fu)
#define CSL_TPCC_TPCC_EMR_EMR31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMR_RESETVAL       (0x00000000u)

/* TPCC_EMRH */

#define CSL_TPCC_TPCC_EMRH_EMR32_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR32_SHIFT   (0x00000020u)
#define CSL_TPCC_TPCC_EMRH_EMR32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR33_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR33_SHIFT   (0x00000021u)
#define CSL_TPCC_TPCC_EMRH_EMR33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR34_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR34_SHIFT   (0x00000022u)
#define CSL_TPCC_TPCC_EMRH_EMR34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR35_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR35_SHIFT   (0x00000023u)
#define CSL_TPCC_TPCC_EMRH_EMR35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR36_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR36_SHIFT   (0x00000024u)
#define CSL_TPCC_TPCC_EMRH_EMR36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR37_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR37_SHIFT   (0x00000025u)
#define CSL_TPCC_TPCC_EMRH_EMR37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR38_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR38_SHIFT   (0x00000026u)
#define CSL_TPCC_TPCC_EMRH_EMR38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR39_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR39_SHIFT   (0x00000027u)
#define CSL_TPCC_TPCC_EMRH_EMR39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR40_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR40_SHIFT   (0x00000028u)
#define CSL_TPCC_TPCC_EMRH_EMR40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR41_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR41_SHIFT   (0x00000029u)
#define CSL_TPCC_TPCC_EMRH_EMR41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR42_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR42_SHIFT   (0x0000002Au)
#define CSL_TPCC_TPCC_EMRH_EMR42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR43_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR43_SHIFT   (0x0000002Bu)
#define CSL_TPCC_TPCC_EMRH_EMR43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR44_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR44_SHIFT   (0x0000002Cu)
#define CSL_TPCC_TPCC_EMRH_EMR44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR45_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR45_SHIFT   (0x0000002Du)
#define CSL_TPCC_TPCC_EMRH_EMR45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR46_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR46_SHIFT   (0x0000002Eu)
#define CSL_TPCC_TPCC_EMRH_EMR46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR47_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR47_SHIFT   (0x0000002Fu)
#define CSL_TPCC_TPCC_EMRH_EMR47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR48_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR48_SHIFT   (0x00000030u)
#define CSL_TPCC_TPCC_EMRH_EMR48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR49_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR49_SHIFT   (0x00000031u)
#define CSL_TPCC_TPCC_EMRH_EMR49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR50_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR50_SHIFT   (0x00000032u)
#define CSL_TPCC_TPCC_EMRH_EMR50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR51_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR51_SHIFT   (0x00000033u)
#define CSL_TPCC_TPCC_EMRH_EMR51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR52_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR52_SHIFT   (0x00000034u)
#define CSL_TPCC_TPCC_EMRH_EMR52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR53_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR53_SHIFT   (0x00000035u)
#define CSL_TPCC_TPCC_EMRH_EMR53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR54_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR54_SHIFT   (0x00000036u)
#define CSL_TPCC_TPCC_EMRH_EMR54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR55_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR55_SHIFT   (0x00000037u)
#define CSL_TPCC_TPCC_EMRH_EMR55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR56_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR56_SHIFT   (0x00000038u)
#define CSL_TPCC_TPCC_EMRH_EMR56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR57_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR57_SHIFT   (0x00000039u)
#define CSL_TPCC_TPCC_EMRH_EMR57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR58_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR58_SHIFT   (0x0000003Au)
#define CSL_TPCC_TPCC_EMRH_EMR58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR59_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR59_SHIFT   (0x0000003Bu)
#define CSL_TPCC_TPCC_EMRH_EMR59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR60_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR60_SHIFT   (0x0000003Cu)
#define CSL_TPCC_TPCC_EMRH_EMR60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR61_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR61_SHIFT   (0x0000003Du)
#define CSL_TPCC_TPCC_EMRH_EMR61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR62_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR62_SHIFT   (0x0000003Eu)
#define CSL_TPCC_TPCC_EMRH_EMR62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_EMR63_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_EMRH_EMR63_SHIFT   (0x0000003Fu)
#define CSL_TPCC_TPCC_EMRH_EMR63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMRH_RESETVAL      (0x0FFFFFFFu)

/* TPCC_EMCR */

#define CSL_TPCC_TPCC_EMCR_EMCR0_MASK    (0x00000001u)
#define CSL_TPCC_TPCC_EMCR_EMCR0_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_EMCR_EMCR0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR1_MASK    (0x00000002u)
#define CSL_TPCC_TPCC_EMCR_EMCR1_SHIFT   (0x00000001u)
#define CSL_TPCC_TPCC_EMCR_EMCR1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR2_MASK    (0x00000004u)
#define CSL_TPCC_TPCC_EMCR_EMCR2_SHIFT   (0x00000002u)
#define CSL_TPCC_TPCC_EMCR_EMCR2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR3_MASK    (0x00000008u)
#define CSL_TPCC_TPCC_EMCR_EMCR3_SHIFT   (0x00000003u)
#define CSL_TPCC_TPCC_EMCR_EMCR3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR4_MASK    (0x00000010u)
#define CSL_TPCC_TPCC_EMCR_EMCR4_SHIFT   (0x00000004u)
#define CSL_TPCC_TPCC_EMCR_EMCR4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR5_MASK    (0x00000020u)
#define CSL_TPCC_TPCC_EMCR_EMCR5_SHIFT   (0x00000005u)
#define CSL_TPCC_TPCC_EMCR_EMCR5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR6_MASK    (0x00000040u)
#define CSL_TPCC_TPCC_EMCR_EMCR6_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_EMCR_EMCR6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR7_MASK    (0x00000080u)
#define CSL_TPCC_TPCC_EMCR_EMCR7_SHIFT   (0x00000007u)
#define CSL_TPCC_TPCC_EMCR_EMCR7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR8_MASK    (0x00000100u)
#define CSL_TPCC_TPCC_EMCR_EMCR8_SHIFT   (0x00000008u)
#define CSL_TPCC_TPCC_EMCR_EMCR8_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR9_MASK    (0x00000200u)
#define CSL_TPCC_TPCC_EMCR_EMCR9_SHIFT   (0x00000009u)
#define CSL_TPCC_TPCC_EMCR_EMCR9_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR10_MASK   (0x00000400u)
#define CSL_TPCC_TPCC_EMCR_EMCR10_SHIFT  (0x0000000Au)
#define CSL_TPCC_TPCC_EMCR_EMCR10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR11_MASK   (0x00000800u)
#define CSL_TPCC_TPCC_EMCR_EMCR11_SHIFT  (0x0000000Bu)
#define CSL_TPCC_TPCC_EMCR_EMCR11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR12_MASK   (0x00001000u)
#define CSL_TPCC_TPCC_EMCR_EMCR12_SHIFT  (0x0000000Cu)
#define CSL_TPCC_TPCC_EMCR_EMCR12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR13_MASK   (0x00002000u)
#define CSL_TPCC_TPCC_EMCR_EMCR13_SHIFT  (0x0000000Du)
#define CSL_TPCC_TPCC_EMCR_EMCR13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR14_MASK   (0x00004000u)
#define CSL_TPCC_TPCC_EMCR_EMCR14_SHIFT  (0x0000000Eu)
#define CSL_TPCC_TPCC_EMCR_EMCR14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR15_MASK   (0x00008000u)
#define CSL_TPCC_TPCC_EMCR_EMCR15_SHIFT  (0x0000000Fu)
#define CSL_TPCC_TPCC_EMCR_EMCR15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR16_MASK   (0x00010000u)
#define CSL_TPCC_TPCC_EMCR_EMCR16_SHIFT  (0x00000010u)
#define CSL_TPCC_TPCC_EMCR_EMCR16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR17_MASK   (0x00020000u)
#define CSL_TPCC_TPCC_EMCR_EMCR17_SHIFT  (0x00000011u)
#define CSL_TPCC_TPCC_EMCR_EMCR17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR18_MASK   (0x00040000u)
#define CSL_TPCC_TPCC_EMCR_EMCR18_SHIFT  (0x00000012u)
#define CSL_TPCC_TPCC_EMCR_EMCR18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR19_MASK   (0x00080000u)
#define CSL_TPCC_TPCC_EMCR_EMCR19_SHIFT  (0x00000013u)
#define CSL_TPCC_TPCC_EMCR_EMCR19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR20_MASK   (0x00100000u)
#define CSL_TPCC_TPCC_EMCR_EMCR20_SHIFT  (0x00000014u)
#define CSL_TPCC_TPCC_EMCR_EMCR20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR21_MASK   (0x00200000u)
#define CSL_TPCC_TPCC_EMCR_EMCR21_SHIFT  (0x00000015u)
#define CSL_TPCC_TPCC_EMCR_EMCR21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR22_MASK   (0x00400000u)
#define CSL_TPCC_TPCC_EMCR_EMCR22_SHIFT  (0x00000016u)
#define CSL_TPCC_TPCC_EMCR_EMCR22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR23_MASK   (0x00800000u)
#define CSL_TPCC_TPCC_EMCR_EMCR23_SHIFT  (0x00000017u)
#define CSL_TPCC_TPCC_EMCR_EMCR23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR24_MASK   (0x01000000u)
#define CSL_TPCC_TPCC_EMCR_EMCR24_SHIFT  (0x00000018u)
#define CSL_TPCC_TPCC_EMCR_EMCR24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR25_MASK   (0x02000000u)
#define CSL_TPCC_TPCC_EMCR_EMCR25_SHIFT  (0x00000019u)
#define CSL_TPCC_TPCC_EMCR_EMCR25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR26_MASK   (0x04000000u)
#define CSL_TPCC_TPCC_EMCR_EMCR26_SHIFT  (0x0000001Au)
#define CSL_TPCC_TPCC_EMCR_EMCR26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR27_MASK   (0x08000000u)
#define CSL_TPCC_TPCC_EMCR_EMCR27_SHIFT  (0x0000001Bu)
#define CSL_TPCC_TPCC_EMCR_EMCR27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR28_MASK   (0x10000000u)
#define CSL_TPCC_TPCC_EMCR_EMCR28_SHIFT  (0x0000001Cu)
#define CSL_TPCC_TPCC_EMCR_EMCR28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR29_MASK   (0x20000000u)
#define CSL_TPCC_TPCC_EMCR_EMCR29_SHIFT  (0x0000001Du)
#define CSL_TPCC_TPCC_EMCR_EMCR29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR30_MASK   (0x40000000u)
#define CSL_TPCC_TPCC_EMCR_EMCR30_SHIFT  (0x0000001Eu)
#define CSL_TPCC_TPCC_EMCR_EMCR30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_EMCR31_MASK   (0x80000000u)
#define CSL_TPCC_TPCC_EMCR_EMCR31_SHIFT  (0x0000001Fu)
#define CSL_TPCC_TPCC_EMCR_EMCR31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCR_RESETVAL      (0x00000000u)

/* TPCC_EMCRH */

#define CSL_TPCC_TPCC_EMCRH_EMCR32_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR32_SHIFT (0x00000020u)
#define CSL_TPCC_TPCC_EMCRH_EMCR32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR33_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR33_SHIFT (0x00000021u)
#define CSL_TPCC_TPCC_EMCRH_EMCR33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR34_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR34_SHIFT (0x00000022u)
#define CSL_TPCC_TPCC_EMCRH_EMCR34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR35_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR35_SHIFT (0x00000023u)
#define CSL_TPCC_TPCC_EMCRH_EMCR35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR36_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR36_SHIFT (0x00000024u)
#define CSL_TPCC_TPCC_EMCRH_EMCR36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR37_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR37_SHIFT (0x00000025u)
#define CSL_TPCC_TPCC_EMCRH_EMCR37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR38_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR38_SHIFT (0x00000026u)
#define CSL_TPCC_TPCC_EMCRH_EMCR38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR39_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR39_SHIFT (0x00000027u)
#define CSL_TPCC_TPCC_EMCRH_EMCR39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR40_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR40_SHIFT (0x00000028u)
#define CSL_TPCC_TPCC_EMCRH_EMCR40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR41_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR41_SHIFT (0x00000029u)
#define CSL_TPCC_TPCC_EMCRH_EMCR41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR42_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR42_SHIFT (0x0000002Au)
#define CSL_TPCC_TPCC_EMCRH_EMCR42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR43_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR43_SHIFT (0x0000002Bu)
#define CSL_TPCC_TPCC_EMCRH_EMCR43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR44_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR44_SHIFT (0x0000002Cu)
#define CSL_TPCC_TPCC_EMCRH_EMCR44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR45_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR45_SHIFT (0x0000002Du)
#define CSL_TPCC_TPCC_EMCRH_EMCR45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR46_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR46_SHIFT (0x0000002Eu)
#define CSL_TPCC_TPCC_EMCRH_EMCR46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR47_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR47_SHIFT (0x0000002Fu)
#define CSL_TPCC_TPCC_EMCRH_EMCR47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR48_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR48_SHIFT (0x00000030u)
#define CSL_TPCC_TPCC_EMCRH_EMCR48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR49_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR49_SHIFT (0x00000031u)
#define CSL_TPCC_TPCC_EMCRH_EMCR49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR50_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR50_SHIFT (0x00000032u)
#define CSL_TPCC_TPCC_EMCRH_EMCR50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR51_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR51_SHIFT (0x00000033u)
#define CSL_TPCC_TPCC_EMCRH_EMCR51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR52_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR52_SHIFT (0x00000034u)
#define CSL_TPCC_TPCC_EMCRH_EMCR52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR53_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR53_SHIFT (0x00000035u)
#define CSL_TPCC_TPCC_EMCRH_EMCR53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR54_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR54_SHIFT (0x00000036u)
#define CSL_TPCC_TPCC_EMCRH_EMCR54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR55_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR55_SHIFT (0x00000037u)
#define CSL_TPCC_TPCC_EMCRH_EMCR55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR56_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR56_SHIFT (0x00000038u)
#define CSL_TPCC_TPCC_EMCRH_EMCR56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR57_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR57_SHIFT (0x00000039u)
#define CSL_TPCC_TPCC_EMCRH_EMCR57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR58_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR58_SHIFT (0x0000003Au)
#define CSL_TPCC_TPCC_EMCRH_EMCR58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR59_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR59_SHIFT (0x0000003Bu)
#define CSL_TPCC_TPCC_EMCRH_EMCR59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR60_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR60_SHIFT (0x0000003Cu)
#define CSL_TPCC_TPCC_EMCRH_EMCR60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR61_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR61_SHIFT (0x0000003Du)
#define CSL_TPCC_TPCC_EMCRH_EMCR61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR62_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR62_SHIFT (0x0000003Eu)
#define CSL_TPCC_TPCC_EMCRH_EMCR62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_EMCR63_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_EMCRH_EMCR63_SHIFT (0x0000003Fu)
#define CSL_TPCC_TPCC_EMCRH_EMCR63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EMCRH_RESETVAL     (0x0FFFFFFFu)

/* TPCC_QEMR */

#define CSL_TPCC_TPCC_QEMR_QEMR0_MASK    (0x00000001u)
#define CSL_TPCC_TPCC_QEMR_QEMR0_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_QEMR_QEMR0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMR_QEMR1_MASK    (0x00000002u)
#define CSL_TPCC_TPCC_QEMR_QEMR1_SHIFT   (0x00000001u)
#define CSL_TPCC_TPCC_QEMR_QEMR1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMR_QEMR2_MASK    (0x00000004u)
#define CSL_TPCC_TPCC_QEMR_QEMR2_SHIFT   (0x00000002u)
#define CSL_TPCC_TPCC_QEMR_QEMR2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMR_QEMR3_MASK    (0x00000008u)
#define CSL_TPCC_TPCC_QEMR_QEMR3_SHIFT   (0x00000003u)
#define CSL_TPCC_TPCC_QEMR_QEMR3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMR_QEMR4_MASK    (0x00000010u)
#define CSL_TPCC_TPCC_QEMR_QEMR4_SHIFT   (0x00000004u)
#define CSL_TPCC_TPCC_QEMR_QEMR4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMR_QEMR5_MASK    (0x00000020u)
#define CSL_TPCC_TPCC_QEMR_QEMR5_SHIFT   (0x00000005u)
#define CSL_TPCC_TPCC_QEMR_QEMR5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMR_QEMR6_MASK    (0x00000040u)
#define CSL_TPCC_TPCC_QEMR_QEMR6_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_QEMR_QEMR6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMR_QEMR7_MASK    (0x00000080u)
#define CSL_TPCC_TPCC_QEMR_QEMR7_SHIFT   (0x00000007u)
#define CSL_TPCC_TPCC_QEMR_QEMR7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMR_RESETVAL      (0x00000000u)

/* TPCC_QEMCR */

#define CSL_TPCC_TPCC_QEMCR_QEMCR0_MASK  (0x00000001u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMCR_QEMCR1_MASK  (0x00000002u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMCR_QEMCR2_MASK  (0x00000004u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMCR_QEMCR3_MASK  (0x00000008u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMCR_QEMCR4_MASK  (0x00000010u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMCR_QEMCR5_MASK  (0x00000020u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMCR_QEMCR6_MASK  (0x00000040u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMCR_QEMCR7_MASK  (0x00000080u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_QEMCR_QEMCR7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEMCR_RESETVAL     (0x00000000u)

/* TPCC_CCERR */

#define CSL_TPCC_TPCC_CCERR_QTHRXD0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERR_QTHRXD1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERR_QTHRXD2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERR_QTHRXD3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERR_QTHRXD4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERR_QTHRXD5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERR_QTHRXD6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERR_QTHRXD7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_CCERR_QTHRXD7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERR_TCCERR_MASK  (0x00010000u)
#define CSL_TPCC_TPCC_CCERR_TCCERR_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_CCERR_TCCERR_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERR_RESETVAL     (0x00000000u)

/* TPCC_CCERRCLR */

#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_CCERRCLR_QTHRXD7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERRCLR_TCCERR_MASK (0x00010000u)
#define CSL_TPCC_TPCC_CCERRCLR_TCCERR_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_CCERRCLR_TCCERR_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCERRCLR_RESETVAL  (0x00000000u)

/* TPCC_EEVAL */

#define CSL_TPCC_TPCC_EEVAL_EVAL_MASK    (0x00000001u)
#define CSL_TPCC_TPCC_EEVAL_EVAL_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_EEVAL_EVAL_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EEVAL_SET_MASK     (0x00000002u)
#define CSL_TPCC_TPCC_EEVAL_SET_SHIFT    (0x00000001u)
#define CSL_TPCC_TPCC_EEVAL_SET_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EEVAL_RESETVAL     (0x00000000u)

/* TPCC_DRAE0 */

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E8_MASK (0x00000100u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E8_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E8_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E9_MASK (0x00000200u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E9_SHIFT (0x00000009u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E9_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E10_MASK (0x00000400u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E10_SHIFT (0x0000000Au)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E11_MASK (0x00000800u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E11_SHIFT (0x0000000Bu)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E12_MASK (0x00001000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E12_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E13_MASK (0x00002000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E13_SHIFT (0x0000000Du)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E14_MASK (0x00004000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E14_SHIFT (0x0000000Eu)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E15_MASK (0x00008000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E15_SHIFT (0x0000000Fu)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E16_MASK (0x00010000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E16_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E17_MASK (0x00020000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E17_SHIFT (0x00000011u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E18_MASK (0x00040000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E18_SHIFT (0x00000012u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E19_MASK (0x00080000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E19_SHIFT (0x00000013u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E20_MASK (0x00100000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E20_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E21_MASK (0x00200000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E21_SHIFT (0x00000015u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E22_MASK (0x00400000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E22_SHIFT (0x00000016u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E23_MASK (0x00800000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E23_SHIFT (0x00000017u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E24_MASK (0x01000000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E24_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E25_MASK (0x02000000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E25_SHIFT (0x00000019u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E26_MASK (0x04000000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E26_SHIFT (0x0000001Au)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E27_MASK (0x08000000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E27_SHIFT (0x0000001Bu)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E28_MASK (0x10000000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E28_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E29_MASK (0x20000000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E29_SHIFT (0x0000001Du)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E30_MASK (0x40000000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E30_SHIFT (0x0000001Eu)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_DRAE0_E31_MASK (0x80000000u)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E31_SHIFT (0x0000001Fu)
#define CSL_TPCC_TPCC_DRAE0_DRAE0_E31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE0_RESETVAL     (0x00000000u)

/* TPCC_DRAEH0 */

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E32_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E32_SHIFT (0x00000020u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E33_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E33_SHIFT (0x00000021u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E34_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E34_SHIFT (0x00000022u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E35_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E35_SHIFT (0x00000023u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E36_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E36_SHIFT (0x00000024u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E37_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E37_SHIFT (0x00000025u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E38_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E38_SHIFT (0x00000026u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E39_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E39_SHIFT (0x00000027u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E40_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E40_SHIFT (0x00000028u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E41_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E41_SHIFT (0x00000029u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E42_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E42_SHIFT (0x0000002Au)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E43_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E43_SHIFT (0x0000002Bu)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E44_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E44_SHIFT (0x0000002Cu)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E45_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E45_SHIFT (0x0000002Du)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E46_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E46_SHIFT (0x0000002Eu)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E47_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E47_SHIFT (0x0000002Fu)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E48_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E48_SHIFT (0x00000030u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E49_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E49_SHIFT (0x00000031u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E50_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E50_SHIFT (0x00000032u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E51_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E51_SHIFT (0x00000033u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E52_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E52_SHIFT (0x00000034u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E53_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E53_SHIFT (0x00000035u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E54_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E54_SHIFT (0x00000036u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E55_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E55_SHIFT (0x00000037u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E56_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E56_SHIFT (0x00000038u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E57_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E57_SHIFT (0x00000039u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E58_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E58_SHIFT (0x0000003Au)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E59_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E59_SHIFT (0x0000003Bu)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E60_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E60_SHIFT (0x0000003Cu)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E61_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E61_SHIFT (0x0000003Du)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E62_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E62_SHIFT (0x0000003Eu)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E63_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E63_SHIFT (0x0000003Fu)
#define CSL_TPCC_TPCC_DRAEH0_DRAEH0_E63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH0_RESETVAL    (0x0FFFFFFFu)

/* TPCC_DRAE1 */

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E8_MASK (0x00000100u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E8_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E8_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E9_MASK (0x00000200u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E9_SHIFT (0x00000009u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E9_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E10_MASK (0x00000400u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E10_SHIFT (0x0000000Au)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E11_MASK (0x00000800u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E11_SHIFT (0x0000000Bu)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E12_MASK (0x00001000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E12_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E13_MASK (0x00002000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E13_SHIFT (0x0000000Du)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E14_MASK (0x00004000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E14_SHIFT (0x0000000Eu)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E15_MASK (0x00008000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E15_SHIFT (0x0000000Fu)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E16_MASK (0x00010000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E16_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E17_MASK (0x00020000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E17_SHIFT (0x00000011u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E18_MASK (0x00040000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E18_SHIFT (0x00000012u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E19_MASK (0x00080000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E19_SHIFT (0x00000013u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E20_MASK (0x00100000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E20_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E21_MASK (0x00200000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E21_SHIFT (0x00000015u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E22_MASK (0x00400000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E22_SHIFT (0x00000016u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E23_MASK (0x00800000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E23_SHIFT (0x00000017u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E24_MASK (0x01000000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E24_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E25_MASK (0x02000000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E25_SHIFT (0x00000019u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E26_MASK (0x04000000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E26_SHIFT (0x0000001Au)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E27_MASK (0x08000000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E27_SHIFT (0x0000001Bu)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E28_MASK (0x10000000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E28_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E29_MASK (0x20000000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E29_SHIFT (0x0000001Du)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E30_MASK (0x40000000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E30_SHIFT (0x0000001Eu)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_DRAE1_E31_MASK (0x80000000u)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E31_SHIFT (0x0000001Fu)
#define CSL_TPCC_TPCC_DRAE1_DRAE1_E31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE1_RESETVAL     (0x00000000u)

/* TPCC_DRAEH1 */

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E32_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E32_SHIFT (0x00000020u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E33_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E33_SHIFT (0x00000021u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E34_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E34_SHIFT (0x00000022u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E35_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E35_SHIFT (0x00000023u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E36_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E36_SHIFT (0x00000024u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E37_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E37_SHIFT (0x00000025u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E38_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E38_SHIFT (0x00000026u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E39_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E39_SHIFT (0x00000027u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E40_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E40_SHIFT (0x00000028u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E41_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E41_SHIFT (0x00000029u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E42_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E42_SHIFT (0x0000002Au)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E43_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E43_SHIFT (0x0000002Bu)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E44_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E44_SHIFT (0x0000002Cu)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E45_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E45_SHIFT (0x0000002Du)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E46_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E46_SHIFT (0x0000002Eu)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E47_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E47_SHIFT (0x0000002Fu)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E48_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E48_SHIFT (0x00000030u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E49_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E49_SHIFT (0x00000031u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E50_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E50_SHIFT (0x00000032u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E51_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E51_SHIFT (0x00000033u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E52_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E52_SHIFT (0x00000034u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E53_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E53_SHIFT (0x00000035u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E54_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E54_SHIFT (0x00000036u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E55_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E55_SHIFT (0x00000037u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E56_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E56_SHIFT (0x00000038u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E57_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E57_SHIFT (0x00000039u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E58_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E58_SHIFT (0x0000003Au)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E59_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E59_SHIFT (0x0000003Bu)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E60_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E60_SHIFT (0x0000003Cu)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E61_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E61_SHIFT (0x0000003Du)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E62_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E62_SHIFT (0x0000003Eu)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E63_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E63_SHIFT (0x0000003Fu)
#define CSL_TPCC_TPCC_DRAEH1_DRAEH1_E63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH1_RESETVAL    (0x0FFFFFFFu)

/* TPCC_DRAE2 */

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E8_MASK (0x00000100u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E8_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E8_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E9_MASK (0x00000200u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E9_SHIFT (0x00000009u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E9_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E10_MASK (0x00000400u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E10_SHIFT (0x0000000Au)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E11_MASK (0x00000800u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E11_SHIFT (0x0000000Bu)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E12_MASK (0x00001000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E12_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E13_MASK (0x00002000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E13_SHIFT (0x0000000Du)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E14_MASK (0x00004000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E14_SHIFT (0x0000000Eu)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E15_MASK (0x00008000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E15_SHIFT (0x0000000Fu)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E16_MASK (0x00010000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E16_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E17_MASK (0x00020000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E17_SHIFT (0x00000011u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E18_MASK (0x00040000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E18_SHIFT (0x00000012u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E19_MASK (0x00080000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E19_SHIFT (0x00000013u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E20_MASK (0x00100000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E20_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E21_MASK (0x00200000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E21_SHIFT (0x00000015u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E22_MASK (0x00400000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E22_SHIFT (0x00000016u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E23_MASK (0x00800000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E23_SHIFT (0x00000017u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E24_MASK (0x01000000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E24_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E25_MASK (0x02000000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E25_SHIFT (0x00000019u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E26_MASK (0x04000000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E26_SHIFT (0x0000001Au)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E27_MASK (0x08000000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E27_SHIFT (0x0000001Bu)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E28_MASK (0x10000000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E28_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E29_MASK (0x20000000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E29_SHIFT (0x0000001Du)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E30_MASK (0x40000000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E30_SHIFT (0x0000001Eu)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_DRAE2_E31_MASK (0x80000000u)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E31_SHIFT (0x0000001Fu)
#define CSL_TPCC_TPCC_DRAE2_DRAE2_E31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE2_RESETVAL     (0x00000000u)

/* TPCC_DRAEH2 */

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E32_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E32_SHIFT (0x00000020u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E33_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E33_SHIFT (0x00000021u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E34_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E34_SHIFT (0x00000022u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E35_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E35_SHIFT (0x00000023u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E36_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E36_SHIFT (0x00000024u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E37_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E37_SHIFT (0x00000025u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E38_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E38_SHIFT (0x00000026u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E39_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E39_SHIFT (0x00000027u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E40_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E40_SHIFT (0x00000028u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E41_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E41_SHIFT (0x00000029u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E42_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E42_SHIFT (0x0000002Au)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E43_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E43_SHIFT (0x0000002Bu)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E44_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E44_SHIFT (0x0000002Cu)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E45_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E45_SHIFT (0x0000002Du)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E46_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E46_SHIFT (0x0000002Eu)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E47_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E47_SHIFT (0x0000002Fu)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E48_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E48_SHIFT (0x00000030u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E49_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E49_SHIFT (0x00000031u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E50_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E50_SHIFT (0x00000032u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E51_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E51_SHIFT (0x00000033u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E52_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E52_SHIFT (0x00000034u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E53_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E53_SHIFT (0x00000035u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E54_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E54_SHIFT (0x00000036u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E55_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E55_SHIFT (0x00000037u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E56_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E56_SHIFT (0x00000038u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E57_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E57_SHIFT (0x00000039u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E58_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E58_SHIFT (0x0000003Au)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E59_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E59_SHIFT (0x0000003Bu)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E60_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E60_SHIFT (0x0000003Cu)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E61_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E61_SHIFT (0x0000003Du)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E62_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E62_SHIFT (0x0000003Eu)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E63_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E63_SHIFT (0x0000003Fu)
#define CSL_TPCC_TPCC_DRAEH2_DRAEH2_E63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH2_RESETVAL    (0x0FFFFFFFu)

/* TPCC_DRAE3 */

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E8_MASK (0x00000100u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E8_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E8_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E9_MASK (0x00000200u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E9_SHIFT (0x00000009u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E9_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E10_MASK (0x00000400u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E10_SHIFT (0x0000000Au)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E11_MASK (0x00000800u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E11_SHIFT (0x0000000Bu)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E12_MASK (0x00001000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E12_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E13_MASK (0x00002000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E13_SHIFT (0x0000000Du)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E14_MASK (0x00004000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E14_SHIFT (0x0000000Eu)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E15_MASK (0x00008000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E15_SHIFT (0x0000000Fu)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E16_MASK (0x00010000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E16_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E17_MASK (0x00020000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E17_SHIFT (0x00000011u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E18_MASK (0x00040000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E18_SHIFT (0x00000012u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E19_MASK (0x00080000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E19_SHIFT (0x00000013u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E20_MASK (0x00100000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E20_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E21_MASK (0x00200000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E21_SHIFT (0x00000015u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E22_MASK (0x00400000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E22_SHIFT (0x00000016u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E23_MASK (0x00800000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E23_SHIFT (0x00000017u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E24_MASK (0x01000000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E24_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E25_MASK (0x02000000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E25_SHIFT (0x00000019u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E26_MASK (0x04000000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E26_SHIFT (0x0000001Au)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E27_MASK (0x08000000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E27_SHIFT (0x0000001Bu)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E28_MASK (0x10000000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E28_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E29_MASK (0x20000000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E29_SHIFT (0x0000001Du)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E30_MASK (0x40000000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E30_SHIFT (0x0000001Eu)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_DRAE3_E31_MASK (0x80000000u)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E31_SHIFT (0x0000001Fu)
#define CSL_TPCC_TPCC_DRAE3_DRAE3_E31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE3_RESETVAL     (0x00000000u)

/* TPCC_DRAEH3 */

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E32_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E32_SHIFT (0x00000020u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E33_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E33_SHIFT (0x00000021u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E34_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E34_SHIFT (0x00000022u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E35_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E35_SHIFT (0x00000023u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E36_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E36_SHIFT (0x00000024u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E37_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E37_SHIFT (0x00000025u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E38_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E38_SHIFT (0x00000026u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E39_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E39_SHIFT (0x00000027u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E40_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E40_SHIFT (0x00000028u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E41_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E41_SHIFT (0x00000029u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E42_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E42_SHIFT (0x0000002Au)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E43_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E43_SHIFT (0x0000002Bu)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E44_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E44_SHIFT (0x0000002Cu)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E45_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E45_SHIFT (0x0000002Du)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E46_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E46_SHIFT (0x0000002Eu)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E47_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E47_SHIFT (0x0000002Fu)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E48_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E48_SHIFT (0x00000030u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E49_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E49_SHIFT (0x00000031u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E50_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E50_SHIFT (0x00000032u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E51_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E51_SHIFT (0x00000033u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E52_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E52_SHIFT (0x00000034u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E53_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E53_SHIFT (0x00000035u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E54_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E54_SHIFT (0x00000036u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E55_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E55_SHIFT (0x00000037u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E56_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E56_SHIFT (0x00000038u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E57_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E57_SHIFT (0x00000039u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E58_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E58_SHIFT (0x0000003Au)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E59_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E59_SHIFT (0x0000003Bu)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E60_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E60_SHIFT (0x0000003Cu)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E61_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E61_SHIFT (0x0000003Du)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E62_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E62_SHIFT (0x0000003Eu)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E63_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E63_SHIFT (0x0000003Fu)
#define CSL_TPCC_TPCC_DRAEH3_DRAEH3_E63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH3_RESETVAL    (0x0FFFFFFFu)

/* TPCC_DRAE4 */

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E8_MASK (0x00000100u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E8_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E8_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E9_MASK (0x00000200u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E9_SHIFT (0x00000009u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E9_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E10_MASK (0x00000400u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E10_SHIFT (0x0000000Au)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E11_MASK (0x00000800u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E11_SHIFT (0x0000000Bu)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E12_MASK (0x00001000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E12_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E13_MASK (0x00002000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E13_SHIFT (0x0000000Du)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E14_MASK (0x00004000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E14_SHIFT (0x0000000Eu)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E15_MASK (0x00008000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E15_SHIFT (0x0000000Fu)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E16_MASK (0x00010000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E16_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E17_MASK (0x00020000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E17_SHIFT (0x00000011u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E18_MASK (0x00040000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E18_SHIFT (0x00000012u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E19_MASK (0x00080000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E19_SHIFT (0x00000013u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E20_MASK (0x00100000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E20_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E21_MASK (0x00200000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E21_SHIFT (0x00000015u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E22_MASK (0x00400000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E22_SHIFT (0x00000016u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E23_MASK (0x00800000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E23_SHIFT (0x00000017u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E24_MASK (0x01000000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E24_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E25_MASK (0x02000000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E25_SHIFT (0x00000019u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E26_MASK (0x04000000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E26_SHIFT (0x0000001Au)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E27_MASK (0x08000000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E27_SHIFT (0x0000001Bu)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E28_MASK (0x10000000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E28_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E29_MASK (0x20000000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E29_SHIFT (0x0000001Du)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E30_MASK (0x40000000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E30_SHIFT (0x0000001Eu)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_DRAE4_E31_MASK (0x80000000u)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E31_SHIFT (0x0000001Fu)
#define CSL_TPCC_TPCC_DRAE4_DRAE4_E31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE4_RESETVAL     (0x00000000u)

/* TPCC_DRAEH4 */

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E32_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E32_SHIFT (0x00000020u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E33_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E33_SHIFT (0x00000021u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E34_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E34_SHIFT (0x00000022u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E35_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E35_SHIFT (0x00000023u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E36_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E36_SHIFT (0x00000024u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E37_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E37_SHIFT (0x00000025u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E38_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E38_SHIFT (0x00000026u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E39_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E39_SHIFT (0x00000027u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E40_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E40_SHIFT (0x00000028u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E41_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E41_SHIFT (0x00000029u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E42_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E42_SHIFT (0x0000002Au)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E43_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E43_SHIFT (0x0000002Bu)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E44_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E44_SHIFT (0x0000002Cu)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E45_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E45_SHIFT (0x0000002Du)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E46_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E46_SHIFT (0x0000002Eu)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E47_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E47_SHIFT (0x0000002Fu)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E48_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E48_SHIFT (0x00000030u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E49_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E49_SHIFT (0x00000031u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E50_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E50_SHIFT (0x00000032u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E51_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E51_SHIFT (0x00000033u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E52_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E52_SHIFT (0x00000034u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E53_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E53_SHIFT (0x00000035u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E54_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E54_SHIFT (0x00000036u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E55_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E55_SHIFT (0x00000037u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E56_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E56_SHIFT (0x00000038u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E57_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E57_SHIFT (0x00000039u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E58_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E58_SHIFT (0x0000003Au)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E59_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E59_SHIFT (0x0000003Bu)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E60_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E60_SHIFT (0x0000003Cu)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E61_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E61_SHIFT (0x0000003Du)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E62_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E62_SHIFT (0x0000003Eu)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E63_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E63_SHIFT (0x0000003Fu)
#define CSL_TPCC_TPCC_DRAEH4_DRAEH4_E63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH4_RESETVAL    (0x0FFFFFFFu)

/* TPCC_DRAE5 */

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E8_MASK (0x00000100u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E8_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E8_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E9_MASK (0x00000200u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E9_SHIFT (0x00000009u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E9_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E10_MASK (0x00000400u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E10_SHIFT (0x0000000Au)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E11_MASK (0x00000800u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E11_SHIFT (0x0000000Bu)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E12_MASK (0x00001000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E12_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E13_MASK (0x00002000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E13_SHIFT (0x0000000Du)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E14_MASK (0x00004000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E14_SHIFT (0x0000000Eu)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E15_MASK (0x00008000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E15_SHIFT (0x0000000Fu)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E16_MASK (0x00010000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E16_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E17_MASK (0x00020000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E17_SHIFT (0x00000011u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E18_MASK (0x00040000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E18_SHIFT (0x00000012u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E19_MASK (0x00080000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E19_SHIFT (0x00000013u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E20_MASK (0x00100000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E20_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E21_MASK (0x00200000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E21_SHIFT (0x00000015u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E22_MASK (0x00400000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E22_SHIFT (0x00000016u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E23_MASK (0x00800000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E23_SHIFT (0x00000017u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E24_MASK (0x01000000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E24_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E25_MASK (0x02000000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E25_SHIFT (0x00000019u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E26_MASK (0x04000000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E26_SHIFT (0x0000001Au)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E27_MASK (0x08000000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E27_SHIFT (0x0000001Bu)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E28_MASK (0x10000000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E28_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E29_MASK (0x20000000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E29_SHIFT (0x0000001Du)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E30_MASK (0x40000000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E30_SHIFT (0x0000001Eu)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_DRAE5_E31_MASK (0x80000000u)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E31_SHIFT (0x0000001Fu)
#define CSL_TPCC_TPCC_DRAE5_DRAE5_E31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE5_RESETVAL     (0x00000000u)

/* TPCC_DRAEH5 */

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E32_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E32_SHIFT (0x00000020u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E33_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E33_SHIFT (0x00000021u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E34_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E34_SHIFT (0x00000022u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E35_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E35_SHIFT (0x00000023u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E36_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E36_SHIFT (0x00000024u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E37_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E37_SHIFT (0x00000025u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E38_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E38_SHIFT (0x00000026u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E39_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E39_SHIFT (0x00000027u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E40_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E40_SHIFT (0x00000028u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E41_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E41_SHIFT (0x00000029u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E42_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E42_SHIFT (0x0000002Au)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E43_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E43_SHIFT (0x0000002Bu)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E44_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E44_SHIFT (0x0000002Cu)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E45_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E45_SHIFT (0x0000002Du)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E46_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E46_SHIFT (0x0000002Eu)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E47_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E47_SHIFT (0x0000002Fu)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E48_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E48_SHIFT (0x00000030u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E49_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E49_SHIFT (0x00000031u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E50_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E50_SHIFT (0x00000032u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E51_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E51_SHIFT (0x00000033u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E52_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E52_SHIFT (0x00000034u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E53_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E53_SHIFT (0x00000035u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E54_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E54_SHIFT (0x00000036u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E55_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E55_SHIFT (0x00000037u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E56_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E56_SHIFT (0x00000038u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E57_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E57_SHIFT (0x00000039u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E58_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E58_SHIFT (0x0000003Au)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E59_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E59_SHIFT (0x0000003Bu)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E60_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E60_SHIFT (0x0000003Cu)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E61_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E61_SHIFT (0x0000003Du)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E62_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E62_SHIFT (0x0000003Eu)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E63_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E63_SHIFT (0x0000003Fu)
#define CSL_TPCC_TPCC_DRAEH5_DRAEH5_E63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH5_RESETVAL    (0x0FFFFFFFu)

/* TPCC_DRAE6 */

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E8_MASK (0x00000100u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E8_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E8_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E9_MASK (0x00000200u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E9_SHIFT (0x00000009u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E9_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E10_MASK (0x00000400u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E10_SHIFT (0x0000000Au)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E11_MASK (0x00000800u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E11_SHIFT (0x0000000Bu)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E12_MASK (0x00001000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E12_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E13_MASK (0x00002000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E13_SHIFT (0x0000000Du)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E14_MASK (0x00004000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E14_SHIFT (0x0000000Eu)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E15_MASK (0x00008000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E15_SHIFT (0x0000000Fu)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E16_MASK (0x00010000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E16_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E17_MASK (0x00020000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E17_SHIFT (0x00000011u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E18_MASK (0x00040000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E18_SHIFT (0x00000012u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E19_MASK (0x00080000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E19_SHIFT (0x00000013u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E20_MASK (0x00100000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E20_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E21_MASK (0x00200000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E21_SHIFT (0x00000015u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E22_MASK (0x00400000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E22_SHIFT (0x00000016u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E23_MASK (0x00800000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E23_SHIFT (0x00000017u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E24_MASK (0x01000000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E24_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E25_MASK (0x02000000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E25_SHIFT (0x00000019u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E26_MASK (0x04000000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E26_SHIFT (0x0000001Au)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E27_MASK (0x08000000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E27_SHIFT (0x0000001Bu)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E28_MASK (0x10000000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E28_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E29_MASK (0x20000000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E29_SHIFT (0x0000001Du)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E30_MASK (0x40000000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E30_SHIFT (0x0000001Eu)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_DRAE6_E31_MASK (0x80000000u)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E31_SHIFT (0x0000001Fu)
#define CSL_TPCC_TPCC_DRAE6_DRAE6_E31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE6_RESETVAL     (0x00000000u)

/* TPCC_DRAEH6 */

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E32_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E32_SHIFT (0x00000020u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E33_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E33_SHIFT (0x00000021u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E34_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E34_SHIFT (0x00000022u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E35_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E35_SHIFT (0x00000023u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E36_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E36_SHIFT (0x00000024u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E37_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E37_SHIFT (0x00000025u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E38_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E38_SHIFT (0x00000026u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E39_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E39_SHIFT (0x00000027u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E40_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E40_SHIFT (0x00000028u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E41_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E41_SHIFT (0x00000029u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E42_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E42_SHIFT (0x0000002Au)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E43_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E43_SHIFT (0x0000002Bu)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E44_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E44_SHIFT (0x0000002Cu)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E45_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E45_SHIFT (0x0000002Du)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E46_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E46_SHIFT (0x0000002Eu)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E47_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E47_SHIFT (0x0000002Fu)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E48_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E48_SHIFT (0x00000030u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E49_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E49_SHIFT (0x00000031u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E50_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E50_SHIFT (0x00000032u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E51_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E51_SHIFT (0x00000033u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E52_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E52_SHIFT (0x00000034u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E53_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E53_SHIFT (0x00000035u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E54_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E54_SHIFT (0x00000036u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E55_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E55_SHIFT (0x00000037u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E56_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E56_SHIFT (0x00000038u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E57_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E57_SHIFT (0x00000039u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E58_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E58_SHIFT (0x0000003Au)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E59_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E59_SHIFT (0x0000003Bu)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E60_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E60_SHIFT (0x0000003Cu)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E61_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E61_SHIFT (0x0000003Du)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E62_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E62_SHIFT (0x0000003Eu)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E63_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E63_SHIFT (0x0000003Fu)
#define CSL_TPCC_TPCC_DRAEH6_DRAEH6_E63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH6_RESETVAL    (0x0FFFFFFFu)

/* TPCC_DRAE7 */

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E8_MASK (0x00000100u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E8_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E8_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E9_MASK (0x00000200u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E9_SHIFT (0x00000009u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E9_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E10_MASK (0x00000400u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E10_SHIFT (0x0000000Au)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E11_MASK (0x00000800u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E11_SHIFT (0x0000000Bu)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E12_MASK (0x00001000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E12_SHIFT (0x0000000Cu)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E13_MASK (0x00002000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E13_SHIFT (0x0000000Du)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E14_MASK (0x00004000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E14_SHIFT (0x0000000Eu)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E15_MASK (0x00008000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E15_SHIFT (0x0000000Fu)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E16_MASK (0x00010000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E16_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E17_MASK (0x00020000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E17_SHIFT (0x00000011u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E18_MASK (0x00040000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E18_SHIFT (0x00000012u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E19_MASK (0x00080000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E19_SHIFT (0x00000013u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E20_MASK (0x00100000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E20_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E21_MASK (0x00200000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E21_SHIFT (0x00000015u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E22_MASK (0x00400000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E22_SHIFT (0x00000016u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E23_MASK (0x00800000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E23_SHIFT (0x00000017u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E24_MASK (0x01000000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E24_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E25_MASK (0x02000000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E25_SHIFT (0x00000019u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E26_MASK (0x04000000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E26_SHIFT (0x0000001Au)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E27_MASK (0x08000000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E27_SHIFT (0x0000001Bu)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E28_MASK (0x10000000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E28_SHIFT (0x0000001Cu)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E29_MASK (0x20000000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E29_SHIFT (0x0000001Du)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E30_MASK (0x40000000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E30_SHIFT (0x0000001Eu)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_DRAE7_E31_MASK (0x80000000u)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E31_SHIFT (0x0000001Fu)
#define CSL_TPCC_TPCC_DRAE7_DRAE7_E31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAE7_RESETVAL     (0x00000000u)

/* TPCC_DRAEH7 */

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E32_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E32_SHIFT (0x00000020u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E33_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E33_SHIFT (0x00000021u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E34_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E34_SHIFT (0x00000022u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E35_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E35_SHIFT (0x00000023u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E36_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E36_SHIFT (0x00000024u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E37_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E37_SHIFT (0x00000025u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E38_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E38_SHIFT (0x00000026u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E39_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E39_SHIFT (0x00000027u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E40_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E40_SHIFT (0x00000028u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E41_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E41_SHIFT (0x00000029u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E42_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E42_SHIFT (0x0000002Au)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E43_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E43_SHIFT (0x0000002Bu)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E44_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E44_SHIFT (0x0000002Cu)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E45_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E45_SHIFT (0x0000002Du)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E46_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E46_SHIFT (0x0000002Eu)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E47_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E47_SHIFT (0x0000002Fu)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E48_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E48_SHIFT (0x00000030u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E49_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E49_SHIFT (0x00000031u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E50_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E50_SHIFT (0x00000032u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E51_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E51_SHIFT (0x00000033u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E52_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E52_SHIFT (0x00000034u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E53_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E53_SHIFT (0x00000035u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E54_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E54_SHIFT (0x00000036u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E55_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E55_SHIFT (0x00000037u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E56_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E56_SHIFT (0x00000038u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E57_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E57_SHIFT (0x00000039u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E58_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E58_SHIFT (0x0000003Au)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E59_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E59_SHIFT (0x0000003Bu)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E60_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E60_SHIFT (0x0000003Cu)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E61_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E61_SHIFT (0x0000003Du)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E62_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E62_SHIFT (0x0000003Eu)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E63_MASK (0x00000000u)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E63_SHIFT (0x0000003Fu)
#define CSL_TPCC_TPCC_DRAEH7_DRAEH7_E63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_DRAEH7_RESETVAL    (0x0FFFFFFFu)

/* TPCC_QRAE0 */

#define CSL_TPCC_TPCC_QRAE0_QRAE0_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE0_QRAE0_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE0_QRAE0_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE0_QRAE0_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE0_QRAE0_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE0_QRAE0_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE0_QRAE0_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE0_QRAE0_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_QRAE0_QRAE0_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE0_RESETVAL     (0x00000000u)

/* TPCC_QRAE1 */

#define CSL_TPCC_TPCC_QRAE1_QRAE1_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE1_QRAE1_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE1_QRAE1_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE1_QRAE1_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE1_QRAE1_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE1_QRAE1_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE1_QRAE1_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE1_QRAE1_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_QRAE1_QRAE1_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE1_RESETVAL     (0x00000000u)

/* TPCC_QRAE2 */

#define CSL_TPCC_TPCC_QRAE2_QRAE2_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE2_QRAE2_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE2_QRAE2_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE2_QRAE2_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE2_QRAE2_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE2_QRAE2_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE2_QRAE2_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE2_QRAE2_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_QRAE2_QRAE2_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE2_RESETVAL     (0x00000000u)

/* TPCC_QRAE3 */

#define CSL_TPCC_TPCC_QRAE3_QRAE3_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE3_QRAE3_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE3_QRAE3_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE3_QRAE3_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE3_QRAE3_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE3_QRAE3_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE3_QRAE3_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE3_QRAE3_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_QRAE3_QRAE3_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE3_RESETVAL     (0x00000000u)

/* TPCC_QRAE4 */

#define CSL_TPCC_TPCC_QRAE4_QRAE4_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE4_QRAE4_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE4_QRAE4_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE4_QRAE4_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE4_QRAE4_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE4_QRAE4_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE4_QRAE4_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE4_QRAE4_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_QRAE4_QRAE4_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE4_RESETVAL     (0x00000000u)

/* TPCC_QRAE5 */

#define CSL_TPCC_TPCC_QRAE5_QRAE5_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE5_QRAE5_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE5_QRAE5_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE5_QRAE5_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE5_QRAE5_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE5_QRAE5_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE5_QRAE5_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE5_QRAE5_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_QRAE5_QRAE5_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE5_RESETVAL     (0x00000000u)

/* TPCC_QRAE6 */

#define CSL_TPCC_TPCC_QRAE6_QRAE6_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE6_QRAE6_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE6_QRAE6_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE6_QRAE6_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE6_QRAE6_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE6_QRAE6_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE6_QRAE6_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE6_QRAE6_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_QRAE6_QRAE6_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE6_RESETVAL     (0x00000000u)

/* TPCC_QRAE7 */

#define CSL_TPCC_TPCC_QRAE7_QRAE7_E0_MASK (0x00000001u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE7_QRAE7_E1_MASK (0x00000002u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE7_QRAE7_E2_MASK (0x00000004u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE7_QRAE7_E3_MASK (0x00000008u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE7_QRAE7_E4_MASK (0x00000010u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE7_QRAE7_E5_MASK (0x00000020u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE7_QRAE7_E6_MASK (0x00000040u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE7_QRAE7_E7_MASK (0x00000080u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_QRAE7_QRAE7_E7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QRAE7_RESETVAL     (0x00000000u)

/* TPCC_Q0E0 */

#define CSL_TPCC_TPCC_Q0E0_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E0_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q0E0_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E0_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E0_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q0E0_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E0_RESETVAL      (0x00000000u)

/* TPCC_Q0E1 */

#define CSL_TPCC_TPCC_Q0E1_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E1_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q0E1_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E1_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E1_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q0E1_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E1_RESETVAL      (0x00000000u)

/* TPCC_Q0E2 */

#define CSL_TPCC_TPCC_Q0E2_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E2_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q0E2_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E2_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E2_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q0E2_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E2_RESETVAL      (0x00000000u)

/* TPCC_Q0E3 */

#define CSL_TPCC_TPCC_Q0E3_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E3_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q0E3_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E3_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E3_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q0E3_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E3_RESETVAL      (0x00000000u)

/* TPCC_Q0E4 */

#define CSL_TPCC_TPCC_Q0E4_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E4_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q0E4_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E4_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E4_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q0E4_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E4_RESETVAL      (0x00000000u)

/* TPCC_Q0E5 */

#define CSL_TPCC_TPCC_Q0E5_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E5_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q0E5_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E5_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E5_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q0E5_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E5_RESETVAL      (0x00000000u)

/* TPCC_Q0E6 */

#define CSL_TPCC_TPCC_Q0E6_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E6_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q0E6_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E6_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E6_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q0E6_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E6_RESETVAL      (0x00000000u)

/* TPCC_Q0E7 */

#define CSL_TPCC_TPCC_Q0E7_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E7_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q0E7_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E7_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E7_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q0E7_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E7_RESETVAL      (0x00000000u)

/* TPCC_Q0E8 */

#define CSL_TPCC_TPCC_Q0E8_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E8_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q0E8_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E8_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E8_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q0E8_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E8_RESETVAL      (0x00000000u)

/* TPCC_Q0E9 */

#define CSL_TPCC_TPCC_Q0E9_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E9_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q0E9_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E9_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E9_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q0E9_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E9_RESETVAL      (0x00000000u)

/* TPCC_Q0E10 */

#define CSL_TPCC_TPCC_Q0E10_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E10_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q0E10_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E10_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E10_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q0E10_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E10_RESETVAL     (0x00000000u)

/* TPCC_Q0E11 */

#define CSL_TPCC_TPCC_Q0E11_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E11_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q0E11_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E11_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E11_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q0E11_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E11_RESETVAL     (0x00000000u)

/* TPCC_Q0E12 */

#define CSL_TPCC_TPCC_Q0E12_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E12_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q0E12_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E12_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E12_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q0E12_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E12_RESETVAL     (0x00000000u)

/* TPCC_Q0E13 */

#define CSL_TPCC_TPCC_Q0E13_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E13_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q0E13_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E13_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E13_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q0E13_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E13_RESETVAL     (0x00000000u)

/* TPCC_Q0E14 */

#define CSL_TPCC_TPCC_Q0E14_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E14_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q0E14_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E14_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E14_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q0E14_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E14_RESETVAL     (0x00000000u)

/* TPCC_Q0E15 */

#define CSL_TPCC_TPCC_Q0E15_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q0E15_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q0E15_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E15_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q0E15_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q0E15_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q0E15_RESETVAL     (0x00000000u)

/* TPCC_Q1E0 */

#define CSL_TPCC_TPCC_Q1E0_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E0_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q1E0_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E0_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E0_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q1E0_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E0_RESETVAL      (0x00000000u)

/* TPCC_Q1E1 */

#define CSL_TPCC_TPCC_Q1E1_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E1_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q1E1_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E1_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E1_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q1E1_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E1_RESETVAL      (0x00000000u)

/* TPCC_Q1E2 */

#define CSL_TPCC_TPCC_Q1E2_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E2_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q1E2_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E2_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E2_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q1E2_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E2_RESETVAL      (0x00000000u)

/* TPCC_Q1E3 */

#define CSL_TPCC_TPCC_Q1E3_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E3_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q1E3_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E3_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E3_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q1E3_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E3_RESETVAL      (0x00000000u)

/* TPCC_Q1E4 */

#define CSL_TPCC_TPCC_Q1E4_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E4_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q1E4_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E4_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E4_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q1E4_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E4_RESETVAL      (0x00000000u)

/* TPCC_Q1E5 */

#define CSL_TPCC_TPCC_Q1E5_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E5_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q1E5_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E5_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E5_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q1E5_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E5_RESETVAL      (0x00000000u)

/* TPCC_Q1E6 */

#define CSL_TPCC_TPCC_Q1E6_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E6_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q1E6_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E6_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E6_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q1E6_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E6_RESETVAL      (0x00000000u)

/* TPCC_Q1E7 */

#define CSL_TPCC_TPCC_Q1E7_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E7_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q1E7_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E7_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E7_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q1E7_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E7_RESETVAL      (0x00000000u)

/* TPCC_Q1E8 */

#define CSL_TPCC_TPCC_Q1E8_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E8_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q1E8_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E8_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E8_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q1E8_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E8_RESETVAL      (0x00000000u)

/* TPCC_Q1E9 */

#define CSL_TPCC_TPCC_Q1E9_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E9_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q1E9_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E9_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E9_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q1E9_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E9_RESETVAL      (0x00000000u)

/* TPCC_Q1E10 */

#define CSL_TPCC_TPCC_Q1E10_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E10_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q1E10_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E10_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E10_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q1E10_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E10_RESETVAL     (0x00000000u)

/* TPCC_Q1E11 */

#define CSL_TPCC_TPCC_Q1E11_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E11_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q1E11_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E11_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E11_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q1E11_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E11_RESETVAL     (0x00000000u)

/* TPCC_Q1E12 */

#define CSL_TPCC_TPCC_Q1E12_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E12_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q1E12_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E12_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E12_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q1E12_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E12_RESETVAL     (0x00000000u)

/* TPCC_Q1E13 */

#define CSL_TPCC_TPCC_Q1E13_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E13_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q1E13_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E13_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E13_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q1E13_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E13_RESETVAL     (0x00000000u)

/* TPCC_Q1E14 */

#define CSL_TPCC_TPCC_Q1E14_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E14_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q1E14_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E14_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E14_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q1E14_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E14_RESETVAL     (0x00000000u)

/* TPCC_Q1E15 */

#define CSL_TPCC_TPCC_Q1E15_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q1E15_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q1E15_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E15_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q1E15_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q1E15_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q1E15_RESETVAL     (0x00000000u)

/* TPCC_Q2E0 */

#define CSL_TPCC_TPCC_Q2E0_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E0_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q2E0_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E0_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E0_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q2E0_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E0_RESETVAL      (0x00000000u)

/* TPCC_Q2E1 */

#define CSL_TPCC_TPCC_Q2E1_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E1_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q2E1_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E1_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E1_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q2E1_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E1_RESETVAL      (0x00000000u)

/* TPCC_Q2E2 */

#define CSL_TPCC_TPCC_Q2E2_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E2_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q2E2_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E2_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E2_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q2E2_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E2_RESETVAL      (0x00000000u)

/* TPCC_Q2E3 */

#define CSL_TPCC_TPCC_Q2E3_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E3_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q2E3_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E3_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E3_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q2E3_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E3_RESETVAL      (0x00000000u)

/* TPCC_Q2E4 */

#define CSL_TPCC_TPCC_Q2E4_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E4_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q2E4_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E4_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E4_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q2E4_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E4_RESETVAL      (0x00000000u)

/* TPCC_Q2E5 */

#define CSL_TPCC_TPCC_Q2E5_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E5_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q2E5_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E5_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E5_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q2E5_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E5_RESETVAL      (0x00000000u)

/* TPCC_Q2E6 */

#define CSL_TPCC_TPCC_Q2E6_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E6_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q2E6_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E6_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E6_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q2E6_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E6_RESETVAL      (0x00000000u)

/* TPCC_Q2E7 */

#define CSL_TPCC_TPCC_Q2E7_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E7_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q2E7_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E7_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E7_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q2E7_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E7_RESETVAL      (0x00000000u)

/* TPCC_Q2E8 */

#define CSL_TPCC_TPCC_Q2E8_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E8_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q2E8_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E8_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E8_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q2E8_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E8_RESETVAL      (0x00000000u)

/* TPCC_Q2E9 */

#define CSL_TPCC_TPCC_Q2E9_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E9_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q2E9_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E9_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E9_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q2E9_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E9_RESETVAL      (0x00000000u)

/* TPCC_Q2E10 */

#define CSL_TPCC_TPCC_Q2E10_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E10_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q2E10_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E10_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E10_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q2E10_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E10_RESETVAL     (0x00000000u)

/* TPCC_Q2E11 */

#define CSL_TPCC_TPCC_Q2E11_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E11_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q2E11_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E11_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E11_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q2E11_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E11_RESETVAL     (0x00000000u)

/* TPCC_Q2E12 */

#define CSL_TPCC_TPCC_Q2E12_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E12_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q2E12_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E12_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E12_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q2E12_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E12_RESETVAL     (0x00000000u)

/* TPCC_Q2E13 */

#define CSL_TPCC_TPCC_Q2E13_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E13_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q2E13_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E13_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E13_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q2E13_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E13_RESETVAL     (0x00000000u)

/* TPCC_Q2E14 */

#define CSL_TPCC_TPCC_Q2E14_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E14_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q2E14_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E14_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E14_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q2E14_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E14_RESETVAL     (0x00000000u)

/* TPCC_Q2E15 */

#define CSL_TPCC_TPCC_Q2E15_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q2E15_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q2E15_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E15_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q2E15_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q2E15_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q2E15_RESETVAL     (0x00000000u)

/* TPCC_Q3E0 */

#define CSL_TPCC_TPCC_Q3E0_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E0_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q3E0_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E0_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E0_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q3E0_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E0_RESETVAL      (0x00000000u)

/* TPCC_Q3E1 */

#define CSL_TPCC_TPCC_Q3E1_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E1_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q3E1_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E1_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E1_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q3E1_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E1_RESETVAL      (0x00000000u)

/* TPCC_Q3E2 */

#define CSL_TPCC_TPCC_Q3E2_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E2_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q3E2_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E2_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E2_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q3E2_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E2_RESETVAL      (0x00000000u)

/* TPCC_Q3E3 */

#define CSL_TPCC_TPCC_Q3E3_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E3_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q3E3_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E3_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E3_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q3E3_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E3_RESETVAL      (0x00000000u)

/* TPCC_Q3E4 */

#define CSL_TPCC_TPCC_Q3E4_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E4_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q3E4_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E4_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E4_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q3E4_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E4_RESETVAL      (0x00000000u)

/* TPCC_Q3E5 */

#define CSL_TPCC_TPCC_Q3E5_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E5_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q3E5_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E5_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E5_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q3E5_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E5_RESETVAL      (0x00000000u)

/* TPCC_Q3E6 */

#define CSL_TPCC_TPCC_Q3E6_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E6_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q3E6_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E6_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E6_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q3E6_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E6_RESETVAL      (0x00000000u)

/* TPCC_Q3E7 */

#define CSL_TPCC_TPCC_Q3E7_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E7_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q3E7_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E7_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E7_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q3E7_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E7_RESETVAL      (0x00000000u)

/* TPCC_Q3E8 */

#define CSL_TPCC_TPCC_Q3E8_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E8_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q3E8_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E8_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E8_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q3E8_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E8_RESETVAL      (0x00000000u)

/* TPCC_Q3E9 */

#define CSL_TPCC_TPCC_Q3E9_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E9_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q3E9_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E9_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E9_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q3E9_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E9_RESETVAL      (0x00000000u)

/* TPCC_Q3E10 */

#define CSL_TPCC_TPCC_Q3E10_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E10_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q3E10_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E10_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E10_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q3E10_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E10_RESETVAL     (0x00000000u)

/* TPCC_Q3E11 */

#define CSL_TPCC_TPCC_Q3E11_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E11_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q3E11_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E11_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E11_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q3E11_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E11_RESETVAL     (0x00000000u)

/* TPCC_Q3E12 */

#define CSL_TPCC_TPCC_Q3E12_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E12_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q3E12_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E12_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E12_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q3E12_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E12_RESETVAL     (0x00000000u)

/* TPCC_Q3E13 */

#define CSL_TPCC_TPCC_Q3E13_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E13_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q3E13_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E13_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E13_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q3E13_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E13_RESETVAL     (0x00000000u)

/* TPCC_Q3E14 */

#define CSL_TPCC_TPCC_Q3E14_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E14_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q3E14_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E14_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E14_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q3E14_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E14_RESETVAL     (0x00000000u)

/* TPCC_Q3E15 */

#define CSL_TPCC_TPCC_Q3E15_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q3E15_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q3E15_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E15_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q3E15_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q3E15_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q3E15_RESETVAL     (0x00000000u)

/* TPCC_Q4E0 */

#define CSL_TPCC_TPCC_Q4E0_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E0_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q4E0_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E0_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E0_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q4E0_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E0_RESETVAL      (0x00000000u)

/* TPCC_Q4E1 */

#define CSL_TPCC_TPCC_Q4E1_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E1_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q4E1_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E1_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E1_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q4E1_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E1_RESETVAL      (0x00000000u)

/* TPCC_Q4E2 */

#define CSL_TPCC_TPCC_Q4E2_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E2_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q4E2_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E2_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E2_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q4E2_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E2_RESETVAL      (0x00000000u)

/* TPCC_Q4E3 */

#define CSL_TPCC_TPCC_Q4E3_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E3_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q4E3_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E3_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E3_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q4E3_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E3_RESETVAL      (0x00000000u)

/* TPCC_Q4E4 */

#define CSL_TPCC_TPCC_Q4E4_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E4_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q4E4_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E4_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E4_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q4E4_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E4_RESETVAL      (0x00000000u)

/* TPCC_Q4E5 */

#define CSL_TPCC_TPCC_Q4E5_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E5_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q4E5_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E5_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E5_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q4E5_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E5_RESETVAL      (0x00000000u)

/* TPCC_Q4E6 */

#define CSL_TPCC_TPCC_Q4E6_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E6_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q4E6_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E6_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E6_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q4E6_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E6_RESETVAL      (0x00000000u)

/* TPCC_Q4E7 */

#define CSL_TPCC_TPCC_Q4E7_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E7_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q4E7_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E7_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E7_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q4E7_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E7_RESETVAL      (0x00000000u)

/* TPCC_Q4E8 */

#define CSL_TPCC_TPCC_Q4E8_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E8_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q4E8_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E8_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E8_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q4E8_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E8_RESETVAL      (0x00000000u)

/* TPCC_Q4E9 */

#define CSL_TPCC_TPCC_Q4E9_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E9_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q4E9_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E9_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E9_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q4E9_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E9_RESETVAL      (0x00000000u)

/* TPCC_Q4E10 */

#define CSL_TPCC_TPCC_Q4E10_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E10_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q4E10_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E10_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E10_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q4E10_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E10_RESETVAL     (0x00000000u)

/* TPCC_Q4E11 */

#define CSL_TPCC_TPCC_Q4E11_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E11_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q4E11_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E11_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E11_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q4E11_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E11_RESETVAL     (0x00000000u)

/* TPCC_Q4E12 */

#define CSL_TPCC_TPCC_Q4E12_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E12_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q4E12_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E12_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E12_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q4E12_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E12_RESETVAL     (0x00000000u)

/* TPCC_Q4E13 */

#define CSL_TPCC_TPCC_Q4E13_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E13_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q4E13_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E13_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E13_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q4E13_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E13_RESETVAL     (0x00000000u)

/* TPCC_Q4E14 */

#define CSL_TPCC_TPCC_Q4E14_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q4E14_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q4E14_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E14_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q4E14_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q4E14_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E14_RESETVAL     (0x00000000u)

/* TPCC_Q4E15 */

#define CSL_TPCC_TPCC_Q4E15_TPCC_Q4E15_MASK (0xFFFFFFFFu)
#define CSL_TPCC_TPCC_Q4E15_TPCC_Q4E15_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_Q4E15_TPCC_Q4E15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q4E15_RESETVAL     (0x00000000u)

/* TPCC_Q5E0 */

#define CSL_TPCC_TPCC_Q5E0_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E0_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q5E0_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E0_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E0_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q5E0_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E0_RESETVAL      (0x00000000u)

/* TPCC_Q5E1 */

#define CSL_TPCC_TPCC_Q5E1_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E1_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q5E1_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E1_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E1_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q5E1_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E1_RESETVAL      (0x00000000u)

/* TPCC_Q5E2 */

#define CSL_TPCC_TPCC_Q5E2_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E2_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q5E2_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E2_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E2_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q5E2_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E2_RESETVAL      (0x00000000u)

/* TPCC_Q5E3 */

#define CSL_TPCC_TPCC_Q5E3_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E3_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q5E3_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E3_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E3_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q5E3_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E3_RESETVAL      (0x00000000u)

/* TPCC_Q5E4 */

#define CSL_TPCC_TPCC_Q5E4_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E4_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q5E4_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E4_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E4_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q5E4_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E4_RESETVAL      (0x00000000u)

/* TPCC_Q5E5 */

#define CSL_TPCC_TPCC_Q5E5_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E5_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q5E5_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E5_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E5_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q5E5_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E5_RESETVAL      (0x00000000u)

/* TPCC_Q5E6 */

#define CSL_TPCC_TPCC_Q5E6_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E6_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q5E6_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E6_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E6_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q5E6_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E6_RESETVAL      (0x00000000u)

/* TPCC_Q5E7 */

#define CSL_TPCC_TPCC_Q5E7_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E7_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q5E7_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E7_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E7_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q5E7_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E7_RESETVAL      (0x00000000u)

/* TPCC_Q5E8 */

#define CSL_TPCC_TPCC_Q5E8_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E8_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q5E8_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E8_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E8_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q5E8_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E8_RESETVAL      (0x00000000u)

/* TPCC_Q5E9 */

#define CSL_TPCC_TPCC_Q5E9_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E9_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q5E9_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E9_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E9_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q5E9_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E9_RESETVAL      (0x00000000u)

/* TPCC_Q5E10 */

#define CSL_TPCC_TPCC_Q5E10_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E10_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q5E10_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E10_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E10_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q5E10_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E10_RESETVAL     (0x00000000u)

/* TPCC_Q5E11 */

#define CSL_TPCC_TPCC_Q5E11_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E11_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q5E11_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E11_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E11_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q5E11_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E11_RESETVAL     (0x00000000u)

/* TPCC_Q5E12 */

#define CSL_TPCC_TPCC_Q5E12_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E12_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q5E12_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E12_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E12_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q5E12_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E12_RESETVAL     (0x00000000u)

/* TPCC_Q5E13 */

#define CSL_TPCC_TPCC_Q5E13_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E13_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q5E13_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E13_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E13_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q5E13_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E13_RESETVAL     (0x00000000u)

/* TPCC_Q5E14 */

#define CSL_TPCC_TPCC_Q5E14_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E14_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q5E14_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E14_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E14_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q5E14_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E14_RESETVAL     (0x00000000u)

/* TPCC_Q5E15 */

#define CSL_TPCC_TPCC_Q5E15_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q5E15_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q5E15_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E15_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q5E15_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q5E15_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q5E15_RESETVAL     (0x00000000u)

/* TPCC_Q6E0 */

#define CSL_TPCC_TPCC_Q6E0_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E0_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q6E0_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E0_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E0_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q6E0_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E0_RESETVAL      (0x00000000u)

/* TPCC_Q6E1 */

#define CSL_TPCC_TPCC_Q6E1_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E1_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q6E1_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E1_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E1_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q6E1_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E1_RESETVAL      (0x00000000u)

/* TPCC_Q6E2 */

#define CSL_TPCC_TPCC_Q6E2_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E2_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q6E2_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E2_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E2_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q6E2_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E2_RESETVAL      (0x00000000u)

/* TPCC_Q6E3 */

#define CSL_TPCC_TPCC_Q6E3_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E3_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q6E3_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E3_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E3_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q6E3_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E3_RESETVAL      (0x00000000u)

/* TPCC_Q6E4 */

#define CSL_TPCC_TPCC_Q6E4_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E4_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q6E4_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E4_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E4_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q6E4_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E4_RESETVAL      (0x00000000u)

/* TPCC_Q6E5 */

#define CSL_TPCC_TPCC_Q6E5_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E5_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q6E5_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E5_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E5_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q6E5_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E5_RESETVAL      (0x00000000u)

/* TPCC_Q6E6 */

#define CSL_TPCC_TPCC_Q6E6_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E6_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q6E6_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E6_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E6_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q6E6_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E6_RESETVAL      (0x00000000u)

/* TPCC_Q6E7 */

#define CSL_TPCC_TPCC_Q6E7_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E7_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q6E7_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E7_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E7_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q6E7_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E7_RESETVAL      (0x00000000u)

/* TPCC_Q6E8 */

#define CSL_TPCC_TPCC_Q6E8_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E8_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q6E8_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E8_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E8_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q6E8_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E8_RESETVAL      (0x00000000u)

/* TPCC_Q6E9 */

#define CSL_TPCC_TPCC_Q6E9_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E9_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q6E9_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E9_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E9_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q6E9_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E9_RESETVAL      (0x00000000u)

/* TPCC_Q6E10 */

#define CSL_TPCC_TPCC_Q6E10_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E10_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q6E10_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E10_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E10_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q6E10_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E10_RESETVAL     (0x00000000u)

/* TPCC_Q6E11 */

#define CSL_TPCC_TPCC_Q6E11_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E11_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q6E11_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E11_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E11_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q6E11_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E11_RESETVAL     (0x00000000u)

/* TPCC_Q6E12 */

#define CSL_TPCC_TPCC_Q6E12_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E12_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q6E12_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E12_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E12_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q6E12_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E12_RESETVAL     (0x00000000u)

/* TPCC_Q6E13 */

#define CSL_TPCC_TPCC_Q6E13_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E13_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q6E13_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E13_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E13_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q6E13_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E13_RESETVAL     (0x00000000u)

/* TPCC_Q6E14 */

#define CSL_TPCC_TPCC_Q6E14_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E14_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q6E14_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E14_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E14_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q6E14_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E14_RESETVAL     (0x00000000u)

/* TPCC_Q6E15 */

#define CSL_TPCC_TPCC_Q6E15_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q6E15_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q6E15_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E15_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q6E15_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q6E15_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q6E15_RESETVAL     (0x00000000u)

/* TPCC_Q7E0 */

#define CSL_TPCC_TPCC_Q7E0_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E0_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q7E0_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E0_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E0_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q7E0_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E0_RESETVAL      (0x00000000u)

/* TPCC_Q7E1 */

#define CSL_TPCC_TPCC_Q7E1_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E1_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q7E1_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E1_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E1_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q7E1_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E1_RESETVAL      (0x00000000u)

/* TPCC_Q7E2 */

#define CSL_TPCC_TPCC_Q7E2_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E2_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q7E2_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E2_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E2_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q7E2_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E2_RESETVAL      (0x00000000u)

/* TPCC_Q7E3 */

#define CSL_TPCC_TPCC_Q7E3_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E3_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q7E3_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E3_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E3_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q7E3_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E3_RESETVAL      (0x00000000u)

/* TPCC_Q7E4 */

#define CSL_TPCC_TPCC_Q7E4_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E4_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q7E4_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E4_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E4_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q7E4_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E4_RESETVAL      (0x00000000u)

/* TPCC_Q7E5 */

#define CSL_TPCC_TPCC_Q7E5_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E5_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q7E5_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E5_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E5_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q7E5_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E5_RESETVAL      (0x00000000u)

/* TPCC_Q7E6 */

#define CSL_TPCC_TPCC_Q7E6_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E6_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q7E6_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E6_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E6_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q7E6_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E6_RESETVAL      (0x00000000u)

/* TPCC_Q7E7 */

#define CSL_TPCC_TPCC_Q7E7_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E7_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q7E7_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E7_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E7_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q7E7_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E7_RESETVAL      (0x00000000u)

/* TPCC_Q7E8 */

#define CSL_TPCC_TPCC_Q7E8_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E8_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q7E8_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E8_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E8_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q7E8_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E8_RESETVAL      (0x00000000u)

/* TPCC_Q7E9 */

#define CSL_TPCC_TPCC_Q7E9_ENUM_MASK     (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E9_ENUM_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_Q7E9_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E9_ETYPE_MASK    (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E9_ETYPE_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_Q7E9_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E9_RESETVAL      (0x00000000u)

/* TPCC_Q7E10 */

#define CSL_TPCC_TPCC_Q7E10_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E10_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q7E10_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E10_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E10_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q7E10_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E10_RESETVAL     (0x00000000u)

/* TPCC_Q7E11 */

#define CSL_TPCC_TPCC_Q7E11_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E11_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q7E11_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E11_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E11_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q7E11_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E11_RESETVAL     (0x00000000u)

/* TPCC_Q7E12 */

#define CSL_TPCC_TPCC_Q7E12_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E12_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q7E12_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E12_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E12_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q7E12_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E12_RESETVAL     (0x00000000u)

/* TPCC_Q7E13 */

#define CSL_TPCC_TPCC_Q7E13_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E13_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q7E13_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E13_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E13_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q7E13_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E13_RESETVAL     (0x00000000u)

/* TPCC_Q7E14 */

#define CSL_TPCC_TPCC_Q7E14_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E14_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q7E14_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E14_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E14_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q7E14_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E14_RESETVAL     (0x00000000u)

/* TPCC_Q7E15 */

#define CSL_TPCC_TPCC_Q7E15_ENUM_MASK    (0x0000003Fu)
#define CSL_TPCC_TPCC_Q7E15_ENUM_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_Q7E15_ENUM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E15_ETYPE_MASK   (0x000000C0u)
#define CSL_TPCC_TPCC_Q7E15_ETYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_Q7E15_ETYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_Q7E15_RESETVAL     (0x00000000u)

/* TPCC_QSTAT0 */

#define CSL_TPCC_TPCC_QSTAT0_STRPTR_MASK (0x0000000Fu)
#define CSL_TPCC_TPCC_QSTAT0_STRPTR_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QSTAT0_STRPTR_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT0_NUMVAL_MASK (0x00001F00u)
#define CSL_TPCC_TPCC_QSTAT0_NUMVAL_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_QSTAT0_NUMVAL_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT0_WM_MASK     (0x001F0000u)
#define CSL_TPCC_TPCC_QSTAT0_WM_SHIFT    (0x00000010u)
#define CSL_TPCC_TPCC_QSTAT0_WM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT0_THRXCD_MASK (0x01000000u)
#define CSL_TPCC_TPCC_QSTAT0_THRXCD_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_QSTAT0_THRXCD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT0_RESETVAL    (0x00000000u)

/* TPCC_QSTAT1 */

#define CSL_TPCC_TPCC_QSTAT1_STRPTR_MASK (0x0000000Fu)
#define CSL_TPCC_TPCC_QSTAT1_STRPTR_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QSTAT1_STRPTR_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT1_NUMVAL_MASK (0x00001F00u)
#define CSL_TPCC_TPCC_QSTAT1_NUMVAL_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_QSTAT1_NUMVAL_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT1_WM_MASK     (0x001F0000u)
#define CSL_TPCC_TPCC_QSTAT1_WM_SHIFT    (0x00000010u)
#define CSL_TPCC_TPCC_QSTAT1_WM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT1_THRXCD_MASK (0x01000000u)
#define CSL_TPCC_TPCC_QSTAT1_THRXCD_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_QSTAT1_THRXCD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT1_RESETVAL    (0x00000000u)

/* TPCC_QSTAT2 */

#define CSL_TPCC_TPCC_QSTAT2_STRPTR_MASK (0x0000000Fu)
#define CSL_TPCC_TPCC_QSTAT2_STRPTR_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QSTAT2_STRPTR_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT2_NUMVAL_MASK (0x00001F00u)
#define CSL_TPCC_TPCC_QSTAT2_NUMVAL_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_QSTAT2_NUMVAL_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT2_WM_MASK     (0x001F0000u)
#define CSL_TPCC_TPCC_QSTAT2_WM_SHIFT    (0x00000010u)
#define CSL_TPCC_TPCC_QSTAT2_WM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT2_THRXCD_MASK (0x01000000u)
#define CSL_TPCC_TPCC_QSTAT2_THRXCD_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_QSTAT2_THRXCD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT2_RESETVAL    (0x00000000u)

/* TPCC_QSTAT3 */

#define CSL_TPCC_TPCC_QSTAT3_STRPTR_MASK (0x0000000Fu)
#define CSL_TPCC_TPCC_QSTAT3_STRPTR_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QSTAT3_STRPTR_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT3_NUMVAL_MASK (0x00001F00u)
#define CSL_TPCC_TPCC_QSTAT3_NUMVAL_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_QSTAT3_NUMVAL_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT3_WM_MASK     (0x001F0000u)
#define CSL_TPCC_TPCC_QSTAT3_WM_SHIFT    (0x00000010u)
#define CSL_TPCC_TPCC_QSTAT3_WM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT3_THRXCD_MASK (0x01000000u)
#define CSL_TPCC_TPCC_QSTAT3_THRXCD_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_QSTAT3_THRXCD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT3_RESETVAL    (0x00000000u)

/* TPCC_QSTAT4 */

#define CSL_TPCC_TPCC_QSTAT4_STRPTR_MASK (0x0000000Fu)
#define CSL_TPCC_TPCC_QSTAT4_STRPTR_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QSTAT4_STRPTR_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT4_NUMVAL_MASK (0x00001F00u)
#define CSL_TPCC_TPCC_QSTAT4_NUMVAL_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_QSTAT4_NUMVAL_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT4_WM_MASK     (0x001F0000u)
#define CSL_TPCC_TPCC_QSTAT4_WM_SHIFT    (0x00000010u)
#define CSL_TPCC_TPCC_QSTAT4_WM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT4_THRXCD_MASK (0x01000000u)
#define CSL_TPCC_TPCC_QSTAT4_THRXCD_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_QSTAT4_THRXCD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT4_RESETVAL    (0x00000000u)

/* TPCC_QSTAT5 */

#define CSL_TPCC_TPCC_QSTAT5_STRPTR_MASK (0x0000000Fu)
#define CSL_TPCC_TPCC_QSTAT5_STRPTR_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QSTAT5_STRPTR_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT5_NUMVAL_MASK (0x00001F00u)
#define CSL_TPCC_TPCC_QSTAT5_NUMVAL_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_QSTAT5_NUMVAL_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT5_WM_MASK     (0x001F0000u)
#define CSL_TPCC_TPCC_QSTAT5_WM_SHIFT    (0x00000010u)
#define CSL_TPCC_TPCC_QSTAT5_WM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT5_THRXCD_MASK (0x01000000u)
#define CSL_TPCC_TPCC_QSTAT5_THRXCD_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_QSTAT5_THRXCD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT5_RESETVAL    (0x00000000u)

/* TPCC_QSTAT6 */

#define CSL_TPCC_TPCC_QSTAT6_STRPTR_MASK (0x0000000Fu)
#define CSL_TPCC_TPCC_QSTAT6_STRPTR_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QSTAT6_STRPTR_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT6_NUMVAL_MASK (0x00001F00u)
#define CSL_TPCC_TPCC_QSTAT6_NUMVAL_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_QSTAT6_NUMVAL_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT6_WM_MASK     (0x001F0000u)
#define CSL_TPCC_TPCC_QSTAT6_WM_SHIFT    (0x00000010u)
#define CSL_TPCC_TPCC_QSTAT6_WM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT6_THRXCD_MASK (0x01000000u)
#define CSL_TPCC_TPCC_QSTAT6_THRXCD_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_QSTAT6_THRXCD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT6_RESETVAL    (0x00000000u)

/* TPCC_QSTAT7 */

#define CSL_TPCC_TPCC_QSTAT7_STRPTR_MASK (0x0000000Fu)
#define CSL_TPCC_TPCC_QSTAT7_STRPTR_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QSTAT7_STRPTR_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT7_NUMVAL_MASK (0x00001F00u)
#define CSL_TPCC_TPCC_QSTAT7_NUMVAL_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_QSTAT7_NUMVAL_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT7_WM_MASK     (0x001F0000u)
#define CSL_TPCC_TPCC_QSTAT7_WM_SHIFT    (0x00000010u)
#define CSL_TPCC_TPCC_QSTAT7_WM_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT7_THRXCD_MASK (0x01000000u)
#define CSL_TPCC_TPCC_QSTAT7_THRXCD_SHIFT (0x00000018u)
#define CSL_TPCC_TPCC_QSTAT7_THRXCD_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSTAT7_RESETVAL    (0x00000000u)

/* TPCC_QWMTHRA */

#define CSL_TPCC_TPCC_QWMTHRA_Q0_MASK    (0x0000001Fu)
#define CSL_TPCC_TPCC_QWMTHRA_Q0_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_QWMTHRA_Q0_RESETVAL (0x00000010u)

#define CSL_TPCC_TPCC_QWMTHRA_Q1_MASK    (0x00001F00u)
#define CSL_TPCC_TPCC_QWMTHRA_Q1_SHIFT   (0x00000008u)
#define CSL_TPCC_TPCC_QWMTHRA_Q1_RESETVAL (0x00000010u)

#define CSL_TPCC_TPCC_QWMTHRA_Q2_MASK    (0x001F0000u)
#define CSL_TPCC_TPCC_QWMTHRA_Q2_SHIFT   (0x00000010u)
#define CSL_TPCC_TPCC_QWMTHRA_Q2_RESETVAL (0x00000010u)

#define CSL_TPCC_TPCC_QWMTHRA_Q3_MASK    (0x1F000000u)
#define CSL_TPCC_TPCC_QWMTHRA_Q3_SHIFT   (0x00000018u)
#define CSL_TPCC_TPCC_QWMTHRA_Q3_RESETVAL (0x00000010u)

#define CSL_TPCC_TPCC_QWMTHRA_RESETVAL   (0x10101010u)

/* TPCC_QWMTHRB */

#define CSL_TPCC_TPCC_QWMTHRB_Q4_MASK    (0x0000001Fu)
#define CSL_TPCC_TPCC_QWMTHRB_Q4_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_QWMTHRB_Q4_RESETVAL (0x00000010u)

#define CSL_TPCC_TPCC_QWMTHRB_Q1_MASK    (0x00001F00u)
#define CSL_TPCC_TPCC_QWMTHRB_Q1_SHIFT   (0x00000008u)
#define CSL_TPCC_TPCC_QWMTHRB_Q1_RESETVAL (0x00000010u)

#define CSL_TPCC_TPCC_QWMTHRB_Q2_MASK    (0x001F0000u)
#define CSL_TPCC_TPCC_QWMTHRB_Q2_SHIFT   (0x00000010u)
#define CSL_TPCC_TPCC_QWMTHRB_Q2_RESETVAL (0x00000010u)

#define CSL_TPCC_TPCC_QWMTHRB_Q3_MASK    (0x1F000000u)
#define CSL_TPCC_TPCC_QWMTHRB_Q3_SHIFT   (0x00000018u)
#define CSL_TPCC_TPCC_QWMTHRB_Q3_RESETVAL (0x00000010u)

#define CSL_TPCC_TPCC_QWMTHRB_RESETVAL   (0x10101010u)

/* TPCC_CCSTAT */

#define CSL_TPCC_TPCC_CCSTAT_EVTACTV_MASK (0x00000001u)
#define CSL_TPCC_TPCC_CCSTAT_EVTACTV_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_CCSTAT_EVTACTV_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCSTAT_QEVTACTV_MASK (0x00000002u)
#define CSL_TPCC_TPCC_CCSTAT_QEVTACTV_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_CCSTAT_QEVTACTV_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCSTAT_TRACTV_MASK (0x00000004u)
#define CSL_TPCC_TPCC_CCSTAT_TRACTV_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_CCSTAT_TRACTV_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCSTAT_WSTATACTV_MASK (0x00000008u)
#define CSL_TPCC_TPCC_CCSTAT_WSTATACTV_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_CCSTAT_WSTATACTV_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCSTAT_ACTV_MASK   (0x00000010u)
#define CSL_TPCC_TPCC_CCSTAT_ACTV_SHIFT  (0x00000004u)
#define CSL_TPCC_TPCC_CCSTAT_ACTV_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCSTAT_COMP_ACTV_MASK (0x00003F00u)
#define CSL_TPCC_TPCC_CCSTAT_COMP_ACTV_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_CCSTAT_COMP_ACTV_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCSTAT_QUEACTV0_MASK (0x00010000u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV0_SHIFT (0x00000010u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCSTAT_QUEACTV1_MASK (0x00020000u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV1_SHIFT (0x00000011u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCSTAT_QUEACTV2_MASK (0x00040000u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV2_SHIFT (0x00000012u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCSTAT_QUEACTV3_MASK (0x00080000u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV3_SHIFT (0x00000013u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCSTAT_QUEACTV4_MASK (0x00100000u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV4_SHIFT (0x00000014u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCSTAT_QUEACTV5_MASK (0x00200000u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV5_SHIFT (0x00000015u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCSTAT_QUEACTV6_MASK (0x00400000u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV6_SHIFT (0x00000016u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCSTAT_QUEACTV7_MASK (0x00800000u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV7_SHIFT (0x00000017u)
#define CSL_TPCC_TPCC_CCSTAT_QUEACTV7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_CCSTAT_RESETVAL    (0x00000000u)

/* TPCC_AETCTL */

#define CSL_TPCC_TPCC_AETCTL_STRTEVT_MASK (0x0000003Fu)
#define CSL_TPCC_TPCC_AETCTL_STRTEVT_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_AETCTL_STRTEVT_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_AETCTL_TYPE_MASK   (0x00000040u)
#define CSL_TPCC_TPCC_AETCTL_TYPE_SHIFT  (0x00000006u)
#define CSL_TPCC_TPCC_AETCTL_TYPE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_AETCTL_ENDINT_MASK (0x00003F00u)
#define CSL_TPCC_TPCC_AETCTL_ENDINT_SHIFT (0x00000008u)
#define CSL_TPCC_TPCC_AETCTL_ENDINT_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_AETCTL_EN_MASK     (0x80000000u)
#define CSL_TPCC_TPCC_AETCTL_EN_SHIFT    (0x0000001Fu)
#define CSL_TPCC_TPCC_AETCTL_EN_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_AETCTL_RESETVAL    (0x00000000u)

/* TPCC_AETSTAT */

#define CSL_TPCC_TPCC_AETSTAT_STAT_MASK  (0x00000001u)
#define CSL_TPCC_TPCC_AETSTAT_STAT_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_AETSTAT_STAT_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_AETSTAT_RESETVAL   (0x00000000u)

/* TPCC_AETCMD */

#define CSL_TPCC_TPCC_AETCMD_CLR_MASK    (0x00000001u)
#define CSL_TPCC_TPCC_AETCMD_CLR_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_AETCMD_CLR_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_AETCMD_RESETVAL    (0x00000000u)

/* TPCC_MPFAR */

#define CSL_TPCC_TPCC_MPFAR_FADDR_MASK   (0xFFFFFFFFu)
#define CSL_TPCC_TPCC_MPFAR_FADDR_SHIFT  (0x00000000u)
#define CSL_TPCC_TPCC_MPFAR_FADDR_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPFAR_RESETVAL     (0x00000000u)

/* TPCC_MPFSR */

#define CSL_TPCC_TPCC_MPFSR_UXE_MASK     (0x00000001u)
#define CSL_TPCC_TPCC_MPFSR_UXE_SHIFT    (0x00000000u)
#define CSL_TPCC_TPCC_MPFSR_UXE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPFSR_UWE_MASK     (0x00000002u)
#define CSL_TPCC_TPCC_MPFSR_UWE_SHIFT    (0x00000001u)
#define CSL_TPCC_TPCC_MPFSR_UWE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPFSR_URE_MASK     (0x00000004u)
#define CSL_TPCC_TPCC_MPFSR_URE_SHIFT    (0x00000002u)
#define CSL_TPCC_TPCC_MPFSR_URE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPFSR_SXE_MASK     (0x00000008u)
#define CSL_TPCC_TPCC_MPFSR_SXE_SHIFT    (0x00000003u)
#define CSL_TPCC_TPCC_MPFSR_SXE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPFSR_SWE_MASK     (0x00000010u)
#define CSL_TPCC_TPCC_MPFSR_SWE_SHIFT    (0x00000004u)
#define CSL_TPCC_TPCC_MPFSR_SWE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPFSR_SRE_MASK     (0x00000020u)
#define CSL_TPCC_TPCC_MPFSR_SRE_SHIFT    (0x00000005u)
#define CSL_TPCC_TPCC_MPFSR_SRE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPFSR_SECE_MASK    (0x00000080u)
#define CSL_TPCC_TPCC_MPFSR_SECE_SHIFT   (0x00000007u)
#define CSL_TPCC_TPCC_MPFSR_SECE_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPFSR_FID_MASK     (0x00001E00u)
#define CSL_TPCC_TPCC_MPFSR_FID_SHIFT    (0x00000009u)
#define CSL_TPCC_TPCC_MPFSR_FID_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPFSR_RESETVAL     (0x00000000u)

/* TPCC_MPFCR */

#define CSL_TPCC_TPCC_MPFCR_MPFCLR_MASK  (0x00000001u)
#define CSL_TPCC_TPCC_MPFCR_MPFCLR_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_MPFCR_MPFCLR_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPFCR_RESETVAL     (0x00000000u)

/* TPCC_MPPAG */

#define CSL_TPCC_TPCC_MPPAG_UX_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_MPPAG_UX_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_MPPAG_UX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_UW_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_MPPAG_UW_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_MPPAG_UW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_UR_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_MPPAG_UR_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_MPPAG_UR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_SX_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_MPPAG_SX_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_MPPAG_SX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_SW_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_MPPAG_SW_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_MPPAG_SW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_SR_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_MPPAG_SR_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_MPPAG_SR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_EMU_MASK     (0x00000040u)
#define CSL_TPCC_TPCC_MPPAG_EMU_SHIFT    (0x00000006u)
#define CSL_TPCC_TPCC_MPPAG_EMU_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_NS_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_MPPAG_NS_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_MPPAG_NS_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_EXT_MASK     (0x00000200u)
#define CSL_TPCC_TPCC_MPPAG_EXT_SHIFT    (0x00000009u)
#define CSL_TPCC_TPCC_MPPAG_EXT_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_AID0_MASK    (0x00000400u)
#define CSL_TPCC_TPCC_MPPAG_AID0_SHIFT   (0x0000000Au)
#define CSL_TPCC_TPCC_MPPAG_AID0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_AID1_MASK    (0x00000800u)
#define CSL_TPCC_TPCC_MPPAG_AID1_SHIFT   (0x0000000Bu)
#define CSL_TPCC_TPCC_MPPAG_AID1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_AID2_MASK    (0x00001000u)
#define CSL_TPCC_TPCC_MPPAG_AID2_SHIFT   (0x0000000Cu)
#define CSL_TPCC_TPCC_MPPAG_AID2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_AID3_MASK    (0x00002000u)
#define CSL_TPCC_TPCC_MPPAG_AID3_SHIFT   (0x0000000Du)
#define CSL_TPCC_TPCC_MPPAG_AID3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_AID4_MASK    (0x00004000u)
#define CSL_TPCC_TPCC_MPPAG_AID4_SHIFT   (0x0000000Eu)
#define CSL_TPCC_TPCC_MPPAG_AID4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_AID5_MASK    (0x00008000u)
#define CSL_TPCC_TPCC_MPPAG_AID5_SHIFT   (0x0000000Fu)
#define CSL_TPCC_TPCC_MPPAG_AID5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPAG_RESETVAL     (0x00000000u)

/* TPCC_MPPA0 */

#define CSL_TPCC_TPCC_MPPA0_UX_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_MPPA0_UX_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_MPPA0_UX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_UW_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_MPPA0_UW_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_MPPA0_UW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_UR_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_MPPA0_UR_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_MPPA0_UR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_SX_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_MPPA0_SX_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_MPPA0_SX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_SW_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_MPPA0_SW_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_MPPA0_SW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_SR_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_MPPA0_SR_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_MPPA0_SR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_EMU_MASK     (0x00000040u)
#define CSL_TPCC_TPCC_MPPA0_EMU_SHIFT    (0x00000006u)
#define CSL_TPCC_TPCC_MPPA0_EMU_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_NS_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_MPPA0_NS_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_MPPA0_NS_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_EXT_MASK     (0x00000200u)
#define CSL_TPCC_TPCC_MPPA0_EXT_SHIFT    (0x00000009u)
#define CSL_TPCC_TPCC_MPPA0_EXT_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_AID0_MASK    (0x00000400u)
#define CSL_TPCC_TPCC_MPPA0_AID0_SHIFT   (0x0000000Au)
#define CSL_TPCC_TPCC_MPPA0_AID0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_AID1_MASK    (0x00000800u)
#define CSL_TPCC_TPCC_MPPA0_AID1_SHIFT   (0x0000000Bu)
#define CSL_TPCC_TPCC_MPPA0_AID1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_AID2_MASK    (0x00001000u)
#define CSL_TPCC_TPCC_MPPA0_AID2_SHIFT   (0x0000000Cu)
#define CSL_TPCC_TPCC_MPPA0_AID2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_AID3_MASK    (0x00002000u)
#define CSL_TPCC_TPCC_MPPA0_AID3_SHIFT   (0x0000000Du)
#define CSL_TPCC_TPCC_MPPA0_AID3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_AID4_MASK    (0x00004000u)
#define CSL_TPCC_TPCC_MPPA0_AID4_SHIFT   (0x0000000Eu)
#define CSL_TPCC_TPCC_MPPA0_AID4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_AID5_MASK    (0x00008000u)
#define CSL_TPCC_TPCC_MPPA0_AID5_SHIFT   (0x0000000Fu)
#define CSL_TPCC_TPCC_MPPA0_AID5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA0_RESETVAL     (0x00000000u)

/* TPCC_MPPA1 */

#define CSL_TPCC_TPCC_MPPA1_UX_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_MPPA1_UX_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_MPPA1_UX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_UW_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_MPPA1_UW_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_MPPA1_UW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_UR_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_MPPA1_UR_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_MPPA1_UR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_SX_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_MPPA1_SX_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_MPPA1_SX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_SW_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_MPPA1_SW_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_MPPA1_SW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_SR_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_MPPA1_SR_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_MPPA1_SR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_EMU_MASK     (0x00000040u)
#define CSL_TPCC_TPCC_MPPA1_EMU_SHIFT    (0x00000006u)
#define CSL_TPCC_TPCC_MPPA1_EMU_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_NS_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_MPPA1_NS_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_MPPA1_NS_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_EXT_MASK     (0x00000200u)
#define CSL_TPCC_TPCC_MPPA1_EXT_SHIFT    (0x00000009u)
#define CSL_TPCC_TPCC_MPPA1_EXT_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_AID0_MASK    (0x00000400u)
#define CSL_TPCC_TPCC_MPPA1_AID0_SHIFT   (0x0000000Au)
#define CSL_TPCC_TPCC_MPPA1_AID0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_AID1_MASK    (0x00000800u)
#define CSL_TPCC_TPCC_MPPA1_AID1_SHIFT   (0x0000000Bu)
#define CSL_TPCC_TPCC_MPPA1_AID1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_AID2_MASK    (0x00001000u)
#define CSL_TPCC_TPCC_MPPA1_AID2_SHIFT   (0x0000000Cu)
#define CSL_TPCC_TPCC_MPPA1_AID2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_AID3_MASK    (0x00002000u)
#define CSL_TPCC_TPCC_MPPA1_AID3_SHIFT   (0x0000000Du)
#define CSL_TPCC_TPCC_MPPA1_AID3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_AID4_MASK    (0x00004000u)
#define CSL_TPCC_TPCC_MPPA1_AID4_SHIFT   (0x0000000Eu)
#define CSL_TPCC_TPCC_MPPA1_AID4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_AID5_MASK    (0x00008000u)
#define CSL_TPCC_TPCC_MPPA1_AID5_SHIFT   (0x0000000Fu)
#define CSL_TPCC_TPCC_MPPA1_AID5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA1_RESETVAL     (0x00000000u)

/* TPCC_MPPA2 */

#define CSL_TPCC_TPCC_MPPA2_UX_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_MPPA2_UX_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_MPPA2_UX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_UW_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_MPPA2_UW_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_MPPA2_UW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_UR_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_MPPA2_UR_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_MPPA2_UR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_SX_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_MPPA2_SX_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_MPPA2_SX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_SW_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_MPPA2_SW_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_MPPA2_SW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_SR_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_MPPA2_SR_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_MPPA2_SR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_EMU_MASK     (0x00000040u)
#define CSL_TPCC_TPCC_MPPA2_EMU_SHIFT    (0x00000006u)
#define CSL_TPCC_TPCC_MPPA2_EMU_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_NS_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_MPPA2_NS_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_MPPA2_NS_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_EXT_MASK     (0x00000200u)
#define CSL_TPCC_TPCC_MPPA2_EXT_SHIFT    (0x00000009u)
#define CSL_TPCC_TPCC_MPPA2_EXT_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_AID0_MASK    (0x00000400u)
#define CSL_TPCC_TPCC_MPPA2_AID0_SHIFT   (0x0000000Au)
#define CSL_TPCC_TPCC_MPPA2_AID0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_AID1_MASK    (0x00000800u)
#define CSL_TPCC_TPCC_MPPA2_AID1_SHIFT   (0x0000000Bu)
#define CSL_TPCC_TPCC_MPPA2_AID1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_AID2_MASK    (0x00001000u)
#define CSL_TPCC_TPCC_MPPA2_AID2_SHIFT   (0x0000000Cu)
#define CSL_TPCC_TPCC_MPPA2_AID2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_AID3_MASK    (0x00002000u)
#define CSL_TPCC_TPCC_MPPA2_AID3_SHIFT   (0x0000000Du)
#define CSL_TPCC_TPCC_MPPA2_AID3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_AID4_MASK    (0x00004000u)
#define CSL_TPCC_TPCC_MPPA2_AID4_SHIFT   (0x0000000Eu)
#define CSL_TPCC_TPCC_MPPA2_AID4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_AID5_MASK    (0x00008000u)
#define CSL_TPCC_TPCC_MPPA2_AID5_SHIFT   (0x0000000Fu)
#define CSL_TPCC_TPCC_MPPA2_AID5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA2_RESETVAL     (0x00000000u)

/* TPCC_MPPA3 */

#define CSL_TPCC_TPCC_MPPA3_UX_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_MPPA3_UX_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_MPPA3_UX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_UW_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_MPPA3_UW_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_MPPA3_UW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_UR_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_MPPA3_UR_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_MPPA3_UR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_SX_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_MPPA3_SX_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_MPPA3_SX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_SW_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_MPPA3_SW_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_MPPA3_SW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_SR_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_MPPA3_SR_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_MPPA3_SR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_EMU_MASK     (0x00000040u)
#define CSL_TPCC_TPCC_MPPA3_EMU_SHIFT    (0x00000006u)
#define CSL_TPCC_TPCC_MPPA3_EMU_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_NS_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_MPPA3_NS_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_MPPA3_NS_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_EXT_MASK     (0x00000200u)
#define CSL_TPCC_TPCC_MPPA3_EXT_SHIFT    (0x00000009u)
#define CSL_TPCC_TPCC_MPPA3_EXT_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_AID0_MASK    (0x00000400u)
#define CSL_TPCC_TPCC_MPPA3_AID0_SHIFT   (0x0000000Au)
#define CSL_TPCC_TPCC_MPPA3_AID0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_AID1_MASK    (0x00000800u)
#define CSL_TPCC_TPCC_MPPA3_AID1_SHIFT   (0x0000000Bu)
#define CSL_TPCC_TPCC_MPPA3_AID1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_AID2_MASK    (0x00001000u)
#define CSL_TPCC_TPCC_MPPA3_AID2_SHIFT   (0x0000000Cu)
#define CSL_TPCC_TPCC_MPPA3_AID2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_AID3_MASK    (0x00002000u)
#define CSL_TPCC_TPCC_MPPA3_AID3_SHIFT   (0x0000000Du)
#define CSL_TPCC_TPCC_MPPA3_AID3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_AID4_MASK    (0x00004000u)
#define CSL_TPCC_TPCC_MPPA3_AID4_SHIFT   (0x0000000Eu)
#define CSL_TPCC_TPCC_MPPA3_AID4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_AID5_MASK    (0x00008000u)
#define CSL_TPCC_TPCC_MPPA3_AID5_SHIFT   (0x0000000Fu)
#define CSL_TPCC_TPCC_MPPA3_AID5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA3_RESETVAL     (0x00000000u)

/* TPCC_MPPA4 */

#define CSL_TPCC_TPCC_MPPA4_UX_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_MPPA4_UX_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_MPPA4_UX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_UW_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_MPPA4_UW_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_MPPA4_UW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_UR_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_MPPA4_UR_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_MPPA4_UR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_SX_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_MPPA4_SX_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_MPPA4_SX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_SW_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_MPPA4_SW_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_MPPA4_SW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_SR_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_MPPA4_SR_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_MPPA4_SR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_EMU_MASK     (0x00000040u)
#define CSL_TPCC_TPCC_MPPA4_EMU_SHIFT    (0x00000006u)
#define CSL_TPCC_TPCC_MPPA4_EMU_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_NS_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_MPPA4_NS_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_MPPA4_NS_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_EXT_MASK     (0x00000200u)
#define CSL_TPCC_TPCC_MPPA4_EXT_SHIFT    (0x00000009u)
#define CSL_TPCC_TPCC_MPPA4_EXT_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_AID0_MASK    (0x00000400u)
#define CSL_TPCC_TPCC_MPPA4_AID0_SHIFT   (0x0000000Au)
#define CSL_TPCC_TPCC_MPPA4_AID0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_AID1_MASK    (0x00000800u)
#define CSL_TPCC_TPCC_MPPA4_AID1_SHIFT   (0x0000000Bu)
#define CSL_TPCC_TPCC_MPPA4_AID1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_AID2_MASK    (0x00001000u)
#define CSL_TPCC_TPCC_MPPA4_AID2_SHIFT   (0x0000000Cu)
#define CSL_TPCC_TPCC_MPPA4_AID2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_AID3_MASK    (0x00002000u)
#define CSL_TPCC_TPCC_MPPA4_AID3_SHIFT   (0x0000000Du)
#define CSL_TPCC_TPCC_MPPA4_AID3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_AID4_MASK    (0x00004000u)
#define CSL_TPCC_TPCC_MPPA4_AID4_SHIFT   (0x0000000Eu)
#define CSL_TPCC_TPCC_MPPA4_AID4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_AID5_MASK    (0x00008000u)
#define CSL_TPCC_TPCC_MPPA4_AID5_SHIFT   (0x0000000Fu)
#define CSL_TPCC_TPCC_MPPA4_AID5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA4_RESETVAL     (0x00000000u)

/* TPCC_MPPA5 */

#define CSL_TPCC_TPCC_MPPA5_UX_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_MPPA5_UX_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_MPPA5_UX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_UW_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_MPPA5_UW_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_MPPA5_UW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_UR_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_MPPA5_UR_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_MPPA5_UR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_SX_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_MPPA5_SX_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_MPPA5_SX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_SW_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_MPPA5_SW_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_MPPA5_SW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_SR_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_MPPA5_SR_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_MPPA5_SR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_EMU_MASK     (0x00000040u)
#define CSL_TPCC_TPCC_MPPA5_EMU_SHIFT    (0x00000006u)
#define CSL_TPCC_TPCC_MPPA5_EMU_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_NS_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_MPPA5_NS_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_MPPA5_NS_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_EXT_MASK     (0x00000200u)
#define CSL_TPCC_TPCC_MPPA5_EXT_SHIFT    (0x00000009u)
#define CSL_TPCC_TPCC_MPPA5_EXT_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_AID0_MASK    (0x00000400u)
#define CSL_TPCC_TPCC_MPPA5_AID0_SHIFT   (0x0000000Au)
#define CSL_TPCC_TPCC_MPPA5_AID0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_AID1_MASK    (0x00000800u)
#define CSL_TPCC_TPCC_MPPA5_AID1_SHIFT   (0x0000000Bu)
#define CSL_TPCC_TPCC_MPPA5_AID1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_AID2_MASK    (0x00001000u)
#define CSL_TPCC_TPCC_MPPA5_AID2_SHIFT   (0x0000000Cu)
#define CSL_TPCC_TPCC_MPPA5_AID2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_AID3_MASK    (0x00002000u)
#define CSL_TPCC_TPCC_MPPA5_AID3_SHIFT   (0x0000000Du)
#define CSL_TPCC_TPCC_MPPA5_AID3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_AID4_MASK    (0x00004000u)
#define CSL_TPCC_TPCC_MPPA5_AID4_SHIFT   (0x0000000Eu)
#define CSL_TPCC_TPCC_MPPA5_AID4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_AID5_MASK    (0x00008000u)
#define CSL_TPCC_TPCC_MPPA5_AID5_SHIFT   (0x0000000Fu)
#define CSL_TPCC_TPCC_MPPA5_AID5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA5_RESETVAL     (0x00000000u)

/* TPCC_MPPA6 */

#define CSL_TPCC_TPCC_MPPA6_UX_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_MPPA6_UX_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_MPPA6_UX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_UW_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_MPPA6_UW_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_MPPA6_UW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_UR_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_MPPA6_UR_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_MPPA6_UR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_SX_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_MPPA6_SX_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_MPPA6_SX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_SW_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_MPPA6_SW_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_MPPA6_SW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_SR_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_MPPA6_SR_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_MPPA6_SR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_EMU_MASK     (0x00000040u)
#define CSL_TPCC_TPCC_MPPA6_EMU_SHIFT    (0x00000006u)
#define CSL_TPCC_TPCC_MPPA6_EMU_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_NS_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_MPPA6_NS_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_MPPA6_NS_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_EXT_MASK     (0x00000200u)
#define CSL_TPCC_TPCC_MPPA6_EXT_SHIFT    (0x00000009u)
#define CSL_TPCC_TPCC_MPPA6_EXT_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_AID0_MASK    (0x00000400u)
#define CSL_TPCC_TPCC_MPPA6_AID0_SHIFT   (0x0000000Au)
#define CSL_TPCC_TPCC_MPPA6_AID0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_AID1_MASK    (0x00000800u)
#define CSL_TPCC_TPCC_MPPA6_AID1_SHIFT   (0x0000000Bu)
#define CSL_TPCC_TPCC_MPPA6_AID1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_AID2_MASK    (0x00001000u)
#define CSL_TPCC_TPCC_MPPA6_AID2_SHIFT   (0x0000000Cu)
#define CSL_TPCC_TPCC_MPPA6_AID2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_AID3_MASK    (0x00002000u)
#define CSL_TPCC_TPCC_MPPA6_AID3_SHIFT   (0x0000000Du)
#define CSL_TPCC_TPCC_MPPA6_AID3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_AID4_MASK    (0x00004000u)
#define CSL_TPCC_TPCC_MPPA6_AID4_SHIFT   (0x0000000Eu)
#define CSL_TPCC_TPCC_MPPA6_AID4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_AID5_MASK    (0x00008000u)
#define CSL_TPCC_TPCC_MPPA6_AID5_SHIFT   (0x0000000Fu)
#define CSL_TPCC_TPCC_MPPA6_AID5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA6_RESETVAL     (0x00000000u)

/* TPCC_MPPA7 */

#define CSL_TPCC_TPCC_MPPA7_UX_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_MPPA7_UX_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_MPPA7_UX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_UW_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_MPPA7_UW_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_MPPA7_UW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_UR_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_MPPA7_UR_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_MPPA7_UR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_SX_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_MPPA7_SX_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_MPPA7_SX_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_SW_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_MPPA7_SW_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_MPPA7_SW_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_SR_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_MPPA7_SR_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_MPPA7_SR_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_EMU_MASK     (0x00000040u)
#define CSL_TPCC_TPCC_MPPA7_EMU_SHIFT    (0x00000006u)
#define CSL_TPCC_TPCC_MPPA7_EMU_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_NS_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_MPPA7_NS_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_MPPA7_NS_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_EXT_MASK     (0x00000200u)
#define CSL_TPCC_TPCC_MPPA7_EXT_SHIFT    (0x00000009u)
#define CSL_TPCC_TPCC_MPPA7_EXT_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_AID0_MASK    (0x00000400u)
#define CSL_TPCC_TPCC_MPPA7_AID0_SHIFT   (0x0000000Au)
#define CSL_TPCC_TPCC_MPPA7_AID0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_AID1_MASK    (0x00000800u)
#define CSL_TPCC_TPCC_MPPA7_AID1_SHIFT   (0x0000000Bu)
#define CSL_TPCC_TPCC_MPPA7_AID1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_AID2_MASK    (0x00001000u)
#define CSL_TPCC_TPCC_MPPA7_AID2_SHIFT   (0x0000000Cu)
#define CSL_TPCC_TPCC_MPPA7_AID2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_AID3_MASK    (0x00002000u)
#define CSL_TPCC_TPCC_MPPA7_AID3_SHIFT   (0x0000000Du)
#define CSL_TPCC_TPCC_MPPA7_AID3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_AID4_MASK    (0x00004000u)
#define CSL_TPCC_TPCC_MPPA7_AID4_SHIFT   (0x0000000Eu)
#define CSL_TPCC_TPCC_MPPA7_AID4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_AID5_MASK    (0x00008000u)
#define CSL_TPCC_TPCC_MPPA7_AID5_SHIFT   (0x0000000Fu)
#define CSL_TPCC_TPCC_MPPA7_AID5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_MPPA7_RESETVAL     (0x00000000u)

/* TPCC_ER */

#define CSL_TPCC_TPCC_ER_E0_MASK         (0x00000001u)
#define CSL_TPCC_TPCC_ER_E0_SHIFT        (0x00000000u)
#define CSL_TPCC_TPCC_ER_E0_RESETVAL     (0x00000000u)

#define CSL_TPCC_TPCC_ER_E1_MASK         (0x00000002u)
#define CSL_TPCC_TPCC_ER_E1_SHIFT        (0x00000001u)
#define CSL_TPCC_TPCC_ER_E1_RESETVAL     (0x00000000u)

#define CSL_TPCC_TPCC_ER_E2_MASK         (0x00000004u)
#define CSL_TPCC_TPCC_ER_E2_SHIFT        (0x00000002u)
#define CSL_TPCC_TPCC_ER_E2_RESETVAL     (0x00000000u)

#define CSL_TPCC_TPCC_ER_E3_MASK         (0x00000008u)
#define CSL_TPCC_TPCC_ER_E3_SHIFT        (0x00000003u)
#define CSL_TPCC_TPCC_ER_E3_RESETVAL     (0x00000000u)

#define CSL_TPCC_TPCC_ER_E4_MASK         (0x00000010u)
#define CSL_TPCC_TPCC_ER_E4_SHIFT        (0x00000004u)
#define CSL_TPCC_TPCC_ER_E4_RESETVAL     (0x00000000u)

#define CSL_TPCC_TPCC_ER_E5_MASK         (0x00000020u)
#define CSL_TPCC_TPCC_ER_E5_SHIFT        (0x00000005u)
#define CSL_TPCC_TPCC_ER_E5_RESETVAL     (0x00000000u)

#define CSL_TPCC_TPCC_ER_E6_MASK         (0x00000040u)
#define CSL_TPCC_TPCC_ER_E6_SHIFT        (0x00000006u)
#define CSL_TPCC_TPCC_ER_E6_RESETVAL     (0x00000000u)

#define CSL_TPCC_TPCC_ER_E7_MASK         (0x00000080u)
#define CSL_TPCC_TPCC_ER_E7_SHIFT        (0x00000007u)
#define CSL_TPCC_TPCC_ER_E7_RESETVAL     (0x00000000u)

#define CSL_TPCC_TPCC_ER_E8_MASK         (0x00000100u)
#define CSL_TPCC_TPCC_ER_E8_SHIFT        (0x00000008u)
#define CSL_TPCC_TPCC_ER_E8_RESETVAL     (0x00000000u)

#define CSL_TPCC_TPCC_ER_E9_MASK         (0x00000200u)
#define CSL_TPCC_TPCC_ER_E9_SHIFT        (0x00000009u)
#define CSL_TPCC_TPCC_ER_E9_RESETVAL     (0x00000000u)

#define CSL_TPCC_TPCC_ER_E10_MASK        (0x00000400u)
#define CSL_TPCC_TPCC_ER_E10_SHIFT       (0x0000000Au)
#define CSL_TPCC_TPCC_ER_E10_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E11_MASK        (0x00000800u)
#define CSL_TPCC_TPCC_ER_E11_SHIFT       (0x0000000Bu)
#define CSL_TPCC_TPCC_ER_E11_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E12_MASK        (0x00001000u)
#define CSL_TPCC_TPCC_ER_E12_SHIFT       (0x0000000Cu)
#define CSL_TPCC_TPCC_ER_E12_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E13_MASK        (0x00002000u)
#define CSL_TPCC_TPCC_ER_E13_SHIFT       (0x0000000Du)
#define CSL_TPCC_TPCC_ER_E13_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E14_MASK        (0x00004000u)
#define CSL_TPCC_TPCC_ER_E14_SHIFT       (0x0000000Eu)
#define CSL_TPCC_TPCC_ER_E14_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E15_MASK        (0x00008000u)
#define CSL_TPCC_TPCC_ER_E15_SHIFT       (0x0000000Fu)
#define CSL_TPCC_TPCC_ER_E15_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E16_MASK        (0x00010000u)
#define CSL_TPCC_TPCC_ER_E16_SHIFT       (0x00000010u)
#define CSL_TPCC_TPCC_ER_E16_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E17_MASK        (0x00020000u)
#define CSL_TPCC_TPCC_ER_E17_SHIFT       (0x00000011u)
#define CSL_TPCC_TPCC_ER_E17_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E18_MASK        (0x00040000u)
#define CSL_TPCC_TPCC_ER_E18_SHIFT       (0x00000012u)
#define CSL_TPCC_TPCC_ER_E18_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E19_MASK        (0x00080000u)
#define CSL_TPCC_TPCC_ER_E19_SHIFT       (0x00000013u)
#define CSL_TPCC_TPCC_ER_E19_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E20_MASK        (0x00100000u)
#define CSL_TPCC_TPCC_ER_E20_SHIFT       (0x00000014u)
#define CSL_TPCC_TPCC_ER_E20_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E21_MASK        (0x00200000u)
#define CSL_TPCC_TPCC_ER_E21_SHIFT       (0x00000015u)
#define CSL_TPCC_TPCC_ER_E21_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E22_MASK        (0x00400000u)
#define CSL_TPCC_TPCC_ER_E22_SHIFT       (0x00000016u)
#define CSL_TPCC_TPCC_ER_E22_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E23_MASK        (0x00800000u)
#define CSL_TPCC_TPCC_ER_E23_SHIFT       (0x00000017u)
#define CSL_TPCC_TPCC_ER_E23_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E24_MASK        (0x01000000u)
#define CSL_TPCC_TPCC_ER_E24_SHIFT       (0x00000018u)
#define CSL_TPCC_TPCC_ER_E24_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E25_MASK        (0x02000000u)
#define CSL_TPCC_TPCC_ER_E25_SHIFT       (0x00000019u)
#define CSL_TPCC_TPCC_ER_E25_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E26_MASK        (0x04000000u)
#define CSL_TPCC_TPCC_ER_E26_SHIFT       (0x0000001Au)
#define CSL_TPCC_TPCC_ER_E26_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E27_MASK        (0x08000000u)
#define CSL_TPCC_TPCC_ER_E27_SHIFT       (0x0000001Bu)
#define CSL_TPCC_TPCC_ER_E27_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E28_MASK        (0x10000000u)
#define CSL_TPCC_TPCC_ER_E28_SHIFT       (0x0000001Cu)
#define CSL_TPCC_TPCC_ER_E28_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E29_MASK        (0x20000000u)
#define CSL_TPCC_TPCC_ER_E29_SHIFT       (0x0000001Du)
#define CSL_TPCC_TPCC_ER_E29_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E30_MASK        (0x40000000u)
#define CSL_TPCC_TPCC_ER_E30_SHIFT       (0x0000001Eu)
#define CSL_TPCC_TPCC_ER_E30_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_E31_MASK        (0x80000000u)
#define CSL_TPCC_TPCC_ER_E31_SHIFT       (0x0000001Fu)
#define CSL_TPCC_TPCC_ER_E31_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ER_RESETVAL        (0x00000000u)

/* TPCC_ERH */

#define CSL_TPCC_TPCC_ERH_E32_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E32_SHIFT      (0x00000020u)
#define CSL_TPCC_TPCC_ERH_E32_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E33_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E33_SHIFT      (0x00000021u)
#define CSL_TPCC_TPCC_ERH_E33_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E34_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E34_SHIFT      (0x00000022u)
#define CSL_TPCC_TPCC_ERH_E34_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E35_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E35_SHIFT      (0x00000023u)
#define CSL_TPCC_TPCC_ERH_E35_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E36_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E36_SHIFT      (0x00000024u)
#define CSL_TPCC_TPCC_ERH_E36_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E37_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E37_SHIFT      (0x00000025u)
#define CSL_TPCC_TPCC_ERH_E37_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E38_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E38_SHIFT      (0x00000026u)
#define CSL_TPCC_TPCC_ERH_E38_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E39_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E39_SHIFT      (0x00000027u)
#define CSL_TPCC_TPCC_ERH_E39_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E40_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E40_SHIFT      (0x00000028u)
#define CSL_TPCC_TPCC_ERH_E40_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E41_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E41_SHIFT      (0x00000029u)
#define CSL_TPCC_TPCC_ERH_E41_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E42_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E42_SHIFT      (0x0000002Au)
#define CSL_TPCC_TPCC_ERH_E42_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E43_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E43_SHIFT      (0x0000002Bu)
#define CSL_TPCC_TPCC_ERH_E43_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E44_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E44_SHIFT      (0x0000002Cu)
#define CSL_TPCC_TPCC_ERH_E44_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E45_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E45_SHIFT      (0x0000002Du)
#define CSL_TPCC_TPCC_ERH_E45_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E46_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E46_SHIFT      (0x0000002Eu)
#define CSL_TPCC_TPCC_ERH_E46_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E47_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E47_SHIFT      (0x0000002Fu)
#define CSL_TPCC_TPCC_ERH_E47_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E48_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E48_SHIFT      (0x00000030u)
#define CSL_TPCC_TPCC_ERH_E48_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E49_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E49_SHIFT      (0x00000031u)
#define CSL_TPCC_TPCC_ERH_E49_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E50_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E50_SHIFT      (0x00000032u)
#define CSL_TPCC_TPCC_ERH_E50_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E51_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E51_SHIFT      (0x00000033u)
#define CSL_TPCC_TPCC_ERH_E51_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E52_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E52_SHIFT      (0x00000034u)
#define CSL_TPCC_TPCC_ERH_E52_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E53_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E53_SHIFT      (0x00000035u)
#define CSL_TPCC_TPCC_ERH_E53_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E54_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E54_SHIFT      (0x00000036u)
#define CSL_TPCC_TPCC_ERH_E54_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E55_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E55_SHIFT      (0x00000037u)
#define CSL_TPCC_TPCC_ERH_E55_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E56_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E56_SHIFT      (0x00000038u)
#define CSL_TPCC_TPCC_ERH_E56_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E57_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E57_SHIFT      (0x00000039u)
#define CSL_TPCC_TPCC_ERH_E57_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E58_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E58_SHIFT      (0x0000003Au)
#define CSL_TPCC_TPCC_ERH_E58_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E59_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E59_SHIFT      (0x0000003Bu)
#define CSL_TPCC_TPCC_ERH_E59_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E60_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E60_SHIFT      (0x0000003Cu)
#define CSL_TPCC_TPCC_ERH_E60_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E61_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E61_SHIFT      (0x0000003Du)
#define CSL_TPCC_TPCC_ERH_E61_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E62_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E62_SHIFT      (0x0000003Eu)
#define CSL_TPCC_TPCC_ERH_E62_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_E63_MASK       (0x00000000u)
#define CSL_TPCC_TPCC_ERH_E63_SHIFT      (0x0000003Fu)
#define CSL_TPCC_TPCC_ERH_E63_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ERH_RESETVAL       (0x0FFFFFFFu)

/* TPCC_ECR */

#define CSL_TPCC_TPCC_ECR_E0_MASK        (0x00000001u)
#define CSL_TPCC_TPCC_ECR_E0_SHIFT       (0x00000000u)
#define CSL_TPCC_TPCC_ECR_E0_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E1_MASK        (0x00000002u)
#define CSL_TPCC_TPCC_ECR_E1_SHIFT       (0x00000001u)
#define CSL_TPCC_TPCC_ECR_E1_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E2_MASK        (0x00000004u)
#define CSL_TPCC_TPCC_ECR_E2_SHIFT       (0x00000002u)
#define CSL_TPCC_TPCC_ECR_E2_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E3_MASK        (0x00000008u)
#define CSL_TPCC_TPCC_ECR_E3_SHIFT       (0x00000003u)
#define CSL_TPCC_TPCC_ECR_E3_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E4_MASK        (0x00000010u)
#define CSL_TPCC_TPCC_ECR_E4_SHIFT       (0x00000004u)
#define CSL_TPCC_TPCC_ECR_E4_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E5_MASK        (0x00000020u)
#define CSL_TPCC_TPCC_ECR_E5_SHIFT       (0x00000005u)
#define CSL_TPCC_TPCC_ECR_E5_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E6_MASK        (0x00000040u)
#define CSL_TPCC_TPCC_ECR_E6_SHIFT       (0x00000006u)
#define CSL_TPCC_TPCC_ECR_E6_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E7_MASK        (0x00000080u)
#define CSL_TPCC_TPCC_ECR_E7_SHIFT       (0x00000007u)
#define CSL_TPCC_TPCC_ECR_E7_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E8_MASK        (0x00000100u)
#define CSL_TPCC_TPCC_ECR_E8_SHIFT       (0x00000008u)
#define CSL_TPCC_TPCC_ECR_E8_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E9_MASK        (0x00000200u)
#define CSL_TPCC_TPCC_ECR_E9_SHIFT       (0x00000009u)
#define CSL_TPCC_TPCC_ECR_E9_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E10_MASK       (0x00000400u)
#define CSL_TPCC_TPCC_ECR_E10_SHIFT      (0x0000000Au)
#define CSL_TPCC_TPCC_ECR_E10_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E11_MASK       (0x00000800u)
#define CSL_TPCC_TPCC_ECR_E11_SHIFT      (0x0000000Bu)
#define CSL_TPCC_TPCC_ECR_E11_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E12_MASK       (0x00001000u)
#define CSL_TPCC_TPCC_ECR_E12_SHIFT      (0x0000000Cu)
#define CSL_TPCC_TPCC_ECR_E12_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E13_MASK       (0x00002000u)
#define CSL_TPCC_TPCC_ECR_E13_SHIFT      (0x0000000Du)
#define CSL_TPCC_TPCC_ECR_E13_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E14_MASK       (0x00004000u)
#define CSL_TPCC_TPCC_ECR_E14_SHIFT      (0x0000000Eu)
#define CSL_TPCC_TPCC_ECR_E14_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E15_MASK       (0x00008000u)
#define CSL_TPCC_TPCC_ECR_E15_SHIFT      (0x0000000Fu)
#define CSL_TPCC_TPCC_ECR_E15_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E16_MASK       (0x00010000u)
#define CSL_TPCC_TPCC_ECR_E16_SHIFT      (0x00000010u)
#define CSL_TPCC_TPCC_ECR_E16_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E17_MASK       (0x00020000u)
#define CSL_TPCC_TPCC_ECR_E17_SHIFT      (0x00000011u)
#define CSL_TPCC_TPCC_ECR_E17_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E18_MASK       (0x00040000u)
#define CSL_TPCC_TPCC_ECR_E18_SHIFT      (0x00000012u)
#define CSL_TPCC_TPCC_ECR_E18_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E19_MASK       (0x00080000u)
#define CSL_TPCC_TPCC_ECR_E19_SHIFT      (0x00000013u)
#define CSL_TPCC_TPCC_ECR_E19_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E20_MASK       (0x00100000u)
#define CSL_TPCC_TPCC_ECR_E20_SHIFT      (0x00000014u)
#define CSL_TPCC_TPCC_ECR_E20_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E21_MASK       (0x00200000u)
#define CSL_TPCC_TPCC_ECR_E21_SHIFT      (0x00000015u)
#define CSL_TPCC_TPCC_ECR_E21_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E22_MASK       (0x00400000u)
#define CSL_TPCC_TPCC_ECR_E22_SHIFT      (0x00000016u)
#define CSL_TPCC_TPCC_ECR_E22_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E23_MASK       (0x00800000u)
#define CSL_TPCC_TPCC_ECR_E23_SHIFT      (0x00000017u)
#define CSL_TPCC_TPCC_ECR_E23_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E24_MASK       (0x01000000u)
#define CSL_TPCC_TPCC_ECR_E24_SHIFT      (0x00000018u)
#define CSL_TPCC_TPCC_ECR_E24_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E25_MASK       (0x02000000u)
#define CSL_TPCC_TPCC_ECR_E25_SHIFT      (0x00000019u)
#define CSL_TPCC_TPCC_ECR_E25_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E26_MASK       (0x04000000u)
#define CSL_TPCC_TPCC_ECR_E26_SHIFT      (0x0000001Au)
#define CSL_TPCC_TPCC_ECR_E26_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E27_MASK       (0x08000000u)
#define CSL_TPCC_TPCC_ECR_E27_SHIFT      (0x0000001Bu)
#define CSL_TPCC_TPCC_ECR_E27_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E28_MASK       (0x10000000u)
#define CSL_TPCC_TPCC_ECR_E28_SHIFT      (0x0000001Cu)
#define CSL_TPCC_TPCC_ECR_E28_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E29_MASK       (0x20000000u)
#define CSL_TPCC_TPCC_ECR_E29_SHIFT      (0x0000001Du)
#define CSL_TPCC_TPCC_ECR_E29_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E30_MASK       (0x40000000u)
#define CSL_TPCC_TPCC_ECR_E30_SHIFT      (0x0000001Eu)
#define CSL_TPCC_TPCC_ECR_E30_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_E31_MASK       (0x80000000u)
#define CSL_TPCC_TPCC_ECR_E31_SHIFT      (0x0000001Fu)
#define CSL_TPCC_TPCC_ECR_E31_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ECR_RESETVAL       (0x00000000u)

/* TPCC_ECRH */

#define CSL_TPCC_TPCC_ECRH_E32_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E32_SHIFT     (0x00000020u)
#define CSL_TPCC_TPCC_ECRH_E32_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E33_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E33_SHIFT     (0x00000021u)
#define CSL_TPCC_TPCC_ECRH_E33_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E34_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E34_SHIFT     (0x00000022u)
#define CSL_TPCC_TPCC_ECRH_E34_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E35_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E35_SHIFT     (0x00000023u)
#define CSL_TPCC_TPCC_ECRH_E35_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E36_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E36_SHIFT     (0x00000024u)
#define CSL_TPCC_TPCC_ECRH_E36_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E37_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E37_SHIFT     (0x00000025u)
#define CSL_TPCC_TPCC_ECRH_E37_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E38_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E38_SHIFT     (0x00000026u)
#define CSL_TPCC_TPCC_ECRH_E38_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E39_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E39_SHIFT     (0x00000027u)
#define CSL_TPCC_TPCC_ECRH_E39_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E40_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E40_SHIFT     (0x00000028u)
#define CSL_TPCC_TPCC_ECRH_E40_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E41_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E41_SHIFT     (0x00000029u)
#define CSL_TPCC_TPCC_ECRH_E41_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E42_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E42_SHIFT     (0x0000002Au)
#define CSL_TPCC_TPCC_ECRH_E42_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E43_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E43_SHIFT     (0x0000002Bu)
#define CSL_TPCC_TPCC_ECRH_E43_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E44_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E44_SHIFT     (0x0000002Cu)
#define CSL_TPCC_TPCC_ECRH_E44_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E45_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E45_SHIFT     (0x0000002Du)
#define CSL_TPCC_TPCC_ECRH_E45_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E46_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E46_SHIFT     (0x0000002Eu)
#define CSL_TPCC_TPCC_ECRH_E46_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E47_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E47_SHIFT     (0x0000002Fu)
#define CSL_TPCC_TPCC_ECRH_E47_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E48_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E48_SHIFT     (0x00000030u)
#define CSL_TPCC_TPCC_ECRH_E48_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E49_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E49_SHIFT     (0x00000031u)
#define CSL_TPCC_TPCC_ECRH_E49_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E50_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E50_SHIFT     (0x00000032u)
#define CSL_TPCC_TPCC_ECRH_E50_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E51_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E51_SHIFT     (0x00000033u)
#define CSL_TPCC_TPCC_ECRH_E51_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E52_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E52_SHIFT     (0x00000034u)
#define CSL_TPCC_TPCC_ECRH_E52_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E53_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E53_SHIFT     (0x00000035u)
#define CSL_TPCC_TPCC_ECRH_E53_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E54_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E54_SHIFT     (0x00000036u)
#define CSL_TPCC_TPCC_ECRH_E54_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E55_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E55_SHIFT     (0x00000037u)
#define CSL_TPCC_TPCC_ECRH_E55_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E56_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E56_SHIFT     (0x00000038u)
#define CSL_TPCC_TPCC_ECRH_E56_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E57_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E57_SHIFT     (0x00000039u)
#define CSL_TPCC_TPCC_ECRH_E57_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E58_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E58_SHIFT     (0x0000003Au)
#define CSL_TPCC_TPCC_ECRH_E58_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E59_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E59_SHIFT     (0x0000003Bu)
#define CSL_TPCC_TPCC_ECRH_E59_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E60_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E60_SHIFT     (0x0000003Cu)
#define CSL_TPCC_TPCC_ECRH_E60_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E61_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E61_SHIFT     (0x0000003Du)
#define CSL_TPCC_TPCC_ECRH_E61_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E62_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E62_SHIFT     (0x0000003Eu)
#define CSL_TPCC_TPCC_ECRH_E62_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_E63_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ECRH_E63_SHIFT     (0x0000003Fu)
#define CSL_TPCC_TPCC_ECRH_E63_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ECRH_RESETVAL      (0x0FFFFFFFu)

/* TPCC_ESR */

#define CSL_TPCC_TPCC_ESR_E0_MASK        (0x00000001u)
#define CSL_TPCC_TPCC_ESR_E0_SHIFT       (0x00000000u)
#define CSL_TPCC_TPCC_ESR_E0_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E1_MASK        (0x00000002u)
#define CSL_TPCC_TPCC_ESR_E1_SHIFT       (0x00000001u)
#define CSL_TPCC_TPCC_ESR_E1_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E2_MASK        (0x00000004u)
#define CSL_TPCC_TPCC_ESR_E2_SHIFT       (0x00000002u)
#define CSL_TPCC_TPCC_ESR_E2_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E3_MASK        (0x00000008u)
#define CSL_TPCC_TPCC_ESR_E3_SHIFT       (0x00000003u)
#define CSL_TPCC_TPCC_ESR_E3_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E4_MASK        (0x00000010u)
#define CSL_TPCC_TPCC_ESR_E4_SHIFT       (0x00000004u)
#define CSL_TPCC_TPCC_ESR_E4_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E5_MASK        (0x00000020u)
#define CSL_TPCC_TPCC_ESR_E5_SHIFT       (0x00000005u)
#define CSL_TPCC_TPCC_ESR_E5_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E6_MASK        (0x00000040u)
#define CSL_TPCC_TPCC_ESR_E6_SHIFT       (0x00000006u)
#define CSL_TPCC_TPCC_ESR_E6_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E7_MASK        (0x00000080u)
#define CSL_TPCC_TPCC_ESR_E7_SHIFT       (0x00000007u)
#define CSL_TPCC_TPCC_ESR_E7_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E8_MASK        (0x00000100u)
#define CSL_TPCC_TPCC_ESR_E8_SHIFT       (0x00000008u)
#define CSL_TPCC_TPCC_ESR_E8_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E9_MASK        (0x00000200u)
#define CSL_TPCC_TPCC_ESR_E9_SHIFT       (0x00000009u)
#define CSL_TPCC_TPCC_ESR_E9_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E10_MASK       (0x00000400u)
#define CSL_TPCC_TPCC_ESR_E10_SHIFT      (0x0000000Au)
#define CSL_TPCC_TPCC_ESR_E10_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E11_MASK       (0x00000800u)
#define CSL_TPCC_TPCC_ESR_E11_SHIFT      (0x0000000Bu)
#define CSL_TPCC_TPCC_ESR_E11_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E12_MASK       (0x00001000u)
#define CSL_TPCC_TPCC_ESR_E12_SHIFT      (0x0000000Cu)
#define CSL_TPCC_TPCC_ESR_E12_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E13_MASK       (0x00002000u)
#define CSL_TPCC_TPCC_ESR_E13_SHIFT      (0x0000000Du)
#define CSL_TPCC_TPCC_ESR_E13_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E14_MASK       (0x00004000u)
#define CSL_TPCC_TPCC_ESR_E14_SHIFT      (0x0000000Eu)
#define CSL_TPCC_TPCC_ESR_E14_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E15_MASK       (0x00008000u)
#define CSL_TPCC_TPCC_ESR_E15_SHIFT      (0x0000000Fu)
#define CSL_TPCC_TPCC_ESR_E15_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E16_MASK       (0x00010000u)
#define CSL_TPCC_TPCC_ESR_E16_SHIFT      (0x00000010u)
#define CSL_TPCC_TPCC_ESR_E16_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E17_MASK       (0x00020000u)
#define CSL_TPCC_TPCC_ESR_E17_SHIFT      (0x00000011u)
#define CSL_TPCC_TPCC_ESR_E17_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E18_MASK       (0x00040000u)
#define CSL_TPCC_TPCC_ESR_E18_SHIFT      (0x00000012u)
#define CSL_TPCC_TPCC_ESR_E18_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E19_MASK       (0x00080000u)
#define CSL_TPCC_TPCC_ESR_E19_SHIFT      (0x00000013u)
#define CSL_TPCC_TPCC_ESR_E19_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E20_MASK       (0x00100000u)
#define CSL_TPCC_TPCC_ESR_E20_SHIFT      (0x00000014u)
#define CSL_TPCC_TPCC_ESR_E20_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E21_MASK       (0x00200000u)
#define CSL_TPCC_TPCC_ESR_E21_SHIFT      (0x00000015u)
#define CSL_TPCC_TPCC_ESR_E21_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E22_MASK       (0x00400000u)
#define CSL_TPCC_TPCC_ESR_E22_SHIFT      (0x00000016u)
#define CSL_TPCC_TPCC_ESR_E22_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E23_MASK       (0x00800000u)
#define CSL_TPCC_TPCC_ESR_E23_SHIFT      (0x00000017u)
#define CSL_TPCC_TPCC_ESR_E23_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E24_MASK       (0x01000000u)
#define CSL_TPCC_TPCC_ESR_E24_SHIFT      (0x00000018u)
#define CSL_TPCC_TPCC_ESR_E24_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E25_MASK       (0x02000000u)
#define CSL_TPCC_TPCC_ESR_E25_SHIFT      (0x00000019u)
#define CSL_TPCC_TPCC_ESR_E25_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E26_MASK       (0x04000000u)
#define CSL_TPCC_TPCC_ESR_E26_SHIFT      (0x0000001Au)
#define CSL_TPCC_TPCC_ESR_E26_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E27_MASK       (0x08000000u)
#define CSL_TPCC_TPCC_ESR_E27_SHIFT      (0x0000001Bu)
#define CSL_TPCC_TPCC_ESR_E27_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E28_MASK       (0x10000000u)
#define CSL_TPCC_TPCC_ESR_E28_SHIFT      (0x0000001Cu)
#define CSL_TPCC_TPCC_ESR_E28_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E29_MASK       (0x20000000u)
#define CSL_TPCC_TPCC_ESR_E29_SHIFT      (0x0000001Du)
#define CSL_TPCC_TPCC_ESR_E29_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E30_MASK       (0x40000000u)
#define CSL_TPCC_TPCC_ESR_E30_SHIFT      (0x0000001Eu)
#define CSL_TPCC_TPCC_ESR_E30_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_E31_MASK       (0x80000000u)
#define CSL_TPCC_TPCC_ESR_E31_SHIFT      (0x0000001Fu)
#define CSL_TPCC_TPCC_ESR_E31_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_ESR_RESETVAL       (0x00000000u)

/* TPCC_ESRH */

#define CSL_TPCC_TPCC_ESRH_E32_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E32_SHIFT     (0x00000020u)
#define CSL_TPCC_TPCC_ESRH_E32_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E33_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E33_SHIFT     (0x00000021u)
#define CSL_TPCC_TPCC_ESRH_E33_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E34_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E34_SHIFT     (0x00000022u)
#define CSL_TPCC_TPCC_ESRH_E34_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E35_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E35_SHIFT     (0x00000023u)
#define CSL_TPCC_TPCC_ESRH_E35_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E36_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E36_SHIFT     (0x00000024u)
#define CSL_TPCC_TPCC_ESRH_E36_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E37_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E37_SHIFT     (0x00000025u)
#define CSL_TPCC_TPCC_ESRH_E37_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E38_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E38_SHIFT     (0x00000026u)
#define CSL_TPCC_TPCC_ESRH_E38_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E39_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E39_SHIFT     (0x00000027u)
#define CSL_TPCC_TPCC_ESRH_E39_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E40_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E40_SHIFT     (0x00000028u)
#define CSL_TPCC_TPCC_ESRH_E40_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E41_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E41_SHIFT     (0x00000029u)
#define CSL_TPCC_TPCC_ESRH_E41_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E42_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E42_SHIFT     (0x0000002Au)
#define CSL_TPCC_TPCC_ESRH_E42_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E43_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E43_SHIFT     (0x0000002Bu)
#define CSL_TPCC_TPCC_ESRH_E43_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E44_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E44_SHIFT     (0x0000002Cu)
#define CSL_TPCC_TPCC_ESRH_E44_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E45_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E45_SHIFT     (0x0000002Du)
#define CSL_TPCC_TPCC_ESRH_E45_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E46_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E46_SHIFT     (0x0000002Eu)
#define CSL_TPCC_TPCC_ESRH_E46_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E47_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E47_SHIFT     (0x0000002Fu)
#define CSL_TPCC_TPCC_ESRH_E47_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E48_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E48_SHIFT     (0x00000030u)
#define CSL_TPCC_TPCC_ESRH_E48_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E49_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E49_SHIFT     (0x00000031u)
#define CSL_TPCC_TPCC_ESRH_E49_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E50_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E50_SHIFT     (0x00000032u)
#define CSL_TPCC_TPCC_ESRH_E50_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E51_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E51_SHIFT     (0x00000033u)
#define CSL_TPCC_TPCC_ESRH_E51_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E52_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E52_SHIFT     (0x00000034u)
#define CSL_TPCC_TPCC_ESRH_E52_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E53_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E53_SHIFT     (0x00000035u)
#define CSL_TPCC_TPCC_ESRH_E53_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E54_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E54_SHIFT     (0x00000036u)
#define CSL_TPCC_TPCC_ESRH_E54_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E55_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E55_SHIFT     (0x00000037u)
#define CSL_TPCC_TPCC_ESRH_E55_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E56_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E56_SHIFT     (0x00000038u)
#define CSL_TPCC_TPCC_ESRH_E56_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E57_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E57_SHIFT     (0x00000039u)
#define CSL_TPCC_TPCC_ESRH_E57_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E58_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E58_SHIFT     (0x0000003Au)
#define CSL_TPCC_TPCC_ESRH_E58_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E59_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E59_SHIFT     (0x0000003Bu)
#define CSL_TPCC_TPCC_ESRH_E59_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E60_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E60_SHIFT     (0x0000003Cu)
#define CSL_TPCC_TPCC_ESRH_E60_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E61_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E61_SHIFT     (0x0000003Du)
#define CSL_TPCC_TPCC_ESRH_E61_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E62_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E62_SHIFT     (0x0000003Eu)
#define CSL_TPCC_TPCC_ESRH_E62_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_E63_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_ESRH_E63_SHIFT     (0x0000003Fu)
#define CSL_TPCC_TPCC_ESRH_E63_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ESRH_RESETVAL      (0x0FFFFFFFu)

/* TPCC_CER */

#define CSL_TPCC_TPCC_CER_E0_MASK        (0x00000001u)
#define CSL_TPCC_TPCC_CER_E0_SHIFT       (0x00000000u)
#define CSL_TPCC_TPCC_CER_E0_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_CER_E1_MASK        (0x00000002u)
#define CSL_TPCC_TPCC_CER_E1_SHIFT       (0x00000001u)
#define CSL_TPCC_TPCC_CER_E1_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_CER_E2_MASK        (0x00000004u)
#define CSL_TPCC_TPCC_CER_E2_SHIFT       (0x00000002u)
#define CSL_TPCC_TPCC_CER_E2_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_CER_E3_MASK        (0x00000008u)
#define CSL_TPCC_TPCC_CER_E3_SHIFT       (0x00000003u)
#define CSL_TPCC_TPCC_CER_E3_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_CER_E4_MASK        (0x00000010u)
#define CSL_TPCC_TPCC_CER_E4_SHIFT       (0x00000004u)
#define CSL_TPCC_TPCC_CER_E4_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_CER_E5_MASK        (0x00000020u)
#define CSL_TPCC_TPCC_CER_E5_SHIFT       (0x00000005u)
#define CSL_TPCC_TPCC_CER_E5_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_CER_E6_MASK        (0x00000040u)
#define CSL_TPCC_TPCC_CER_E6_SHIFT       (0x00000006u)
#define CSL_TPCC_TPCC_CER_E6_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_CER_E7_MASK        (0x00000080u)
#define CSL_TPCC_TPCC_CER_E7_SHIFT       (0x00000007u)
#define CSL_TPCC_TPCC_CER_E7_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_CER_E8_MASK        (0x00000100u)
#define CSL_TPCC_TPCC_CER_E8_SHIFT       (0x00000008u)
#define CSL_TPCC_TPCC_CER_E8_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_CER_E9_MASK        (0x00000200u)
#define CSL_TPCC_TPCC_CER_E9_SHIFT       (0x00000009u)
#define CSL_TPCC_TPCC_CER_E9_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_CER_E10_MASK       (0x00000400u)
#define CSL_TPCC_TPCC_CER_E10_SHIFT      (0x0000000Au)
#define CSL_TPCC_TPCC_CER_E10_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E11_MASK       (0x00000800u)
#define CSL_TPCC_TPCC_CER_E11_SHIFT      (0x0000000Bu)
#define CSL_TPCC_TPCC_CER_E11_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E12_MASK       (0x00001000u)
#define CSL_TPCC_TPCC_CER_E12_SHIFT      (0x0000000Cu)
#define CSL_TPCC_TPCC_CER_E12_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E13_MASK       (0x00002000u)
#define CSL_TPCC_TPCC_CER_E13_SHIFT      (0x0000000Du)
#define CSL_TPCC_TPCC_CER_E13_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E14_MASK       (0x00004000u)
#define CSL_TPCC_TPCC_CER_E14_SHIFT      (0x0000000Eu)
#define CSL_TPCC_TPCC_CER_E14_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E15_MASK       (0x00008000u)
#define CSL_TPCC_TPCC_CER_E15_SHIFT      (0x0000000Fu)
#define CSL_TPCC_TPCC_CER_E15_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E16_MASK       (0x00010000u)
#define CSL_TPCC_TPCC_CER_E16_SHIFT      (0x00000010u)
#define CSL_TPCC_TPCC_CER_E16_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E17_MASK       (0x00020000u)
#define CSL_TPCC_TPCC_CER_E17_SHIFT      (0x00000011u)
#define CSL_TPCC_TPCC_CER_E17_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E18_MASK       (0x00040000u)
#define CSL_TPCC_TPCC_CER_E18_SHIFT      (0x00000012u)
#define CSL_TPCC_TPCC_CER_E18_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E19_MASK       (0x00080000u)
#define CSL_TPCC_TPCC_CER_E19_SHIFT      (0x00000013u)
#define CSL_TPCC_TPCC_CER_E19_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E20_MASK       (0x00100000u)
#define CSL_TPCC_TPCC_CER_E20_SHIFT      (0x00000014u)
#define CSL_TPCC_TPCC_CER_E20_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E21_MASK       (0x00200000u)
#define CSL_TPCC_TPCC_CER_E21_SHIFT      (0x00000015u)
#define CSL_TPCC_TPCC_CER_E21_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E22_MASK       (0x00400000u)
#define CSL_TPCC_TPCC_CER_E22_SHIFT      (0x00000016u)
#define CSL_TPCC_TPCC_CER_E22_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E23_MASK       (0x00800000u)
#define CSL_TPCC_TPCC_CER_E23_SHIFT      (0x00000017u)
#define CSL_TPCC_TPCC_CER_E23_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E24_MASK       (0x01000000u)
#define CSL_TPCC_TPCC_CER_E24_SHIFT      (0x00000018u)
#define CSL_TPCC_TPCC_CER_E24_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E25_MASK       (0x02000000u)
#define CSL_TPCC_TPCC_CER_E25_SHIFT      (0x00000019u)
#define CSL_TPCC_TPCC_CER_E25_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E26_MASK       (0x04000000u)
#define CSL_TPCC_TPCC_CER_E26_SHIFT      (0x0000001Au)
#define CSL_TPCC_TPCC_CER_E26_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E27_MASK       (0x08000000u)
#define CSL_TPCC_TPCC_CER_E27_SHIFT      (0x0000001Bu)
#define CSL_TPCC_TPCC_CER_E27_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E28_MASK       (0x10000000u)
#define CSL_TPCC_TPCC_CER_E28_SHIFT      (0x0000001Cu)
#define CSL_TPCC_TPCC_CER_E28_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E29_MASK       (0x20000000u)
#define CSL_TPCC_TPCC_CER_E29_SHIFT      (0x0000001Du)
#define CSL_TPCC_TPCC_CER_E29_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E30_MASK       (0x40000000u)
#define CSL_TPCC_TPCC_CER_E30_SHIFT      (0x0000001Eu)
#define CSL_TPCC_TPCC_CER_E30_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_E31_MASK       (0x80000000u)
#define CSL_TPCC_TPCC_CER_E31_SHIFT      (0x0000001Fu)
#define CSL_TPCC_TPCC_CER_E31_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_CER_RESETVAL       (0x00000000u)

/* TPCC_CERH */

#define CSL_TPCC_TPCC_CERH_E32_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E32_SHIFT     (0x00000020u)
#define CSL_TPCC_TPCC_CERH_E32_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E33_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E33_SHIFT     (0x00000021u)
#define CSL_TPCC_TPCC_CERH_E33_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E34_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E34_SHIFT     (0x00000022u)
#define CSL_TPCC_TPCC_CERH_E34_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E35_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E35_SHIFT     (0x00000023u)
#define CSL_TPCC_TPCC_CERH_E35_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E36_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E36_SHIFT     (0x00000024u)
#define CSL_TPCC_TPCC_CERH_E36_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E37_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E37_SHIFT     (0x00000025u)
#define CSL_TPCC_TPCC_CERH_E37_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E38_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E38_SHIFT     (0x00000026u)
#define CSL_TPCC_TPCC_CERH_E38_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E39_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E39_SHIFT     (0x00000027u)
#define CSL_TPCC_TPCC_CERH_E39_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E40_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E40_SHIFT     (0x00000028u)
#define CSL_TPCC_TPCC_CERH_E40_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E41_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E41_SHIFT     (0x00000029u)
#define CSL_TPCC_TPCC_CERH_E41_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E42_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E42_SHIFT     (0x0000002Au)
#define CSL_TPCC_TPCC_CERH_E42_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E43_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E43_SHIFT     (0x0000002Bu)
#define CSL_TPCC_TPCC_CERH_E43_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E44_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E44_SHIFT     (0x0000002Cu)
#define CSL_TPCC_TPCC_CERH_E44_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E45_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E45_SHIFT     (0x0000002Du)
#define CSL_TPCC_TPCC_CERH_E45_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E46_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E46_SHIFT     (0x0000002Eu)
#define CSL_TPCC_TPCC_CERH_E46_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E47_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E47_SHIFT     (0x0000002Fu)
#define CSL_TPCC_TPCC_CERH_E47_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E48_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E48_SHIFT     (0x00000030u)
#define CSL_TPCC_TPCC_CERH_E48_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E49_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E49_SHIFT     (0x00000031u)
#define CSL_TPCC_TPCC_CERH_E49_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E50_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E50_SHIFT     (0x00000032u)
#define CSL_TPCC_TPCC_CERH_E50_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E51_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E51_SHIFT     (0x00000033u)
#define CSL_TPCC_TPCC_CERH_E51_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E52_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E52_SHIFT     (0x00000034u)
#define CSL_TPCC_TPCC_CERH_E52_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E53_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E53_SHIFT     (0x00000035u)
#define CSL_TPCC_TPCC_CERH_E53_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E54_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E54_SHIFT     (0x00000036u)
#define CSL_TPCC_TPCC_CERH_E54_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E55_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E55_SHIFT     (0x00000037u)
#define CSL_TPCC_TPCC_CERH_E55_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E56_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E56_SHIFT     (0x00000038u)
#define CSL_TPCC_TPCC_CERH_E56_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E57_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E57_SHIFT     (0x00000039u)
#define CSL_TPCC_TPCC_CERH_E57_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E58_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E58_SHIFT     (0x0000003Au)
#define CSL_TPCC_TPCC_CERH_E58_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E59_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E59_SHIFT     (0x0000003Bu)
#define CSL_TPCC_TPCC_CERH_E59_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E60_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E60_SHIFT     (0x0000003Cu)
#define CSL_TPCC_TPCC_CERH_E60_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E61_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E61_SHIFT     (0x0000003Du)
#define CSL_TPCC_TPCC_CERH_E61_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E62_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E62_SHIFT     (0x0000003Eu)
#define CSL_TPCC_TPCC_CERH_E62_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_E63_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_CERH_E63_SHIFT     (0x0000003Fu)
#define CSL_TPCC_TPCC_CERH_E63_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_CERH_RESETVAL      (0x0FFFFFFFu)

/* TPCC_EER */

#define CSL_TPCC_TPCC_EER_E0_MASK        (0x00000001u)
#define CSL_TPCC_TPCC_EER_E0_SHIFT       (0x00000000u)
#define CSL_TPCC_TPCC_EER_E0_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_EER_E1_MASK        (0x00000002u)
#define CSL_TPCC_TPCC_EER_E1_SHIFT       (0x00000001u)
#define CSL_TPCC_TPCC_EER_E1_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_EER_E2_MASK        (0x00000004u)
#define CSL_TPCC_TPCC_EER_E2_SHIFT       (0x00000002u)
#define CSL_TPCC_TPCC_EER_E2_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_EER_E3_MASK        (0x00000008u)
#define CSL_TPCC_TPCC_EER_E3_SHIFT       (0x00000003u)
#define CSL_TPCC_TPCC_EER_E3_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_EER_E4_MASK        (0x00000010u)
#define CSL_TPCC_TPCC_EER_E4_SHIFT       (0x00000004u)
#define CSL_TPCC_TPCC_EER_E4_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_EER_E5_MASK        (0x00000020u)
#define CSL_TPCC_TPCC_EER_E5_SHIFT       (0x00000005u)
#define CSL_TPCC_TPCC_EER_E5_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_EER_E6_MASK        (0x00000040u)
#define CSL_TPCC_TPCC_EER_E6_SHIFT       (0x00000006u)
#define CSL_TPCC_TPCC_EER_E6_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_EER_E7_MASK        (0x00000080u)
#define CSL_TPCC_TPCC_EER_E7_SHIFT       (0x00000007u)
#define CSL_TPCC_TPCC_EER_E7_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_EER_E8_MASK        (0x00000100u)
#define CSL_TPCC_TPCC_EER_E8_SHIFT       (0x00000008u)
#define CSL_TPCC_TPCC_EER_E8_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_EER_E9_MASK        (0x00000200u)
#define CSL_TPCC_TPCC_EER_E9_SHIFT       (0x00000009u)
#define CSL_TPCC_TPCC_EER_E9_RESETVAL    (0x00000000u)

#define CSL_TPCC_TPCC_EER_E10_MASK       (0x00000400u)
#define CSL_TPCC_TPCC_EER_E10_SHIFT      (0x0000000Au)
#define CSL_TPCC_TPCC_EER_E10_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E11_MASK       (0x00000800u)
#define CSL_TPCC_TPCC_EER_E11_SHIFT      (0x0000000Bu)
#define CSL_TPCC_TPCC_EER_E11_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E12_MASK       (0x00001000u)
#define CSL_TPCC_TPCC_EER_E12_SHIFT      (0x0000000Cu)
#define CSL_TPCC_TPCC_EER_E12_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E13_MASK       (0x00002000u)
#define CSL_TPCC_TPCC_EER_E13_SHIFT      (0x0000000Du)
#define CSL_TPCC_TPCC_EER_E13_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E14_MASK       (0x00004000u)
#define CSL_TPCC_TPCC_EER_E14_SHIFT      (0x0000000Eu)
#define CSL_TPCC_TPCC_EER_E14_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E15_MASK       (0x00008000u)
#define CSL_TPCC_TPCC_EER_E15_SHIFT      (0x0000000Fu)
#define CSL_TPCC_TPCC_EER_E15_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E16_MASK       (0x00010000u)
#define CSL_TPCC_TPCC_EER_E16_SHIFT      (0x00000010u)
#define CSL_TPCC_TPCC_EER_E16_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E17_MASK       (0x00020000u)
#define CSL_TPCC_TPCC_EER_E17_SHIFT      (0x00000011u)
#define CSL_TPCC_TPCC_EER_E17_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E18_MASK       (0x00040000u)
#define CSL_TPCC_TPCC_EER_E18_SHIFT      (0x00000012u)
#define CSL_TPCC_TPCC_EER_E18_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E19_MASK       (0x00080000u)
#define CSL_TPCC_TPCC_EER_E19_SHIFT      (0x00000013u)
#define CSL_TPCC_TPCC_EER_E19_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E20_MASK       (0x00100000u)
#define CSL_TPCC_TPCC_EER_E20_SHIFT      (0x00000014u)
#define CSL_TPCC_TPCC_EER_E20_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E21_MASK       (0x00200000u)
#define CSL_TPCC_TPCC_EER_E21_SHIFT      (0x00000015u)
#define CSL_TPCC_TPCC_EER_E21_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E22_MASK       (0x00400000u)
#define CSL_TPCC_TPCC_EER_E22_SHIFT      (0x00000016u)
#define CSL_TPCC_TPCC_EER_E22_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E23_MASK       (0x00800000u)
#define CSL_TPCC_TPCC_EER_E23_SHIFT      (0x00000017u)
#define CSL_TPCC_TPCC_EER_E23_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E24_MASK       (0x01000000u)
#define CSL_TPCC_TPCC_EER_E24_SHIFT      (0x00000018u)
#define CSL_TPCC_TPCC_EER_E24_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E25_MASK       (0x02000000u)
#define CSL_TPCC_TPCC_EER_E25_SHIFT      (0x00000019u)
#define CSL_TPCC_TPCC_EER_E25_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E26_MASK       (0x04000000u)
#define CSL_TPCC_TPCC_EER_E26_SHIFT      (0x0000001Au)
#define CSL_TPCC_TPCC_EER_E26_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E27_MASK       (0x08000000u)
#define CSL_TPCC_TPCC_EER_E27_SHIFT      (0x0000001Bu)
#define CSL_TPCC_TPCC_EER_E27_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E28_MASK       (0x10000000u)
#define CSL_TPCC_TPCC_EER_E28_SHIFT      (0x0000001Cu)
#define CSL_TPCC_TPCC_EER_E28_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E29_MASK       (0x20000000u)
#define CSL_TPCC_TPCC_EER_E29_SHIFT      (0x0000001Du)
#define CSL_TPCC_TPCC_EER_E29_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E30_MASK       (0x40000000u)
#define CSL_TPCC_TPCC_EER_E30_SHIFT      (0x0000001Eu)
#define CSL_TPCC_TPCC_EER_E30_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_E31_MASK       (0x80000000u)
#define CSL_TPCC_TPCC_EER_E31_SHIFT      (0x0000001Fu)
#define CSL_TPCC_TPCC_EER_E31_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EER_RESETVAL       (0x00000000u)

/* TPCC_EERH */

#define CSL_TPCC_TPCC_EERH_E32_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E32_SHIFT     (0x00000020u)
#define CSL_TPCC_TPCC_EERH_E32_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E33_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E33_SHIFT     (0x00000021u)
#define CSL_TPCC_TPCC_EERH_E33_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E34_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E34_SHIFT     (0x00000022u)
#define CSL_TPCC_TPCC_EERH_E34_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E35_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E35_SHIFT     (0x00000023u)
#define CSL_TPCC_TPCC_EERH_E35_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E36_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E36_SHIFT     (0x00000024u)
#define CSL_TPCC_TPCC_EERH_E36_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E37_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E37_SHIFT     (0x00000025u)
#define CSL_TPCC_TPCC_EERH_E37_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E38_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E38_SHIFT     (0x00000026u)
#define CSL_TPCC_TPCC_EERH_E38_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E39_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E39_SHIFT     (0x00000027u)
#define CSL_TPCC_TPCC_EERH_E39_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E40_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E40_SHIFT     (0x00000028u)
#define CSL_TPCC_TPCC_EERH_E40_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E41_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E41_SHIFT     (0x00000029u)
#define CSL_TPCC_TPCC_EERH_E41_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E42_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E42_SHIFT     (0x0000002Au)
#define CSL_TPCC_TPCC_EERH_E42_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E43_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E43_SHIFT     (0x0000002Bu)
#define CSL_TPCC_TPCC_EERH_E43_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E44_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E44_SHIFT     (0x0000002Cu)
#define CSL_TPCC_TPCC_EERH_E44_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E45_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E45_SHIFT     (0x0000002Du)
#define CSL_TPCC_TPCC_EERH_E45_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E46_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E46_SHIFT     (0x0000002Eu)
#define CSL_TPCC_TPCC_EERH_E46_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E47_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E47_SHIFT     (0x0000002Fu)
#define CSL_TPCC_TPCC_EERH_E47_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E48_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E48_SHIFT     (0x00000030u)
#define CSL_TPCC_TPCC_EERH_E48_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E49_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E49_SHIFT     (0x00000031u)
#define CSL_TPCC_TPCC_EERH_E49_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E50_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E50_SHIFT     (0x00000032u)
#define CSL_TPCC_TPCC_EERH_E50_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E51_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E51_SHIFT     (0x00000033u)
#define CSL_TPCC_TPCC_EERH_E51_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E52_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E52_SHIFT     (0x00000034u)
#define CSL_TPCC_TPCC_EERH_E52_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E53_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E53_SHIFT     (0x00000035u)
#define CSL_TPCC_TPCC_EERH_E53_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E54_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E54_SHIFT     (0x00000036u)
#define CSL_TPCC_TPCC_EERH_E54_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E55_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E55_SHIFT     (0x00000037u)
#define CSL_TPCC_TPCC_EERH_E55_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E56_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E56_SHIFT     (0x00000038u)
#define CSL_TPCC_TPCC_EERH_E56_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E57_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E57_SHIFT     (0x00000039u)
#define CSL_TPCC_TPCC_EERH_E57_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E58_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E58_SHIFT     (0x0000003Au)
#define CSL_TPCC_TPCC_EERH_E58_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E59_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E59_SHIFT     (0x0000003Bu)
#define CSL_TPCC_TPCC_EERH_E59_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E60_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E60_SHIFT     (0x0000003Cu)
#define CSL_TPCC_TPCC_EERH_E60_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E61_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E61_SHIFT     (0x0000003Du)
#define CSL_TPCC_TPCC_EERH_E61_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E62_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E62_SHIFT     (0x0000003Eu)
#define CSL_TPCC_TPCC_EERH_E62_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_E63_MASK      (0x00000000u)
#define CSL_TPCC_TPCC_EERH_E63_SHIFT     (0x0000003Fu)
#define CSL_TPCC_TPCC_EERH_E63_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EERH_RESETVAL      (0x0FFFFFFFu)

/* TPCC_EECR */

#define CSL_TPCC_TPCC_EECR_E0_MASK       (0x00000001u)
#define CSL_TPCC_TPCC_EECR_E0_SHIFT      (0x00000000u)
#define CSL_TPCC_TPCC_EECR_E0_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E1_MASK       (0x00000002u)
#define CSL_TPCC_TPCC_EECR_E1_SHIFT      (0x00000001u)
#define CSL_TPCC_TPCC_EECR_E1_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E2_MASK       (0x00000004u)
#define CSL_TPCC_TPCC_EECR_E2_SHIFT      (0x00000002u)
#define CSL_TPCC_TPCC_EECR_E2_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E3_MASK       (0x00000008u)
#define CSL_TPCC_TPCC_EECR_E3_SHIFT      (0x00000003u)
#define CSL_TPCC_TPCC_EECR_E3_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E4_MASK       (0x00000010u)
#define CSL_TPCC_TPCC_EECR_E4_SHIFT      (0x00000004u)
#define CSL_TPCC_TPCC_EECR_E4_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E5_MASK       (0x00000020u)
#define CSL_TPCC_TPCC_EECR_E5_SHIFT      (0x00000005u)
#define CSL_TPCC_TPCC_EECR_E5_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E6_MASK       (0x00000040u)
#define CSL_TPCC_TPCC_EECR_E6_SHIFT      (0x00000006u)
#define CSL_TPCC_TPCC_EECR_E6_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E7_MASK       (0x00000080u)
#define CSL_TPCC_TPCC_EECR_E7_SHIFT      (0x00000007u)
#define CSL_TPCC_TPCC_EECR_E7_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E8_MASK       (0x00000100u)
#define CSL_TPCC_TPCC_EECR_E8_SHIFT      (0x00000008u)
#define CSL_TPCC_TPCC_EECR_E8_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E9_MASK       (0x00000200u)
#define CSL_TPCC_TPCC_EECR_E9_SHIFT      (0x00000009u)
#define CSL_TPCC_TPCC_EECR_E9_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E10_MASK      (0x00000400u)
#define CSL_TPCC_TPCC_EECR_E10_SHIFT     (0x0000000Au)
#define CSL_TPCC_TPCC_EECR_E10_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E11_MASK      (0x00000800u)
#define CSL_TPCC_TPCC_EECR_E11_SHIFT     (0x0000000Bu)
#define CSL_TPCC_TPCC_EECR_E11_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E12_MASK      (0x00001000u)
#define CSL_TPCC_TPCC_EECR_E12_SHIFT     (0x0000000Cu)
#define CSL_TPCC_TPCC_EECR_E12_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E13_MASK      (0x00002000u)
#define CSL_TPCC_TPCC_EECR_E13_SHIFT     (0x0000000Du)
#define CSL_TPCC_TPCC_EECR_E13_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E14_MASK      (0x00004000u)
#define CSL_TPCC_TPCC_EECR_E14_SHIFT     (0x0000000Eu)
#define CSL_TPCC_TPCC_EECR_E14_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E15_MASK      (0x00008000u)
#define CSL_TPCC_TPCC_EECR_E15_SHIFT     (0x0000000Fu)
#define CSL_TPCC_TPCC_EECR_E15_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E16_MASK      (0x00010000u)
#define CSL_TPCC_TPCC_EECR_E16_SHIFT     (0x00000010u)
#define CSL_TPCC_TPCC_EECR_E16_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E17_MASK      (0x00020000u)
#define CSL_TPCC_TPCC_EECR_E17_SHIFT     (0x00000011u)
#define CSL_TPCC_TPCC_EECR_E17_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E18_MASK      (0x00040000u)
#define CSL_TPCC_TPCC_EECR_E18_SHIFT     (0x00000012u)
#define CSL_TPCC_TPCC_EECR_E18_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E19_MASK      (0x00080000u)
#define CSL_TPCC_TPCC_EECR_E19_SHIFT     (0x00000013u)
#define CSL_TPCC_TPCC_EECR_E19_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E20_MASK      (0x00100000u)
#define CSL_TPCC_TPCC_EECR_E20_SHIFT     (0x00000014u)
#define CSL_TPCC_TPCC_EECR_E20_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E21_MASK      (0x00200000u)
#define CSL_TPCC_TPCC_EECR_E21_SHIFT     (0x00000015u)
#define CSL_TPCC_TPCC_EECR_E21_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E22_MASK      (0x00400000u)
#define CSL_TPCC_TPCC_EECR_E22_SHIFT     (0x00000016u)
#define CSL_TPCC_TPCC_EECR_E22_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E23_MASK      (0x00800000u)
#define CSL_TPCC_TPCC_EECR_E23_SHIFT     (0x00000017u)
#define CSL_TPCC_TPCC_EECR_E23_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E24_MASK      (0x01000000u)
#define CSL_TPCC_TPCC_EECR_E24_SHIFT     (0x00000018u)
#define CSL_TPCC_TPCC_EECR_E24_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E25_MASK      (0x02000000u)
#define CSL_TPCC_TPCC_EECR_E25_SHIFT     (0x00000019u)
#define CSL_TPCC_TPCC_EECR_E25_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E26_MASK      (0x04000000u)
#define CSL_TPCC_TPCC_EECR_E26_SHIFT     (0x0000001Au)
#define CSL_TPCC_TPCC_EECR_E26_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E27_MASK      (0x08000000u)
#define CSL_TPCC_TPCC_EECR_E27_SHIFT     (0x0000001Bu)
#define CSL_TPCC_TPCC_EECR_E27_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E28_MASK      (0x10000000u)
#define CSL_TPCC_TPCC_EECR_E28_SHIFT     (0x0000001Cu)
#define CSL_TPCC_TPCC_EECR_E28_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E29_MASK      (0x20000000u)
#define CSL_TPCC_TPCC_EECR_E29_SHIFT     (0x0000001Du)
#define CSL_TPCC_TPCC_EECR_E29_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E30_MASK      (0x40000000u)
#define CSL_TPCC_TPCC_EECR_E30_SHIFT     (0x0000001Eu)
#define CSL_TPCC_TPCC_EECR_E30_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_E31_MASK      (0x80000000u)
#define CSL_TPCC_TPCC_EECR_E31_SHIFT     (0x0000001Fu)
#define CSL_TPCC_TPCC_EECR_E31_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EECR_RESETVAL      (0x00000000u)

/* TPCC_EECRH */

#define CSL_TPCC_TPCC_EECRH_E32_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E32_SHIFT    (0x00000020u)
#define CSL_TPCC_TPCC_EECRH_E32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E33_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E33_SHIFT    (0x00000021u)
#define CSL_TPCC_TPCC_EECRH_E33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E34_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E34_SHIFT    (0x00000022u)
#define CSL_TPCC_TPCC_EECRH_E34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E35_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E35_SHIFT    (0x00000023u)
#define CSL_TPCC_TPCC_EECRH_E35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E36_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E36_SHIFT    (0x00000024u)
#define CSL_TPCC_TPCC_EECRH_E36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E37_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E37_SHIFT    (0x00000025u)
#define CSL_TPCC_TPCC_EECRH_E37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E38_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E38_SHIFT    (0x00000026u)
#define CSL_TPCC_TPCC_EECRH_E38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E39_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E39_SHIFT    (0x00000027u)
#define CSL_TPCC_TPCC_EECRH_E39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E40_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E40_SHIFT    (0x00000028u)
#define CSL_TPCC_TPCC_EECRH_E40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E41_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E41_SHIFT    (0x00000029u)
#define CSL_TPCC_TPCC_EECRH_E41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E42_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E42_SHIFT    (0x0000002Au)
#define CSL_TPCC_TPCC_EECRH_E42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E43_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E43_SHIFT    (0x0000002Bu)
#define CSL_TPCC_TPCC_EECRH_E43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E44_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E44_SHIFT    (0x0000002Cu)
#define CSL_TPCC_TPCC_EECRH_E44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E45_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E45_SHIFT    (0x0000002Du)
#define CSL_TPCC_TPCC_EECRH_E45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E46_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E46_SHIFT    (0x0000002Eu)
#define CSL_TPCC_TPCC_EECRH_E46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E47_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E47_SHIFT    (0x0000002Fu)
#define CSL_TPCC_TPCC_EECRH_E47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E48_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E48_SHIFT    (0x00000030u)
#define CSL_TPCC_TPCC_EECRH_E48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E49_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E49_SHIFT    (0x00000031u)
#define CSL_TPCC_TPCC_EECRH_E49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E50_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E50_SHIFT    (0x00000032u)
#define CSL_TPCC_TPCC_EECRH_E50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E51_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E51_SHIFT    (0x00000033u)
#define CSL_TPCC_TPCC_EECRH_E51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E52_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E52_SHIFT    (0x00000034u)
#define CSL_TPCC_TPCC_EECRH_E52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E53_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E53_SHIFT    (0x00000035u)
#define CSL_TPCC_TPCC_EECRH_E53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E54_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E54_SHIFT    (0x00000036u)
#define CSL_TPCC_TPCC_EECRH_E54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E55_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E55_SHIFT    (0x00000037u)
#define CSL_TPCC_TPCC_EECRH_E55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E56_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E56_SHIFT    (0x00000038u)
#define CSL_TPCC_TPCC_EECRH_E56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E57_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E57_SHIFT    (0x00000039u)
#define CSL_TPCC_TPCC_EECRH_E57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E58_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E58_SHIFT    (0x0000003Au)
#define CSL_TPCC_TPCC_EECRH_E58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E59_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E59_SHIFT    (0x0000003Bu)
#define CSL_TPCC_TPCC_EECRH_E59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E60_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E60_SHIFT    (0x0000003Cu)
#define CSL_TPCC_TPCC_EECRH_E60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E61_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E61_SHIFT    (0x0000003Du)
#define CSL_TPCC_TPCC_EECRH_E61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E62_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E62_SHIFT    (0x0000003Eu)
#define CSL_TPCC_TPCC_EECRH_E62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_E63_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EECRH_E63_SHIFT    (0x0000003Fu)
#define CSL_TPCC_TPCC_EECRH_E63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EECRH_RESETVAL     (0x0FFFFFFFu)

/* TPCC_EESR */

#define CSL_TPCC_TPCC_EESR_E0_MASK       (0x00000001u)
#define CSL_TPCC_TPCC_EESR_E0_SHIFT      (0x00000000u)
#define CSL_TPCC_TPCC_EESR_E0_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E1_MASK       (0x00000002u)
#define CSL_TPCC_TPCC_EESR_E1_SHIFT      (0x00000001u)
#define CSL_TPCC_TPCC_EESR_E1_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E2_MASK       (0x00000004u)
#define CSL_TPCC_TPCC_EESR_E2_SHIFT      (0x00000002u)
#define CSL_TPCC_TPCC_EESR_E2_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E3_MASK       (0x00000008u)
#define CSL_TPCC_TPCC_EESR_E3_SHIFT      (0x00000003u)
#define CSL_TPCC_TPCC_EESR_E3_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E4_MASK       (0x00000010u)
#define CSL_TPCC_TPCC_EESR_E4_SHIFT      (0x00000004u)
#define CSL_TPCC_TPCC_EESR_E4_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E5_MASK       (0x00000020u)
#define CSL_TPCC_TPCC_EESR_E5_SHIFT      (0x00000005u)
#define CSL_TPCC_TPCC_EESR_E5_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E6_MASK       (0x00000040u)
#define CSL_TPCC_TPCC_EESR_E6_SHIFT      (0x00000006u)
#define CSL_TPCC_TPCC_EESR_E6_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E7_MASK       (0x00000080u)
#define CSL_TPCC_TPCC_EESR_E7_SHIFT      (0x00000007u)
#define CSL_TPCC_TPCC_EESR_E7_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E8_MASK       (0x00000100u)
#define CSL_TPCC_TPCC_EESR_E8_SHIFT      (0x00000008u)
#define CSL_TPCC_TPCC_EESR_E8_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E9_MASK       (0x00000200u)
#define CSL_TPCC_TPCC_EESR_E9_SHIFT      (0x00000009u)
#define CSL_TPCC_TPCC_EESR_E9_RESETVAL   (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E10_MASK      (0x00000400u)
#define CSL_TPCC_TPCC_EESR_E10_SHIFT     (0x0000000Au)
#define CSL_TPCC_TPCC_EESR_E10_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E11_MASK      (0x00000800u)
#define CSL_TPCC_TPCC_EESR_E11_SHIFT     (0x0000000Bu)
#define CSL_TPCC_TPCC_EESR_E11_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E12_MASK      (0x00001000u)
#define CSL_TPCC_TPCC_EESR_E12_SHIFT     (0x0000000Cu)
#define CSL_TPCC_TPCC_EESR_E12_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E13_MASK      (0x00002000u)
#define CSL_TPCC_TPCC_EESR_E13_SHIFT     (0x0000000Du)
#define CSL_TPCC_TPCC_EESR_E13_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E14_MASK      (0x00004000u)
#define CSL_TPCC_TPCC_EESR_E14_SHIFT     (0x0000000Eu)
#define CSL_TPCC_TPCC_EESR_E14_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E15_MASK      (0x00008000u)
#define CSL_TPCC_TPCC_EESR_E15_SHIFT     (0x0000000Fu)
#define CSL_TPCC_TPCC_EESR_E15_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E16_MASK      (0x00010000u)
#define CSL_TPCC_TPCC_EESR_E16_SHIFT     (0x00000010u)
#define CSL_TPCC_TPCC_EESR_E16_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E17_MASK      (0x00020000u)
#define CSL_TPCC_TPCC_EESR_E17_SHIFT     (0x00000011u)
#define CSL_TPCC_TPCC_EESR_E17_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E18_MASK      (0x00040000u)
#define CSL_TPCC_TPCC_EESR_E18_SHIFT     (0x00000012u)
#define CSL_TPCC_TPCC_EESR_E18_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E19_MASK      (0x00080000u)
#define CSL_TPCC_TPCC_EESR_E19_SHIFT     (0x00000013u)
#define CSL_TPCC_TPCC_EESR_E19_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E20_MASK      (0x00100000u)
#define CSL_TPCC_TPCC_EESR_E20_SHIFT     (0x00000014u)
#define CSL_TPCC_TPCC_EESR_E20_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E21_MASK      (0x00200000u)
#define CSL_TPCC_TPCC_EESR_E21_SHIFT     (0x00000015u)
#define CSL_TPCC_TPCC_EESR_E21_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E22_MASK      (0x00400000u)
#define CSL_TPCC_TPCC_EESR_E22_SHIFT     (0x00000016u)
#define CSL_TPCC_TPCC_EESR_E22_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E23_MASK      (0x00800000u)
#define CSL_TPCC_TPCC_EESR_E23_SHIFT     (0x00000017u)
#define CSL_TPCC_TPCC_EESR_E23_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E24_MASK      (0x01000000u)
#define CSL_TPCC_TPCC_EESR_E24_SHIFT     (0x00000018u)
#define CSL_TPCC_TPCC_EESR_E24_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E25_MASK      (0x02000000u)
#define CSL_TPCC_TPCC_EESR_E25_SHIFT     (0x00000019u)
#define CSL_TPCC_TPCC_EESR_E25_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E26_MASK      (0x04000000u)
#define CSL_TPCC_TPCC_EESR_E26_SHIFT     (0x0000001Au)
#define CSL_TPCC_TPCC_EESR_E26_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E27_MASK      (0x08000000u)
#define CSL_TPCC_TPCC_EESR_E27_SHIFT     (0x0000001Bu)
#define CSL_TPCC_TPCC_EESR_E27_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E28_MASK      (0x10000000u)
#define CSL_TPCC_TPCC_EESR_E28_SHIFT     (0x0000001Cu)
#define CSL_TPCC_TPCC_EESR_E28_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E29_MASK      (0x20000000u)
#define CSL_TPCC_TPCC_EESR_E29_SHIFT     (0x0000001Du)
#define CSL_TPCC_TPCC_EESR_E29_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E30_MASK      (0x40000000u)
#define CSL_TPCC_TPCC_EESR_E30_SHIFT     (0x0000001Eu)
#define CSL_TPCC_TPCC_EESR_E30_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_E31_MASK      (0x80000000u)
#define CSL_TPCC_TPCC_EESR_E31_SHIFT     (0x0000001Fu)
#define CSL_TPCC_TPCC_EESR_E31_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_EESR_RESETVAL      (0x00000000u)

/* TPCC_EESRH */

#define CSL_TPCC_TPCC_EESRH_E32_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E32_SHIFT    (0x00000020u)
#define CSL_TPCC_TPCC_EESRH_E32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E33_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E33_SHIFT    (0x00000021u)
#define CSL_TPCC_TPCC_EESRH_E33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E34_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E34_SHIFT    (0x00000022u)
#define CSL_TPCC_TPCC_EESRH_E34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E35_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E35_SHIFT    (0x00000023u)
#define CSL_TPCC_TPCC_EESRH_E35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E36_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E36_SHIFT    (0x00000024u)
#define CSL_TPCC_TPCC_EESRH_E36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E37_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E37_SHIFT    (0x00000025u)
#define CSL_TPCC_TPCC_EESRH_E37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E38_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E38_SHIFT    (0x00000026u)
#define CSL_TPCC_TPCC_EESRH_E38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E39_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E39_SHIFT    (0x00000027u)
#define CSL_TPCC_TPCC_EESRH_E39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E40_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E40_SHIFT    (0x00000028u)
#define CSL_TPCC_TPCC_EESRH_E40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E41_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E41_SHIFT    (0x00000029u)
#define CSL_TPCC_TPCC_EESRH_E41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E42_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E42_SHIFT    (0x0000002Au)
#define CSL_TPCC_TPCC_EESRH_E42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E43_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E43_SHIFT    (0x0000002Bu)
#define CSL_TPCC_TPCC_EESRH_E43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E44_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E44_SHIFT    (0x0000002Cu)
#define CSL_TPCC_TPCC_EESRH_E44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E45_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E45_SHIFT    (0x0000002Du)
#define CSL_TPCC_TPCC_EESRH_E45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E46_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E46_SHIFT    (0x0000002Eu)
#define CSL_TPCC_TPCC_EESRH_E46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E47_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E47_SHIFT    (0x0000002Fu)
#define CSL_TPCC_TPCC_EESRH_E47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E48_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E48_SHIFT    (0x00000030u)
#define CSL_TPCC_TPCC_EESRH_E48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E49_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E49_SHIFT    (0x00000031u)
#define CSL_TPCC_TPCC_EESRH_E49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E50_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E50_SHIFT    (0x00000032u)
#define CSL_TPCC_TPCC_EESRH_E50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E51_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E51_SHIFT    (0x00000033u)
#define CSL_TPCC_TPCC_EESRH_E51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E52_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E52_SHIFT    (0x00000034u)
#define CSL_TPCC_TPCC_EESRH_E52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E53_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E53_SHIFT    (0x00000035u)
#define CSL_TPCC_TPCC_EESRH_E53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E54_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E54_SHIFT    (0x00000036u)
#define CSL_TPCC_TPCC_EESRH_E54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E55_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E55_SHIFT    (0x00000037u)
#define CSL_TPCC_TPCC_EESRH_E55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E56_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E56_SHIFT    (0x00000038u)
#define CSL_TPCC_TPCC_EESRH_E56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E57_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E57_SHIFT    (0x00000039u)
#define CSL_TPCC_TPCC_EESRH_E57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E58_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E58_SHIFT    (0x0000003Au)
#define CSL_TPCC_TPCC_EESRH_E58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E59_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E59_SHIFT    (0x0000003Bu)
#define CSL_TPCC_TPCC_EESRH_E59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E60_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E60_SHIFT    (0x0000003Cu)
#define CSL_TPCC_TPCC_EESRH_E60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E61_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E61_SHIFT    (0x0000003Du)
#define CSL_TPCC_TPCC_EESRH_E61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E62_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E62_SHIFT    (0x0000003Eu)
#define CSL_TPCC_TPCC_EESRH_E62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_E63_MASK     (0x00000000u)
#define CSL_TPCC_TPCC_EESRH_E63_SHIFT    (0x0000003Fu)
#define CSL_TPCC_TPCC_EESRH_E63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_EESRH_RESETVAL     (0x0FFFFFFFu)

/* TPCC_SER */

#define CSL_TPCC_TPCC_SER_SER0_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_SER_SER0_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_SER_SER0_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER1_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_SER_SER1_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_SER_SER1_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER2_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_SER_SER2_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_SER_SER2_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER3_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_SER_SER3_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_SER_SER3_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER4_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_SER_SER4_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_SER_SER4_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER5_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_SER_SER5_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_SER_SER5_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER6_MASK      (0x00000040u)
#define CSL_TPCC_TPCC_SER_SER6_SHIFT     (0x00000006u)
#define CSL_TPCC_TPCC_SER_SER6_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER7_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_SER_SER7_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_SER_SER7_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER8_MASK      (0x00000100u)
#define CSL_TPCC_TPCC_SER_SER8_SHIFT     (0x00000008u)
#define CSL_TPCC_TPCC_SER_SER8_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER9_MASK      (0x00000200u)
#define CSL_TPCC_TPCC_SER_SER9_SHIFT     (0x00000009u)
#define CSL_TPCC_TPCC_SER_SER9_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER10_MASK     (0x00000400u)
#define CSL_TPCC_TPCC_SER_SER10_SHIFT    (0x0000000Au)
#define CSL_TPCC_TPCC_SER_SER10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER11_MASK     (0x00000800u)
#define CSL_TPCC_TPCC_SER_SER11_SHIFT    (0x0000000Bu)
#define CSL_TPCC_TPCC_SER_SER11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER12_MASK     (0x00001000u)
#define CSL_TPCC_TPCC_SER_SER12_SHIFT    (0x0000000Cu)
#define CSL_TPCC_TPCC_SER_SER12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER13_MASK     (0x00002000u)
#define CSL_TPCC_TPCC_SER_SER13_SHIFT    (0x0000000Du)
#define CSL_TPCC_TPCC_SER_SER13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER14_MASK     (0x00004000u)
#define CSL_TPCC_TPCC_SER_SER14_SHIFT    (0x0000000Eu)
#define CSL_TPCC_TPCC_SER_SER14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER15_MASK     (0x00008000u)
#define CSL_TPCC_TPCC_SER_SER15_SHIFT    (0x0000000Fu)
#define CSL_TPCC_TPCC_SER_SER15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER16_MASK     (0x00010000u)
#define CSL_TPCC_TPCC_SER_SER16_SHIFT    (0x00000010u)
#define CSL_TPCC_TPCC_SER_SER16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER17_MASK     (0x00020000u)
#define CSL_TPCC_TPCC_SER_SER17_SHIFT    (0x00000011u)
#define CSL_TPCC_TPCC_SER_SER17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER18_MASK     (0x00040000u)
#define CSL_TPCC_TPCC_SER_SER18_SHIFT    (0x00000012u)
#define CSL_TPCC_TPCC_SER_SER18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER19_MASK     (0x00080000u)
#define CSL_TPCC_TPCC_SER_SER19_SHIFT    (0x00000013u)
#define CSL_TPCC_TPCC_SER_SER19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER20_MASK     (0x00100000u)
#define CSL_TPCC_TPCC_SER_SER20_SHIFT    (0x00000014u)
#define CSL_TPCC_TPCC_SER_SER20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER21_MASK     (0x00200000u)
#define CSL_TPCC_TPCC_SER_SER21_SHIFT    (0x00000015u)
#define CSL_TPCC_TPCC_SER_SER21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER22_MASK     (0x00400000u)
#define CSL_TPCC_TPCC_SER_SER22_SHIFT    (0x00000016u)
#define CSL_TPCC_TPCC_SER_SER22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER23_MASK     (0x00800000u)
#define CSL_TPCC_TPCC_SER_SER23_SHIFT    (0x00000017u)
#define CSL_TPCC_TPCC_SER_SER23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER24_MASK     (0x01000000u)
#define CSL_TPCC_TPCC_SER_SER24_SHIFT    (0x00000018u)
#define CSL_TPCC_TPCC_SER_SER24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER25_MASK     (0x02000000u)
#define CSL_TPCC_TPCC_SER_SER25_SHIFT    (0x00000019u)
#define CSL_TPCC_TPCC_SER_SER25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER26_MASK     (0x04000000u)
#define CSL_TPCC_TPCC_SER_SER26_SHIFT    (0x0000001Au)
#define CSL_TPCC_TPCC_SER_SER26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER27_MASK     (0x08000000u)
#define CSL_TPCC_TPCC_SER_SER27_SHIFT    (0x0000001Bu)
#define CSL_TPCC_TPCC_SER_SER27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER28_MASK     (0x10000000u)
#define CSL_TPCC_TPCC_SER_SER28_SHIFT    (0x0000001Cu)
#define CSL_TPCC_TPCC_SER_SER28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER29_MASK     (0x20000000u)
#define CSL_TPCC_TPCC_SER_SER29_SHIFT    (0x0000001Du)
#define CSL_TPCC_TPCC_SER_SER29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER30_MASK     (0x40000000u)
#define CSL_TPCC_TPCC_SER_SER30_SHIFT    (0x0000001Eu)
#define CSL_TPCC_TPCC_SER_SER30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_SER31_MASK     (0x80000000u)
#define CSL_TPCC_TPCC_SER_SER31_SHIFT    (0x0000001Fu)
#define CSL_TPCC_TPCC_SER_SER31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SER_RESETVAL       (0x00000000u)

/* TPCC_SERH */

#define CSL_TPCC_TPCC_SERH_SER32_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER32_SHIFT   (0x00000020u)
#define CSL_TPCC_TPCC_SERH_SER32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER33_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER33_SHIFT   (0x00000021u)
#define CSL_TPCC_TPCC_SERH_SER33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER34_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER34_SHIFT   (0x00000022u)
#define CSL_TPCC_TPCC_SERH_SER34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER35_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER35_SHIFT   (0x00000023u)
#define CSL_TPCC_TPCC_SERH_SER35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER36_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER36_SHIFT   (0x00000024u)
#define CSL_TPCC_TPCC_SERH_SER36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER37_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER37_SHIFT   (0x00000025u)
#define CSL_TPCC_TPCC_SERH_SER37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER38_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER38_SHIFT   (0x00000026u)
#define CSL_TPCC_TPCC_SERH_SER38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER39_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER39_SHIFT   (0x00000027u)
#define CSL_TPCC_TPCC_SERH_SER39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER40_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER40_SHIFT   (0x00000028u)
#define CSL_TPCC_TPCC_SERH_SER40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER41_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER41_SHIFT   (0x00000029u)
#define CSL_TPCC_TPCC_SERH_SER41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER42_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER42_SHIFT   (0x0000002Au)
#define CSL_TPCC_TPCC_SERH_SER42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER43_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER43_SHIFT   (0x0000002Bu)
#define CSL_TPCC_TPCC_SERH_SER43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER44_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER44_SHIFT   (0x0000002Cu)
#define CSL_TPCC_TPCC_SERH_SER44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER45_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER45_SHIFT   (0x0000002Du)
#define CSL_TPCC_TPCC_SERH_SER45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER46_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER46_SHIFT   (0x0000002Eu)
#define CSL_TPCC_TPCC_SERH_SER46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER47_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER47_SHIFT   (0x0000002Fu)
#define CSL_TPCC_TPCC_SERH_SER47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER48_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER48_SHIFT   (0x00000030u)
#define CSL_TPCC_TPCC_SERH_SER48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER49_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER49_SHIFT   (0x00000031u)
#define CSL_TPCC_TPCC_SERH_SER49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER50_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER50_SHIFT   (0x00000032u)
#define CSL_TPCC_TPCC_SERH_SER50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER51_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER51_SHIFT   (0x00000033u)
#define CSL_TPCC_TPCC_SERH_SER51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER52_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER52_SHIFT   (0x00000034u)
#define CSL_TPCC_TPCC_SERH_SER52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER53_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER53_SHIFT   (0x00000035u)
#define CSL_TPCC_TPCC_SERH_SER53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER54_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER54_SHIFT   (0x00000036u)
#define CSL_TPCC_TPCC_SERH_SER54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER55_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER55_SHIFT   (0x00000037u)
#define CSL_TPCC_TPCC_SERH_SER55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER56_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER56_SHIFT   (0x00000038u)
#define CSL_TPCC_TPCC_SERH_SER56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER57_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER57_SHIFT   (0x00000039u)
#define CSL_TPCC_TPCC_SERH_SER57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER58_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER58_SHIFT   (0x0000003Au)
#define CSL_TPCC_TPCC_SERH_SER58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER59_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER59_SHIFT   (0x0000003Bu)
#define CSL_TPCC_TPCC_SERH_SER59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER60_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER60_SHIFT   (0x0000003Cu)
#define CSL_TPCC_TPCC_SERH_SER60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER61_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER61_SHIFT   (0x0000003Du)
#define CSL_TPCC_TPCC_SERH_SER61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER62_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER62_SHIFT   (0x0000003Eu)
#define CSL_TPCC_TPCC_SERH_SER62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_SER63_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_SERH_SER63_SHIFT   (0x0000003Fu)
#define CSL_TPCC_TPCC_SERH_SER63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SERH_RESETVAL      (0x0FFFFFFFu)

/* TPCC_SECR */

#define CSL_TPCC_TPCC_SECR_SECR0_MASK    (0x00000001u)
#define CSL_TPCC_TPCC_SECR_SECR0_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_SECR_SECR0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR1_MASK    (0x00000002u)
#define CSL_TPCC_TPCC_SECR_SECR1_SHIFT   (0x00000001u)
#define CSL_TPCC_TPCC_SECR_SECR1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR2_MASK    (0x00000004u)
#define CSL_TPCC_TPCC_SECR_SECR2_SHIFT   (0x00000002u)
#define CSL_TPCC_TPCC_SECR_SECR2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR3_MASK    (0x00000008u)
#define CSL_TPCC_TPCC_SECR_SECR3_SHIFT   (0x00000003u)
#define CSL_TPCC_TPCC_SECR_SECR3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR4_MASK    (0x00000010u)
#define CSL_TPCC_TPCC_SECR_SECR4_SHIFT   (0x00000004u)
#define CSL_TPCC_TPCC_SECR_SECR4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR5_MASK    (0x00000020u)
#define CSL_TPCC_TPCC_SECR_SECR5_SHIFT   (0x00000005u)
#define CSL_TPCC_TPCC_SECR_SECR5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR6_MASK    (0x00000040u)
#define CSL_TPCC_TPCC_SECR_SECR6_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_SECR_SECR6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR7_MASK    (0x00000080u)
#define CSL_TPCC_TPCC_SECR_SECR7_SHIFT   (0x00000007u)
#define CSL_TPCC_TPCC_SECR_SECR7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR8_MASK    (0x00000100u)
#define CSL_TPCC_TPCC_SECR_SECR8_SHIFT   (0x00000008u)
#define CSL_TPCC_TPCC_SECR_SECR8_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR9_MASK    (0x00000200u)
#define CSL_TPCC_TPCC_SECR_SECR9_SHIFT   (0x00000009u)
#define CSL_TPCC_TPCC_SECR_SECR9_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR10_MASK   (0x00000400u)
#define CSL_TPCC_TPCC_SECR_SECR10_SHIFT  (0x0000000Au)
#define CSL_TPCC_TPCC_SECR_SECR10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR11_MASK   (0x00000800u)
#define CSL_TPCC_TPCC_SECR_SECR11_SHIFT  (0x0000000Bu)
#define CSL_TPCC_TPCC_SECR_SECR11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR12_MASK   (0x00001000u)
#define CSL_TPCC_TPCC_SECR_SECR12_SHIFT  (0x0000000Cu)
#define CSL_TPCC_TPCC_SECR_SECR12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR13_MASK   (0x00002000u)
#define CSL_TPCC_TPCC_SECR_SECR13_SHIFT  (0x0000000Du)
#define CSL_TPCC_TPCC_SECR_SECR13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR14_MASK   (0x00004000u)
#define CSL_TPCC_TPCC_SECR_SECR14_SHIFT  (0x0000000Eu)
#define CSL_TPCC_TPCC_SECR_SECR14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR15_MASK   (0x00008000u)
#define CSL_TPCC_TPCC_SECR_SECR15_SHIFT  (0x0000000Fu)
#define CSL_TPCC_TPCC_SECR_SECR15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR16_MASK   (0x00010000u)
#define CSL_TPCC_TPCC_SECR_SECR16_SHIFT  (0x00000010u)
#define CSL_TPCC_TPCC_SECR_SECR16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR17_MASK   (0x00020000u)
#define CSL_TPCC_TPCC_SECR_SECR17_SHIFT  (0x00000011u)
#define CSL_TPCC_TPCC_SECR_SECR17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR18_MASK   (0x00040000u)
#define CSL_TPCC_TPCC_SECR_SECR18_SHIFT  (0x00000012u)
#define CSL_TPCC_TPCC_SECR_SECR18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR19_MASK   (0x00080000u)
#define CSL_TPCC_TPCC_SECR_SECR19_SHIFT  (0x00000013u)
#define CSL_TPCC_TPCC_SECR_SECR19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR20_MASK   (0x00100000u)
#define CSL_TPCC_TPCC_SECR_SECR20_SHIFT  (0x00000014u)
#define CSL_TPCC_TPCC_SECR_SECR20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR21_MASK   (0x00200000u)
#define CSL_TPCC_TPCC_SECR_SECR21_SHIFT  (0x00000015u)
#define CSL_TPCC_TPCC_SECR_SECR21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR22_MASK   (0x00400000u)
#define CSL_TPCC_TPCC_SECR_SECR22_SHIFT  (0x00000016u)
#define CSL_TPCC_TPCC_SECR_SECR22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR23_MASK   (0x00800000u)
#define CSL_TPCC_TPCC_SECR_SECR23_SHIFT  (0x00000017u)
#define CSL_TPCC_TPCC_SECR_SECR23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR24_MASK   (0x01000000u)
#define CSL_TPCC_TPCC_SECR_SECR24_SHIFT  (0x00000018u)
#define CSL_TPCC_TPCC_SECR_SECR24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR25_MASK   (0x02000000u)
#define CSL_TPCC_TPCC_SECR_SECR25_SHIFT  (0x00000019u)
#define CSL_TPCC_TPCC_SECR_SECR25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR26_MASK   (0x04000000u)
#define CSL_TPCC_TPCC_SECR_SECR26_SHIFT  (0x0000001Au)
#define CSL_TPCC_TPCC_SECR_SECR26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR27_MASK   (0x08000000u)
#define CSL_TPCC_TPCC_SECR_SECR27_SHIFT  (0x0000001Bu)
#define CSL_TPCC_TPCC_SECR_SECR27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR28_MASK   (0x10000000u)
#define CSL_TPCC_TPCC_SECR_SECR28_SHIFT  (0x0000001Cu)
#define CSL_TPCC_TPCC_SECR_SECR28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR29_MASK   (0x20000000u)
#define CSL_TPCC_TPCC_SECR_SECR29_SHIFT  (0x0000001Du)
#define CSL_TPCC_TPCC_SECR_SECR29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR30_MASK   (0x40000000u)
#define CSL_TPCC_TPCC_SECR_SECR30_SHIFT  (0x0000001Eu)
#define CSL_TPCC_TPCC_SECR_SECR30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_SECR31_MASK   (0x80000000u)
#define CSL_TPCC_TPCC_SECR_SECR31_SHIFT  (0x0000001Fu)
#define CSL_TPCC_TPCC_SECR_SECR31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECR_RESETVAL      (0x00000000u)

/* TPCC_SECRH */

#define CSL_TPCC_TPCC_SECRH_SECR32_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR32_SHIFT (0x00000020u)
#define CSL_TPCC_TPCC_SECRH_SECR32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR33_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR33_SHIFT (0x00000021u)
#define CSL_TPCC_TPCC_SECRH_SECR33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR34_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR34_SHIFT (0x00000022u)
#define CSL_TPCC_TPCC_SECRH_SECR34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR35_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR35_SHIFT (0x00000023u)
#define CSL_TPCC_TPCC_SECRH_SECR35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR36_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR36_SHIFT (0x00000024u)
#define CSL_TPCC_TPCC_SECRH_SECR36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR37_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR37_SHIFT (0x00000025u)
#define CSL_TPCC_TPCC_SECRH_SECR37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR38_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR38_SHIFT (0x00000026u)
#define CSL_TPCC_TPCC_SECRH_SECR38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR39_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR39_SHIFT (0x00000027u)
#define CSL_TPCC_TPCC_SECRH_SECR39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR40_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR40_SHIFT (0x00000028u)
#define CSL_TPCC_TPCC_SECRH_SECR40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR41_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR41_SHIFT (0x00000029u)
#define CSL_TPCC_TPCC_SECRH_SECR41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR42_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR42_SHIFT (0x0000002Au)
#define CSL_TPCC_TPCC_SECRH_SECR42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR43_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR43_SHIFT (0x0000002Bu)
#define CSL_TPCC_TPCC_SECRH_SECR43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR44_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR44_SHIFT (0x0000002Cu)
#define CSL_TPCC_TPCC_SECRH_SECR44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR45_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR45_SHIFT (0x0000002Du)
#define CSL_TPCC_TPCC_SECRH_SECR45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR46_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR46_SHIFT (0x0000002Eu)
#define CSL_TPCC_TPCC_SECRH_SECR46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR47_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR47_SHIFT (0x0000002Fu)
#define CSL_TPCC_TPCC_SECRH_SECR47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR48_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR48_SHIFT (0x00000030u)
#define CSL_TPCC_TPCC_SECRH_SECR48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR49_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR49_SHIFT (0x00000031u)
#define CSL_TPCC_TPCC_SECRH_SECR49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR50_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR50_SHIFT (0x00000032u)
#define CSL_TPCC_TPCC_SECRH_SECR50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR51_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR51_SHIFT (0x00000033u)
#define CSL_TPCC_TPCC_SECRH_SECR51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR52_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR52_SHIFT (0x00000034u)
#define CSL_TPCC_TPCC_SECRH_SECR52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR53_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR53_SHIFT (0x00000035u)
#define CSL_TPCC_TPCC_SECRH_SECR53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR54_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR54_SHIFT (0x00000036u)
#define CSL_TPCC_TPCC_SECRH_SECR54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR55_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR55_SHIFT (0x00000037u)
#define CSL_TPCC_TPCC_SECRH_SECR55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR56_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR56_SHIFT (0x00000038u)
#define CSL_TPCC_TPCC_SECRH_SECR56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR57_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR57_SHIFT (0x00000039u)
#define CSL_TPCC_TPCC_SECRH_SECR57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR58_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR58_SHIFT (0x0000003Au)
#define CSL_TPCC_TPCC_SECRH_SECR58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR59_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR59_SHIFT (0x0000003Bu)
#define CSL_TPCC_TPCC_SECRH_SECR59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR60_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR60_SHIFT (0x0000003Cu)
#define CSL_TPCC_TPCC_SECRH_SECR60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR61_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR61_SHIFT (0x0000003Du)
#define CSL_TPCC_TPCC_SECRH_SECR61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR62_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR62_SHIFT (0x0000003Eu)
#define CSL_TPCC_TPCC_SECRH_SECR62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_SECR63_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_SECRH_SECR63_SHIFT (0x0000003Fu)
#define CSL_TPCC_TPCC_SECRH_SECR63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_SECRH_RESETVAL     (0x0FFFFFFFu)

/* TPCC_IER */

#define CSL_TPCC_TPCC_IER_IER0_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_IER_IER0_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_IER_IER0_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER1_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_IER_IER1_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_IER_IER1_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER2_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_IER_IER2_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_IER_IER2_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER3_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_IER_IER3_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_IER_IER3_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER4_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_IER_IER4_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_IER_IER4_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER5_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_IER_IER5_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_IER_IER5_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER6_MASK      (0x00000040u)
#define CSL_TPCC_TPCC_IER_IER6_SHIFT     (0x00000006u)
#define CSL_TPCC_TPCC_IER_IER6_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER7_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_IER_IER7_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_IER_IER7_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER8_MASK      (0x00000100u)
#define CSL_TPCC_TPCC_IER_IER8_SHIFT     (0x00000008u)
#define CSL_TPCC_TPCC_IER_IER8_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER9_MASK      (0x00000200u)
#define CSL_TPCC_TPCC_IER_IER9_SHIFT     (0x00000009u)
#define CSL_TPCC_TPCC_IER_IER9_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER10_MASK     (0x00000400u)
#define CSL_TPCC_TPCC_IER_IER10_SHIFT    (0x0000000Au)
#define CSL_TPCC_TPCC_IER_IER10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER11_MASK     (0x00000800u)
#define CSL_TPCC_TPCC_IER_IER11_SHIFT    (0x0000000Bu)
#define CSL_TPCC_TPCC_IER_IER11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER12_MASK     (0x00001000u)
#define CSL_TPCC_TPCC_IER_IER12_SHIFT    (0x0000000Cu)
#define CSL_TPCC_TPCC_IER_IER12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER13_MASK     (0x00002000u)
#define CSL_TPCC_TPCC_IER_IER13_SHIFT    (0x0000000Du)
#define CSL_TPCC_TPCC_IER_IER13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER14_MASK     (0x00004000u)
#define CSL_TPCC_TPCC_IER_IER14_SHIFT    (0x0000000Eu)
#define CSL_TPCC_TPCC_IER_IER14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER15_MASK     (0x00008000u)
#define CSL_TPCC_TPCC_IER_IER15_SHIFT    (0x0000000Fu)
#define CSL_TPCC_TPCC_IER_IER15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER16_MASK     (0x00010000u)
#define CSL_TPCC_TPCC_IER_IER16_SHIFT    (0x00000010u)
#define CSL_TPCC_TPCC_IER_IER16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER17_MASK     (0x00020000u)
#define CSL_TPCC_TPCC_IER_IER17_SHIFT    (0x00000011u)
#define CSL_TPCC_TPCC_IER_IER17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER18_MASK     (0x00040000u)
#define CSL_TPCC_TPCC_IER_IER18_SHIFT    (0x00000012u)
#define CSL_TPCC_TPCC_IER_IER18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER19_MASK     (0x00080000u)
#define CSL_TPCC_TPCC_IER_IER19_SHIFT    (0x00000013u)
#define CSL_TPCC_TPCC_IER_IER19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER20_MASK     (0x00100000u)
#define CSL_TPCC_TPCC_IER_IER20_SHIFT    (0x00000014u)
#define CSL_TPCC_TPCC_IER_IER20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER21_MASK     (0x00200000u)
#define CSL_TPCC_TPCC_IER_IER21_SHIFT    (0x00000015u)
#define CSL_TPCC_TPCC_IER_IER21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER22_MASK     (0x00400000u)
#define CSL_TPCC_TPCC_IER_IER22_SHIFT    (0x00000016u)
#define CSL_TPCC_TPCC_IER_IER22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER23_MASK     (0x00800000u)
#define CSL_TPCC_TPCC_IER_IER23_SHIFT    (0x00000017u)
#define CSL_TPCC_TPCC_IER_IER23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER24_MASK     (0x01000000u)
#define CSL_TPCC_TPCC_IER_IER24_SHIFT    (0x00000018u)
#define CSL_TPCC_TPCC_IER_IER24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER25_MASK     (0x02000000u)
#define CSL_TPCC_TPCC_IER_IER25_SHIFT    (0x00000019u)
#define CSL_TPCC_TPCC_IER_IER25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER26_MASK     (0x04000000u)
#define CSL_TPCC_TPCC_IER_IER26_SHIFT    (0x0000001Au)
#define CSL_TPCC_TPCC_IER_IER26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER27_MASK     (0x08000000u)
#define CSL_TPCC_TPCC_IER_IER27_SHIFT    (0x0000001Bu)
#define CSL_TPCC_TPCC_IER_IER27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER28_MASK     (0x10000000u)
#define CSL_TPCC_TPCC_IER_IER28_SHIFT    (0x0000001Cu)
#define CSL_TPCC_TPCC_IER_IER28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER29_MASK     (0x20000000u)
#define CSL_TPCC_TPCC_IER_IER29_SHIFT    (0x0000001Du)
#define CSL_TPCC_TPCC_IER_IER29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER30_MASK     (0x40000000u)
#define CSL_TPCC_TPCC_IER_IER30_SHIFT    (0x0000001Eu)
#define CSL_TPCC_TPCC_IER_IER30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_IER31_MASK     (0x80000000u)
#define CSL_TPCC_TPCC_IER_IER31_SHIFT    (0x0000001Fu)
#define CSL_TPCC_TPCC_IER_IER31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IER_RESETVAL       (0x00000000u)

/* TPCC_IERH */

#define CSL_TPCC_TPCC_IERH_IER32_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER32_SHIFT   (0x00000020u)
#define CSL_TPCC_TPCC_IERH_IER32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER33_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER33_SHIFT   (0x00000021u)
#define CSL_TPCC_TPCC_IERH_IER33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER34_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER34_SHIFT   (0x00000022u)
#define CSL_TPCC_TPCC_IERH_IER34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER35_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER35_SHIFT   (0x00000023u)
#define CSL_TPCC_TPCC_IERH_IER35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER36_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER36_SHIFT   (0x00000024u)
#define CSL_TPCC_TPCC_IERH_IER36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER37_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER37_SHIFT   (0x00000025u)
#define CSL_TPCC_TPCC_IERH_IER37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER38_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER38_SHIFT   (0x00000026u)
#define CSL_TPCC_TPCC_IERH_IER38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER39_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER39_SHIFT   (0x00000027u)
#define CSL_TPCC_TPCC_IERH_IER39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER40_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER40_SHIFT   (0x00000028u)
#define CSL_TPCC_TPCC_IERH_IER40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER41_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER41_SHIFT   (0x00000029u)
#define CSL_TPCC_TPCC_IERH_IER41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER42_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER42_SHIFT   (0x0000002Au)
#define CSL_TPCC_TPCC_IERH_IER42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER43_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER43_SHIFT   (0x0000002Bu)
#define CSL_TPCC_TPCC_IERH_IER43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER44_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER44_SHIFT   (0x0000002Cu)
#define CSL_TPCC_TPCC_IERH_IER44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER45_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER45_SHIFT   (0x0000002Du)
#define CSL_TPCC_TPCC_IERH_IER45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER46_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER46_SHIFT   (0x0000002Eu)
#define CSL_TPCC_TPCC_IERH_IER46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER47_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER47_SHIFT   (0x0000002Fu)
#define CSL_TPCC_TPCC_IERH_IER47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER48_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER48_SHIFT   (0x00000030u)
#define CSL_TPCC_TPCC_IERH_IER48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER49_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER49_SHIFT   (0x00000031u)
#define CSL_TPCC_TPCC_IERH_IER49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER50_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER50_SHIFT   (0x00000032u)
#define CSL_TPCC_TPCC_IERH_IER50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER51_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER51_SHIFT   (0x00000033u)
#define CSL_TPCC_TPCC_IERH_IER51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER52_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER52_SHIFT   (0x00000034u)
#define CSL_TPCC_TPCC_IERH_IER52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER53_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER53_SHIFT   (0x00000035u)
#define CSL_TPCC_TPCC_IERH_IER53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER54_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER54_SHIFT   (0x00000036u)
#define CSL_TPCC_TPCC_IERH_IER54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER55_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER55_SHIFT   (0x00000037u)
#define CSL_TPCC_TPCC_IERH_IER55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER56_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER56_SHIFT   (0x00000038u)
#define CSL_TPCC_TPCC_IERH_IER56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER57_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER57_SHIFT   (0x00000039u)
#define CSL_TPCC_TPCC_IERH_IER57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER58_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER58_SHIFT   (0x0000003Au)
#define CSL_TPCC_TPCC_IERH_IER58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER59_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER59_SHIFT   (0x0000003Bu)
#define CSL_TPCC_TPCC_IERH_IER59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER60_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER60_SHIFT   (0x0000003Cu)
#define CSL_TPCC_TPCC_IERH_IER60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER61_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER61_SHIFT   (0x0000003Du)
#define CSL_TPCC_TPCC_IERH_IER61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER62_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER62_SHIFT   (0x0000003Eu)
#define CSL_TPCC_TPCC_IERH_IER62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_IER63_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IERH_IER63_SHIFT   (0x0000003Fu)
#define CSL_TPCC_TPCC_IERH_IER63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IERH_RESETVAL      (0x0FFFFFFFu)

/* TPCC_IECR */

#define CSL_TPCC_TPCC_IECR_IECR0_MASK    (0x00000001u)
#define CSL_TPCC_TPCC_IECR_IECR0_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_IECR_IECR0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR1_MASK    (0x00000002u)
#define CSL_TPCC_TPCC_IECR_IECR1_SHIFT   (0x00000001u)
#define CSL_TPCC_TPCC_IECR_IECR1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR2_MASK    (0x00000004u)
#define CSL_TPCC_TPCC_IECR_IECR2_SHIFT   (0x00000002u)
#define CSL_TPCC_TPCC_IECR_IECR2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR3_MASK    (0x00000008u)
#define CSL_TPCC_TPCC_IECR_IECR3_SHIFT   (0x00000003u)
#define CSL_TPCC_TPCC_IECR_IECR3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR4_MASK    (0x00000010u)
#define CSL_TPCC_TPCC_IECR_IECR4_SHIFT   (0x00000004u)
#define CSL_TPCC_TPCC_IECR_IECR4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR5_MASK    (0x00000020u)
#define CSL_TPCC_TPCC_IECR_IECR5_SHIFT   (0x00000005u)
#define CSL_TPCC_TPCC_IECR_IECR5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR6_MASK    (0x00000040u)
#define CSL_TPCC_TPCC_IECR_IECR6_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_IECR_IECR6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR7_MASK    (0x00000080u)
#define CSL_TPCC_TPCC_IECR_IECR7_SHIFT   (0x00000007u)
#define CSL_TPCC_TPCC_IECR_IECR7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR8_MASK    (0x00000100u)
#define CSL_TPCC_TPCC_IECR_IECR8_SHIFT   (0x00000008u)
#define CSL_TPCC_TPCC_IECR_IECR8_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR9_MASK    (0x00000200u)
#define CSL_TPCC_TPCC_IECR_IECR9_SHIFT   (0x00000009u)
#define CSL_TPCC_TPCC_IECR_IECR9_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR10_MASK   (0x00000400u)
#define CSL_TPCC_TPCC_IECR_IECR10_SHIFT  (0x0000000Au)
#define CSL_TPCC_TPCC_IECR_IECR10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR11_MASK   (0x00000800u)
#define CSL_TPCC_TPCC_IECR_IECR11_SHIFT  (0x0000000Bu)
#define CSL_TPCC_TPCC_IECR_IECR11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR12_MASK   (0x00001000u)
#define CSL_TPCC_TPCC_IECR_IECR12_SHIFT  (0x0000000Cu)
#define CSL_TPCC_TPCC_IECR_IECR12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR13_MASK   (0x00002000u)
#define CSL_TPCC_TPCC_IECR_IECR13_SHIFT  (0x0000000Du)
#define CSL_TPCC_TPCC_IECR_IECR13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR14_MASK   (0x00004000u)
#define CSL_TPCC_TPCC_IECR_IECR14_SHIFT  (0x0000000Eu)
#define CSL_TPCC_TPCC_IECR_IECR14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR15_MASK   (0x00008000u)
#define CSL_TPCC_TPCC_IECR_IECR15_SHIFT  (0x0000000Fu)
#define CSL_TPCC_TPCC_IECR_IECR15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR16_MASK   (0x00010000u)
#define CSL_TPCC_TPCC_IECR_IECR16_SHIFT  (0x00000010u)
#define CSL_TPCC_TPCC_IECR_IECR16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR17_MASK   (0x00020000u)
#define CSL_TPCC_TPCC_IECR_IECR17_SHIFT  (0x00000011u)
#define CSL_TPCC_TPCC_IECR_IECR17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR18_MASK   (0x00040000u)
#define CSL_TPCC_TPCC_IECR_IECR18_SHIFT  (0x00000012u)
#define CSL_TPCC_TPCC_IECR_IECR18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR19_MASK   (0x00080000u)
#define CSL_TPCC_TPCC_IECR_IECR19_SHIFT  (0x00000013u)
#define CSL_TPCC_TPCC_IECR_IECR19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR20_MASK   (0x00100000u)
#define CSL_TPCC_TPCC_IECR_IECR20_SHIFT  (0x00000014u)
#define CSL_TPCC_TPCC_IECR_IECR20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR21_MASK   (0x00200000u)
#define CSL_TPCC_TPCC_IECR_IECR21_SHIFT  (0x00000015u)
#define CSL_TPCC_TPCC_IECR_IECR21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR22_MASK   (0x00400000u)
#define CSL_TPCC_TPCC_IECR_IECR22_SHIFT  (0x00000016u)
#define CSL_TPCC_TPCC_IECR_IECR22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR23_MASK   (0x00800000u)
#define CSL_TPCC_TPCC_IECR_IECR23_SHIFT  (0x00000017u)
#define CSL_TPCC_TPCC_IECR_IECR23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR24_MASK   (0x01000000u)
#define CSL_TPCC_TPCC_IECR_IECR24_SHIFT  (0x00000018u)
#define CSL_TPCC_TPCC_IECR_IECR24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR25_MASK   (0x02000000u)
#define CSL_TPCC_TPCC_IECR_IECR25_SHIFT  (0x00000019u)
#define CSL_TPCC_TPCC_IECR_IECR25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR26_MASK   (0x04000000u)
#define CSL_TPCC_TPCC_IECR_IECR26_SHIFT  (0x0000001Au)
#define CSL_TPCC_TPCC_IECR_IECR26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR27_MASK   (0x08000000u)
#define CSL_TPCC_TPCC_IECR_IECR27_SHIFT  (0x0000001Bu)
#define CSL_TPCC_TPCC_IECR_IECR27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR28_MASK   (0x10000000u)
#define CSL_TPCC_TPCC_IECR_IECR28_SHIFT  (0x0000001Cu)
#define CSL_TPCC_TPCC_IECR_IECR28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR29_MASK   (0x20000000u)
#define CSL_TPCC_TPCC_IECR_IECR29_SHIFT  (0x0000001Du)
#define CSL_TPCC_TPCC_IECR_IECR29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR30_MASK   (0x40000000u)
#define CSL_TPCC_TPCC_IECR_IECR30_SHIFT  (0x0000001Eu)
#define CSL_TPCC_TPCC_IECR_IECR30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_IECR31_MASK   (0x80000000u)
#define CSL_TPCC_TPCC_IECR_IECR31_SHIFT  (0x0000001Fu)
#define CSL_TPCC_TPCC_IECR_IECR31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECR_RESETVAL      (0x00000000u)

/* TPCC_IECRH */

#define CSL_TPCC_TPCC_IECRH_IECR32_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR32_SHIFT (0x00000020u)
#define CSL_TPCC_TPCC_IECRH_IECR32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR33_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR33_SHIFT (0x00000021u)
#define CSL_TPCC_TPCC_IECRH_IECR33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR34_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR34_SHIFT (0x00000022u)
#define CSL_TPCC_TPCC_IECRH_IECR34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR35_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR35_SHIFT (0x00000023u)
#define CSL_TPCC_TPCC_IECRH_IECR35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR36_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR36_SHIFT (0x00000024u)
#define CSL_TPCC_TPCC_IECRH_IECR36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR37_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR37_SHIFT (0x00000025u)
#define CSL_TPCC_TPCC_IECRH_IECR37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR38_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR38_SHIFT (0x00000026u)
#define CSL_TPCC_TPCC_IECRH_IECR38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR39_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR39_SHIFT (0x00000027u)
#define CSL_TPCC_TPCC_IECRH_IECR39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR40_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR40_SHIFT (0x00000028u)
#define CSL_TPCC_TPCC_IECRH_IECR40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR41_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR41_SHIFT (0x00000029u)
#define CSL_TPCC_TPCC_IECRH_IECR41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR42_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR42_SHIFT (0x0000002Au)
#define CSL_TPCC_TPCC_IECRH_IECR42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR43_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR43_SHIFT (0x0000002Bu)
#define CSL_TPCC_TPCC_IECRH_IECR43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR44_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR44_SHIFT (0x0000002Cu)
#define CSL_TPCC_TPCC_IECRH_IECR44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR45_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR45_SHIFT (0x0000002Du)
#define CSL_TPCC_TPCC_IECRH_IECR45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR46_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR46_SHIFT (0x0000002Eu)
#define CSL_TPCC_TPCC_IECRH_IECR46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR47_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR47_SHIFT (0x0000002Fu)
#define CSL_TPCC_TPCC_IECRH_IECR47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR48_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR48_SHIFT (0x00000030u)
#define CSL_TPCC_TPCC_IECRH_IECR48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR49_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR49_SHIFT (0x00000031u)
#define CSL_TPCC_TPCC_IECRH_IECR49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR50_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR50_SHIFT (0x00000032u)
#define CSL_TPCC_TPCC_IECRH_IECR50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR51_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR51_SHIFT (0x00000033u)
#define CSL_TPCC_TPCC_IECRH_IECR51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR52_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR52_SHIFT (0x00000034u)
#define CSL_TPCC_TPCC_IECRH_IECR52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR53_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR53_SHIFT (0x00000035u)
#define CSL_TPCC_TPCC_IECRH_IECR53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR54_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR54_SHIFT (0x00000036u)
#define CSL_TPCC_TPCC_IECRH_IECR54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR55_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR55_SHIFT (0x00000037u)
#define CSL_TPCC_TPCC_IECRH_IECR55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR56_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR56_SHIFT (0x00000038u)
#define CSL_TPCC_TPCC_IECRH_IECR56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR57_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR57_SHIFT (0x00000039u)
#define CSL_TPCC_TPCC_IECRH_IECR57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR58_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR58_SHIFT (0x0000003Au)
#define CSL_TPCC_TPCC_IECRH_IECR58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR59_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR59_SHIFT (0x0000003Bu)
#define CSL_TPCC_TPCC_IECRH_IECR59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR60_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR60_SHIFT (0x0000003Cu)
#define CSL_TPCC_TPCC_IECRH_IECR60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR61_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR61_SHIFT (0x0000003Du)
#define CSL_TPCC_TPCC_IECRH_IECR61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR62_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR62_SHIFT (0x0000003Eu)
#define CSL_TPCC_TPCC_IECRH_IECR62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_IECR63_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IECRH_IECR63_SHIFT (0x0000003Fu)
#define CSL_TPCC_TPCC_IECRH_IECR63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IECRH_RESETVAL     (0x0FFFFFFFu)

/* TPCC_IESR */

#define CSL_TPCC_TPCC_IESR_IESR0_MASK    (0x00000001u)
#define CSL_TPCC_TPCC_IESR_IESR0_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_IESR_IESR0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR1_MASK    (0x00000002u)
#define CSL_TPCC_TPCC_IESR_IESR1_SHIFT   (0x00000001u)
#define CSL_TPCC_TPCC_IESR_IESR1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR2_MASK    (0x00000004u)
#define CSL_TPCC_TPCC_IESR_IESR2_SHIFT   (0x00000002u)
#define CSL_TPCC_TPCC_IESR_IESR2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR3_MASK    (0x00000008u)
#define CSL_TPCC_TPCC_IESR_IESR3_SHIFT   (0x00000003u)
#define CSL_TPCC_TPCC_IESR_IESR3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR4_MASK    (0x00000010u)
#define CSL_TPCC_TPCC_IESR_IESR4_SHIFT   (0x00000004u)
#define CSL_TPCC_TPCC_IESR_IESR4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR5_MASK    (0x00000020u)
#define CSL_TPCC_TPCC_IESR_IESR5_SHIFT   (0x00000005u)
#define CSL_TPCC_TPCC_IESR_IESR5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR6_MASK    (0x00000040u)
#define CSL_TPCC_TPCC_IESR_IESR6_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_IESR_IESR6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR7_MASK    (0x00000080u)
#define CSL_TPCC_TPCC_IESR_IESR7_SHIFT   (0x00000007u)
#define CSL_TPCC_TPCC_IESR_IESR7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR8_MASK    (0x00000100u)
#define CSL_TPCC_TPCC_IESR_IESR8_SHIFT   (0x00000008u)
#define CSL_TPCC_TPCC_IESR_IESR8_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR9_MASK    (0x00000200u)
#define CSL_TPCC_TPCC_IESR_IESR9_SHIFT   (0x00000009u)
#define CSL_TPCC_TPCC_IESR_IESR9_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR10_MASK   (0x00000400u)
#define CSL_TPCC_TPCC_IESR_IESR10_SHIFT  (0x0000000Au)
#define CSL_TPCC_TPCC_IESR_IESR10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR11_MASK   (0x00000800u)
#define CSL_TPCC_TPCC_IESR_IESR11_SHIFT  (0x0000000Bu)
#define CSL_TPCC_TPCC_IESR_IESR11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR12_MASK   (0x00001000u)
#define CSL_TPCC_TPCC_IESR_IESR12_SHIFT  (0x0000000Cu)
#define CSL_TPCC_TPCC_IESR_IESR12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR13_MASK   (0x00002000u)
#define CSL_TPCC_TPCC_IESR_IESR13_SHIFT  (0x0000000Du)
#define CSL_TPCC_TPCC_IESR_IESR13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR14_MASK   (0x00004000u)
#define CSL_TPCC_TPCC_IESR_IESR14_SHIFT  (0x0000000Eu)
#define CSL_TPCC_TPCC_IESR_IESR14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR15_MASK   (0x00008000u)
#define CSL_TPCC_TPCC_IESR_IESR15_SHIFT  (0x0000000Fu)
#define CSL_TPCC_TPCC_IESR_IESR15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR16_MASK   (0x00010000u)
#define CSL_TPCC_TPCC_IESR_IESR16_SHIFT  (0x00000010u)
#define CSL_TPCC_TPCC_IESR_IESR16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR17_MASK   (0x00020000u)
#define CSL_TPCC_TPCC_IESR_IESR17_SHIFT  (0x00000011u)
#define CSL_TPCC_TPCC_IESR_IESR17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR18_MASK   (0x00040000u)
#define CSL_TPCC_TPCC_IESR_IESR18_SHIFT  (0x00000012u)
#define CSL_TPCC_TPCC_IESR_IESR18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR19_MASK   (0x00080000u)
#define CSL_TPCC_TPCC_IESR_IESR19_SHIFT  (0x00000013u)
#define CSL_TPCC_TPCC_IESR_IESR19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR20_MASK   (0x00100000u)
#define CSL_TPCC_TPCC_IESR_IESR20_SHIFT  (0x00000014u)
#define CSL_TPCC_TPCC_IESR_IESR20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR21_MASK   (0x00200000u)
#define CSL_TPCC_TPCC_IESR_IESR21_SHIFT  (0x00000015u)
#define CSL_TPCC_TPCC_IESR_IESR21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR22_MASK   (0x00400000u)
#define CSL_TPCC_TPCC_IESR_IESR22_SHIFT  (0x00000016u)
#define CSL_TPCC_TPCC_IESR_IESR22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR23_MASK   (0x00800000u)
#define CSL_TPCC_TPCC_IESR_IESR23_SHIFT  (0x00000017u)
#define CSL_TPCC_TPCC_IESR_IESR23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR24_MASK   (0x01000000u)
#define CSL_TPCC_TPCC_IESR_IESR24_SHIFT  (0x00000018u)
#define CSL_TPCC_TPCC_IESR_IESR24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR25_MASK   (0x02000000u)
#define CSL_TPCC_TPCC_IESR_IESR25_SHIFT  (0x00000019u)
#define CSL_TPCC_TPCC_IESR_IESR25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR26_MASK   (0x04000000u)
#define CSL_TPCC_TPCC_IESR_IESR26_SHIFT  (0x0000001Au)
#define CSL_TPCC_TPCC_IESR_IESR26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR27_MASK   (0x08000000u)
#define CSL_TPCC_TPCC_IESR_IESR27_SHIFT  (0x0000001Bu)
#define CSL_TPCC_TPCC_IESR_IESR27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR28_MASK   (0x10000000u)
#define CSL_TPCC_TPCC_IESR_IESR28_SHIFT  (0x0000001Cu)
#define CSL_TPCC_TPCC_IESR_IESR28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR29_MASK   (0x20000000u)
#define CSL_TPCC_TPCC_IESR_IESR29_SHIFT  (0x0000001Du)
#define CSL_TPCC_TPCC_IESR_IESR29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR30_MASK   (0x40000000u)
#define CSL_TPCC_TPCC_IESR_IESR30_SHIFT  (0x0000001Eu)
#define CSL_TPCC_TPCC_IESR_IESR30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_IESR31_MASK   (0x80000000u)
#define CSL_TPCC_TPCC_IESR_IESR31_SHIFT  (0x0000001Fu)
#define CSL_TPCC_TPCC_IESR_IESR31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESR_RESETVAL      (0x00000000u)

/* TPCC_IESRH */

#define CSL_TPCC_TPCC_IESRH_IESR32_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR32_SHIFT (0x00000020u)
#define CSL_TPCC_TPCC_IESRH_IESR32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR33_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR33_SHIFT (0x00000021u)
#define CSL_TPCC_TPCC_IESRH_IESR33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR34_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR34_SHIFT (0x00000022u)
#define CSL_TPCC_TPCC_IESRH_IESR34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR35_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR35_SHIFT (0x00000023u)
#define CSL_TPCC_TPCC_IESRH_IESR35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR36_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR36_SHIFT (0x00000024u)
#define CSL_TPCC_TPCC_IESRH_IESR36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR37_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR37_SHIFT (0x00000025u)
#define CSL_TPCC_TPCC_IESRH_IESR37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR38_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR38_SHIFT (0x00000026u)
#define CSL_TPCC_TPCC_IESRH_IESR38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR39_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR39_SHIFT (0x00000027u)
#define CSL_TPCC_TPCC_IESRH_IESR39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR40_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR40_SHIFT (0x00000028u)
#define CSL_TPCC_TPCC_IESRH_IESR40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR41_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR41_SHIFT (0x00000029u)
#define CSL_TPCC_TPCC_IESRH_IESR41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR42_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR42_SHIFT (0x0000002Au)
#define CSL_TPCC_TPCC_IESRH_IESR42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR43_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR43_SHIFT (0x0000002Bu)
#define CSL_TPCC_TPCC_IESRH_IESR43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR44_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR44_SHIFT (0x0000002Cu)
#define CSL_TPCC_TPCC_IESRH_IESR44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR45_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR45_SHIFT (0x0000002Du)
#define CSL_TPCC_TPCC_IESRH_IESR45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR46_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR46_SHIFT (0x0000002Eu)
#define CSL_TPCC_TPCC_IESRH_IESR46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR47_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR47_SHIFT (0x0000002Fu)
#define CSL_TPCC_TPCC_IESRH_IESR47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR48_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR48_SHIFT (0x00000030u)
#define CSL_TPCC_TPCC_IESRH_IESR48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR49_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR49_SHIFT (0x00000031u)
#define CSL_TPCC_TPCC_IESRH_IESR49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR50_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR50_SHIFT (0x00000032u)
#define CSL_TPCC_TPCC_IESRH_IESR50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR51_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR51_SHIFT (0x00000033u)
#define CSL_TPCC_TPCC_IESRH_IESR51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR52_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR52_SHIFT (0x00000034u)
#define CSL_TPCC_TPCC_IESRH_IESR52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR53_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR53_SHIFT (0x00000035u)
#define CSL_TPCC_TPCC_IESRH_IESR53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR54_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR54_SHIFT (0x00000036u)
#define CSL_TPCC_TPCC_IESRH_IESR54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR55_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR55_SHIFT (0x00000037u)
#define CSL_TPCC_TPCC_IESRH_IESR55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR56_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR56_SHIFT (0x00000038u)
#define CSL_TPCC_TPCC_IESRH_IESR56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR57_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR57_SHIFT (0x00000039u)
#define CSL_TPCC_TPCC_IESRH_IESR57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR58_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR58_SHIFT (0x0000003Au)
#define CSL_TPCC_TPCC_IESRH_IESR58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR59_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR59_SHIFT (0x0000003Bu)
#define CSL_TPCC_TPCC_IESRH_IESR59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR60_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR60_SHIFT (0x0000003Cu)
#define CSL_TPCC_TPCC_IESRH_IESR60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR61_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR61_SHIFT (0x0000003Du)
#define CSL_TPCC_TPCC_IESRH_IESR61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR62_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR62_SHIFT (0x0000003Eu)
#define CSL_TPCC_TPCC_IESRH_IESR62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_IESR63_MASK  (0x00000000u)
#define CSL_TPCC_TPCC_IESRH_IESR63_SHIFT (0x0000003Fu)
#define CSL_TPCC_TPCC_IESRH_IESR63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IESRH_RESETVAL     (0x0FFFFFFFu)

/* TPCC_IPR */

#define CSL_TPCC_TPCC_IPR_IPR0_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_IPR_IPR0_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_IPR_IPR0_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR1_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_IPR_IPR1_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_IPR_IPR1_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR2_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_IPR_IPR2_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_IPR_IPR2_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR3_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_IPR_IPR3_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_IPR_IPR3_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR4_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_IPR_IPR4_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_IPR_IPR4_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR5_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_IPR_IPR5_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_IPR_IPR5_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR6_MASK      (0x00000040u)
#define CSL_TPCC_TPCC_IPR_IPR6_SHIFT     (0x00000006u)
#define CSL_TPCC_TPCC_IPR_IPR6_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR7_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_IPR_IPR7_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_IPR_IPR7_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR8_MASK      (0x00000100u)
#define CSL_TPCC_TPCC_IPR_IPR8_SHIFT     (0x00000008u)
#define CSL_TPCC_TPCC_IPR_IPR8_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR9_MASK      (0x00000200u)
#define CSL_TPCC_TPCC_IPR_IPR9_SHIFT     (0x00000009u)
#define CSL_TPCC_TPCC_IPR_IPR9_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR10_MASK     (0x00000400u)
#define CSL_TPCC_TPCC_IPR_IPR10_SHIFT    (0x0000000Au)
#define CSL_TPCC_TPCC_IPR_IPR10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR11_MASK     (0x00000800u)
#define CSL_TPCC_TPCC_IPR_IPR11_SHIFT    (0x0000000Bu)
#define CSL_TPCC_TPCC_IPR_IPR11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR12_MASK     (0x00001000u)
#define CSL_TPCC_TPCC_IPR_IPR12_SHIFT    (0x0000000Cu)
#define CSL_TPCC_TPCC_IPR_IPR12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR13_MASK     (0x00002000u)
#define CSL_TPCC_TPCC_IPR_IPR13_SHIFT    (0x0000000Du)
#define CSL_TPCC_TPCC_IPR_IPR13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR14_MASK     (0x00004000u)
#define CSL_TPCC_TPCC_IPR_IPR14_SHIFT    (0x0000000Eu)
#define CSL_TPCC_TPCC_IPR_IPR14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR15_MASK     (0x00008000u)
#define CSL_TPCC_TPCC_IPR_IPR15_SHIFT    (0x0000000Fu)
#define CSL_TPCC_TPCC_IPR_IPR15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR16_MASK     (0x00010000u)
#define CSL_TPCC_TPCC_IPR_IPR16_SHIFT    (0x00000010u)
#define CSL_TPCC_TPCC_IPR_IPR16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR17_MASK     (0x00020000u)
#define CSL_TPCC_TPCC_IPR_IPR17_SHIFT    (0x00000011u)
#define CSL_TPCC_TPCC_IPR_IPR17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR18_MASK     (0x00040000u)
#define CSL_TPCC_TPCC_IPR_IPR18_SHIFT    (0x00000012u)
#define CSL_TPCC_TPCC_IPR_IPR18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR19_MASK     (0x00080000u)
#define CSL_TPCC_TPCC_IPR_IPR19_SHIFT    (0x00000013u)
#define CSL_TPCC_TPCC_IPR_IPR19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR20_MASK     (0x00100000u)
#define CSL_TPCC_TPCC_IPR_IPR20_SHIFT    (0x00000014u)
#define CSL_TPCC_TPCC_IPR_IPR20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR21_MASK     (0x00200000u)
#define CSL_TPCC_TPCC_IPR_IPR21_SHIFT    (0x00000015u)
#define CSL_TPCC_TPCC_IPR_IPR21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR22_MASK     (0x00400000u)
#define CSL_TPCC_TPCC_IPR_IPR22_SHIFT    (0x00000016u)
#define CSL_TPCC_TPCC_IPR_IPR22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR23_MASK     (0x00800000u)
#define CSL_TPCC_TPCC_IPR_IPR23_SHIFT    (0x00000017u)
#define CSL_TPCC_TPCC_IPR_IPR23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR24_MASK     (0x01000000u)
#define CSL_TPCC_TPCC_IPR_IPR24_SHIFT    (0x00000018u)
#define CSL_TPCC_TPCC_IPR_IPR24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR25_MASK     (0x02000000u)
#define CSL_TPCC_TPCC_IPR_IPR25_SHIFT    (0x00000019u)
#define CSL_TPCC_TPCC_IPR_IPR25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR26_MASK     (0x04000000u)
#define CSL_TPCC_TPCC_IPR_IPR26_SHIFT    (0x0000001Au)
#define CSL_TPCC_TPCC_IPR_IPR26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR27_MASK     (0x08000000u)
#define CSL_TPCC_TPCC_IPR_IPR27_SHIFT    (0x0000001Bu)
#define CSL_TPCC_TPCC_IPR_IPR27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR28_MASK     (0x10000000u)
#define CSL_TPCC_TPCC_IPR_IPR28_SHIFT    (0x0000001Cu)
#define CSL_TPCC_TPCC_IPR_IPR28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR29_MASK     (0x20000000u)
#define CSL_TPCC_TPCC_IPR_IPR29_SHIFT    (0x0000001Du)
#define CSL_TPCC_TPCC_IPR_IPR29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR30_MASK     (0x40000000u)
#define CSL_TPCC_TPCC_IPR_IPR30_SHIFT    (0x0000001Eu)
#define CSL_TPCC_TPCC_IPR_IPR30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_IPR31_MASK     (0x80000000u)
#define CSL_TPCC_TPCC_IPR_IPR31_SHIFT    (0x0000001Fu)
#define CSL_TPCC_TPCC_IPR_IPR31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPR_RESETVAL       (0x00000000u)

/* TPCC_IPRH */

#define CSL_TPCC_TPCC_IPRH_IPR32_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR32_SHIFT   (0x00000020u)
#define CSL_TPCC_TPCC_IPRH_IPR32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR33_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR33_SHIFT   (0x00000021u)
#define CSL_TPCC_TPCC_IPRH_IPR33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR34_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR34_SHIFT   (0x00000022u)
#define CSL_TPCC_TPCC_IPRH_IPR34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR35_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR35_SHIFT   (0x00000023u)
#define CSL_TPCC_TPCC_IPRH_IPR35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR36_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR36_SHIFT   (0x00000024u)
#define CSL_TPCC_TPCC_IPRH_IPR36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR37_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR37_SHIFT   (0x00000025u)
#define CSL_TPCC_TPCC_IPRH_IPR37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR38_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR38_SHIFT   (0x00000026u)
#define CSL_TPCC_TPCC_IPRH_IPR38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR39_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR39_SHIFT   (0x00000027u)
#define CSL_TPCC_TPCC_IPRH_IPR39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR40_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR40_SHIFT   (0x00000028u)
#define CSL_TPCC_TPCC_IPRH_IPR40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR41_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR41_SHIFT   (0x00000029u)
#define CSL_TPCC_TPCC_IPRH_IPR41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR42_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR42_SHIFT   (0x0000002Au)
#define CSL_TPCC_TPCC_IPRH_IPR42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR43_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR43_SHIFT   (0x0000002Bu)
#define CSL_TPCC_TPCC_IPRH_IPR43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR44_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR44_SHIFT   (0x0000002Cu)
#define CSL_TPCC_TPCC_IPRH_IPR44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR45_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR45_SHIFT   (0x0000002Du)
#define CSL_TPCC_TPCC_IPRH_IPR45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR46_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR46_SHIFT   (0x0000002Eu)
#define CSL_TPCC_TPCC_IPRH_IPR46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR47_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR47_SHIFT   (0x0000002Fu)
#define CSL_TPCC_TPCC_IPRH_IPR47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR48_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR48_SHIFT   (0x00000030u)
#define CSL_TPCC_TPCC_IPRH_IPR48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR49_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR49_SHIFT   (0x00000031u)
#define CSL_TPCC_TPCC_IPRH_IPR49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR50_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR50_SHIFT   (0x00000032u)
#define CSL_TPCC_TPCC_IPRH_IPR50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR51_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR51_SHIFT   (0x00000033u)
#define CSL_TPCC_TPCC_IPRH_IPR51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR52_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR52_SHIFT   (0x00000034u)
#define CSL_TPCC_TPCC_IPRH_IPR52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR53_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR53_SHIFT   (0x00000035u)
#define CSL_TPCC_TPCC_IPRH_IPR53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR54_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR54_SHIFT   (0x00000036u)
#define CSL_TPCC_TPCC_IPRH_IPR54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR55_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR55_SHIFT   (0x00000037u)
#define CSL_TPCC_TPCC_IPRH_IPR55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR56_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR56_SHIFT   (0x00000038u)
#define CSL_TPCC_TPCC_IPRH_IPR56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR57_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR57_SHIFT   (0x00000039u)
#define CSL_TPCC_TPCC_IPRH_IPR57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR58_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR58_SHIFT   (0x0000003Au)
#define CSL_TPCC_TPCC_IPRH_IPR58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR59_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR59_SHIFT   (0x0000003Bu)
#define CSL_TPCC_TPCC_IPRH_IPR59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR60_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR60_SHIFT   (0x0000003Cu)
#define CSL_TPCC_TPCC_IPRH_IPR60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR61_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR61_SHIFT   (0x0000003Du)
#define CSL_TPCC_TPCC_IPRH_IPR61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR62_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR62_SHIFT   (0x0000003Eu)
#define CSL_TPCC_TPCC_IPRH_IPR62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_IPR63_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_IPRH_IPR63_SHIFT   (0x0000003Fu)
#define CSL_TPCC_TPCC_IPRH_IPR63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IPRH_RESETVAL      (0x0FFFFFFFu)

/* TPCC_ICR */

#define CSL_TPCC_TPCC_ICR_ICR0_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_ICR_ICR0_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_ICR_ICR0_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR1_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_ICR_ICR1_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_ICR_ICR1_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR2_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_ICR_ICR2_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_ICR_ICR2_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR3_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_ICR_ICR3_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_ICR_ICR3_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR4_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_ICR_ICR4_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_ICR_ICR4_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR5_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_ICR_ICR5_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_ICR_ICR5_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR6_MASK      (0x00000040u)
#define CSL_TPCC_TPCC_ICR_ICR6_SHIFT     (0x00000006u)
#define CSL_TPCC_TPCC_ICR_ICR6_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR7_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_ICR_ICR7_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_ICR_ICR7_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR8_MASK      (0x00000100u)
#define CSL_TPCC_TPCC_ICR_ICR8_SHIFT     (0x00000008u)
#define CSL_TPCC_TPCC_ICR_ICR8_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR9_MASK      (0x00000200u)
#define CSL_TPCC_TPCC_ICR_ICR9_SHIFT     (0x00000009u)
#define CSL_TPCC_TPCC_ICR_ICR9_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR10_MASK     (0x00000400u)
#define CSL_TPCC_TPCC_ICR_ICR10_SHIFT    (0x0000000Au)
#define CSL_TPCC_TPCC_ICR_ICR10_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR11_MASK     (0x00000800u)
#define CSL_TPCC_TPCC_ICR_ICR11_SHIFT    (0x0000000Bu)
#define CSL_TPCC_TPCC_ICR_ICR11_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR12_MASK     (0x00001000u)
#define CSL_TPCC_TPCC_ICR_ICR12_SHIFT    (0x0000000Cu)
#define CSL_TPCC_TPCC_ICR_ICR12_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR13_MASK     (0x00002000u)
#define CSL_TPCC_TPCC_ICR_ICR13_SHIFT    (0x0000000Du)
#define CSL_TPCC_TPCC_ICR_ICR13_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR14_MASK     (0x00004000u)
#define CSL_TPCC_TPCC_ICR_ICR14_SHIFT    (0x0000000Eu)
#define CSL_TPCC_TPCC_ICR_ICR14_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR15_MASK     (0x00008000u)
#define CSL_TPCC_TPCC_ICR_ICR15_SHIFT    (0x0000000Fu)
#define CSL_TPCC_TPCC_ICR_ICR15_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR16_MASK     (0x00010000u)
#define CSL_TPCC_TPCC_ICR_ICR16_SHIFT    (0x00000010u)
#define CSL_TPCC_TPCC_ICR_ICR16_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR17_MASK     (0x00020000u)
#define CSL_TPCC_TPCC_ICR_ICR17_SHIFT    (0x00000011u)
#define CSL_TPCC_TPCC_ICR_ICR17_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR18_MASK     (0x00040000u)
#define CSL_TPCC_TPCC_ICR_ICR18_SHIFT    (0x00000012u)
#define CSL_TPCC_TPCC_ICR_ICR18_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR19_MASK     (0x00080000u)
#define CSL_TPCC_TPCC_ICR_ICR19_SHIFT    (0x00000013u)
#define CSL_TPCC_TPCC_ICR_ICR19_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR20_MASK     (0x00100000u)
#define CSL_TPCC_TPCC_ICR_ICR20_SHIFT    (0x00000014u)
#define CSL_TPCC_TPCC_ICR_ICR20_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR21_MASK     (0x00200000u)
#define CSL_TPCC_TPCC_ICR_ICR21_SHIFT    (0x00000015u)
#define CSL_TPCC_TPCC_ICR_ICR21_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR22_MASK     (0x00400000u)
#define CSL_TPCC_TPCC_ICR_ICR22_SHIFT    (0x00000016u)
#define CSL_TPCC_TPCC_ICR_ICR22_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR23_MASK     (0x00800000u)
#define CSL_TPCC_TPCC_ICR_ICR23_SHIFT    (0x00000017u)
#define CSL_TPCC_TPCC_ICR_ICR23_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR24_MASK     (0x01000000u)
#define CSL_TPCC_TPCC_ICR_ICR24_SHIFT    (0x00000018u)
#define CSL_TPCC_TPCC_ICR_ICR24_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR25_MASK     (0x02000000u)
#define CSL_TPCC_TPCC_ICR_ICR25_SHIFT    (0x00000019u)
#define CSL_TPCC_TPCC_ICR_ICR25_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR26_MASK     (0x04000000u)
#define CSL_TPCC_TPCC_ICR_ICR26_SHIFT    (0x0000001Au)
#define CSL_TPCC_TPCC_ICR_ICR26_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR27_MASK     (0x08000000u)
#define CSL_TPCC_TPCC_ICR_ICR27_SHIFT    (0x0000001Bu)
#define CSL_TPCC_TPCC_ICR_ICR27_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR28_MASK     (0x10000000u)
#define CSL_TPCC_TPCC_ICR_ICR28_SHIFT    (0x0000001Cu)
#define CSL_TPCC_TPCC_ICR_ICR28_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR29_MASK     (0x20000000u)
#define CSL_TPCC_TPCC_ICR_ICR29_SHIFT    (0x0000001Du)
#define CSL_TPCC_TPCC_ICR_ICR29_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR30_MASK     (0x40000000u)
#define CSL_TPCC_TPCC_ICR_ICR30_SHIFT    (0x0000001Eu)
#define CSL_TPCC_TPCC_ICR_ICR30_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_ICR31_MASK     (0x80000000u)
#define CSL_TPCC_TPCC_ICR_ICR31_SHIFT    (0x0000001Fu)
#define CSL_TPCC_TPCC_ICR_ICR31_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICR_RESETVAL       (0x00000000u)

/* TPCC_ICRH */

#define CSL_TPCC_TPCC_ICRH_ICR32_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR32_SHIFT   (0x00000020u)
#define CSL_TPCC_TPCC_ICRH_ICR32_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR33_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR33_SHIFT   (0x00000021u)
#define CSL_TPCC_TPCC_ICRH_ICR33_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR34_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR34_SHIFT   (0x00000022u)
#define CSL_TPCC_TPCC_ICRH_ICR34_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR35_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR35_SHIFT   (0x00000023u)
#define CSL_TPCC_TPCC_ICRH_ICR35_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR36_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR36_SHIFT   (0x00000024u)
#define CSL_TPCC_TPCC_ICRH_ICR36_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR37_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR37_SHIFT   (0x00000025u)
#define CSL_TPCC_TPCC_ICRH_ICR37_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR38_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR38_SHIFT   (0x00000026u)
#define CSL_TPCC_TPCC_ICRH_ICR38_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR39_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR39_SHIFT   (0x00000027u)
#define CSL_TPCC_TPCC_ICRH_ICR39_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR40_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR40_SHIFT   (0x00000028u)
#define CSL_TPCC_TPCC_ICRH_ICR40_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR41_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR41_SHIFT   (0x00000029u)
#define CSL_TPCC_TPCC_ICRH_ICR41_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR42_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR42_SHIFT   (0x0000002Au)
#define CSL_TPCC_TPCC_ICRH_ICR42_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR43_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR43_SHIFT   (0x0000002Bu)
#define CSL_TPCC_TPCC_ICRH_ICR43_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR44_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR44_SHIFT   (0x0000002Cu)
#define CSL_TPCC_TPCC_ICRH_ICR44_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR45_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR45_SHIFT   (0x0000002Du)
#define CSL_TPCC_TPCC_ICRH_ICR45_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR46_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR46_SHIFT   (0x0000002Eu)
#define CSL_TPCC_TPCC_ICRH_ICR46_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR47_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR47_SHIFT   (0x0000002Fu)
#define CSL_TPCC_TPCC_ICRH_ICR47_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR48_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR48_SHIFT   (0x00000030u)
#define CSL_TPCC_TPCC_ICRH_ICR48_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR49_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR49_SHIFT   (0x00000031u)
#define CSL_TPCC_TPCC_ICRH_ICR49_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR50_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR50_SHIFT   (0x00000032u)
#define CSL_TPCC_TPCC_ICRH_ICR50_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR51_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR51_SHIFT   (0x00000033u)
#define CSL_TPCC_TPCC_ICRH_ICR51_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR52_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR52_SHIFT   (0x00000034u)
#define CSL_TPCC_TPCC_ICRH_ICR52_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR53_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR53_SHIFT   (0x00000035u)
#define CSL_TPCC_TPCC_ICRH_ICR53_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR54_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR54_SHIFT   (0x00000036u)
#define CSL_TPCC_TPCC_ICRH_ICR54_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR55_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR55_SHIFT   (0x00000037u)
#define CSL_TPCC_TPCC_ICRH_ICR55_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR56_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR56_SHIFT   (0x00000038u)
#define CSL_TPCC_TPCC_ICRH_ICR56_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR57_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR57_SHIFT   (0x00000039u)
#define CSL_TPCC_TPCC_ICRH_ICR57_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR58_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR58_SHIFT   (0x0000003Au)
#define CSL_TPCC_TPCC_ICRH_ICR58_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR59_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR59_SHIFT   (0x0000003Bu)
#define CSL_TPCC_TPCC_ICRH_ICR59_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR60_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR60_SHIFT   (0x0000003Cu)
#define CSL_TPCC_TPCC_ICRH_ICR60_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR61_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR61_SHIFT   (0x0000003Du)
#define CSL_TPCC_TPCC_ICRH_ICR61_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR62_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR62_SHIFT   (0x0000003Eu)
#define CSL_TPCC_TPCC_ICRH_ICR62_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_ICR63_MASK    (0x00000000u)
#define CSL_TPCC_TPCC_ICRH_ICR63_SHIFT   (0x0000003Fu)
#define CSL_TPCC_TPCC_ICRH_ICR63_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_ICRH_RESETVAL      (0x0FFFFFFFu)

/* TPCC_IEVAL */

#define CSL_TPCC_TPCC_IEVAL_EVAL_MASK    (0x00000001u)
#define CSL_TPCC_TPCC_IEVAL_EVAL_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_IEVAL_EVAL_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IEVAL_SET_MASK     (0x00000002u)
#define CSL_TPCC_TPCC_IEVAL_SET_SHIFT    (0x00000001u)
#define CSL_TPCC_TPCC_IEVAL_SET_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_IEVAL_RESETVAL     (0x00000000u)

/* TPCC_QER */

#define CSL_TPCC_TPCC_QER_QER0_MASK      (0x00000001u)
#define CSL_TPCC_TPCC_QER_QER0_SHIFT     (0x00000000u)
#define CSL_TPCC_TPCC_QER_QER0_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_QER_QER1_MASK      (0x00000002u)
#define CSL_TPCC_TPCC_QER_QER1_SHIFT     (0x00000001u)
#define CSL_TPCC_TPCC_QER_QER1_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_QER_QER2_MASK      (0x00000004u)
#define CSL_TPCC_TPCC_QER_QER2_SHIFT     (0x00000002u)
#define CSL_TPCC_TPCC_QER_QER2_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_QER_QER3_MASK      (0x00000008u)
#define CSL_TPCC_TPCC_QER_QER3_SHIFT     (0x00000003u)
#define CSL_TPCC_TPCC_QER_QER3_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_QER_QER4_MASK      (0x00000010u)
#define CSL_TPCC_TPCC_QER_QER4_SHIFT     (0x00000004u)
#define CSL_TPCC_TPCC_QER_QER4_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_QER_QER5_MASK      (0x00000020u)
#define CSL_TPCC_TPCC_QER_QER5_SHIFT     (0x00000005u)
#define CSL_TPCC_TPCC_QER_QER5_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_QER_QER6_MASK      (0x00000040u)
#define CSL_TPCC_TPCC_QER_QER6_SHIFT     (0x00000006u)
#define CSL_TPCC_TPCC_QER_QER6_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_QER_QER7_MASK      (0x00000080u)
#define CSL_TPCC_TPCC_QER_QER7_SHIFT     (0x00000007u)
#define CSL_TPCC_TPCC_QER_QER7_RESETVAL  (0x00000000u)

#define CSL_TPCC_TPCC_QER_RESETVAL       (0x00000000u)

/* TPCC_QEER */

#define CSL_TPCC_TPCC_QEER_QEER0_MASK    (0x00000001u)
#define CSL_TPCC_TPCC_QEER_QEER0_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_QEER_QEER0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEER_QEER1_MASK    (0x00000002u)
#define CSL_TPCC_TPCC_QEER_QEER1_SHIFT   (0x00000001u)
#define CSL_TPCC_TPCC_QEER_QEER1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEER_QEER2_MASK    (0x00000004u)
#define CSL_TPCC_TPCC_QEER_QEER2_SHIFT   (0x00000002u)
#define CSL_TPCC_TPCC_QEER_QEER2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEER_QEER3_MASK    (0x00000008u)
#define CSL_TPCC_TPCC_QEER_QEER3_SHIFT   (0x00000003u)
#define CSL_TPCC_TPCC_QEER_QEER3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEER_QEER4_MASK    (0x00000010u)
#define CSL_TPCC_TPCC_QEER_QEER4_SHIFT   (0x00000004u)
#define CSL_TPCC_TPCC_QEER_QEER4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEER_QEER5_MASK    (0x00000020u)
#define CSL_TPCC_TPCC_QEER_QEER5_SHIFT   (0x00000005u)
#define CSL_TPCC_TPCC_QEER_QEER5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEER_QEER6_MASK    (0x00000040u)
#define CSL_TPCC_TPCC_QEER_QEER6_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_QEER_QEER6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEER_QEER7_MASK    (0x00000080u)
#define CSL_TPCC_TPCC_QEER_QEER7_SHIFT   (0x00000007u)
#define CSL_TPCC_TPCC_QEER_QEER7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEER_RESETVAL      (0x00000000u)

/* TPCC_QEECR */

#define CSL_TPCC_TPCC_QEECR_QEECR0_MASK  (0x00000001u)
#define CSL_TPCC_TPCC_QEECR_QEECR0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QEECR_QEECR0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEECR_QEECR1_MASK  (0x00000002u)
#define CSL_TPCC_TPCC_QEECR_QEECR1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_QEECR_QEECR1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEECR_QEECR2_MASK  (0x00000004u)
#define CSL_TPCC_TPCC_QEECR_QEECR2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QEECR_QEECR2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEECR_QEECR3_MASK  (0x00000008u)
#define CSL_TPCC_TPCC_QEECR_QEECR3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_QEECR_QEECR3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEECR_QEECR4_MASK  (0x00000010u)
#define CSL_TPCC_TPCC_QEECR_QEECR4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_QEECR_QEECR4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEECR_QEECR5_MASK  (0x00000020u)
#define CSL_TPCC_TPCC_QEECR_QEECR5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QEECR_QEECR5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEECR_QEECR6_MASK  (0x00000040u)
#define CSL_TPCC_TPCC_QEECR_QEECR6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_QEECR_QEECR6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEECR_QEECR7_MASK  (0x00000080u)
#define CSL_TPCC_TPCC_QEECR_QEECR7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_QEECR_QEECR7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEECR_RESETVAL     (0x00000000u)

/* TPCC_QEESR */

#define CSL_TPCC_TPCC_QEESR_QEESR0_MASK  (0x00000001u)
#define CSL_TPCC_TPCC_QEESR_QEESR0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QEESR_QEESR0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEESR_QEESR1_MASK  (0x00000002u)
#define CSL_TPCC_TPCC_QEESR_QEESR1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_QEESR_QEESR1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEESR_QEESR2_MASK  (0x00000004u)
#define CSL_TPCC_TPCC_QEESR_QEESR2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QEESR_QEESR2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEESR_QEESR3_MASK  (0x00000008u)
#define CSL_TPCC_TPCC_QEESR_QEESR3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_QEESR_QEESR3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEESR_QEESR4_MASK  (0x00000010u)
#define CSL_TPCC_TPCC_QEESR_QEESR4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_QEESR_QEESR4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEESR_QEESR5_MASK  (0x00000020u)
#define CSL_TPCC_TPCC_QEESR_QEESR5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QEESR_QEESR5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEESR_QEESR6_MASK  (0x00000040u)
#define CSL_TPCC_TPCC_QEESR_QEESR6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_QEESR_QEESR6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEESR_QEESR7_MASK  (0x00000080u)
#define CSL_TPCC_TPCC_QEESR_QEESR7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_QEESR_QEESR7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QEESR_RESETVAL     (0x00000000u)

/* TPCC_QSER */

#define CSL_TPCC_TPCC_QSER_QSER0_MASK    (0x00000001u)
#define CSL_TPCC_TPCC_QSER_QSER0_SHIFT   (0x00000000u)
#define CSL_TPCC_TPCC_QSER_QSER0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSER_QSER1_MASK    (0x00000002u)
#define CSL_TPCC_TPCC_QSER_QSER1_SHIFT   (0x00000001u)
#define CSL_TPCC_TPCC_QSER_QSER1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSER_QSER2_MASK    (0x00000004u)
#define CSL_TPCC_TPCC_QSER_QSER2_SHIFT   (0x00000002u)
#define CSL_TPCC_TPCC_QSER_QSER2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSER_QSER3_MASK    (0x00000008u)
#define CSL_TPCC_TPCC_QSER_QSER3_SHIFT   (0x00000003u)
#define CSL_TPCC_TPCC_QSER_QSER3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSER_QSER4_MASK    (0x00000010u)
#define CSL_TPCC_TPCC_QSER_QSER4_SHIFT   (0x00000004u)
#define CSL_TPCC_TPCC_QSER_QSER4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSER_QSER5_MASK    (0x00000020u)
#define CSL_TPCC_TPCC_QSER_QSER5_SHIFT   (0x00000005u)
#define CSL_TPCC_TPCC_QSER_QSER5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSER_QSER6_MASK    (0x00000040u)
#define CSL_TPCC_TPCC_QSER_QSER6_SHIFT   (0x00000006u)
#define CSL_TPCC_TPCC_QSER_QSER6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSER_QSER7_MASK    (0x00000080u)
#define CSL_TPCC_TPCC_QSER_QSER7_SHIFT   (0x00000007u)
#define CSL_TPCC_TPCC_QSER_QSER7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSER_RESETVAL      (0x00000000u)

/* TPCC_QSECR */

#define CSL_TPCC_TPCC_QSECR_QSECR0_MASK  (0x00000001u)
#define CSL_TPCC_TPCC_QSECR_QSECR0_SHIFT (0x00000000u)
#define CSL_TPCC_TPCC_QSECR_QSECR0_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSECR_QSECR1_MASK  (0x00000002u)
#define CSL_TPCC_TPCC_QSECR_QSECR1_SHIFT (0x00000001u)
#define CSL_TPCC_TPCC_QSECR_QSECR1_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSECR_QSECR2_MASK  (0x00000004u)
#define CSL_TPCC_TPCC_QSECR_QSECR2_SHIFT (0x00000002u)
#define CSL_TPCC_TPCC_QSECR_QSECR2_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSECR_QSECR3_MASK  (0x00000008u)
#define CSL_TPCC_TPCC_QSECR_QSECR3_SHIFT (0x00000003u)
#define CSL_TPCC_TPCC_QSECR_QSECR3_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSECR_QSECR4_MASK  (0x00000010u)
#define CSL_TPCC_TPCC_QSECR_QSECR4_SHIFT (0x00000004u)
#define CSL_TPCC_TPCC_QSECR_QSECR4_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSECR_QSECR5_MASK  (0x00000020u)
#define CSL_TPCC_TPCC_QSECR_QSECR5_SHIFT (0x00000005u)
#define CSL_TPCC_TPCC_QSECR_QSECR5_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSECR_QSECR6_MASK  (0x00000040u)
#define CSL_TPCC_TPCC_QSECR_QSECR6_SHIFT (0x00000006u)
#define CSL_TPCC_TPCC_QSECR_QSECR6_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSECR_QSECR7_MASK  (0x00000080u)
#define CSL_TPCC_TPCC_QSECR_QSECR7_SHIFT (0x00000007u)
#define CSL_TPCC_TPCC_QSECR_QSECR7_RESETVAL (0x00000000u)

#define CSL_TPCC_TPCC_QSECR_RESETVAL     (0x00000000u)

/* Adding Custom Bit Mask Definitions for Param
 * Set Configuration.
 *
 * NOT AUTO_GENERATED.
 */

/* OPT */

#define CSL_TPCC_PARAM_OPT_SAM_MASK (0x00000001u)
#define CSL_TPCC_PARAM_OPT_SAM_SHIFT (0x00000000u)
#define CSL_TPCC_PARAM_OPT_SAM_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_OPT_DAM_MASK (0x00000002u)
#define CSL_TPCC_PARAM_OPT_DAM_SHIFT (0x00000001u)
#define CSL_TPCC_PARAM_OPT_DAM_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_OPT_SYNCDIM_MASK (0x00000004u)
#define CSL_TPCC_PARAM_OPT_SYNCDIM_SHIFT (0x00000002u)
#define CSL_TPCC_PARAM_OPT_SYNCDIM_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_OPT_STATIC_MASK  (0x00000008u)
#define CSL_TPCC_PARAM_OPT_STATIC_SHIFT (0x00000003u)
#define CSL_TPCC_PARAM_OPT_STATIC_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_OPT_FWID_MASK (0x00000700u)
#define CSL_TPCC_PARAM_OPT_FWID_SHIFT (0x00000008u)
#define CSL_TPCC_PARAM_OPT_FWID_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_OPT_TCCMOD_MASK (0x00000800u)
#define CSL_TPCC_PARAM_OPT_TCCMOD_SHIFT (0x0000000Bu)
#define CSL_TPCC_PARAM_OPT_TCCMOD_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_OPT_TCC_MASK (0x0003F000u)
#define CSL_TPCC_PARAM_OPT_TCC_SHIFT (0x0000000Cu)
#define CSL_TPCC_PARAM_OPT_TCC_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_OPT_TCINTEN_MASK (0x00100000u)
#define CSL_TPCC_PARAM_OPT_TCINTEN_SHIFT (0x00000014u)
#define CSL_TPCC_PARAM_OPT_TCINTEN_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_OPT_ITCINTEN_MASK (0x00200000u)
#define CSL_TPCC_PARAM_OPT_ITCINTEN_SHIFT (0x00000015u)
#define CSL_TPCC_PARAM_OPT_ITCINTEN_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_OPT_TCCHEN_MASK (0x00400000u)
#define CSL_TPCC_PARAM_OPT_TCCHEN_SHIFT (0x00000016u)
#define CSL_TPCC_PARAM_OPT_TCCHEN_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_OPT_ITCCHEN_MASK (0x00800000u)
#define CSL_TPCC_PARAM_OPT_ITCCHEN_SHIFT (0x00000017u)
#define CSL_TPCC_PARAM_OPT_ITCCHEN_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_OPT_PRIVID_MASK (0x0F000000u)
#define CSL_TPCC_PARAM_OPT_PRIVID_SHIFT (0x00000018u)
#define CSL_TPCC_PARAM_OPT_PRIVID_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_OPT_PRIV_MASK (0x80000000u)
#define CSL_TPCC_PARAM_OPT_PRIV_SHIFT (0x0000001Fu)
#define CSL_TPCC_PARAM_OPT_PRIV_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_OPT_RESETVAL  (0x00000000u)

/* A_B_CNT */

#define CSL_TPCC_PARAM_A_B_CNT_ACNT_MASK (0x0000FFFFu)
#define CSL_TPCC_PARAM_A_B_CNT_ACNT_SHIFT (0x00000000u)
#define CSL_TPCC_PARAM_A_B_CNT_ACNT_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_A_B_CNT_BCNT_MASK (0xFFFF0000u)
#define CSL_TPCC_PARAM_A_B_CNT_BCNT_SHIFT (0x0000000Fu)
#define CSL_TPCC_PARAM_A_B_CNT_BCNT_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_A_B_CNT_RESETVAL  (0x00000000u)

/* SRC_DST_BIDX */

#define CSL_TPCC_PARAM_SRC_DST_BIDX_SRCBIDX_MASK (0x0000FFFFu)
#define CSL_TPCC_PARAM_SRC_DST_BIDX_SRCBIDX_SHIFT (0x00000000u)
#define CSL_TPCC_PARAM_SRC_DST_BIDX_SRCBIDX_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_SRC_DST_BIDX_DSTBIDX_MASK (0xFFFF0000u)
#define CSL_TPCC_PARAM_SRC_DST_BIDX_DSTBIDX_SHIFT (0x0000000Fu)
#define CSL_TPCC_PARAM_SRC_DST_BIDX_DSTBIDX_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_SRC_DST_BIDX_RESETVAL  (0x00000000u)

/* LINK_BCNTRLD */

#define CSL_TPCC_PARAM_LINK_BCNTRLD_LINK_MASK (0x0000FFFFu)
#define CSL_TPCC_PARAM_LINK_BCNTRLD_LINK_SHIFT (0x00000000u)
#define CSL_TPCC_PARAM_LINK_BCNTRLD_LINK_RESETVAL (0x0000FFFFu)

#define CSL_TPCC_PARAM_LINK_BCNTRLD_BCNTRLD_MASK (0xFFFF0000u)
#define CSL_TPCC_PARAM_LINK_BCNTRLD_BCNTRLD_SHIFT (0x0000000Fu)
#define CSL_TPCC_PARAM_LINK_BCNTRLD_BCNTRLD_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_LINK_BCNTRLD_RESETVAL  (0xFFFF0000u)

/* SRC_DST_CIDX */

#define CSL_TPCC_PARAM_SRC_DST_CIDX_SRCCIDX_MASK (0x0000FFFFu)
#define CSL_TPCC_PARAM_SRC_DST_CIDX_SRCCIDX_SHIFT (0x00000000u)
#define CSL_TPCC_PARAM_SRC_DST_CIDX_SRCCIDX_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_SRC_DST_CIDX_DSTCIDX_MASK (0xFFFF0000u)
#define CSL_TPCC_PARAM_SRC_DST_CIDX_DSTCIDX_SHIFT (0x0000000Fu)
#define CSL_TPCC_PARAM_SRC_DST_CIDX_DSTCIDX_RESETVAL (0x00000000u)

#define CSL_TPCC_PARAM_SRC_DST_CIDX_RESETVAL  (0x00000000u)

#endif

