lbl_80603508:
/* 80603508  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8060350C  7C 08 02 A6 */	mflr r0
/* 80603510  90 01 00 34 */	stw r0, 0x34(r1)
/* 80603514  39 61 00 30 */	addi r11, r1, 0x30
/* 80603518  4B D5 EC C4 */	b _savegpr_29
/* 8060351C  7C 7D 1B 78 */	mr r29, r3
/* 80603520  3C 60 80 60 */	lis r3, lit_3646@ha
/* 80603524  3B E3 40 44 */	addi r31, r3, lit_3646@l
/* 80603528  80 7D 05 B4 */	lwz r3, 0x5b4(r29)
/* 8060352C  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80603530  FC 00 00 1E */	fctiwz f0, f0
/* 80603534  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80603538  83 C1 00 14 */	lwz r30, 0x14(r1)
/* 8060353C  38 7D 05 2C */	addi r3, r29, 0x52c
/* 80603540  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 80603544  FC 40 08 90 */	fmr f2, f1
/* 80603548  4B C6 C5 38 */	b cLib_addCalc0__FPfff
/* 8060354C  A8 1D 06 6C */	lha r0, 0x66c(r29)
/* 80603550  2C 00 00 01 */	cmpwi r0, 1
/* 80603554  41 82 00 38 */	beq lbl_8060358C
/* 80603558  40 80 00 C8 */	bge lbl_80603620
/* 8060355C  2C 00 00 00 */	cmpwi r0, 0
/* 80603560  40 80 00 08 */	bge lbl_80603568
/* 80603564  48 00 00 BC */	b lbl_80603620
lbl_80603568:
/* 80603568  7F A3 EB 78 */	mr r3, r29
/* 8060356C  38 80 00 04 */	li r4, 4
/* 80603570  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 80603574  38 A0 00 00 */	li r5, 0
/* 80603578  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 8060357C  4B FF FC F5 */	bl anm_init__FP10b_go_classifUcf
/* 80603580  38 00 00 01 */	li r0, 1
/* 80603584  B0 1D 06 6C */	sth r0, 0x66c(r29)
/* 80603588  48 00 00 98 */	b lbl_80603620
lbl_8060358C:
/* 8060358C  2C 1E 00 19 */	cmpwi r30, 0x19
/* 80603590  41 80 00 54 */	blt lbl_806035E4
/* 80603594  2C 1E 00 21 */	cmpwi r30, 0x21
/* 80603598  41 81 00 4C */	bgt lbl_806035E4
/* 8060359C  2C 1E 00 19 */	cmpwi r30, 0x19
/* 806035A0  40 82 00 3C */	bne lbl_806035DC
/* 806035A4  3C 60 00 06 */	lis r3, 0x0006 /* 0x00060034@ha */
/* 806035A8  38 03 00 34 */	addi r0, r3, 0x0034 /* 0x00060034@l */
/* 806035AC  90 01 00 08 */	stw r0, 8(r1)
/* 806035B0  38 7D 05 B8 */	addi r3, r29, 0x5b8
/* 806035B4  38 81 00 08 */	addi r4, r1, 8
/* 806035B8  38 A0 00 00 */	li r5, 0
/* 806035BC  38 C0 FF FF */	li r6, -1
/* 806035C0  81 9D 05 B8 */	lwz r12, 0x5b8(r29)
/* 806035C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 806035C8  7D 89 03 A6 */	mtctr r12
/* 806035CC  4E 80 04 21 */	bctrl 
/* 806035D0  38 00 00 01 */	li r0, 1
/* 806035D4  98 1D 06 60 */	stb r0, 0x660(r29)
/* 806035D8  48 00 00 0C */	b lbl_806035E4
lbl_806035DC:
/* 806035DC  38 00 00 02 */	li r0, 2
/* 806035E0  98 1D 06 60 */	stb r0, 0x660(r29)
lbl_806035E4:
/* 806035E4  80 7D 05 B4 */	lwz r3, 0x5b4(r29)
/* 806035E8  38 80 00 01 */	li r4, 1
/* 806035EC  88 03 00 11 */	lbz r0, 0x11(r3)
/* 806035F0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 806035F4  40 82 00 18 */	bne lbl_8060360C
/* 806035F8  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 806035FC  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80603600  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80603604  41 82 00 08 */	beq lbl_8060360C
/* 80603608  38 80 00 00 */	li r4, 0
lbl_8060360C:
/* 8060360C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80603610  41 82 00 10 */	beq lbl_80603620
/* 80603614  38 00 00 00 */	li r0, 0
/* 80603618  B0 1D 06 6A */	sth r0, 0x66a(r29)
/* 8060361C  B0 1D 06 6C */	sth r0, 0x66c(r29)
lbl_80603620:
/* 80603620  39 61 00 30 */	addi r11, r1, 0x30
/* 80603624  4B D5 EC 04 */	b _restgpr_29
/* 80603628  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8060362C  7C 08 03 A6 */	mtlr r0
/* 80603630  38 21 00 30 */	addi r1, r1, 0x30
/* 80603634  4E 80 00 20 */	blr 