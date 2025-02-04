//
// Generated By: dol2asm
// Translation Unit: d_a_e_yc
//

#include "rel/d/a/e/d_a_e_yc/d_a_e_yc.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);

    static u8 now[48];
};

struct mDoExt_McaMorfCallBack2_c {};

struct mDoExt_McaMorfCallBack1_c {};

struct J3DAnmTransform {};

struct J3DModelData {};

struct Z2Creature {};

struct mDoExt_McaMorfSO {
    /* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                    mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int,
                                    int, Z2Creature*, u32, u32);
    /* 80010E70 */ void setAnm(J3DAnmTransform*, int, f32, f32, f32, f32);
    /* 800110B0 */ void play(u32, s8);
    /* 800111C0 */ void entryDL();
    /* 800111EC */ void modelCalc();
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct e_yc_class {};

struct daE_YC_HIO_c {
    /* 807EFECC */ daE_YC_HIO_c();
    /* 807F27BC */ ~daE_YC_HIO_c();
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct csXyz {};

struct _GXColor {};

struct dPa_control_c {
    struct level_c {
        /* 8004B918 */ void getEmitter(u32);
    };

    /* 8004C218 */ void setHitMark(u16, fopAc_ac_c*, cXyz const*, csXyz const*, cXyz const*, u32);
    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dDlst_shadowControl_c {
    static u8 mSimpleTexObj[32];
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80083830 */ void Move();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 807F274C */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
};

struct dBgS {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 807F26BC */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 807F2704 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgS_PolyInfo {};

struct _GXTexObj {};

struct Z2CreatureEnemy {
    /* 802C0F64 */ Z2CreatureEnemy();
    /* 802C1094 */ void init(Vec*, Vec*, u8, u8);
    /* 802C1B7C */ void setLinkSearch(bool);
    /* 802C1B90 */ void setEnemyName(char const*);
};

struct JGeometry {
    template <typename A1>
    struct TVec3 {};
    /* TVec3<f32> */
    struct TVec3__template0 {};
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 8032842C */ void checkPass(f32);
};

//
// Forward References:
//

extern "C" void __ct__12daE_YC_HIO_cFv();
extern "C" static void anm_init__FP10e_yc_classifUcf();
extern "C" static void daE_YC_Draw__FP10e_yc_class();
extern "C" static void damage_check__FP10e_yc_class();
extern "C" static void e_yc_fly__FP10e_yc_class();
extern "C" static void e_yc_f_fly__FP10e_yc_class();
extern "C" static void e_yc_hovering__FP10e_yc_class();
extern "C" static void e_yc_attack__FP10e_yc_class();
extern "C" static void e_yc_wolfbite__FP10e_yc_class();
extern "C" static void anm_se_set__FP10e_yc_class();
extern "C" static void action__FP10e_yc_class();
extern "C" static void daE_YC_Execute__FP10e_yc_class();
extern "C" static bool daE_YC_IsDelete__FP10e_yc_class();
extern "C" static void daE_YC_Delete__FP10e_yc_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_YC_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12daE_YC_HIO_cFv();
extern "C" void __sinit_d_a_e_yc_cpp();
extern "C" static void func_807F2840();
extern "C" static void func_807F2848();
extern "C" extern char const* const d_a_e_yc__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void func_802807E0();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void PSVECSquareMag();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;
extern "C" extern u8 pauseTimer__9dScnPly_c[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 807F2864-807F2868 000000 0004+00 12/12 0/0 0/0 .rodata          @3715 */
SECTION_RODATA static f32 const lit_3715 = 1.0f;
COMPILER_STRIP_GATE(0x807F2864, &lit_3715);

/* 807F2954-807F2970 -00001 001C+00 1/1 0/0 0/0 .data            @3878 */
SECTION_DATA static void* lit_3878[7] = {
    (void*)(((char*)e_yc_fly__FP10e_yc_class) + 0x168),
    (void*)(((char*)e_yc_fly__FP10e_yc_class) + 0x170),
    (void*)(((char*)e_yc_fly__FP10e_yc_class) + 0x23C),
    (void*)(((char*)e_yc_fly__FP10e_yc_class) + 0x288),
    (void*)(((char*)e_yc_fly__FP10e_yc_class) + 0x2CC),
    (void*)(((char*)e_yc_fly__FP10e_yc_class) + 0x324),
    (void*)(((char*)e_yc_fly__FP10e_yc_class) + 0x348),
};

/* 807F2970-807F298C -00001 001C+00 1/1 0/0 0/0 .data            @4087 */
SECTION_DATA static void* lit_4087[7] = {
    (void*)(((char*)e_yc_attack__FP10e_yc_class) + 0xE8),
    (void*)(((char*)e_yc_attack__FP10e_yc_class) + 0x100),
    (void*)(((char*)e_yc_attack__FP10e_yc_class) + 0x250),
    (void*)(((char*)e_yc_attack__FP10e_yc_class) + 0x27C),
    (void*)(((char*)e_yc_attack__FP10e_yc_class) + 0x2AC),
    (void*)(((char*)e_yc_attack__FP10e_yc_class) + 0x3D0),
    (void*)(((char*)e_yc_attack__FP10e_yc_class) + 0x414),
};

/* 807F298C-807F29E0 -00001 0054+00 1/1 0/0 0/0 .data            @4315 */
SECTION_DATA static void* lit_4315[21] = {
    (void*)(((char*)action__FP10e_yc_class) + 0x70),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0x7C),
    (void*)(((char*)action__FP10e_yc_class) + 0x88),
    (void*)(((char*)action__FP10e_yc_class) + 0x94),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA0),
};

/* 807F29E0-807F29E8 00008C 0008+00 1/1 0/0 0/0 .data            wing_j$4328 */
SECTION_DATA static u8 wing_j[8] = {
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x11,
};

/* 807F29E8-807F2A28 000094 0040+00 1/1 0/0 0/0 .data            cc_sph_src$4529 */
SECTION_DATA static u8 cc_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x0B, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 807F2A28-807F2A68 0000D4 0040+00 1/1 0/0 0/0 .data            at_sph_src$4530 */
SECTION_DATA static u8 at_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 807F2A68-807F2A88 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_YC_Method */
SECTION_DATA static void* l_daE_YC_Method[8] = {
    (void*)daE_YC_Create__FP10fopAc_ac_c,
    (void*)daE_YC_Delete__FP10e_yc_class,
    (void*)daE_YC_Execute__FP10e_yc_class,
    (void*)daE_YC_IsDelete__FP10e_yc_class,
    (void*)daE_YC_Draw__FP10e_yc_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 807F2A88-807F2AB8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_YC */
SECTION_DATA extern void* g_profile_E_YC[12] = {
    (void*)0xFFFFFFFD, (void*)0x0004FFFD,
    (void*)0x00F50000, (void*)&g_fpcLf_Method,
    (void*)0x00000BA8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00BB0000, (void*)&l_daE_YC_Method,
    (void*)0x00040100, (void*)0x020E0000,
};

/* 807F2AB8-807F2AC4 000164 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 807F2AC4-807F2AD0 000170 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 807F2AD0-807F2AF4 00017C 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_807F2848,
    (void*)NULL,
    (void*)NULL,
    (void*)func_807F2840,
};

/* 807F2AF4-807F2B00 0001A0 000C+00 2/2 0/0 0/0 .data            __vt__12daE_YC_HIO_c */
SECTION_DATA extern void* __vt__12daE_YC_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daE_YC_HIO_cFv,
};

/* 807EFECC-807EFEF0 0000EC 0024+00 1/1 0/0 0/0 .text            __ct__12daE_YC_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_YC_HIO_c::daE_YC_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/__ct__12daE_YC_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F2868-807F286C 000004 0004+00 1/9 0/0 0/0 .rodata          @3729 */
SECTION_RODATA static u8 const lit_3729[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x807F2868, &lit_3729);

/* 807F286C-807F2870 000008 0004+00 1/1 0/0 0/0 .rodata          @3730 */
SECTION_RODATA static f32 const lit_3730 = -1.0f;
COMPILER_STRIP_GATE(0x807F286C, &lit_3730);

/* 807F294C-807F294C 0000E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_807F294C = "E_yc";
#pragma pop

/* 807EFEF0-807EFF9C 000110 00AC+00 5/5 0/0 0/0 .text            anm_init__FP10e_yc_classifUcf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void anm_init(e_yc_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/anm_init__FP10e_yc_classifUcf.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F2870-807F2874 00000C 0004+00 0/3 0/0 0/0 .rodata          @3771 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3771 = 100.0f;
COMPILER_STRIP_GATE(0x807F2870, &lit_3771);
#pragma pop

/* 807F2874-807F2878 000010 0004+00 0/1 0/0 0/0 .rodata          @3772 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3772 = 1700.0f;
COMPILER_STRIP_GATE(0x807F2874, &lit_3772);
#pragma pop

/* 807EFF9C-807F00BC 0001BC 0120+00 1/0 0/0 0/0 .text            daE_YC_Draw__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_YC_Draw(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/daE_YC_Draw__FP10e_yc_class.s"
}
#pragma pop

/* 807F00BC-807F01AC 0002DC 00F0+00 1/1 0/0 0/0 .text            damage_check__FP10e_yc_class */
#ifdef NONMATCHING
static void damage_check(e_yc_class* param_0) {
    param_0->mCcD_GStts.Move();
    fopAc_ac_c* player = dComIfGp_getPlayer(0);
    if (param_0->field_0x6AA == 0 && !param_0->mCcD_GObjInf.ChkTgHit()) {
        param_0->mpTgHitObj = param_0->mCcD_GObjInf.GetTgHitObj();

        if (((daAlink_c*)player)->getCutType() != 0x2c) {
            return;
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void damage_check(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/damage_check__FP10e_yc_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 807F2878-807F287C 000014 0004+00 0/2 0/0 0/0 .rodata          @3859 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3859 = 12.0f;
COMPILER_STRIP_GATE(0x807F2878, &lit_3859);
#pragma pop

/* 807F287C-807F2880 000018 0004+00 0/2 0/0 0/0 .rodata          @3860 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3860 = 70.0f;
COMPILER_STRIP_GATE(0x807F287C, &lit_3860);
#pragma pop

/* 807F2880-807F2884 00001C 0004+00 0/5 0/0 0/0 .rodata          @3861 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3861 = 10.0f;
COMPILER_STRIP_GATE(0x807F2880, &lit_3861);
#pragma pop

/* 807F01AC-807F06AC 0003CC 0500+00 2/1 0/0 0/0 .text            e_yc_fly__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_yc_fly(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/e_yc_fly__FP10e_yc_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F2884-807F2888 000020 0004+00 0/1 0/0 0/0 .rodata          @3862 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3862 = 25.0f;
COMPILER_STRIP_GATE(0x807F2884, &lit_3862);
#pragma pop

/* 807F2888-807F288C 000024 0004+00 0/1 0/0 0/0 .rodata          @3863 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3863 = 2000.0f;
COMPILER_STRIP_GATE(0x807F2888, &lit_3863);
#pragma pop

/* 807F288C-807F2890 000028 0004+00 0/3 0/0 0/0 .rodata          @3864 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3864 = 200.0f;
COMPILER_STRIP_GATE(0x807F288C, &lit_3864);
#pragma pop

/* 807F2890-807F2894 00002C 0004+00 0/1 0/0 0/0 .rodata          @3865 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3865 = 150.0f;
COMPILER_STRIP_GATE(0x807F2890, &lit_3865);
#pragma pop

/* 807F2894-807F2898 000030 0004+00 0/2 0/0 0/0 .rodata          @3866 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3866 = 300.0f;
COMPILER_STRIP_GATE(0x807F2894, &lit_3866);
#pragma pop

/* 807F2898-807F289C 000034 0004+00 0/0 0/0 0/0 .rodata          @3867 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3867 = 35.0f;
COMPILER_STRIP_GATE(0x807F2898, &lit_3867);
#pragma pop

/* 807F289C-807F28A0 000038 0004+00 0/0 0/0 0/0 .rodata          @3868 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3868 = 0.25f;
COMPILER_STRIP_GATE(0x807F289C, &lit_3868);
#pragma pop

/* 807F28A0-807F28A4 00003C 0004+00 0/0 0/0 0/0 .rodata          @3869 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3869 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x807F28A0, &lit_3869);
#pragma pop

/* 807F28A4-807F28A8 000040 0004+00 0/0 0/0 0/0 .rodata          @3870 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3870 = 4.0f;
COMPILER_STRIP_GATE(0x807F28A4, &lit_3870);
#pragma pop

/* 807F28A8-807F28AC 000044 0004+00 0/1 0/0 0/0 .rodata          @3871 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3871 = 400.0f;
COMPILER_STRIP_GATE(0x807F28A8, &lit_3871);
#pragma pop

/* 807F28AC-807F28B0 000048 0004+00 0/1 0/0 0/0 .rodata          @3872 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3872 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x807F28AC, &lit_3872);
#pragma pop

/* 807F28B0-807F28B4 00004C 0004+00 0/1 0/0 0/0 .rodata          @3873 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3873 = 3.0f;
COMPILER_STRIP_GATE(0x807F28B0, &lit_3873);
#pragma pop

/* 807F28B4-807F28B8 000050 0004+00 0/2 0/0 0/0 .rodata          @3874 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3874 = 0.5f;
COMPILER_STRIP_GATE(0x807F28B4, &lit_3874);
#pragma pop

/* 807F28B8-807F28BC 000054 0004+00 0/1 0/0 0/0 .rodata          @3875 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3875 = 1.0f / 25.0f;
COMPILER_STRIP_GATE(0x807F28B8, &lit_3875);
#pragma pop

/* 807F28BC-807F28C0 000058 0004+00 0/0 0/0 0/0 .rodata          @3876 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3876 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x807F28BC, &lit_3876);
#pragma pop

/* 807F28C0-807F28C4 00005C 0004+00 0/3 0/0 0/0 .rodata          @3932 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3932 = 1000.0f;
COMPILER_STRIP_GATE(0x807F28C0, &lit_3932);
#pragma pop

/* 807F28C4-807F28C8 000060 0004+00 0/1 0/0 0/0 .rodata          @3933 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3933 = 4000.0f;
COMPILER_STRIP_GATE(0x807F28C4, &lit_3933);
#pragma pop

/* 807F2B08-807F2B0C 000008 0004+00 4/4 0/0 0/0 .bss             S_area_dis */
static u8 S_area_dis[4];

/* 807F06AC-807F0AA0 0008CC 03F4+00 1/1 0/0 0/0 .text            e_yc_f_fly__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_yc_f_fly(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/e_yc_f_fly__FP10e_yc_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F28C8-807F28CC 000064 0004+00 0/1 0/0 0/0 .rodata          @3959 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3959 = 5.0f;
COMPILER_STRIP_GATE(0x807F28C8, &lit_3959);
#pragma pop

/* 807F28CC-807F28D0 000068 0004+00 0/1 0/0 0/0 .rodata          @3960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3960 = -5.0f;
COMPILER_STRIP_GATE(0x807F28CC, &lit_3960);
#pragma pop

/* 807F28D0-807F28D4 00006C 0004+00 0/1 0/0 0/0 .rodata          @3961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3961 = 3000.0f;
COMPILER_STRIP_GATE(0x807F28D0, &lit_3961);
#pragma pop

/* 807F28D4-807F28D8 000070 0004+00 0/2 0/0 0/0 .rodata          @3962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3962 = 5000.0f;
COMPILER_STRIP_GATE(0x807F28D4, &lit_3962);
#pragma pop

/* 807F0AA0-807F0C40 000CC0 01A0+00 1/1 0/0 0/0 .text            e_yc_hovering__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_yc_hovering(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/e_yc_hovering__FP10e_yc_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F28D8-807F28DC 000074 0004+00 0/3 0/0 0/0 .rodata          @4078 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4078 = 50.0f;
COMPILER_STRIP_GATE(0x807F28D8, &lit_4078);
#pragma pop

/* 807F28DC-807F28E0 000078 0004+00 0/2 0/0 0/0 .rodata          @4079 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4079 = 500.0f;
COMPILER_STRIP_GATE(0x807F28DC, &lit_4079);
#pragma pop

/* 807F28E0-807F28E4 00007C 0004+00 0/1 0/0 0/0 .rodata          @4080 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4080 = 30.0f;
COMPILER_STRIP_GATE(0x807F28E0, &lit_4080);
#pragma pop

/* 807F28E4-807F28EC 000080 0008+00 0/1 0/0 0/0 .rodata          @4081 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4081[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x807F28E4, &lit_4081);
#pragma pop

/* 807F28EC-807F28F4 000088 0008+00 0/1 0/0 0/0 .rodata          @4082 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4082[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x807F28EC, &lit_4082);
#pragma pop

/* 807F28F4-807F28FC 000090 0008+00 0/1 0/0 0/0 .rodata          @4083 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4083[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x807F28F4, &lit_4083);
#pragma pop

/* 807F0C40-807F1218 000E60 05D8+00 2/1 0/0 0/0 .text            e_yc_attack__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_yc_attack(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/e_yc_attack__FP10e_yc_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F28FC-807F2900 000098 0004+00 0/0 0/0 0/0 .rodata          @4084 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4084 = 350.0f;
COMPILER_STRIP_GATE(0x807F28FC, &lit_4084);
#pragma pop

/* 807F2900-807F2904 00009C 0004+00 0/0 0/0 0/0 .rodata          @4085 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4085 = 0.75f;
COMPILER_STRIP_GATE(0x807F2900, &lit_4085);
#pragma pop

/* 807F2904-807F2908 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4167 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4167 = 2.0f;
COMPILER_STRIP_GATE(0x807F2904, &lit_4167);
#pragma pop

/* 807F1218-807F165C 001438 0444+00 1/1 0/0 0/0 .text            e_yc_wolfbite__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_yc_wolfbite(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/e_yc_wolfbite__FP10e_yc_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F2908-807F290C 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4267 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4267 = 28.0f;
COMPILER_STRIP_GATE(0x807F2908, &lit_4267);
#pragma pop

/* 807F290C-807F2910 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4268 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4268 = 27.0f;
COMPILER_STRIP_GATE(0x807F290C, &lit_4268);
#pragma pop

/* 807F2910-807F2914 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4269 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4269 = 11.0f;
COMPILER_STRIP_GATE(0x807F2910, &lit_4269);
#pragma pop

/* 807F2914-807F2918 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4270 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4270 = 36.0f;
COMPILER_STRIP_GATE(0x807F2914, &lit_4270);
#pragma pop

/* 807F2918-807F291C 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4271 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4271 = 7.0f;
COMPILER_STRIP_GATE(0x807F2918, &lit_4271);
#pragma pop

/* 807F291C-807F2920 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4272 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4272 = 6.0f;
COMPILER_STRIP_GATE(0x807F291C, &lit_4272);
#pragma pop

/* 807F2920-807F2924 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4273 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4273 = 14.0f;
COMPILER_STRIP_GATE(0x807F2920, &lit_4273);
#pragma pop

/* 807F2924-807F2928 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4274 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4274 = 15.0f;
COMPILER_STRIP_GATE(0x807F2924, &lit_4274);
#pragma pop

/* 807F165C-807F1AD4 00187C 0478+00 1/1 0/0 0/0 .text            anm_se_set__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void anm_se_set(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/anm_se_set__FP10e_yc_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F2928-807F292C 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4314 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4314 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x807F2928, &lit_4314);
#pragma pop

/* 807F1AD4-807F1CE4 001CF4 0210+00 2/1 0/0 0/0 .text            action__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/action__FP10e_yc_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F292C-807F2930 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4480 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4480 = -103171.0f;
COMPILER_STRIP_GATE(0x807F292C, &lit_4480);
#pragma pop

/* 807F2930-807F2934 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4481 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4481 = 38369.0f;
COMPILER_STRIP_GATE(0x807F2930, &lit_4481);
#pragma pop

/* 807F2934-807F2938 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4482 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4482 = 21000.0f;
COMPILER_STRIP_GATE(0x807F2934, &lit_4482);
#pragma pop

/* 807F2938-807F293C 0000D4 0004+00 0/1 0/0 0/0 .rodata          @4483 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4483 = 80.0f;
COMPILER_STRIP_GATE(0x807F2938, &lit_4483);
#pragma pop

/* 807F293C-807F2940 0000D8 0004+00 0/1 0/0 0/0 .rodata          @4484 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4484 = -30.0f;
COMPILER_STRIP_GATE(0x807F293C, &lit_4484);
#pragma pop

/* 807F2B0C-807F2B10 00000C 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_807F2B0C[4];

/* 807F2B10-807F2B1C 000010 000C+00 1/1 0/0 0/0 .bss             @3710 */
static u8 lit_3710[12];

/* 807F2B1C-807F2B28 00001C 000C+00 3/3 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[12];

/* 807F1CE4-807F2234 001F04 0550+00 2/1 0/0 0/0 .text            daE_YC_Execute__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_YC_Execute(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/daE_YC_Execute__FP10e_yc_class.s"
}
#pragma pop

/* 807F2234-807F223C 002454 0008+00 1/0 0/0 0/0 .text            daE_YC_IsDelete__FP10e_yc_class */
static bool daE_YC_IsDelete(e_yc_class* param_0) {
    return true;
}

/* 807F223C-807F22A4 00245C 0068+00 1/0 0/0 0/0 .text            daE_YC_Delete__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_YC_Delete(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/daE_YC_Delete__FP10e_yc_class.s"
}
#pragma pop

/* 807F22A4-807F239C 0024C4 00F8+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F2940-807F2944 0000DC 0004+00 0/1 0/0 0/0 .rodata          @4622 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4622 = -500.0f;
COMPILER_STRIP_GATE(0x807F2940, &lit_4622);
#pragma pop

/* 807F2944-807F2948 0000E0 0004+00 0/1 0/0 0/0 .rodata          @4623 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4623 = -300.0f;
COMPILER_STRIP_GATE(0x807F2944, &lit_4623);
#pragma pop

/* 807F2948-807F294C 0000E4 0004+00 0/1 0/0 0/0 .rodata          @4624 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4624 = 65535.0f;
COMPILER_STRIP_GATE(0x807F2948, &lit_4624);
#pragma pop

/* 807F239C-807F26BC 0025BC 0320+00 1/0 0/0 0/0 .text            daE_YC_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_YC_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/daE_YC_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 807F26BC-807F2704 0028DC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 807F2704-807F274C 002924 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 807F274C-807F27BC 00296C 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 807F27BC-807F2804 0029DC 0048+00 2/1 0/0 0/0 .text            __dt__12daE_YC_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_YC_HIO_c::~daE_YC_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/__dt__12daE_YC_HIO_cFv.s"
}
#pragma pop

/* 807F2804-807F2840 002A24 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_yc_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_e_yc_cpp() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/__sinit_d_a_e_yc_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x807F2804, __sinit_d_a_e_yc_cpp);
#pragma pop

/* 807F2840-807F2848 002A60 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_807F2840() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/func_807F2840.s"
}
#pragma pop

/* 807F2848-807F2850 002A68 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_807F2848() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/func_807F2848.s"
}
#pragma pop

/* 807F294C-807F294C 0000E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */