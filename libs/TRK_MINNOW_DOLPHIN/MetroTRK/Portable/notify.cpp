// 
// Generated By: dol2asm
// Translation Unit: MetroTRK/Portable/notify
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "TRK_MINNOW_DOLPHIN/MetroTRK/Portable/notify.h"

// 
// Forward References:
// 


extern "C" void TRKDoNotifyStopped();

// 
// External References:
// 


extern "C" void TRKReleaseBuffer();
extern "C" void TRKGetFreeBuffer();
extern "C" void TRKRequestSend();
extern "C" void TRKTargetAddExceptionInfo();
extern "C" void TRKTargetAddStopInfo();

// 
// Declarations:
// 

/* 8036F4B0-8036F548 0098+00 s=0 e=1 z=0  None .text      TRKDoNotifyStopped                                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void TRKDoNotifyStopped() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/notify/TRKDoNotifyStopped.s"
}
#pragma pop

