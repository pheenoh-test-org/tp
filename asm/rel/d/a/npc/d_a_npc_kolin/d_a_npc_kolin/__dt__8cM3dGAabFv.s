lbl_805596C8:
/* 805596C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805596CC  7C 08 02 A6 */	mflr r0
/* 805596D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 805596D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805596D8  7C 7F 1B 79 */	or. r31, r3, r3
/* 805596DC  41 82 00 1C */	beq lbl_805596F8
/* 805596E0  3C A0 80 56 */	lis r5, __vt__8cM3dGAab@ha
/* 805596E4  38 05 B2 D0 */	addi r0, r5, __vt__8cM3dGAab@l
/* 805596E8  90 1F 00 18 */	stw r0, 0x18(r31)
/* 805596EC  7C 80 07 35 */	extsh. r0, r4
/* 805596F0  40 81 00 08 */	ble lbl_805596F8
/* 805596F4  4B D7 56 48 */	b __dl__FPv
lbl_805596F8:
/* 805596F8  7F E3 FB 78 */	mr r3, r31
/* 805596FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80559700  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80559704  7C 08 03 A6 */	mtlr r0
/* 80559708  38 21 00 10 */	addi r1, r1, 0x10
/* 8055970C  4E 80 00 20 */	blr 