// 
// Generated By: dol2asm
// Translation Unit: MetroTRK/Portable/msg
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msg.h"

// 
// Forward References:
// 


extern "C" void TRKMessageSend();

// 
// External References:
// 


extern "C" void TRKWriteUARTN();
extern "C" void MWTRACE();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803A26B8-803A26E0 0025+03 s=1 e=0 z=0  None .rodata    @98                                                          */
SECTION_RODATA static u8 const lit_98[37 + 3 /* padding */] = {
	0x4D, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x53, 0x65, 0x6E, 0x64, 0x20, 0x3A, 0x20, 0x63, 0x63,
	0x5F, 0x77, 0x72, 0x69, 0x74, 0x65, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6E, 0x65, 0x64, 0x20,
	0x25, 0x6C, 0x64, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 8036CFD8-8036D01C 0044+00 s=0 e=6 z=0  None .text      TRKMessageSend                                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void TRKMessageSend() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msg/TRKMessageSend.s"
}
#pragma pop

