lbl_806717FC:
/* 806717FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80671800  7C 08 02 A6 */	mflr r0
/* 80671804  90 01 00 14 */	stw r0, 0x14(r1)
/* 80671808  80 63 05 84 */	lwz r3, 0x584(r3)
/* 8067180C  4B 99 BC 1C */	b play__14mDoExt_baseAnmFv
/* 80671810  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80671814  7C 08 03 A6 */	mtlr r0
/* 80671818  38 21 00 10 */	addi r1, r1, 0x10
/* 8067181C  4E 80 00 20 */	blr 