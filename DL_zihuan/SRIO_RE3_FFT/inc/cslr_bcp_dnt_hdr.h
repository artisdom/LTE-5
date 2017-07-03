
#ifndef _CSLR_DNT_HDR_H_
#define _CSLR_DNT_HDR_H_

#include "cslr.h"


/* Minimum unit = 1 byte */

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* Word 0 */
#define CSL_DNT_HDR_WORD0_LOCAL_HDR_LEN_MASK (0x000000FFu)
#define CSL_DNT_HDR_WORD0_LOCAL_HDR_LEN_SHIFT (0x00000000u)
#define CSL_DNT_HDR_WORD0_LOCAL_HDR_LEN_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD0_MOD_ID_MASK    (0x00000F00u)
#define CSL_DNT_HDR_WORD0_MOD_ID_SHIFT   (0x00000008u)
#define CSL_DNT_HDR_WORD0_MOD_ID_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD0_RESETVAL       (0x00000000u)

/* Word 1 */
#define CSL_DNT_HDR_WORD1_NUM_CONSTELLATION_MASK (0x00000003u)
#define CSL_DNT_HDR_WORD1_NUM_CONSTELLATION_SHIFT (0x00000000u)
#define CSL_DNT_HDR_WORD1_NUM_CONSTELLATION_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD1_NUM_FRAME_COUNT_MASK (0x00001F00u)
#define CSL_DNT_HDR_WORD1_NUM_FRAME_COUNT_SHIFT (0x00000008u)
#define CSL_DNT_HDR_WORD1_NUM_FRAME_COUNT_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD1_NUM_DESCRAMBLE_MASK (0xFFFF0000u)
#define CSL_DNT_HDR_WORD1_NUM_DESCRAMBLE_SHIFT (0x00000010u)
#define CSL_DNT_HDR_WORD1_NUM_DESCRAMBLE_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD1_RESETVAL       (0x00000000u)

/* Word 2 */
#define CSL_DNT_HDR_WORD2_NUM_DATA_VALUE_MASK (0x00FFFFFFu)
#define CSL_DNT_HDR_WORD2_NUM_DATA_VALUE_SHIFT (0x00000000u)
#define CSL_DNT_HDR_WORD2_NUM_DATA_VALUE_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD2_RESETVAL       (0x00000000u)

/* Word 3 */
#define CSL_DNT_HDR_WORD3_NUM_R2_LENGTH_0_MASK (0x0000FFFFu)
#define CSL_DNT_HDR_WORD3_NUM_R2_LENGTH_0_SHIFT (0x00000000u)
#define CSL_DNT_HDR_WORD3_NUM_R2_LENGTH_0_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD3_NUM_DUMMY_0_MASK (0x001F0000u)
#define CSL_DNT_HDR_WORD3_NUM_DUMMY_0_SHIFT (0x00000010u)
#define CSL_DNT_HDR_WORD3_NUM_DUMMY_0_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD3_NUM_DATA_FORMAT_0_MASK (0x3F000000u)
#define CSL_DNT_HDR_WORD3_NUM_DATA_FORMAT_0_SHIFT (0x00000018u)
#define CSL_DNT_HDR_WORD3_NUM_DATA_FORMAT_0_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD3_RESETVAL       (0x00000000u)

/* Word 4 */
#define CSL_DNT_HDR_WORD4_NUM_R2_LENGTH_1_MASK (0x0000FFFFu)
#define CSL_DNT_HDR_WORD4_NUM_R2_LENGTH_1_SHIFT (0x00000000u)
#define CSL_DNT_HDR_WORD4_NUM_R2_LENGTH_1_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD4_NUM_DUMMY_1_MASK (0x001F0000u)
#define CSL_DNT_HDR_WORD4_NUM_DUMMY_1_SHIFT (0x00000010u)
#define CSL_DNT_HDR_WORD4_NUM_DUMMY_1_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD4_NUM_DATA_FORMAT_1_MASK (0x3F000000u)
#define CSL_DNT_HDR_WORD4_NUM_DATA_FORMAT_1_SHIFT (0x00000018u)
#define CSL_DNT_HDR_WORD4_NUM_DATA_FORMAT_1_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD4_RESETVAL       (0x00000000u)

/* Word 5 */
#define CSL_DNT_HDR_WORD5_NUM_R2_LENGTH_2_MASK (0x0000FFFFu)
#define CSL_DNT_HDR_WORD5_NUM_R2_LENGTH_2_SHIFT (0x00000000u)
#define CSL_DNT_HDR_WORD5_NUM_R2_LENGTH_2_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD5_NUM_DUMMY_2_MASK (0x001F0000u)
#define CSL_DNT_HDR_WORD5_NUM_DUMMY_2_SHIFT (0x00000010u)
#define CSL_DNT_HDR_WORD5_NUM_DUMMY_2_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD5_NUM_DATA_FORMAT_2_MASK (0x3F000000u)
#define CSL_DNT_HDR_WORD5_NUM_DATA_FORMAT_2_SHIFT (0x00000018u)
#define CSL_DNT_HDR_WORD5_NUM_DATA_FORMAT_2_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD5_RESETVAL       (0x00000000u)

/* Word 6 */
#define CSL_DNT_HDR_WORD6_NUM_R2_LENGTH_3_MASK (0x0000FFFFu)
#define CSL_DNT_HDR_WORD6_NUM_R2_LENGTH_3_SHIFT (0x00000000u)
#define CSL_DNT_HDR_WORD6_NUM_R2_LENGTH_3_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD6_NUM_DUMMY_3_MASK (0x001F0000u)
#define CSL_DNT_HDR_WORD6_NUM_DUMMY_3_SHIFT (0x00000010u)
#define CSL_DNT_HDR_WORD6_NUM_DUMMY_3_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD6_NUM_DATA_FORMAT_3_MASK (0x3F000000u)
#define CSL_DNT_HDR_WORD6_NUM_DATA_FORMAT_3_SHIFT (0x00000018u)
#define CSL_DNT_HDR_WORD6_NUM_DATA_FORMAT_3_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD6_RESETVAL       (0x00000000u)

/* Word 7 */
#define CSL_DNT_HDR_WORD7_NUM_R2_LENGTH_4_MASK (0x0000FFFFu)
#define CSL_DNT_HDR_WORD7_NUM_R2_LENGTH_4_SHIFT (0x00000000u)
#define CSL_DNT_HDR_WORD7_NUM_R2_LENGTH_4_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD7_NUM_DUMMY_4_MASK (0x001F0000u)
#define CSL_DNT_HDR_WORD7_NUM_DUMMY_4_SHIFT (0x00000010u)
#define CSL_DNT_HDR_WORD7_NUM_DUMMY_4_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD7_NUM_DATA_FORMAT_4_MASK (0x3F000000u)
#define CSL_DNT_HDR_WORD7_NUM_DATA_FORMAT_4_SHIFT (0x00000018u)
#define CSL_DNT_HDR_WORD7_NUM_DATA_FORMAT_4_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD7_RESETVAL       (0x00000000u)

/* Word 8 */
#define CSL_DNT_HDR_WORD8_NUM_R2_LENGTH_5_MASK (0x0000FFFFu)
#define CSL_DNT_HDR_WORD8_NUM_R2_LENGTH_5_SHIFT (0x00000000u)
#define CSL_DNT_HDR_WORD8_NUM_R2_LENGTH_5_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD8_NUM_DUMMY_5_MASK (0x001F0000u)
#define CSL_DNT_HDR_WORD8_NUM_DUMMY_5_SHIFT (0x00000010u)
#define CSL_DNT_HDR_WORD8_NUM_DUMMY_5_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD8_NUM_DATA_FORMAT_5_MASK (0x3F000000u)
#define CSL_DNT_HDR_WORD8_NUM_DATA_FORMAT_5_SHIFT (0x00000018u)
#define CSL_DNT_HDR_WORD8_NUM_DATA_FORMAT_5_RESETVAL (0x00000000u)

#define CSL_DNT_HDR_WORD8_RESETVAL       (0x00000000u)

#endif
