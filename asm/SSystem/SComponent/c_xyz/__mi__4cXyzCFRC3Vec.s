lbl_80266B34:
/* 80266B34  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80266B38  7C 08 02 A6 */	mflr r0
/* 80266B3C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80266B40  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80266B44  7C 7F 1B 78 */	mr r31, r3
/* 80266B48  7C 83 23 78 */	mr r3, r4
/* 80266B4C  7C A4 2B 78 */	mr r4, r5
/* 80266B50  38 A1 00 08 */	addi r5, r1, 8
/* 80266B54  48 0E 05 61 */	bl PSVECSubtract
/* 80266B58  C0 01 00 08 */	lfs f0, 8(r1)
/* 80266B5C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80266B60  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80266B64  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80266B68  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80266B6C  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80266B70  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80266B74  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80266B78  7C 08 03 A6 */	mtlr r0
/* 80266B7C  38 21 00 20 */	addi r1, r1, 0x20
/* 80266B80  4E 80 00 20 */	blr 