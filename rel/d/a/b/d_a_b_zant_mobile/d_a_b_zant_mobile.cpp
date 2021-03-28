// 
// Generated By: dol2asm
// Translation Unit: d_a_b_zant_mobile
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile.h"

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
	/* 8000CD9C */ void transM(f32, f32, f32);
	/* 8000CE38 */ void scaleM(f32, f32, f32);
	/* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct J3DMaterialTable {
};

struct J3DAnmTevRegKey {
};

struct mDoExt_brkAnm {
	/* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
	/* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
	/* 8000D428 */ void play();
};

struct mDoExt_McaMorfCallBack2_c {
};

struct J3DAnmTransform {
};

struct J3DModelData {
};

struct mDoExt_McaMorfCallBack1_c {
};

struct Z2Creature {
};

struct mDoExt_McaMorfSO {
	/* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*, mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int, int, Z2Creature*, u32, u32);
	/* 80010E70 */ void setAnm(J3DAnmTransform*, int, f32, f32, f32, f32);
	/* 800110B0 */ void play(u32, s8);
	/* 800111C0 */ void entryDL();
	/* 800111EC */ void modelCalc();
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
};

struct daB_ZANTZ_c {
	/* 806507B0 */ void draw();
	/* 80650854 */ void setSnortEffect(int);
	/* 806508E0 */ void calcSnortEffect();
	/* 80650B7C */ void setMouthMode(u8);
	/* 80650D0C */ void setAppearMode(u8);
	/* 806510C0 */ void getGroundPos();
	/* 8065127C */ void action();
	/* 80651B1C */ void cc_set();
	/* 80651C20 */ void execute();
	/* 80651D1C */ void _delete();
	/* 80651DC4 */ void CreateHeap();
	/* 80652038 */ void create();
};

struct daB_ZANTZ_HIO_c {
	/* 8065078C */ daB_ZANTZ_HIO_c();
	/* 8065268C */ ~daB_ZANTZ_HIO_c();
};

