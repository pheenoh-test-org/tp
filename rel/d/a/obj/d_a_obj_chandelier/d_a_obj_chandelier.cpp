// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_chandelier
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct csXyz {
};

struct Vec {
};

struct cXyz {
	/* 80266AE4 */ void operator+(Vec const&) const;
	/* 80266B34 */ void operator-(Vec const&) const;
};

struct mDoMtx_stack_c {
	/* 8000CD64 */ void transS(cXyz const&);
	/* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {
	/* 80018C8C */ ~fopAc_ac_c();
};

struct daObjChandelier_c {
	/* 80BC7F38 */ daObjChandelier_c();
	/* 80BC7F74 */ ~daObjChandelier_c();
	/* 80BC8008 */ void CreateHeap();
	/* 80BC8078 */ void create1st();
	/* 80BC8160 */ void Delete();
	/* 80BC8194 */ void Draw();
	/* 80BC8238 */ void Execute(f32 (** )[3][4]);
	/* 80BC82C0 */ void exeModeWait();
	/* 80BC834C */ void exeModeStartSwg();
	/* 80BC83E4 */ void exeModeDown();
	/* 80BC84C0 */ void exeModeEndSwg();
	/* 80BC851C */ void exeModeHookSwg();
	/* 80BC85E4 */ void init();
	/* 80BC86FC */ void setModelMtx();
	/* 80BC8780 */ void moveSwing(f32, f32, f32, f32);
	/* 80BC89B0 */ void moveSwingFall();
	/* 80BC8B20 */ void hookSwingInitParm();
};

struct dSv_info_c {
	/* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {
};

struct J3DModelData {
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

struct dBgW {
};

struct cBgS_PolyInfo {
};

struct dBgS_MoveBgActor {
	/* 80078624 */ dBgS_MoveBgActor();
	/* 80078690 */ bool Create();
	/* 800786B0 */ bool IsDelete();
	/* 800786B8 */ bool ToFore();
	/* 800786C0 */ bool ToBack();
	/* 800787BC */ void MoveBGCreate(char const*, int, void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*), u32, f32 (* )[3][4]);
	/* 800788DC */ void MoveBGDelete();
	/* 80078950 */ void MoveBGExecute();
};

struct JAISoundID {
};

