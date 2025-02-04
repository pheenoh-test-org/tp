//
// Generated By: dol2asm
// Translation Unit: src/OdemuExi2Lib/DebuggerDriver
//

#include "odemuexi2/Src/OdemuExi2Lib/DebuggerDriver.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void DBClose();
extern "C" void DBOpen();
extern "C" void DBWrite();
extern "C" void DBRead();
extern "C" void DBQueryData();
extern "C" void DBInitInterrupts();
extern "C" void DBInitComm();
extern "C" static void DBGHandler();
extern "C" static void MWCallback();
extern "C" static void DBGReadStatus();
extern "C" static void DBGWrite();
extern "C" static void DBGRead();
extern "C" static void DBGReadMailbox();
extern "C" static void DBGEXIImm();

//
// External References:
//

extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void __OSSetInterruptHandler();
extern "C" void __OSMaskInterrupts();
extern "C" void __OSUnmaskInterrupts();
extern "C" extern f32 data_80450AF0;

//
// Declarations:
//

/* 80372D2C-80372D30 36D66C 0004+00 0/0 1/1 0/0 .text            DBClose */
void DBClose() {
    /* empty function */
}

/* 80372D30-80372D34 36D670 0004+00 0/0 1/1 0/0 .text            DBOpen */
void DBOpen() {
    /* empty function */
}

/* 80372D34-80372F94 36D674 0260+00 0/0 1/1 0/0 .text            DBWrite */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DBWrite() {
    nofralloc
#include "asm/odemuexi2/Src/OdemuExi2Lib/DebuggerDriver/DBWrite.s"
}
#pragma pop

/* ############################################################################################## */
/* 804519D0-804519D4 000ED0 0004+00 2/2 0/0 0/0 .sbss            MTRCallback */
static u8 MTRCallback[4];

/* 804519D4-804519D8 000ED4 0004+00 2/2 0/0 0/0 .sbss            DBGCallback */
static u8 DBGCallback[4];

/* 804519D8-804519DC 000ED8 0004+00 2/2 0/0 0/0 .sbss            SendMailData */
static u8 SendMailData[4];

/* 804519DC-804519E0 000EDC 0004+00 2/2 0/0 0/0 .sbss            RecvDataLeng */
static u8 RecvDataLeng[4];

/* 804519E0-804519E4 000EE0 0004+00 1/1 0/0 0/0 .sbss            pEXIInputFlag */
static u8 pEXIInputFlag[4];

/* 804519E4-804519E8 000EE4 0004+00 4/4 0/0 0/0 .sbss            None */
static u8 data_804519E4[4];

/* 80372F94-80373020 36D8D4 008C+00 0/0 2/2 0/0 .text            DBRead */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DBRead() {
    nofralloc
#include "asm/odemuexi2/Src/OdemuExi2Lib/DebuggerDriver/DBRead.s"
}
#pragma pop

/* 80373020-803730BC 36D960 009C+00 0/0 2/2 0/0 .text            DBQueryData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DBQueryData() {
    nofralloc
#include "asm/odemuexi2/Src/OdemuExi2Lib/DebuggerDriver/DBQueryData.s"
}
#pragma pop

/* 803730BC-80373110 36D9FC 0054+00 0/0 1/1 0/0 .text            DBInitInterrupts */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DBInitInterrupts() {
    nofralloc
#include "asm/odemuexi2/Src/OdemuExi2Lib/DebuggerDriver/DBInitInterrupts.s"
}
#pragma pop

/* 80373110-80373188 36DA50 0078+00 0/0 1/1 0/0 .text            DBInitComm */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DBInitComm() {
    nofralloc
#include "asm/odemuexi2/Src/OdemuExi2Lib/DebuggerDriver/DBInitComm.s"
}
#pragma pop

/* 80373188-803731C8 36DAC8 0040+00 1/1 0/0 0/0 .text            DBGHandler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void DBGHandler() {
    nofralloc
#include "asm/odemuexi2/Src/OdemuExi2Lib/DebuggerDriver/DBGHandler.s"
}
#pragma pop

/* 803731C8-80373204 36DB08 003C+00 1/1 0/0 0/0 .text            MWCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void MWCallback() {
    nofralloc
#include "asm/odemuexi2/Src/OdemuExi2Lib/DebuggerDriver/MWCallback.s"
}
#pragma pop

/* 80373204-803732B0 36DB44 00AC+00 1/1 0/0 0/0 .text            DBGReadStatus */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void DBGReadStatus() {
    nofralloc
#include "asm/odemuexi2/Src/OdemuExi2Lib/DebuggerDriver/DBGReadStatus.s"
}
#pragma pop

/* 803732B0-8037338C 36DBF0 00DC+00 1/1 0/0 0/0 .text            DBGWrite */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void DBGWrite() {
    nofralloc
#include "asm/odemuexi2/Src/OdemuExi2Lib/DebuggerDriver/DBGWrite.s"
}
#pragma pop

/* 8037338C-80373468 36DCCC 00DC+00 1/1 0/0 0/0 .text            DBGRead */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void DBGRead() {
    nofralloc
#include "asm/odemuexi2/Src/OdemuExi2Lib/DebuggerDriver/DBGRead.s"
}
#pragma pop

/* 80373468-80373514 36DDA8 00AC+00 1/1 0/0 0/0 .text            DBGReadMailbox */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void DBGReadMailbox() {
    nofralloc
#include "asm/odemuexi2/Src/OdemuExi2Lib/DebuggerDriver/DBGReadMailbox.s"
}
#pragma pop

/* 80373514-803737AC 36DE54 0298+00 5/5 0/0 0/0 .text            DBGEXIImm */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void DBGEXIImm() {
    nofralloc
#include "asm/odemuexi2/Src/OdemuExi2Lib/DebuggerDriver/DBGEXIImm.s"
}
#pragma pop
