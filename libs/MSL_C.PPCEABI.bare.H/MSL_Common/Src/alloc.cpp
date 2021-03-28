// 
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/alloc
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "MSL_C.PPCEABI.bare.H/MSL_Common/Src/alloc.h"

// 
// Forward References:
// 


extern "C" void free();
extern "C" static void __pool_free();
extern "C" static void deallocate_from_fixed_pools();
extern "C" static void deallocate_from_var_pools();

// 
// External References:
// 

extern "C" extern u8 data_804519A0[8];

SECTION_INIT void memset();
extern "C" void __sys_free();
extern "C" void __end_critical_region();
extern "C" void __begin_critical_region();
extern "C" extern u8 data_804519A0[8];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 8044D540-8044D578 0038+00 s=1 e=0 z=0  None .bss       protopool$192                                                */
static u8 protopool[56];

/* 80362B58-80362BC8 0070+00 s=0 e=2 z=0  None .text      free                                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void free() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/alloc/free.s"
}
#pragma pop


/* 80362BC8-80362C20 0058+00 s=1 e=0 z=0  None .text      __pool_free                                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __pool_free() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/alloc/__pool_free.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A2220-803A2238 0018+00 s=1 e=0 z=0  None .rodata    fix_pool_sizes                                               */
SECTION_RODATA static u8 const fix_pool_sizes[24] = {
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x24,
	0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x44,
};

/* 80362C20-80362D78 0158+00 s=1 e=0 z=0  None .text      deallocate_from_fixed_pools                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void deallocate_from_fixed_pools() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/alloc/deallocate_from_fixed_pools.s"
}
#pragma pop


/* 80362D78-8036300C 0294+00 s=2 e=0 z=0  None .text      deallocate_from_var_pools                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void deallocate_from_var_pools() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/alloc/deallocate_from_var_pools.s"
}
#pragma pop

