// 
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/ansi_files
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "MSL_C.PPCEABI.bare.H/MSL_Common/Src/ansi_files.h"

// 
// Forward References:
// 

extern "C" extern void* __files[80];

extern "C" void __flush_all();
extern "C" void __close_all();
extern "C" extern void* __files[80];

// 
// External References:
// 


extern "C" void free();
extern "C" void __end_critical_region();
extern "C" void __begin_critical_region();
extern "C" void fflush();
extern "C" void fclose();
extern "C" bool __close_console();
extern "C" void __write_console();
extern "C" void __read_console();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 8044D578-8044D678 0100+00 s=1 e=0 z=0  None .bss       stderr_buff                                                  */
extern "C" u8 stderr_buff[256];

/* 8044D678-8044D778 0100+00 s=1 e=0 z=0  None .bss       stdout_buff                                                  */
extern "C" u8 stdout_buff[256];

/* 8044D778-8044D878 0100+00 s=1 e=0 z=0  None .bss       stdin_buff                                                   */
extern "C" u8 stdin_buff[256];

/* 803D29B0-803D2AF0 0140+00 s=3 e=15 z=0  None .data      __files                                                      */
SECTION_DATA void* __files[80] = {
	(void*)NULL,
	(void*)0x0A800000,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)&stdin_buff,
	(void*)0x00000100,
	(void*)&stdin_buff,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)__read_console,
	(void*)__write_console,
	(void*)__close_console,
	(void*)NULL,
	(void*)(((char*)&__files)+0x50),
	(void*)0x00000001,
	(void*)0x12800000,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)&stdout_buff,
	(void*)0x00000100,
	(void*)&stdout_buff,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)__read_console,
	(void*)__write_console,
	(void*)__close_console,
	(void*)NULL,
	(void*)(((char*)&__files)+0xA0),
	(void*)0x00000002,
	(void*)0x10800000,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)&stderr_buff,
	(void*)0x00000100,
	(void*)&stderr_buff,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)__read_console,
	(void*)__write_console,
	(void*)__close_console,
	(void*)NULL,
	(void*)(((char*)&__files)+0xF0),
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 8044D578-8044D678 0100+00 s=1 e=0 z=0  None .bss       stderr_buff                                                  */
static u8 stderr_buff[256];

/* 8044D678-8044D778 0100+00 s=1 e=0 z=0  None .bss       stdout_buff                                                  */
static u8 stdout_buff[256];

/* 8044D778-8044D878 0100+00 s=1 e=0 z=0  None .bss       stdin_buff                                                   */
static u8 stdin_buff[256];

/* 8036300C-8036307C 0070+00 s=0 e=2 z=0  None .text      __flush_all                                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __flush_all() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/ansi_files/__flush_all.s"
}
#pragma pop


/* 8036307C-80363124 00A8+00 s=0 e=1 z=0  None .text      __close_all                                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __close_all() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/ansi_files/__close_all.s"
}
#pragma pop