struct Z2SeMgr {
	/* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
	/* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {
};

// 
// Forward References:
// 

static void daObjChandelier_create1st(daObjChandelier_c*);
static void daObjChandelier_MoveBGDelete(daObjChandelier_c*);
static void daObjChandelier_MoveBGExecute(daObjChandelier_c*);
static void daObjChandelier_MoveBGDraw(daObjChandelier_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Chandelier[12];

extern "C" void __ct__17daObjChandelier_cFv();
extern "C" void __dt__17daObjChandelier_cFv();
extern "C" void CreateHeap__17daObjChandelier_cFv();
extern "C" void create1st__17daObjChandelier_cFv();
extern "C" void Delete__17daObjChandelier_cFv();
extern "C" void Draw__17daObjChandelier_cFv();
extern "C" void Execute__17daObjChandelier_cFPPA3_A4_f();
extern "C" void exeModeWait__17daObjChandelier_cFv();
extern "C" void exeModeStartSwg__17daObjChandelier_cFv();
extern "C" void exeModeDown__17daObjChandelier_cFv();
extern "C" void exeModeEndSwg__17daObjChandelier_cFv();
extern "C" void exeModeHookSwg__17daObjChandelier_cFv();
extern "C" void init__17daObjChandelier_cFv();
extern "C" void setModelMtx__17daObjChandelier_cFv();
extern "C" void moveSwing__17daObjChandelier_cFffff();
extern "C" void moveSwingFall__17daObjChandelier_cFv();
extern "C" void hookSwingInitParm__17daObjChandelier_cFv();
extern "C" static void daObjChandelier_create1st__FP17daObjChandelier_c();
extern "C" static void daObjChandelier_MoveBGDelete__FP17daObjChandelier_c();
extern "C" static void daObjChandelier_MoveBGExecute__FP17daObjChandelier_c();
extern "C" static void daObjChandelier_MoveBGDraw__FP17daObjChandelier_c();
extern "C" void __sinit_d_a_obj_chandelier_cpp();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Chandelier[12];

// 
// External References:
// 

void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoMtx_ZrotM(f32 (* )[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cM_rndF(f32);
void cM_rndFX(f32);
void cLib_chaseF(f32*, f32, f32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void __ptmf_test();
extern "C" void __ptmf_scall();
extern "C" void __cvt_fp2unsigned();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80BC8CDC-80BC8CE0 0004+00 s=7 e=0 z=0  None .rodata    @3731                                                        */
SECTION_RODATA static u32 const lit_3731 = 0x3F000000;

/* 80BC8CE0-80BC8CE4 0004+00 s=4 e=0 z=0  None .rodata    @3732                                                        */
SECTION_RODATA static u8 const lit_3732[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80BC8CE4-80BC8CE8 0004+00 s=2 e=0 z=0  None .rodata    @3733                                                        */
SECTION_RODATA static u32 const lit_3733 = 0x41A00000;

/* 80BC8CE8-80BC8CEC 0004+00 s=1 e=0 z=0  None .rodata    @3742                                                        */
SECTION_RODATA static u32 const lit_3742 = 0x43960000;

/* 80BC8CEC-80BC8CF0 0004+00 s=2 e=0 z=0  None .rodata    @3743                                                        */
SECTION_RODATA static u32 const lit_3743 = 0x42480000;

/* 80BC8CF0-80BC8CF4 0004+00 s=1 e=0 z=0  None .rodata    @3744                                                        */
SECTION_RODATA static u32 const lit_3744 = 0x3E99999A;

/* 80BC8CF4-80BC8CF8 0004+00 s=2 e=0 z=0  None .rodata    @3760                                                        */
SECTION_RODATA static u32 const lit_3760 = 0x3F800000;

/* 80BC8CF8-80BC8CFC 0004+00 s=3 e=0 z=0  None .rodata    @3761                                                        */
SECTION_RODATA static u32 const lit_3761 = 0xBF800000;

/* 80BC8CFC-80BC8D00 0004+00 s=1 e=0 z=0  None .rodata    @3785                                                        */
SECTION_RODATA static u32 const lit_3785 = 0x41200000;

/* 80BC8D00-80BC8D04 0004+00 s=1 e=0 z=0  None .rodata    @3786                                                        */
SECTION_RODATA static u32 const lit_3786 = 0x437A0000;

/* 80BC8D04-80BC8D08 0004+00 s=1 e=0 z=0  None .rodata    @3787                                                        */
SECTION_RODATA static u32 const lit_3787 = 0x459C4000;

/* 80BC8D08-80BC8D0C 0004+00 s=1 e=0 z=0  None .rodata    @3788                                                        */
SECTION_RODATA static u32 const lit_3788 = 0x41700000;

/* 80BC8D0C-80BC8D10 0004+00 s=1 e=0 z=0  None .rodata    @3789                                                        */
SECTION_RODATA static u32 const lit_3789 = 0x3E4CCCCD;

/* 80BC8D10-80BC8D14 0004+00 s=1 e=0 z=0  None .rodata    @3815                                                        */
SECTION_RODATA static u32 const lit_3815 = 0xC0400000;

/* 80BC8D14-80BC8D18 0004+00 s=1 e=0 z=0  None .rodata    @3816                                                        */
SECTION_RODATA static u32 const lit_3816 = 0x44480000;

/* 80BC8D18-80BC8D1C 0004+00 s=1 e=0 z=0  None .rodata    @3857                                                        */
SECTION_RODATA static u32 const lit_3857 = 0x3DCCCCCD;

/* 80BC8D1C-80BC8D20 0004+00 s=1 e=0 z=0  None .rodata    @3858                                                        */
SECTION_RODATA static u32 const lit_3858 = 0x40400000;

/* 80BC8D20-80BC8D24 0004+00 s=1 e=0 z=0  None .rodata    @3859                                                        */
SECTION_RODATA static u32 const lit_3859 = 0x42FE0000;

/* 80BC8D24-80BC8D2C 0008+00 s=2 e=0 z=0  None .rodata    @3861                                                        */
SECTION_RODATA static u8 const lit_3861[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80BC8D2C-80BC8D30 0004+00 s=1 e=0 z=0  None .rodata    @3895                                                        */
SECTION_RODATA static u32 const lit_3895 = 0x3D23D70A;

/* 80BC8D30-80BC8D34 0004+00 s=1 e=0 z=0  None .rodata    @3905                                                        */
SECTION_RODATA static u32 const lit_3905 = 0x3F99999A;

/* 80BC8D34-80BC8D38 0004+00 s=1 e=0 z=0  None .rodata    @3906                                                        */
SECTION_RODATA static u32 const lit_3906 = 0x3F333333;

/* 80BC8D38-80BC8D3C 0004+00 s=1 e=0 z=0  None .rodata    @3907                                                        */
SECTION_RODATA static u32 const lit_3907 = 0x40A00000;

/* 80BC8D3C-80BC8D44 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80BC8D3C = "L9Chand";
#pragma pop

/* 80BC8D44-80BC8D50 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc                                            */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BC8D50-80BC8D64 0004+10 s=0 e=0 z=0  None .data      @1787                                                        */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
	0x02000201,
	/* padding */
	0x40080000, 0x00000000, 0x3FE00000, 0x00000000,
};

/* 80BC8D64-80BC8D68 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80BC8D68-80BC8D74 000C+00 s=1 e=0 z=0  None .data      @3715                                                        */
SECTION_DATA static void* lit_3715[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)exeModeWait__17daObjChandelier_cFv,
};

/* 80BC8D74-80BC8D80 000C+00 s=1 e=0 z=0  None .data      @3716                                                        */
SECTION_DATA static void* lit_3716[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)exeModeStartSwg__17daObjChandelier_cFv,
};

