lbl_802435BC:
/* 802435BC  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 802435C0  7C 08 02 A6 */	mflr r0
/* 802435C4  90 01 00 94 */	stw r0, 0x94(r1)
/* 802435C8  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 802435CC  F3 E1 00 88 */	psq_st f31, 136(r1), 0, 0 /* qr0 */
/* 802435D0  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 802435D4  F3 C1 00 78 */	psq_st f30, 120(r1), 0, 0 /* qr0 */
/* 802435D8  39 61 00 70 */	addi r11, r1, 0x70
/* 802435DC  48 11 EC 01 */	bl _savegpr_29
/* 802435E0  7C 7F 1B 78 */	mr r31, r3
/* 802435E4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 802435E8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 802435EC  83 C3 5F 50 */	lwz r30, 0x5f50(r3)
/* 802435F0  80 7F 01 28 */	lwz r3, 0x128(r31)
/* 802435F4  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 802435F8  90 61 00 24 */	stw r3, 0x24(r1)
/* 802435FC  90 01 00 28 */	stw r0, 0x28(r1)
/* 80243600  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 80243604  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80243608  80 7F 01 40 */	lwz r3, 0x140(r31)
/* 8024360C  80 1F 01 44 */	lwz r0, 0x144(r31)
/* 80243610  90 61 00 18 */	stw r3, 0x18(r1)
/* 80243614  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80243618  80 1F 01 48 */	lwz r0, 0x148(r31)
/* 8024361C  90 01 00 20 */	stw r0, 0x20(r1)
/* 80243620  80 1F 21 20 */	lwz r0, 0x2120(r31)
/* 80243624  C8 22 B2 80 */	lfd f1, lit_4587(r2)
/* 80243628  90 01 00 34 */	stw r0, 0x34(r1)
/* 8024362C  3C 60 43 30 */	lis r3, 0x4330
/* 80243630  90 61 00 30 */	stw r3, 0x30(r1)
/* 80243634  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 80243638  EC C0 08 28 */	fsubs f6, f0, f1
/* 8024363C  80 1F 21 18 */	lwz r0, 0x2118(r31)
/* 80243640  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80243644  90 61 00 38 */	stw r3, 0x38(r1)
/* 80243648  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8024364C  EC A0 08 28 */	fsubs f5, f0, f1
/* 80243650  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 80243654  C0 02 B2 50 */	lfs f0, lit_4427(r2)
/* 80243658  EC 03 00 28 */	fsubs f0, f3, f0
/* 8024365C  C0 42 B2 60 */	lfs f2, lit_4431(r2)
/* 80243660  EC 80 10 24 */	fdivs f4, f0, f2
/* 80243664  D0 81 00 08 */	stfs f4, 8(r1)
/* 80243668  D0 A1 00 0C */	stfs f5, 0xc(r1)
/* 8024366C  C0 22 B2 A4 */	lfs f1, lit_5233(r2)
/* 80243670  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80243674  EC 00 18 28 */	fsubs f0, f0, f3
/* 80243678  EC 00 10 24 */	fdivs f0, f0, f2
/* 8024367C  EC 01 00 2A */	fadds f0, f1, f0
/* 80243680  EC 04 00 2A */	fadds f0, f4, f0
/* 80243684  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80243688  EC 05 30 2A */	fadds f0, f5, f6
/* 8024368C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80243690  7F C3 F3 78 */	mr r3, r30
/* 80243694  38 81 00 08 */	addi r4, r1, 8
/* 80243698  48 0A 5A 29 */	bl func_802E90C0
/* 8024369C  7F C3 F3 78 */	mr r3, r30
/* 802436A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802436A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802436A8  7D 89 03 A6 */	mtctr r12
/* 802436AC  4E 80 04 21 */	bctrl 
/* 802436B0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 802436B4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 802436B8  80 63 5D B4 */	lwz r3, 0x5db4(r3)
/* 802436BC  81 83 06 28 */	lwz r12, 0x628(r3)
/* 802436C0  81 8C 02 98 */	lwz r12, 0x298(r12)
/* 802436C4  7D 89 03 A6 */	mtctr r12
/* 802436C8  4E 80 04 21 */	bctrl 
/* 802436CC  8B A3 00 8C */	lbz r29, 0x8c(r3)
/* 802436D0  80 7F 00 04 */	lwz r3, 4(r31)
/* 802436D4  3C 80 6E 65 */	lis r4, 0x6E65 /* 0x6E653030@ha */
/* 802436D8  38 C4 30 30 */	addi r6, r4, 0x3030 /* 0x6E653030@l */
/* 802436DC  38 A0 6C 69 */	li r5, 0x6c69
/* 802436E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802436E4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 802436E8  7D 89 03 A6 */	mtctr r12
/* 802436EC  4E 80 04 21 */	bctrl 
/* 802436F0  8B C3 00 B2 */	lbz r30, 0xb2(r3)
/* 802436F4  80 7F 00 08 */	lwz r3, 8(r31)
/* 802436F8  48 01 21 31 */	bl getAlphaRate__13CPaneMgrAlphaFv
/* 802436FC  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 80243700  C8 42 B2 80 */	lfd f2, lit_4587(r2)
/* 80243704  90 01 00 44 */	stw r0, 0x44(r1)
/* 80243708  3C 60 43 30 */	lis r3, 0x4330
/* 8024370C  90 61 00 40 */	stw r3, 0x40(r1)
/* 80243710  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 80243714  EC 00 10 28 */	fsubs f0, f0, f2
/* 80243718  EC 40 00 72 */	fmuls f2, f0, f1
/* 8024371C  20 1D 00 1E */	subfic r0, r29, 0x1e
/* 80243720  C8 22 B2 68 */	lfd f1, lit_4434(r2)
/* 80243724  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80243728  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8024372C  90 61 00 48 */	stw r3, 0x48(r1)
/* 80243730  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 80243734  EC 20 08 28 */	fsubs f1, f0, f1
/* 80243738  C0 02 B2 88 */	lfs f0, lit_4824(r2)
/* 8024373C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80243740  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80243744  FC 00 00 1E */	fctiwz f0, f0
/* 80243748  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8024374C  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80243750  80 7F 01 24 */	lwz r3, 0x124(r31)
/* 80243754  81 83 00 00 */	lwz r12, 0(r3)
/* 80243758  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8024375C  7D 89 03 A6 */	mtctr r12
/* 80243760  4E 80 04 21 */	bctrl 
/* 80243764  A8 1F 21 28 */	lha r0, 0x2128(r31)
/* 80243768  C8 22 B2 68 */	lfd f1, lit_4434(r2)
/* 8024376C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80243770  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80243774  3C 00 43 30 */	lis r0, 0x4330
/* 80243778  90 01 00 58 */	stw r0, 0x58(r1)
/* 8024377C  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 80243780  EC 20 08 28 */	fsubs f1, f0, f1
/* 80243784  C0 1F 19 80 */	lfs f0, 0x1980(r31)
/* 80243788  EF C1 00 32 */	fmuls f30, f1, f0
/* 8024378C  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 80243790  48 01 0B 59 */	bl getGlobalPosX__8CPaneMgrFv
/* 80243794  C0 1F 27 A8 */	lfs f0, 0x27a8(r31)
/* 80243798  EC 01 00 28 */	fsubs f0, f1, f0
/* 8024379C  EC 00 F0 2A */	fadds f0, f0, f30
/* 802437A0  D0 1F 19 9C */	stfs f0, 0x199c(r31)
/* 802437A4  83 BF 00 CC */	lwz r29, 0xcc(r31)
/* 802437A8  80 7D 00 04 */	lwz r3, 4(r29)
/* 802437AC  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 802437B0  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 802437B4  EF C1 00 28 */	fsubs f30, f1, f0
/* 802437B8  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 802437BC  48 01 0B A9 */	bl getGlobalPosY__8CPaneMgrFv
/* 802437C0  FF E0 08 90 */	fmr f31, f1
/* 802437C4  7F A3 EB 78 */	mr r3, r29
/* 802437C8  48 01 0B 9D */	bl getGlobalPosY__8CPaneMgrFv
/* 802437CC  EC 01 F0 2A */	fadds f0, f1, f30
/* 802437D0  EF E0 F8 28 */	fsubs f31, f0, f31
/* 802437D4  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 802437D8  48 01 0B 8D */	bl getGlobalPosY__8CPaneMgrFv
/* 802437DC  FC 40 08 90 */	fmr f2, f1
/* 802437E0  80 7F 01 24 */	lwz r3, 0x124(r31)
/* 802437E4  C0 1F 19 9C */	lfs f0, 0x199c(r31)
/* 802437E8  C0 62 B2 A8 */	lfs f3, lit_5234(r2)
/* 802437EC  EC 20 18 28 */	fsubs f1, f0, f3
/* 802437F0  FC 80 F8 90 */	fmr f4, f31
/* 802437F4  38 80 00 00 */	li r4, 0
/* 802437F8  38 A0 00 00 */	li r5, 0
/* 802437FC  38 C0 00 00 */	li r6, 0
/* 80243800  81 83 00 00 */	lwz r12, 0(r3)
/* 80243804  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 80243808  7D 89 03 A6 */	mtctr r12
/* 8024380C  4E 80 04 21 */	bctrl 
/* 80243810  E3 E1 00 88 */	psq_l f31, 136(r1), 0, 0 /* qr0 */
/* 80243814  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80243818  E3 C1 00 78 */	psq_l f30, 120(r1), 0, 0 /* qr0 */
/* 8024381C  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80243820  39 61 00 70 */	addi r11, r1, 0x70
/* 80243824  48 11 EA 05 */	bl _restgpr_29
/* 80243828  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8024382C  7C 08 03 A6 */	mtlr r0
/* 80243830  38 21 00 90 */	addi r1, r1, 0x90
/* 80243834  4E 80 00 20 */	blr 