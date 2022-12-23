//
// Generated By: dol2asm
// Translation Unit: CARDRdwr
//

#include "dolphin/card/CARDRdwr.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

static void BlockReadCallback();
void __CARDRead();
static void BlockWriteCallback();
void __CARDWrite();

//
// External References:
//

void __CARDReadSegment();
void __CARDWritePage();
void __CARDPutControlBlock();
extern u8 __CARDBlock[544];

//
// Declarations:
//

/* 80355184-80355260 34FAC4 00DC+00 1/1 0/0 0/0 .text            BlockReadCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void BlockReadCallback() {
    nofralloc
#include "asm/dolphin/card/CARDRdwr/BlockReadCallback.s"
}
#pragma pop

/* 80355260-803552C4 34FBA0 0064+00 0/0 3/3 0/0 .text            __CARDRead */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __CARDRead() {
    nofralloc
#include "asm/dolphin/card/CARDRdwr/__CARDRead.s"
}
#pragma pop

/* 803552C4-803553AC 34FC04 00E8+00 1/1 0/0 0/0 .text            BlockWriteCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void BlockWriteCallback() {
    nofralloc
#include "asm/dolphin/card/CARDRdwr/BlockWriteCallback.s"
}
#pragma pop

/* 803553AC-80355414 34FCEC 0068+00 0/0 4/4 0/0 .text            __CARDWrite */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __CARDWrite() {
    nofralloc
#include "asm/dolphin/card/CARDRdwr/__CARDWrite.s"
}
#pragma pop