struct dVibration_c {
	/* 8006FA24 */ void StartShock(int, int, cXyz);
	/* 8006FB10 */ void StartQuake(int, int, cXyz);
	/* 8006FD94 */ void StopQuake(int);
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

struct dPa_levelEcallBack {
};

struct _GXColor {
};

struct dPa_control_c {
	/* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*, cXyz const*, f32);
};

struct dCcD_Stts {
	/* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {
};

struct dCcD_SrcCyl {
};

struct dCcD_Sph {
	/* 80084A34 */ void Set(dCcD_SrcSph const&);
	/* 806524D4 */ ~dCcD_Sph();
	/* 806525A0 */ dCcD_Sph();
};

struct dCcD_GStts {
	/* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
	/* 80083A28 */ dCcD_GObjInf();
	/* 800840E4 */ ~dCcD_GObjInf();
	/* 80084658 */ void ChkCoHit();
	/* 800846F0 */ void GetCoHitObj();
};

struct dCcD_Cyl {
	/* 800848B4 */ void Set(dCcD_SrcCyl const&);
	/* 806522F4 */ ~dCcD_Cyl();
	/* 806523C0 */ dCcD_Cyl();
};

struct dBgW_Base {
};

struct dBgW {
	/* 8007B970 */ dBgW();
	/* 8007B9C0 */ void Move();
};

struct dBgS_PolyPassChk {
	/* 80078E68 */ void SetObj();
};

struct dBgS_ObjGndChk {
	/* 80651204 */ ~dBgS_ObjGndChk();
};

struct dBgS_GndChk {
	/* 8007757C */ dBgS_GndChk();
	/* 800775F0 */ ~dBgS_GndChk();
};

struct dBgS {
	/* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cM3dGSph {
	/* 8026F648 */ void SetC(cXyz const&);
	/* 8026F708 */ void SetR(f32);
	/* 80652624 */ ~cM3dGSph();
};

struct cM3dGCyl {
	/* 8026F1DC */ void SetC(cXyz const&);
	/* 8026F1F8 */ void SetH(f32);
	/* 8026F200 */ void SetR(f32);
	/* 80652444 */ ~cM3dGCyl();
};

struct cM3dGAab {
	/* 8065248C */ ~cM3dGAab();
};

struct cCcD_Obj {
	/* 80263A48 */ void GetAc();
};

struct cCcS {
	/* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgD_t {
};

struct cBgW {
	/* 80079F38 */ void Set(cBgD_t*, u32, f32 (* )[3][4]);
};

struct cBgS_PolyInfo {
};

struct cBgS_GndChk {
	/* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
	/* 80074250 */ void Release(dBgW_Base*);
	/* 800744A0 */ void GroundCross(cBgS_GndChk*);
	/* 80074618 */ void GetActorPointer(int) const;
};

struct JAISoundID {
};

struct Vec {
};

struct Z2SeMgr {
	/* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
	/* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2CreatureEnemy {
	/* 802C0F64 */ Z2CreatureEnemy();
};

struct J3DFrameCtrl {
	/* 803283FC */ void init(s16);
	/* 8032842C */ void checkPass(f32);
	/* 80651FD0 */ ~J3DFrameCtrl();
};

// 
// Forward References:
// 

static void daB_ZANTZ_Draw(daB_ZANTZ_c*);
static void daB_ZANTZ_Execute(daB_ZANTZ_c*);
static bool daB_ZANTZ_IsDelete(daB_ZANTZ_c*);
static void daB_ZANTZ_Delete(daB_ZANTZ_c*);
static void useHeapInit(fopAc_ac_c*);
static void daB_ZANTZ_Create(daB_ZANTZ_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_B_ZANTZ[12];

extern "C" void __ct__15daB_ZANTZ_HIO_cFv();
extern "C" void draw__11daB_ZANTZ_cFv();
extern "C" static void daB_ZANTZ_Draw__FP11daB_ZANTZ_c();
extern "C" void setSnortEffect__11daB_ZANTZ_cFi();
extern "C" void calcSnortEffect__11daB_ZANTZ_cFv();
extern "C" void setMouthMode__11daB_ZANTZ_cFUc();
extern "C" void setAppearMode__11daB_ZANTZ_cFUc();
extern "C" void getGroundPos__11daB_ZANTZ_cFv();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" void action__11daB_ZANTZ_cFv();
extern "C" void cc_set__11daB_ZANTZ_cFv();
extern "C" void execute__11daB_ZANTZ_cFv();
extern "C" static void daB_ZANTZ_Execute__FP11daB_ZANTZ_c();
extern "C" static bool daB_ZANTZ_IsDelete__FP11daB_ZANTZ_c();
extern "C" void _delete__11daB_ZANTZ_cFv();
extern "C" static void daB_ZANTZ_Delete__FP11daB_ZANTZ_c();
extern "C" void CreateHeap__11daB_ZANTZ_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void create__11daB_ZANTZ_cFv();
extern "C" void __dt__8dCcD_CylFv();
extern "C" void __ct__8dCcD_CylFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" static void daB_ZANTZ_Create__FP11daB_ZANTZ_c();
extern "C" void __dt__15daB_ZANTZ_HIO_cFv();
extern "C" void __sinit_d_a_b_zant_mobile_cpp();
extern "C" static void func_80652710();
extern "C" static void func_80652718();
extern "C" static void func_80652720();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_B_ZANTZ[12];

// 
// External References:
// 

void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void fopAcM_posMoveF(fopAc_ac_c*, cXyz const*);
void fopAcM_searchActorAngleY(fopAc_ac_c const*, fopAc_ac_c const*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_Typical(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cLib_addCalc(f32*, f32, f32, f32, f32);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
void cLib_chaseF(f32*, f32, f32);
void cLib_targetAngleY(Vec const*, Vec const*);
void cLib_offsetPos(cXyz*, cXyz const*, s16, cXyz const*);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void __ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetActorPointer__4cBgSCFi();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void GetCoHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void PSMTXCopy();
extern "C" void __construct_array();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void abs();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 8065273C-80652740 0004+00 s=10 e=0 z=0  None .rodata    @3649                                                        */
SECTION_RODATA static u32 const lit_3649 = 0x3F800000;

/* 806527DC-8065281C 0040+00 s=1 e=0 z=0  None .data      cc_zant_src__31@unnamed@d_a_b_zant_mobile_cpp@               */
SECTION_DATA static u8 data_806527DC[64] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x55, 0x09, 0x00, 0x01, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 8065281C-80652860 0044+00 s=1 e=0 z=0  None .data      cc_zant_snort_src__31@unnamed@d_a_b_zant_mobile_cpp@         */
SECTION_DATA static u8 data_8065281C[68] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x09, 0x00, 0x01, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
	0x42, 0x20, 0x00, 0x00,
};

/* 80652860-80652880 0020+00 s=1 e=0 z=0  None .data      l_daB_ZANTZ_Method                                           */
SECTION_DATA static void* l_daB_ZANTZ_Method[8] = {
	(void*)daB_ZANTZ_Create__FP11daB_ZANTZ_c,
	(void*)daB_ZANTZ_Delete__FP11daB_ZANTZ_c,
	(void*)daB_ZANTZ_Execute__FP11daB_ZANTZ_c,
	(void*)daB_ZANTZ_IsDelete__FP11daB_ZANTZ_c,
	(void*)daB_ZANTZ_Draw__FP11daB_ZANTZ_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80652880-806528B0 0030+00 s=0 e=0 z=1  None .data      g_profile_B_ZANTZ                                            */
SECTION_DATA void* g_profile_B_ZANTZ[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0004FFFD,
	(void*)0x00F80000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000D14,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x00E40000,
	(void*)&l_daB_ZANTZ_Method,
	(void*)0x00040000,
	(void*)0x020E0000,
};

/* 806528B0-806528BC 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGSph                                              */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGSphFv,
};

/* 806528BC-806528C8 000C+00 s=5 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 806528C8-806528D4 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGCyl                                              */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGCylFv,
};

/* 806528D4-806528E0 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl                                         */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12J3DFrameCtrlFv,
};

/* 806528E0-80652910 0030+00 s=2 e=0 z=0  None .data      __vt__14dBgS_ObjGndChk                                       */
SECTION_DATA static void* __vt__14dBgS_ObjGndChk[12] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__14dBgS_ObjGndChkFv,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80652710,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80652720,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80652718,
};

