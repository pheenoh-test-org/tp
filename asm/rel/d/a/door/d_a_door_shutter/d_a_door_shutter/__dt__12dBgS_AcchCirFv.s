lbl_8046670C:
/* 8046670C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80466710  7C 08 02 A6 */	mflr r0
/* 80466714  90 01 00 14 */	stw r0, 0x14(r1)
/* 80466718  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046671C  93 C1 00 08 */	stw r30, 8(r1)
/* 80466720  7C 7E 1B 79 */	or. r30, r3, r3
/* 80466724  7C 9F 23 78 */	mr r31, r4
/* 80466728  41 82 00 38 */	beq lbl_80466760
/* 8046672C  3C 60 80 46 */	lis r3, __vt__12dBgS_AcchCir@ha
/* 80466730  38 03 72 F0 */	addi r0, r3, __vt__12dBgS_AcchCir@l
/* 80466734  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80466738  38 7E 00 14 */	addi r3, r30, 0x14
/* 8046673C  38 80 FF FF */	li r4, -1
/* 80466740  4B E0 87 D8 */	b __dt__8cM3dGCirFv
/* 80466744  7F C3 F3 78 */	mr r3, r30
/* 80466748  38 80 00 00 */	li r4, 0
/* 8046674C  4B E0 19 64 */	b __dt__13cBgS_PolyInfoFv
/* 80466750  7F E0 07 35 */	extsh. r0, r31
/* 80466754  40 81 00 0C */	ble lbl_80466760
/* 80466758  7F C3 F3 78 */	mr r3, r30
/* 8046675C  4B E6 85 E0 */	b __dl__FPv
lbl_80466760:
/* 80466760  7F C3 F3 78 */	mr r3, r30
/* 80466764  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80466768  83 C1 00 08 */	lwz r30, 8(r1)
/* 8046676C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80466770  7C 08 03 A6 */	mtlr r0
/* 80466774  38 21 00 10 */	addi r1, r1, 0x10
/* 80466778  4E 80 00 20 */	blr 