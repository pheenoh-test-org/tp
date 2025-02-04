//
// Generated By: dol2asm
// Translation Unit: d_a_obj_suisya
//

#include "rel/d/a/obj/d_a_obj_suisya/d_a_obj_suisya.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);

    static u8 now[48];
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObj_Suisya_c {
    /* 80CF0078 */ void draw();
    /* 80CF0168 */ void execute();
    /* 80CF0234 */ void _delete();
    /* 80CF0284 */ void CreateHeap();
    /* 80CF0310 */ void create();
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dDlst_shadowControl_c {
    static u8 mSimpleTexObj[32];
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80CF0478 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
};

struct cBgS_PolyInfo {};

struct _GXTexObj {};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void draw__14daObj_Suisya_cFv();
extern "C" static void daObj_Suisya_Draw__FP14daObj_Suisya_c();
extern "C" void execute__14daObj_Suisya_cFv();
extern "C" static void daObj_Suisya_Execute__FP14daObj_Suisya_c();
extern "C" static bool daObj_Suisya_IsDelete__FP14daObj_Suisya_c();
extern "C" void _delete__14daObj_Suisya_cFv();
extern "C" static void daObj_Suisya_Delete__FP14daObj_Suisya_c();
extern "C" void CreateHeap__14daObj_Suisya_cFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void create__14daObj_Suisya_cFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static void daObj_Suisya_Create__FP14daObj_Suisya_c();
extern "C" static void func_80CF0508();
extern "C" static void func_80CF0510();
extern "C" extern char const* const d_a_obj_suisya__stringBase0;

//
// External References:
//

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80CF0520-80CF0524 000000 0004+00 2/2 0/0 0/0 .rodata          @3662 */
SECTION_RODATA static f32 const lit_3662 = 100.0f;
COMPILER_STRIP_GATE(0x80CF0520, &lit_3662);

/* 80CF0524-80CF0528 000004 0004+00 0/1 0/0 0/0 .rodata          @3663 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3663 = 400.0f;
COMPILER_STRIP_GATE(0x80CF0524, &lit_3663);
#pragma pop

/* 80CF0528-80CF052C 000008 0004+00 0/2 0/0 0/0 .rodata          @3664 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3664[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80CF0528, &lit_3664);
#pragma pop

/* 80CF052C-80CF0530 00000C 0004+00 1/2 0/0 0/0 .rodata          @3665 */
SECTION_RODATA static f32 const lit_3665 = 1.0f;
COMPILER_STRIP_GATE(0x80CF052C, &lit_3665);

/* 80CF0078-80CF0148 000078 00D0+00 1/1 0/0 0/0 .text            draw__14daObj_Suisya_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Suisya_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/d_a_obj_suisya/draw__14daObj_Suisya_cFv.s"
}
#pragma pop

/* 80CF0148-80CF0168 000148 0020+00 1/0 0/0 0/0 .text daObj_Suisya_Draw__FP14daObj_Suisya_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Suisya_Draw(daObj_Suisya_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/d_a_obj_suisya/daObj_Suisya_Draw__FP14daObj_Suisya_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CF0530-80CF0534 000010 0004+00 1/1 0/0 0/0 .rodata          @3682 */
SECTION_RODATA static f32 const lit_3682 = -1.0f;
COMPILER_STRIP_GATE(0x80CF0530, &lit_3682);

/* 80CF0168-80CF020C 000168 00A4+00 1/1 0/0 0/0 .text            execute__14daObj_Suisya_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Suisya_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/d_a_obj_suisya/execute__14daObj_Suisya_cFv.s"
}
#pragma pop

/* 80CF020C-80CF022C 00020C 0020+00 2/1 0/0 0/0 .text daObj_Suisya_Execute__FP14daObj_Suisya_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Suisya_Execute(daObj_Suisya_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/d_a_obj_suisya/daObj_Suisya_Execute__FP14daObj_Suisya_c.s"
}
#pragma pop

/* 80CF022C-80CF0234 00022C 0008+00 1/0 0/0 0/0 .text daObj_Suisya_IsDelete__FP14daObj_Suisya_c */
static bool daObj_Suisya_IsDelete(daObj_Suisya_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80CF0544-80CF0544 000024 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CF0544 = "Obj_sui";
#pragma pop

/* 80CF0234-80CF0264 000234 0030+00 1/1 0/0 0/0 .text            _delete__14daObj_Suisya_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Suisya_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/d_a_obj_suisya/_delete__14daObj_Suisya_cFv.s"
}
#pragma pop

/* 80CF0264-80CF0284 000264 0020+00 1/0 0/0 0/0 .text daObj_Suisya_Delete__FP14daObj_Suisya_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Suisya_Delete(daObj_Suisya_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/d_a_obj_suisya/daObj_Suisya_Delete__FP14daObj_Suisya_c.s"
}
#pragma pop

/* 80CF0284-80CF02F0 000284 006C+00 1/1 0/0 0/0 .text            CreateHeap__14daObj_Suisya_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Suisya_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/d_a_obj_suisya/CreateHeap__14daObj_Suisya_cFv.s"
}
#pragma pop

/* 80CF02F0-80CF0310 0002F0 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/d_a_obj_suisya/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CF0534-80CF0538 000014 0004+00 0/1 0/0 0/0 .rodata          @3749 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3749 = -200.0f;
COMPILER_STRIP_GATE(0x80CF0534, &lit_3749);
#pragma pop

/* 80CF0538-80CF053C 000018 0004+00 0/1 0/0 0/0 .rodata          @3750 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3750 = -500.0f;
COMPILER_STRIP_GATE(0x80CF0538, &lit_3750);
#pragma pop

/* 80CF053C-80CF0540 00001C 0004+00 0/1 0/0 0/0 .rodata          @3751 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3751 = 200.0f;
COMPILER_STRIP_GATE(0x80CF053C, &lit_3751);
#pragma pop

/* 80CF0540-80CF0544 000020 0004+00 0/1 0/0 0/0 .rodata          @3752 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3752 = 500.0f;
COMPILER_STRIP_GATE(0x80CF0540, &lit_3752);
#pragma pop

/* 80CF054C-80CF056C -00001 0020+00 1/0 0/0 0/0 .data            l_daObj_Suisya_Method */
SECTION_DATA static void* l_daObj_Suisya_Method[8] = {
    (void*)daObj_Suisya_Create__FP14daObj_Suisya_c,
    (void*)daObj_Suisya_Delete__FP14daObj_Suisya_c,
    (void*)daObj_Suisya_Execute__FP14daObj_Suisya_c,
    (void*)daObj_Suisya_IsDelete__FP14daObj_Suisya_c,
    (void*)daObj_Suisya_Draw__FP14daObj_Suisya_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CF056C-80CF059C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_SUISYA */
SECTION_DATA extern void* g_profile_OBJ_SUISYA[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x011D0000, (void*)&g_fpcLf_Method,
    (void*)0x00000790, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00410000, (void*)&l_daObj_Suisya_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80CF059C-80CF05C0 000050 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CF0510,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CF0508,
};

/* 80CF0310-80CF0478 000310 0168+00 1/1 0/0 0/0 .text            create__14daObj_Suisya_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Suisya_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/d_a_obj_suisya/create__14daObj_Suisya_cFv.s"
}
#pragma pop

/* 80CF0478-80CF04E8 000478 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/d_a_obj_suisya/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80CF04E8-80CF0508 0004E8 0020+00 1/0 0/0 0/0 .text daObj_Suisya_Create__FP14daObj_Suisya_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Suisya_Create(daObj_Suisya_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/d_a_obj_suisya/daObj_Suisya_Create__FP14daObj_Suisya_c.s"
}
#pragma pop

/* 80CF0508-80CF0510 000508 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80CF0508() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/d_a_obj_suisya/func_80CF0508.s"
}
#pragma pop

/* 80CF0510-80CF0518 000510 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80CF0510() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/d_a_obj_suisya/func_80CF0510.s"
}
#pragma pop

/* 80CF0544-80CF0544 000024 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