/* 80652910-8065291C 000C+00 s=2 e=0 z=0  None .data      __vt__15daB_ZANTZ_HIO_c                                      */
SECTION_DATA static void* __vt__15daB_ZANTZ_HIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__15daB_ZANTZ_HIO_cFv,
};

/* 8065078C-806507B0 0024+00 s=1 e=0 z=0  None .text      __ct__15daB_ZANTZ_HIO_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_ZANTZ_HIO_c::daB_ZANTZ_HIO_c() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/__ct__15daB_ZANTZ_HIO_cFv.s"
}
#pragma pop


/* 806507B0-80650834 0084+00 s=1 e=0 z=0  None .text      draw__11daB_ZANTZ_cFv                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANTZ_c::draw() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/draw__11daB_ZANTZ_cFv.s"
}
#pragma pop


/* 80650834-80650854 0020+00 s=1 e=0 z=0  None .text      daB_ZANTZ_Draw__FP11daB_ZANTZ_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daB_ZANTZ_Draw(daB_ZANTZ_c* param_0) {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/daB_ZANTZ_Draw__FP11daB_ZANTZ_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80652740-80652744 0004+00 s=4 e=0 z=0  None .rodata    @3688                                                        */
SECTION_RODATA static u32 const lit_3688 = 0xBF800000;

/* 80650854-806508E0 008C+00 s=0 e=0 z=2  None .text      setSnortEffect__11daB_ZANTZ_cFi                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANTZ_c::setSnortEffect(int param_0) {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/setSnortEffect__11daB_ZANTZ_cFi.s"
}
#pragma pop


/* ############################################################################################## */
/* 80652744-80652748 0004+00 s=1 e=0 z=0  None .rodata    @3746                                                        */
SECTION_RODATA static u32 const lit_3746 = 0x40A00000;

/* 80652748-8065274C 0004+00 s=1 e=0 z=0  None .rodata    @3747                                                        */
SECTION_RODATA static u32 const lit_3747 = 0x3FC00000;

/* 8065274C-80652750 0004+00 s=1 e=0 z=0  None .rodata    @3748                                                        */
SECTION_RODATA static u32 const lit_3748 = 0x43160000;

