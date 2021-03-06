
 
#ifndef _CSL_CPINTC_H_
#define _CSL_CPINTC_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "soc.h"
#include "csl.h"
#include "cslr_cpintc.h"


 
/** @brief Register Overlay Memory map for the CPINTC0 Registers. */
typedef volatile CSL_CPINTCRegs*  CSL_CPINTC_RegsOvly;

/** @brief This is the handle to the CPINTC instance */
typedef unsigned int   CSL_CPINTC_Handle;

/** @brief This defines the system interrupt */
typedef unsigned int   CSL_CPINTCSystemInterrupt;

/** @brief This defines the host interrupt */
typedef unsigned int   CSL_CPINTCHostInterrupt;

/** @brief This defines the channels */
typedef unsigned int   CSL_CPINTCChannel;

/** @brief This defines the nesting level */
typedef unsigned short   CSL_CPINTCNestingLevel;

/** @brief Enumeration defines the type of Nesting Modes which is supported by the CPINTC */
typedef enum CSL_CPINTCNestingMode
{
    CPINTC_NO_NESTING            = 0x0,
    CPINTC_AUTOMATIC_GLB_NESTING = 0x1,
    CPINTC_AUTOMATIC_IND_NESTING = 0x2,
    CPINTC_MANUAL_NESTING        = 0x3
}CSL_CPINTCNestingMode;

/**
@}
*/

/* Device specific API which opens the CPINTC instance and returns a handle used in all subsequent calls */
extern CSL_CPINTC_Handle CSL_CPINTC_open (signed int instNum);

#ifdef __cplusplus
}
#endif

#endif /* _CSL_CPINTC_H_ */