/* 80BC8D80-80BC8D8C 000C+00 s=1 e=0 z=0  None .data      @3717                                                        */
SECTION_DATA static void* lit_3717[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)exeModeDown__17daObjChandelier_cFv,
};

/* 80BC8D8C-80BC8D98 000C+00 s=1 e=0 z=0  None .data      @3718                                                        */
SECTION_DATA static void* lit_3718[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)exeModeEndSwg__17daObjChandelier_cFv,
};

/* 80BC8D98-80BC8DA4 000C+00 s=1 e=0 z=0  None .data      @3719                                                        */
SECTION_DATA static void* lit_3719[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)exeModeHookSwg__17daObjChandelier_cFv,
};

/* 80BC8DA4-80BC8DE0 003C+00 s=2 e=0 z=0  None .data      s_exeProc__17daObjChandelier_c                               */
SECTION_DATA static u8 s_exeProc__17daObjChandelier_c[60] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BC8DE0-80BC8DEC 000C+00 s=1 e=0 z=0  None .data      TOP_POS_Y_OFFSET$3869                                        */
SECTION_DATA static u8 TOP_POS_Y_OFFSET[12] = {
	0x00, 0x00, 0x00, 0x00, 0x45, 0x3B, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BC8DEC-80BC8E0C 0020+00 s=1 e=0 z=0  None .data      daObjChandelier_METHODS                                      */
SECTION_DATA static void* daObjChandelier_METHODS[8] = {
	(void*)daObjChandelier_create1st__FP17daObjChandelier_c,
	(void*)daObjChandelier_MoveBGDelete__FP17daObjChandelier_c,
	(void*)daObjChandelier_MoveBGExecute__FP17daObjChandelier_c,
	(void*)NULL,
	(void*)daObjChandelier_MoveBGDraw__FP17daObjChandelier_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80BC8E0C-80BC8E3C 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Chandelier                                     */
SECTION_DATA void* g_profile_Obj_Chandelier[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00E60000,
	(void*)&g_fpcLf_Method,
	(void*)0x0000060C,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02E50000,
	(void*)&daObjChandelier_METHODS,
	(void*)0x00040080,
	(void*)0x000E0000,
};

/* 80BC8E3C-80BC8E6C 0030+00 s=2 e=0 z=0  None .data      __vt__17daObjChandelier_c                                    */
SECTION_DATA static void* __vt__17daObjChandelier_c[12] = {
	(void*)NULL,
	(void*)NULL,
	(void*)CreateHeap__17daObjChandelier_cFv,
	(void*)Create__16dBgS_MoveBgActorFv,
	(void*)Execute__17daObjChandelier_cFPPA3_A4_f,
	(void*)Draw__17daObjChandelier_cFv,
	(void*)Delete__17daObjChandelier_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
	(void*)create1st__17daObjChandelier_cFv,
	(void*)__dt__17daObjChandelier_cFv,
};

/* 80BC7F38-80BC7F74 003C+00 s=2 e=0 z=0  None .text      __ct__17daObjChandelier_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjChandelier_c::daObjChandelier_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/__ct__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC7F74-80BC8008 0094+00 s=1 e=0 z=0  None .text      __dt__17daObjChandelier_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjChandelier_c::~daObjChandelier_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/__dt__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC8008-80BC8078 0070+00 s=1 e=0 z=0  None .text      CreateHeap__17daObjChandelier_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/CreateHeap__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC8078-80BC8160 00E8+00 s=1 e=0 z=0  None .text      create1st__17daObjChandelier_cFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::create1st() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/create1st__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC8160-80BC8194 0034+00 s=1 e=0 z=0  None .text      Delete__17daObjChandelier_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/Delete__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC8194-80BC8238 00A4+00 s=1 e=0 z=0  None .text      Draw__17daObjChandelier_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/Draw__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC8238-80BC82C0 0088+00 s=1 e=0 z=0  None .text      Execute__17daObjChandelier_cFPPA3_A4_f                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/Execute__17daObjChandelier_cFPPA3_A4_f.s"
}
#pragma pop


/* 80BC82C0-80BC834C 008C+00 s=1 e=0 z=0  None .text      exeModeWait__17daObjChandelier_cFv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::exeModeWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/exeModeWait__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC834C-80BC83E4 0098+00 s=1 e=0 z=0  None .text      exeModeStartSwg__17daObjChandelier_cFv                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::exeModeStartSwg() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/exeModeStartSwg__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC83E4-80BC84C0 00DC+00 s=1 e=0 z=0  None .text      exeModeDown__17daObjChandelier_cFv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::exeModeDown() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/exeModeDown__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC84C0-80BC851C 005C+00 s=1 e=0 z=0  None .text      exeModeEndSwg__17daObjChandelier_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::exeModeEndSwg() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/exeModeEndSwg__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC851C-80BC85E4 00C8+00 s=2 e=0 z=0  None .text      exeModeHookSwg__17daObjChandelier_cFv                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::exeModeHookSwg() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/exeModeHookSwg__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC85E4-80BC86FC 0118+00 s=1 e=0 z=0  None .text      init__17daObjChandelier_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::init() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/init__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC86FC-80BC8780 0084+00 s=2 e=0 z=0  None .text      setModelMtx__17daObjChandelier_cFv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::setModelMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/setModelMtx__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC8780-80BC89B0 0230+00 s=2 e=0 z=0  None .text      moveSwing__17daObjChandelier_cFffff                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::moveSwing(f32 param_0, f32 param_1, f32 param_2, f32 param_3) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/moveSwing__17daObjChandelier_cFffff.s"
}
#pragma pop


/* 80BC89B0-80BC8B20 0170+00 s=1 e=0 z=0  None .text      moveSwingFall__17daObjChandelier_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::moveSwingFall() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/moveSwingFall__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC8B20-80BC8B7C 005C+00 s=3 e=0 z=0  None .text      hookSwingInitParm__17daObjChandelier_cFv                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjChandelier_c::hookSwingInitParm() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/hookSwingInitParm__17daObjChandelier_cFv.s"
}
#pragma pop


/* 80BC8B7C-80BC8BDC 0060+00 s=1 e=0 z=0  None .text      daObjChandelier_create1st__FP17daObjChandelier_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjChandelier_create1st(daObjChandelier_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/daObjChandelier_create1st__FP17daObjChandelier_c.s"
}
#pragma pop


/* 80BC8BDC-80BC8BFC 0020+00 s=1 e=0 z=0  None .text      daObjChandelier_MoveBGDelete__FP17daObjChandelier_c          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjChandelier_MoveBGDelete(daObjChandelier_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/daObjChandelier_MoveBGDelete__FP17daObjChandelier_c.s"
}
#pragma pop


/* 80BC8BFC-80BC8C1C 0020+00 s=1 e=0 z=0  None .text      daObjChandelier_MoveBGExecute__FP17daObjChandelier_c         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjChandelier_MoveBGExecute(daObjChandelier_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/daObjChandelier_MoveBGExecute__FP17daObjChandelier_c.s"
}
#pragma pop


/* 80BC8C1C-80BC8C48 002C+00 s=1 e=0 z=0  None .text      daObjChandelier_MoveBGDraw__FP17daObjChandelier_c            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjChandelier_MoveBGDraw(daObjChandelier_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/daObjChandelier_MoveBGDraw__FP17daObjChandelier_c.s"
}
#pragma pop


/* 80BC8C48-80BC8CD0 0088+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_chandelier_cpp                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_chandelier_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_chandelier/d_a_obj_chandelier/__sinit_d_a_obj_chandelier_cpp.s"
}
#pragma pop

