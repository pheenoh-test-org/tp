lbl_805436CC:
/* 805436CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805436D0  7C 08 02 A6 */	mflr r0
/* 805436D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 805436D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805436DC  7C 7F 1B 78 */	mr r31, r3
/* 805436E0  4B AD 56 00 */	b fopAc_IsActor__FPv
/* 805436E4  2C 03 00 00 */	cmpwi r3, 0
/* 805436E8  41 82 00 18 */	beq lbl_80543700
/* 805436EC  A8 1F 00 08 */	lha r0, 8(r31)
/* 805436F0  2C 00 02 FF */	cmpwi r0, 0x2ff
/* 805436F4  40 82 00 0C */	bne lbl_80543700
/* 805436F8  7F E3 FB 78 */	mr r3, r31
/* 805436FC  48 00 00 08 */	b lbl_80543704
lbl_80543700:
/* 80543700  38 60 00 00 */	li r3, 0
lbl_80543704:
/* 80543704  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80543708  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8054370C  7C 08 03 A6 */	mtlr r0
/* 80543710  38 21 00 10 */	addi r1, r1, 0x10
/* 80543714  4E 80 00 20 */	blr 