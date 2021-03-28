// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_mirror_sand
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct csXyz {
};

struct cXyz {
};

struct mDoMtx_stack_c {
	/* 8000CD64 */ void transS(cXyz const&);
	/* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct J3DAnmTransform {
};

struct J3DModelData {
};

struct mDoExt_bckAnm {
	/* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
	/* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
	/* 8000D428 */ void play();
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
	/* 80018C8C */ ~fopAc_ac_c();
};

struct daObjMirrorSand_c {
	/* 80C98508 */ void initBaseMtx();
	/* 80C98534 */ void setBaseMtx();
};

struct dSv_info_c {
	/* 80035360 */ void isSwitch(int, int) const;
};

struct dSv_event_c {
	/* 800349BC */ void isEventBit(u16) const;
};

struct dKy_tevstr_c {
};

struct dScnKy_env_light_c {
	/* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
	/* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {
};

struct dRes_control_c {
	/* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dBgW_Base {
};

struct dBgW {
	/* 8007B970 */ dBgW();
	/* 8007B9C0 */ void Move();
	/* 80C987B8 */ ~dBgW();
};

struct dBgS {
	/* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
	/* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {
};

struct cBgW {
	/* 8007933C */ ~cBgW();
	/* 80079F38 */ void Set(cBgD_t*, u32, f32 (* )[3][4]);
};

struct cBgS {
	/* 80074250 */ void Release(dBgW_Base*);
};

struct J3DModel {
};

struct J3DFrameCtrl {
	/* 803283FC */ void init(s16);
	/* 80C984C0 */ ~J3DFrameCtrl();
};

// 
// Forward References:
// 

static void createSolidHeap(fopAc_ac_c*);
static void daObjMirrorSand_Draw(daObjMirrorSand_c*);
static void daObjMirrorSand_Execute(daObjMirrorSand_c*);
static bool daObjMirrorSand_IsDelete(daObjMirrorSand_c*);
static void daObjMirrorSand_Delete(daObjMirrorSand_c*);
static void daObjMirrorSand_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_MirrorSand[12];

extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void initBaseMtx__17daObjMirrorSand_cFv();
extern "C" void setBaseMtx__17daObjMirrorSand_cFv();
extern "C" static void daObjMirrorSand_Draw__FP17daObjMirrorSand_c();
extern "C" static void daObjMirrorSand_Execute__FP17daObjMirrorSand_c();
extern "C" static bool daObjMirrorSand_IsDelete__FP17daObjMirrorSand_c();
extern "C" static void daObjMirrorSand_Delete__FP17daObjMirrorSand_c();
extern "C" void __dt__4dBgWFv();
extern "C" static void daObjMirrorSand_Create__FP10fopAc_ac_c();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_MirrorSand[12];

// 
// External References:
// 

void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__4dBgW[65];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void __dt__4cBgWFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__4dBgW[65];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80C989D8-80C989DC 0004+00 s=1 e=0 z=0  None .rodata    @3729                                                        */
SECTION_RODATA static u32 const lit_3729 = 0x3F800000;

/* 80C989DC-80C989E0 0004+00 s=3 e=0 z=0  None .rodata    @3730                                                        */
SECTION_RODATA static u8 const lit_3730[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80C989E0-80C989E8 0008+00 s=1 e=0 z=0  None .rodata    @3732                                                        */
SECTION_RODATA static u8 const lit_3732[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80C989E8-80C989F0 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C989E8 = "MR-Sand";
#pragma pop

/* 80C989F0-80C989F4 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80C989F4-80C98A14 0020+00 s=1 e=0 z=0  None .data      l_daObjMirrorSand_Method                                     */
SECTION_DATA static void* l_daObjMirrorSand_Method[8] = {
	(void*)daObjMirrorSand_Create__FP10fopAc_ac_c,
	(void*)daObjMirrorSand_Delete__FP17daObjMirrorSand_c,
	(void*)daObjMirrorSand_Execute__FP17daObjMirrorSand_c,
	(void*)daObjMirrorSand_IsDelete__FP17daObjMirrorSand_c,
	(void*)daObjMirrorSand_Draw__FP17daObjMirrorSand_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C98A14-80C98A44 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_MirrorSand                                     */
SECTION_DATA void* g_profile_Obj_MirrorSand[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00AF0000,
	(void*)&g_fpcLf_Method,
	(void*)0x0000072C,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02A70000,
	(void*)&l_daObjMirrorSand_Method,
	(void*)0x00040000,
	(void*)0x000E0000,
};

/* 80C98A44-80C98A50 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl                                         */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12J3DFrameCtrlFv,
};

/* 80C981D8-80C984C0 02E8+00 s=1 e=0 z=0  None .text      createSolidHeap__FP10fopAc_ac_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void createSolidHeap(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/createSolidHeap__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C984C0-80C98508 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop


/* 80C98508-80C98534 002C+00 s=1 e=0 z=0  None .text      initBaseMtx__17daObjMirrorSand_cFv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMirrorSand_c::initBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/initBaseMtx__17daObjMirrorSand_cFv.s"
}
#pragma pop


/* 80C98534-80C98598 0064+00 s=1 e=0 z=0  None .text      setBaseMtx__17daObjMirrorSand_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMirrorSand_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/setBaseMtx__17daObjMirrorSand_cFv.s"
}
#pragma pop


/* 80C98598-80C98668 00D0+00 s=1 e=0 z=0  None .text      daObjMirrorSand_Draw__FP17daObjMirrorSand_c                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMirrorSand_Draw(daObjMirrorSand_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/daObjMirrorSand_Draw__FP17daObjMirrorSand_c.s"
}
#pragma pop


/* 80C98668-80C98700 0098+00 s=1 e=0 z=0  None .text      daObjMirrorSand_Execute__FP17daObjMirrorSand_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMirrorSand_Execute(daObjMirrorSand_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/daObjMirrorSand_Execute__FP17daObjMirrorSand_c.s"
}
#pragma pop


/* 80C98700-80C98708 0008+00 s=1 e=0 z=0  None .text      daObjMirrorSand_IsDelete__FP17daObjMirrorSand_c              */
static bool daObjMirrorSand_IsDelete(daObjMirrorSand_c* param_0) {
	return true;
}


/* 80C98708-80C987B8 00B0+00 s=1 e=0 z=0  None .text      daObjMirrorSand_Delete__FP17daObjMirrorSand_c                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMirrorSand_Delete(daObjMirrorSand_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/daObjMirrorSand_Delete__FP17daObjMirrorSand_c.s"
}
#pragma pop


/* 80C987B8-80C98818 0060+00 s=2 e=0 z=0  None .text      __dt__4dBgWFv                                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgW::~dBgW() {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/__dt__4dBgWFv.s"
}
#pragma pop


/* 80C98818-80C989D0 01B8+00 s=1 e=0 z=0  None .text      daObjMirrorSand_Create__FP10fopAc_ac_c                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMirrorSand_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_sand/d_a_obj_mirror_sand/daObjMirrorSand_Create__FP10fopAc_ac_c.s"
}
#pragma pop

