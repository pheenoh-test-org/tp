/* 80282858 0027F798  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8028285C 0027F79C  7C 08 02 A6 */	mflr r0
/* 80282860 0027F7A0  90 01 00 54 */	stw r0, 0x54(r1)
/* 80282864 0027F7A4  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80282868 0027F7A8  F3 E1 00 48 */	psq_st f31, 72(r1), 0, 0
/* 8028286C 0027F7AC  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80282870 0027F7B0  F3 C1 00 38 */	psq_st f30, 56(r1), 0, 0
/* 80282874 0027F7B4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80282878 0027F7B8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8028287C 0027F7BC  7C 7F 1B 78 */	mr r31, r3
/* 80282880 0027F7C0  C8 63 00 28 */	lfd f3, 0x28(r3)
/* 80282884 0027F7C4  C8 43 00 30 */	lfd f2, 0x30(r3)
/* 80282888 0027F7C8  FC 01 18 28 */	fsub f0, f1, f3
/* 8028288C 0027F7CC  FC 02 00 32 */	fmul f0, f2, f0
/* 80282890 0027F7D0  FC 43 00 2A */	fadd f2, f3, f0
/* 80282894 0027F7D4  80 63 00 48 */	lwz r3, 0x48(r3)
/* 80282898 0027F7D8  3B C3 FF FF */	addi r30, r3, -1
/* 8028289C 0027F7DC  88 7F 00 21 */	lbz r3, 0x21(r31)
/* 802828A0 0027F7E0  7C 63 07 74 */	extsb r3, r3
/* 802828A4 0027F7E4  C8 22 BA 48 */	lfd f1, lbl_80455448-_SDA2_BASE_(r2)
/* 802828A8 0027F7E8  93 C1 00 24 */	stw r30, 0x24(r1)
/* 802828AC 0027F7EC  3C 00 43 30 */	lis r0, 0x4330
/* 802828B0 0027F7F0  90 01 00 20 */	stw r0, 0x20(r1)
/* 802828B4 0027F7F4  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 802828B8 0027F7F8  FF E0 08 28 */	fsub f31, f0, f1
/* 802828BC 0027F7FC  2C 03 00 02 */	cmpwi r3, 2
/* 802828C0 0027F800  41 82 01 2C */	beq lbl_802829EC
/* 802828C4 0027F804  40 80 00 14 */	bge lbl_802828D8
/* 802828C8 0027F808  2C 03 00 00 */	cmpwi r3, 0
/* 802828CC 0027F80C  41 82 00 1C */	beq lbl_802828E8
/* 802828D0 0027F810  40 80 00 98 */	bge lbl_80282968
/* 802828D4 0027F814  48 00 00 14 */	b lbl_802828E8
lbl_802828D8:
/* 802828D8 0027F818  2C 03 00 04 */	cmpwi r3, 4
/* 802828DC 0027F81C  41 82 02 2C */	beq lbl_80282B08
/* 802828E0 0027F820  40 80 00 08 */	bge lbl_802828E8
/* 802828E4 0027F824  48 00 01 90 */	b lbl_80282A74
lbl_802828E8:
/* 802828E8 0027F828  C8 1F 00 08 */	lfd f0, 8(r31)
/* 802828EC 0027F82C  FF C2 00 28 */	fsub f30, f2, f0
/* 802828F0 0027F830  C8 02 BA 00 */	lfd f0, lbl_80455400-_SDA2_BASE_(r2)
/* 802828F4 0027F834  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 802828F8 0027F838  40 80 00 28 */	bge lbl_80282920
/* 802828FC 0027F83C  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 80282900 0027F840  4B FF ED 49 */	bl toFunction_outside__Q27JStudio14TFunctionValueFi
/* 80282904 0027F844  FC 20 F0 90 */	fmr f1, f30
/* 80282908 0027F848  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8028290C 0027F84C  7C 6C 1B 78 */	mr r12, r3
/* 80282910 0027F850  7D 89 03 A6 */	mtctr r12
/* 80282914 0027F854  4E 80 04 21 */	bctrl 
/* 80282918 0027F858  FF C0 08 90 */	fmr f30, f1
/* 8028291C 0027F85C  48 00 00 34 */	b lbl_80282950
lbl_80282920:
/* 80282920 0027F860  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 80282924 0027F864  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80282928 0027F868  4C 41 13 82 */	cror 2, 1, 2
/* 8028292C 0027F86C  40 82 00 24 */	bne lbl_80282950
/* 80282930 0027F870  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80282934 0027F874  4B FF ED 15 */	bl toFunction_outside__Q27JStudio14TFunctionValueFi
/* 80282938 0027F878  FC 20 F0 90 */	fmr f1, f30
/* 8028293C 0027F87C  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80282940 0027F880  7C 6C 1B 78 */	mr r12, r3
/* 80282944 0027F884  7D 89 03 A6 */	mtctr r12
/* 80282948 0027F888  4E 80 04 21 */	bctrl 
/* 8028294C 0027F88C  FF C0 08 90 */	fmr f30, f1
lbl_80282950:
/* 80282950 0027F890  C8 1F 00 08 */	lfd f0, 8(r31)
/* 80282954 0027F894  FF DE 00 2A */	fadd f30, f30, f0
/* 80282958 0027F898  C8 1F 00 50 */	lfd f0, 0x50(r31)
/* 8028295C 0027F89C  FC 1E 00 24 */	fdiv f0, f30, f0
/* 80282960 0027F8A0  D8 01 00 08 */	stfd f0, 8(r1)
/* 80282964 0027F8A4  48 00 02 28 */	b lbl_80282B8C
lbl_80282968:
/* 80282968 0027F8A8  C8 1F 00 08 */	lfd f0, 8(r31)
/* 8028296C 0027F8AC  FF C2 00 2A */	fadd f30, f2, f0
/* 80282970 0027F8B0  FF DE 00 28 */	fsub f30, f30, f0
/* 80282974 0027F8B4  C8 02 BA 00 */	lfd f0, lbl_80455400-_SDA2_BASE_(r2)
/* 80282978 0027F8B8  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8028297C 0027F8BC  40 80 00 28 */	bge lbl_802829A4
/* 80282980 0027F8C0  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 80282984 0027F8C4  4B FF EC C5 */	bl toFunction_outside__Q27JStudio14TFunctionValueFi
/* 80282988 0027F8C8  FC 20 F0 90 */	fmr f1, f30
/* 8028298C 0027F8CC  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80282990 0027F8D0  7C 6C 1B 78 */	mr r12, r3
/* 80282994 0027F8D4  7D 89 03 A6 */	mtctr r12
/* 80282998 0027F8D8  4E 80 04 21 */	bctrl 
/* 8028299C 0027F8DC  FF C0 08 90 */	fmr f30, f1
/* 802829A0 0027F8E0  48 00 00 34 */	b lbl_802829D4
lbl_802829A4:
/* 802829A4 0027F8E4  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 802829A8 0027F8E8  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 802829AC 0027F8EC  4C 41 13 82 */	cror 2, 1, 2
/* 802829B0 0027F8F0  40 82 00 24 */	bne lbl_802829D4
/* 802829B4 0027F8F4  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 802829B8 0027F8F8  4B FF EC 91 */	bl toFunction_outside__Q27JStudio14TFunctionValueFi
/* 802829BC 0027F8FC  FC 20 F0 90 */	fmr f1, f30
/* 802829C0 0027F900  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 802829C4 0027F904  7C 6C 1B 78 */	mr r12, r3
/* 802829C8 0027F908  7D 89 03 A6 */	mtctr r12
/* 802829CC 0027F90C  4E 80 04 21 */	bctrl 
/* 802829D0 0027F910  FF C0 08 90 */	fmr f30, f1
lbl_802829D4:
/* 802829D4 0027F914  C8 1F 00 08 */	lfd f0, 8(r31)
/* 802829D8 0027F918  FF DE 00 2A */	fadd f30, f30, f0
/* 802829DC 0027F91C  C8 1F 00 50 */	lfd f0, 0x50(r31)
/* 802829E0 0027F920  FC 1E 00 24 */	fdiv f0, f30, f0
/* 802829E4 0027F924  D8 01 00 08 */	stfd f0, 8(r1)
/* 802829E8 0027F928  48 00 01 A4 */	b lbl_80282B8C
lbl_802829EC:
/* 802829EC 0027F92C  C8 1F 00 10 */	lfd f0, 0x10(r31)
/* 802829F0 0027F930  FF C2 00 2A */	fadd f30, f2, f0
/* 802829F4 0027F934  C8 1F 00 08 */	lfd f0, 8(r31)
/* 802829F8 0027F938  FF DE 00 28 */	fsub f30, f30, f0
/* 802829FC 0027F93C  C8 02 BA 00 */	lfd f0, lbl_80455400-_SDA2_BASE_(r2)
/* 80282A00 0027F940  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80282A04 0027F944  40 80 00 28 */	bge lbl_80282A2C
/* 80282A08 0027F948  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 80282A0C 0027F94C  4B FF EC 3D */	bl toFunction_outside__Q27JStudio14TFunctionValueFi
/* 80282A10 0027F950  FC 20 F0 90 */	fmr f1, f30
/* 80282A14 0027F954  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80282A18 0027F958  7C 6C 1B 78 */	mr r12, r3
/* 80282A1C 0027F95C  7D 89 03 A6 */	mtctr r12
/* 80282A20 0027F960  4E 80 04 21 */	bctrl 
/* 80282A24 0027F964  FF C0 08 90 */	fmr f30, f1
/* 80282A28 0027F968  48 00 00 34 */	b lbl_80282A5C
lbl_80282A2C:
/* 80282A2C 0027F96C  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 80282A30 0027F970  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80282A34 0027F974  4C 41 13 82 */	cror 2, 1, 2
/* 80282A38 0027F978  40 82 00 24 */	bne lbl_80282A5C
/* 80282A3C 0027F97C  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80282A40 0027F980  4B FF EC 09 */	bl toFunction_outside__Q27JStudio14TFunctionValueFi
/* 80282A44 0027F984  FC 20 F0 90 */	fmr f1, f30
/* 80282A48 0027F988  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80282A4C 0027F98C  7C 6C 1B 78 */	mr r12, r3
/* 80282A50 0027F990  7D 89 03 A6 */	mtctr r12
/* 80282A54 0027F994  4E 80 04 21 */	bctrl 
/* 80282A58 0027F998  FF C0 08 90 */	fmr f30, f1
lbl_80282A5C:
/* 80282A5C 0027F99C  C8 1F 00 08 */	lfd f0, 8(r31)
/* 80282A60 0027F9A0  FF DE 00 2A */	fadd f30, f30, f0
/* 80282A64 0027F9A4  C8 1F 00 50 */	lfd f0, 0x50(r31)
/* 80282A68 0027F9A8  FC 1E 00 24 */	fdiv f0, f30, f0
/* 80282A6C 0027F9AC  D8 01 00 08 */	stfd f0, 8(r1)
/* 80282A70 0027F9B0  48 00 01 1C */	b lbl_80282B8C
lbl_80282A74:
/* 80282A74 0027F9B4  C8 22 BA 28 */	lfd f1, lbl_80455428-_SDA2_BASE_(r2)
/* 80282A78 0027F9B8  C8 7F 00 08 */	lfd f3, 8(r31)
/* 80282A7C 0027F9BC  C8 1F 00 10 */	lfd f0, 0x10(r31)
/* 80282A80 0027F9C0  FC 03 00 2A */	fadd f0, f3, f0
/* 80282A84 0027F9C4  FC 01 00 32 */	fmul f0, f1, f0
/* 80282A88 0027F9C8  FF C2 00 2A */	fadd f30, f2, f0
/* 80282A8C 0027F9CC  FF DE 18 28 */	fsub f30, f30, f3
/* 80282A90 0027F9D0  C8 02 BA 00 */	lfd f0, lbl_80455400-_SDA2_BASE_(r2)
/* 80282A94 0027F9D4  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80282A98 0027F9D8  40 80 00 28 */	bge lbl_80282AC0
/* 80282A9C 0027F9DC  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 80282AA0 0027F9E0  4B FF EB A9 */	bl toFunction_outside__Q27JStudio14TFunctionValueFi
/* 80282AA4 0027F9E4  FC 20 F0 90 */	fmr f1, f30
/* 80282AA8 0027F9E8  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80282AAC 0027F9EC  7C 6C 1B 78 */	mr r12, r3
/* 80282AB0 0027F9F0  7D 89 03 A6 */	mtctr r12
/* 80282AB4 0027F9F4  4E 80 04 21 */	bctrl 
/* 80282AB8 0027F9F8  FF C0 08 90 */	fmr f30, f1
/* 80282ABC 0027F9FC  48 00 00 34 */	b lbl_80282AF0
lbl_80282AC0:
/* 80282AC0 0027FA00  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 80282AC4 0027FA04  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80282AC8 0027FA08  4C 41 13 82 */	cror 2, 1, 2
/* 80282ACC 0027FA0C  40 82 00 24 */	bne lbl_80282AF0
/* 80282AD0 0027FA10  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80282AD4 0027FA14  4B FF EB 75 */	bl toFunction_outside__Q27JStudio14TFunctionValueFi
/* 80282AD8 0027FA18  FC 20 F0 90 */	fmr f1, f30
/* 80282ADC 0027FA1C  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80282AE0 0027FA20  7C 6C 1B 78 */	mr r12, r3
/* 80282AE4 0027FA24  7D 89 03 A6 */	mtctr r12
/* 80282AE8 0027FA28  4E 80 04 21 */	bctrl 
/* 80282AEC 0027FA2C  FF C0 08 90 */	fmr f30, f1
lbl_80282AF0:
/* 80282AF0 0027FA30  C8 1F 00 08 */	lfd f0, 8(r31)
/* 80282AF4 0027FA34  FF DE 00 2A */	fadd f30, f30, f0
/* 80282AF8 0027FA38  C8 1F 00 50 */	lfd f0, 0x50(r31)
/* 80282AFC 0027FA3C  FC 1E 00 24 */	fdiv f0, f30, f0
/* 80282B00 0027FA40  D8 01 00 08 */	stfd f0, 8(r1)
/* 80282B04 0027FA44  48 00 00 88 */	b lbl_80282B8C
lbl_80282B08:
/* 80282B08 0027FA48  C8 1F 00 08 */	lfd f0, 8(r31)
/* 80282B0C 0027FA4C  FF C2 00 28 */	fsub f30, f2, f0
/* 80282B10 0027FA50  C8 02 BA 00 */	lfd f0, lbl_80455400-_SDA2_BASE_(r2)
/* 80282B14 0027FA54  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80282B18 0027FA58  40 80 00 28 */	bge lbl_80282B40
/* 80282B1C 0027FA5C  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 80282B20 0027FA60  4B FF EB 29 */	bl toFunction_outside__Q27JStudio14TFunctionValueFi
/* 80282B24 0027FA64  FC 20 F0 90 */	fmr f1, f30
/* 80282B28 0027FA68  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80282B2C 0027FA6C  7C 6C 1B 78 */	mr r12, r3
/* 80282B30 0027FA70  7D 89 03 A6 */	mtctr r12
/* 80282B34 0027FA74  4E 80 04 21 */	bctrl 
/* 80282B38 0027FA78  FF C0 08 90 */	fmr f30, f1
/* 80282B3C 0027FA7C  48 00 00 34 */	b lbl_80282B70
lbl_80282B40:
/* 80282B40 0027FA80  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 80282B44 0027FA84  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80282B48 0027FA88  4C 41 13 82 */	cror 2, 1, 2
/* 80282B4C 0027FA8C  40 82 00 24 */	bne lbl_80282B70
/* 80282B50 0027FA90  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80282B54 0027FA94  4B FF EA F5 */	bl toFunction_outside__Q27JStudio14TFunctionValueFi
/* 80282B58 0027FA98  FC 20 F0 90 */	fmr f1, f30
/* 80282B5C 0027FA9C  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80282B60 0027FAA0  7C 6C 1B 78 */	mr r12, r3
/* 80282B64 0027FAA4  7D 89 03 A6 */	mtctr r12
/* 80282B68 0027FAA8  4E 80 04 21 */	bctrl 
/* 80282B6C 0027FAAC  FF C0 08 90 */	fmr f30, f1
lbl_80282B70:
/* 80282B70 0027FAB0  C8 1F 00 08 */	lfd f0, 8(r31)
/* 80282B74 0027FAB4  FF DE 00 2A */	fadd f30, f30, f0
/* 80282B78 0027FAB8  FC 1E 00 28 */	fsub f0, f30, f0
/* 80282B7C 0027FABC  FC 3F 00 32 */	fmul f1, f31, f0
/* 80282B80 0027FAC0  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 80282B84 0027FAC4  FC 01 00 24 */	fdiv f0, f1, f0
/* 80282B88 0027FAC8  D8 01 00 08 */	stfd f0, 8(r1)
lbl_80282B8C:
/* 80282B8C 0027FACC  C8 21 00 08 */	lfd f1, 8(r1)
/* 80282B90 0027FAD0  C8 02 BA 00 */	lfd f0, lbl_80455400-_SDA2_BASE_(r2)
/* 80282B94 0027FAD4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80282B98 0027FAD8  40 80 00 10 */	bge lbl_80282BA8
/* 80282B9C 0027FADC  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 80282BA0 0027FAE0  C0 23 00 00 */	lfs f1, 0(r3)
/* 80282BA4 0027FAE4  48 00 00 44 */	b lbl_80282BE8
lbl_80282BA8:
/* 80282BA8 0027FAE8  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80282BAC 0027FAEC  4C 41 13 82 */	cror 2, 1, 2
/* 80282BB0 0027FAF0  40 82 00 14 */	bne lbl_80282BC4
/* 80282BB4 0027FAF4  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 80282BB8 0027FAF8  57 C0 10 3A */	slwi r0, r30, 2
/* 80282BBC 0027FAFC  7C 23 04 2E */	lfsx f1, r3, r0
/* 80282BC0 0027FB00  48 00 00 28 */	b lbl_80282BE8
lbl_80282BC4:
/* 80282BC4 0027FB04  48 0E 95 39 */	bl func_8036C0FC
/* 80282BC8 0027FB08  D8 21 00 10 */	stfd f1, 0x10(r1)
/* 80282BCC 0027FB0C  48 0D F4 E1 */	bl func_803620AC
/* 80282BD0 0027FB10  90 61 00 18 */	stw r3, 0x18(r1)
/* 80282BD4 0027FB14  7F E3 FB 78 */	mr r3, r31
/* 80282BD8 0027FB18  38 81 00 08 */	addi r4, r1, 8
/* 80282BDC 0027FB1C  81 9F 00 58 */	lwz r12, 0x58(r31)
/* 80282BE0 0027FB20  7D 89 03 A6 */	mtctr r12
/* 80282BE4 0027FB24  4E 80 04 21 */	bctrl 
lbl_80282BE8:
/* 80282BE8 0027FB28  E3 E1 00 48 */	psq_l f31, 72(r1), 0, 0
/* 80282BEC 0027FB2C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80282BF0 0027FB30  E3 C1 00 38 */	psq_l f30, 56(r1), 0, 0
/* 80282BF4 0027FB34  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80282BF8 0027FB38  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80282BFC 0027FB3C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80282C00 0027FB40  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80282C04 0027FB44  7C 08 03 A6 */	mtlr r0
/* 80282C08 0027FB48  38 21 00 50 */	addi r1, r1, 0x50
/* 80282C0C 0027FB4C  4E 80 00 20 */	blr 