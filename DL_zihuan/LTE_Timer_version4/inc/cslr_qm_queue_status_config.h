
#ifndef _CSLR_QM_QUEUE_STATUS_CONFIG_H_
#define _CSLR_QM_QUEUE_STATUS_CONFIG_H_



#include "cslr.h"


/* Minimum unit = 1 byte */

/**************************************************************************\
* Register Overlay Structure for QUEUE_STATUS_CONFIG_GROUP
\**************************************************************************/
typedef struct  {
    volatile unsigned int QUEUE_STATUS_CONFIG_REG_A;
    volatile unsigned int QUEUE_STATUS_CONFIG_REG_B;
    volatile unsigned int QUEUE_STATUS_CONFIG_REG_C;
    volatile unsigned int QUEUE_STATUS_CONFIG_REG_D;
} CSL_Qm_queue_status_configQueue_status_config_groupRegs;

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    CSL_Qm_queue_status_configQueue_status_config_groupRegs QUEUE_STATUS_CONFIG_GROUP[8192];
} CSL_Qm_queue_status_configRegs;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* QUEUE_STATUS_CONFIG_REG_A */

#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_A_QUEUE_ENTRY_COUNT_MASK (0x0007FFFFu)
#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_A_QUEUE_ENTRY_COUNT_SHIFT (0x00000000u)
#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_A_QUEUE_ENTRY_COUNT_RESETVAL (0x00000000u)

#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_A_RESETVAL (0x00000000u)

/* QUEUE_STATUS_CONFIG_REG_B */

#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_B_QUEUE_BYTE_COUNT_MASK (0xFFFFFFFFu)
#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_B_QUEUE_BYTE_COUNT_SHIFT (0x00000000u)
#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_B_QUEUE_BYTE_COUNT_RESETVAL (0x00000000u)

#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_B_RESETVAL (0x00000000u)

/* QUEUE_STATUS_CONFIG_REG_C */

#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_C_PACKET_SIZE_MASK (0x0001FFFFu)
#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_C_PACKET_SIZE_SHIFT (0x00000000u)
#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_C_PACKET_SIZE_RESETVAL (0x00000000u)

#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_C_RESETVAL (0x00000000u)

/* QUEUE_STATUS_CONFIG_REG_D */

#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_D_THRESHOLD_MASK (0x0000000Fu)
#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_D_THRESHOLD_SHIFT (0x00000000u)
#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_D_THRESHOLD_RESETVAL (0x00000000u)

#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_D_THRESHOLD_HILO_MASK (0x00000080u)
#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_D_THRESHOLD_HILO_SHIFT (0x00000007u)
#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_D_THRESHOLD_HILO_RESETVAL (0x00000000u)

#define CSL_QM_QUEUE_STATUS_CONFIG_QUEUE_STATUS_CONFIG_REG_D_RESETVAL (0x00000000u)

#endif
