lbl_80662624:
/* 80662624  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80662628  7C 08 02 A6 */	mflr r0
/* 8066262C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80662630  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80662634  7C 7F 1B 79 */	or. r31, r3, r3
/* 80662638  41 82 00 30 */	beq lbl_80662668
/* 8066263C  3C 60 80 66 */	lis r3, __vt__10dCcD_GStts@ha
/* 80662640  38 03 33 EC */	addi r0, r3, __vt__10dCcD_GStts@l
/* 80662644  90 1F 00 00 */	stw r0, 0(r31)
/* 80662648  41 82 00 10 */	beq lbl_80662658
/* 8066264C  3C 60 80 66 */	lis r3, __vt__10cCcD_GStts@ha
/* 80662650  38 03 33 E0 */	addi r0, r3, __vt__10cCcD_GStts@l
/* 80662654  90 1F 00 00 */	stw r0, 0(r31)
lbl_80662658:
/* 80662658  7C 80 07 35 */	extsh. r0, r4
/* 8066265C  40 81 00 0C */	ble lbl_80662668
/* 80662660  7F E3 FB 78 */	mr r3, r31
/* 80662664  4B C6 C6 D8 */	b __dl__FPv
lbl_80662668:
/* 80662668  7F E3 FB 78 */	mr r3, r31
/* 8066266C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80662670  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80662674  7C 08 03 A6 */	mtlr r0
/* 80662678  38 21 00 10 */	addi r1, r1, 0x10
/* 8066267C  4E 80 00 20 */	blr 