/* 80652750-80652754 0004+00 s=1 e=0 z=0  None .rodata    @3749                                                        */
SECTION_RODATA static u32 const lit_3749 = 0x44480000;

/* 80652754-80652758 0004+00 s=1 e=0 z=0  None .rodata    @3750                                                        */
SECTION_RODATA static u32 const lit_3750 = 0x447A0000;

/* 80652758-8065275C 0004+00 s=1 e=0 z=0  None .rodata    @3751                                                        */
SECTION_RODATA static u32 const lit_3751 = 0x44610000;

/* 8065275C-80652760 0004+00 s=2 e=0 z=0  None .rodata    @3752                                                        */
SECTION_RODATA static u32 const lit_3752 = 0x43960000;

/* 80652760-80652764 0004+00 s=1 e=0 z=0  None .rodata    @3753                                                        */
SECTION_RODATA static u32 const lit_3753 = 0xC3160000;

/* 80652764-80652768 0004+00 s=1 e=0 z=0  None .rodata    @3754                                                        */
SECTION_RODATA static u32 const lit_3754 = 0x41F00000;

/* 80652768-8065276C 0004+00 s=3 e=0 z=0  None .rodata    @3755                                                        */
SECTION_RODATA static u32 const lit_3755 = 0x41200000;

/* 806508E0-80650B7C 029C+00 s=1 e=0 z=0  None .text      calcSnortEffect__11daB_ZANTZ_cFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANTZ_c::calcSnortEffect() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/calcSnortEffect__11daB_ZANTZ_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 8065276C-80652770 0004+00 s=6 e=0 z=0  None .rodata    @3795                                                        */
SECTION_RODATA static u8 const lit_3795[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80652770-80652774 0004+00 s=1 e=0 z=0  None .rodata    @3899                                                        */
SECTION_RODATA static u32 const lit_3899 = 0x44FA0000;

/* 80652774-80652778 0004+00 s=1 e=0 z=0  None .rodata    @3900                                                        */
SECTION_RODATA static u32 const lit_3900 = 0x453B8000;

/* 80652778-8065277C 0004+00 s=1 e=0 z=0  None .rodata    @3909                                                        */
SECTION_RODATA static u32 const lit_3909 = 0x457A0000;

/* 8065277C-80652780 0004+00 s=1 e=0 z=0  None .rodata    @3939                                                        */
SECTION_RODATA static u32 const lit_3939 = 0xCE6E6B28;

/* 80652780-80652784 0004+00 s=1 e=0 z=0  None .rodata    @4120                                                        */
SECTION_RODATA static u32 const lit_4120 = 0x40800000;

/* 80652784-80652788 0004+00 s=1 e=0 z=0  None .rodata    @4121                                                        */
SECTION_RODATA static u32 const lit_4121 = 0x41700000;

/* 80652788-8065278C 0004+00 s=1 e=0 z=0  None .rodata    @4122                                                        */
SECTION_RODATA static u32 const lit_4122 = 0x42200000;

/* 8065278C-80652790 0004+00 s=1 e=0 z=0  None .rodata    @4123                                                        */
SECTION_RODATA static u32 const lit_4123 = 0x40C00000;

/* 80652790-80652794 0004+00 s=1 e=0 z=0  None .rodata    @4124                                                        */
SECTION_RODATA static u32 const lit_4124 = 0x41100000;

/* 80652794-80652798 0004+00 s=1 e=0 z=0  None .rodata    @4125                                                        */
SECTION_RODATA static u32 const lit_4125 = 0x41500000;

/* 80652798-8065279C 0004+00 s=1 e=0 z=0  None .rodata    @4126                                                        */
SECTION_RODATA static u32 const lit_4126 = 0x41800000;

/* 8065279C-806527A0 0004+00 s=1 e=0 z=0  None .rodata    @4127                                                        */
SECTION_RODATA static u32 const lit_4127 = 0x41D00000;

/* 806527A0-806527A4 0004+00 s=1 e=0 z=0  None .rodata    @4128                                                        */
SECTION_RODATA static u32 const lit_4128 = 0x455AC000;

/* 806527A4-806527A8 0004+00 s=1 e=0 z=0  None .rodata    @4129                                                        */
SECTION_RODATA static u32 const lit_4129 = 0x3DCCCCCD;

/* 806527A8-806527AC 0004+00 s=1 e=0 z=0  None .rodata    @4130                                                        */
SECTION_RODATA static u32 const lit_4130 = 0x3E4CCCCD;

/* 806527AC-806527B0 0004+00 s=1 e=0 z=0  None .rodata    @4131                                                        */
SECTION_RODATA static u32 const lit_4131 = 0x3FD9999A;

/* 806527B0-806527B4 0004+00 s=1 e=0 z=0  None .rodata    @4132                                                        */
SECTION_RODATA static u32 const lit_4132 = 0x43FA0000;

/* 806527B4-806527BC 0008+00 s=1 e=0 z=0  None .rodata    @4135                                                        */
SECTION_RODATA static u8 const lit_4135[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 806527BC-806527C0 0004+00 s=1 e=0 z=0  None .rodata    @4171                                                        */
SECTION_RODATA static u32 const lit_4171 = 0x42C80000;

/* 806527C0-806527C4 0004+00 s=1 e=0 z=0  None .rodata    @4172                                                        */
SECTION_RODATA static u32 const lit_4172 = 0x43020000;

/* 806527C4-806527C8 0004+00 s=1 e=0 z=0  None .rodata    @4173                                                        */
SECTION_RODATA static u32 const lit_4173 = 0x43660000;

/* 806527C8-806527CC 0004+00 s=1 e=0 z=0  None .rodata    @4373                                                        */
SECTION_RODATA static u32 const lit_4373 = 0xC3C80000;

/* 806527CC-806527D0 0004+00 s=1 e=0 z=0  None .rodata    @4374                                                        */
SECTION_RODATA static u32 const lit_4374 = 0x43C80000;

/* 806527D0-806527DB 000B+00 s=6 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_806527D0 = "B_zan";
SECTION_DEAD char const* const stringBase_806527D6 = "B_oh";
#pragma pop

/* 80650B7C-80650D0C 0190+00 s=0 e=0 z=3  None .text      setMouthMode__11daB_ZANTZ_cFUc                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANTZ_c::setMouthMode(u8 param_0) {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/setMouthMode__11daB_ZANTZ_cFUc.s"
}
#pragma pop


/* 80650D0C-806510C0 03B4+00 s=0 e=0 z=1  None .text      setAppearMode__11daB_ZANTZ_cFUc                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANTZ_c::setAppearMode(u8 param_0) {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/setAppearMode__11daB_ZANTZ_cFUc.s"
}
#pragma pop


/* 806510C0-80651204 0144+00 s=2 e=0 z=0  None .text      getGroundPos__11daB_ZANTZ_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANTZ_c::getGroundPos() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/getGroundPos__11daB_ZANTZ_cFv.s"
}
#pragma pop


/* 80651204-8065127C 0078+00 s=4 e=0 z=0  None .text      __dt__14dBgS_ObjGndChkFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop


/* 8065127C-80651B1C 08A0+00 s=1 e=0 z=0  None .text      action__11daB_ZANTZ_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANTZ_c::action() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/action__11daB_ZANTZ_cFv.s"
}
#pragma pop


/* 80651B1C-80651C20 0104+00 s=1 e=0 z=0  None .text      cc_set__11daB_ZANTZ_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANTZ_c::cc_set() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/cc_set__11daB_ZANTZ_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80652928-8065292C 0004+00 s=2 e=0 z=0  None .bss       None                                                         */
static u8 data_80652928[4];

/* 8065292C-80652938 000C+00 s=1 e=0 z=0  None .bss       @3644                                                        */
static u8 lit_3644[12];

/* 80652938-80652944 000C+00 s=3 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[12];

/* 80651C20-80651CF4 00D4+00 s=1 e=0 z=0  None .text      execute__11daB_ZANTZ_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANTZ_c::execute() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/execute__11daB_ZANTZ_cFv.s"
}
#pragma pop


/* 80651CF4-80651D14 0020+00 s=1 e=0 z=0  None .text      daB_ZANTZ_Execute__FP11daB_ZANTZ_c                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daB_ZANTZ_Execute(daB_ZANTZ_c* param_0) {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/daB_ZANTZ_Execute__FP11daB_ZANTZ_c.s"
}
#pragma pop


/* 80651D14-80651D1C 0008+00 s=1 e=0 z=0  None .text      daB_ZANTZ_IsDelete__FP11daB_ZANTZ_c                          */
static bool daB_ZANTZ_IsDelete(daB_ZANTZ_c* param_0) {
	return true;
}


/* 80651D1C-80651DA4 0088+00 s=1 e=0 z=0  None .text      _delete__11daB_ZANTZ_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANTZ_c::_delete() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/_delete__11daB_ZANTZ_cFv.s"
}
#pragma pop


/* 80651DA4-80651DC4 0020+00 s=1 e=0 z=0  None .text      daB_ZANTZ_Delete__FP11daB_ZANTZ_c                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daB_ZANTZ_Delete(daB_ZANTZ_c* param_0) {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/daB_ZANTZ_Delete__FP11daB_ZANTZ_c.s"
}
#pragma pop


/* 80651DC4-80651FD0 020C+00 s=1 e=0 z=0  None .text      CreateHeap__11daB_ZANTZ_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANTZ_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/CreateHeap__11daB_ZANTZ_cFv.s"
}
#pragma pop


/* 80651FD0-80652018 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop


/* 80652018-80652038 0020+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80652038-806522F4 02BC+00 s=1 e=0 z=0  None .text      create__11daB_ZANTZ_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daB_ZANTZ_c::create() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/create__11daB_ZANTZ_cFv.s"
}
#pragma pop


/* 806522F4-806523C0 00CC+00 s=1 e=0 z=0  None .text      __dt__8dCcD_CylFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Cyl::~dCcD_Cyl() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/__dt__8dCcD_CylFv.s"
}
#pragma pop


/* 806523C0-80652444 0084+00 s=1 e=0 z=0  None .text      __ct__8dCcD_CylFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Cyl::dCcD_Cyl() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/__ct__8dCcD_CylFv.s"
}
#pragma pop


/* 80652444-8065248C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/__dt__8cM3dGCylFv.s"
}
#pragma pop


/* 8065248C-806524D4 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 806524D4-806525A0 00CC+00 s=1 e=0 z=0  None .text      __dt__8dCcD_SphFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::~dCcD_Sph() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/__dt__8dCcD_SphFv.s"
}
#pragma pop


/* 806525A0-80652624 0084+00 s=1 e=0 z=0  None .text      __ct__8dCcD_SphFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::dCcD_Sph() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/__ct__8dCcD_SphFv.s"
}
#pragma pop


/* 80652624-8065266C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/__dt__8cM3dGSphFv.s"
}
#pragma pop


/* 8065266C-8065268C 0020+00 s=1 e=0 z=0  None .text      daB_ZANTZ_Create__FP11daB_ZANTZ_c                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daB_ZANTZ_Create(daB_ZANTZ_c* param_0) {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/daB_ZANTZ_Create__FP11daB_ZANTZ_c.s"
}
#pragma pop


/* 8065268C-806526D4 0048+00 s=2 e=0 z=0  None .text      __dt__15daB_ZANTZ_HIO_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_ZANTZ_HIO_c::~daB_ZANTZ_HIO_c() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/__dt__15daB_ZANTZ_HIO_cFv.s"
}
#pragma pop


/* 806526D4-80652710 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_b_zant_mobile_cpp                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_b_zant_mobile_cpp() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/__sinit_d_a_b_zant_mobile_cpp.s"
}
#pragma pop


/* 80652710-80652718 0008+00 s=1 e=0 z=0  None .text      @20@__dt__14dBgS_ObjGndChkFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80652710() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/func_80652710.s"
}
#pragma pop


/* 80652718-80652720 0008+00 s=1 e=0 z=0  None .text      @76@__dt__14dBgS_ObjGndChkFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80652718() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/func_80652718.s"
}
#pragma pop


/* 80652720-80652728 0008+00 s=1 e=0 z=0  None .text      @60@__dt__14dBgS_ObjGndChkFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80652720() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_mobile/d_a_b_zant_mobile/func_80652720.s"
}
#pragma pop

