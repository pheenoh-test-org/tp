lbl_80282F10:
/* 80282F10  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80282F14  7C 08 02 A6 */	mflr r0
/* 80282F18  90 01 00 34 */	stw r0, 0x34(r1)
/* 80282F1C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80282F20  7C 7F 1B 78 */	mr r31, r3
/* 80282F24  D8 21 00 08 */	stfd f1, 8(r1)
/* 80282F28  80 A3 00 44 */	lwz r5, 0x44(r3)
/* 80282F2C  38 7F 00 08 */	addi r3, r31, 8
/* 80282F30  C0 45 00 00 */	lfs f2, 0(r5)
/* 80282F34  80 9F 00 48 */	lwz r4, 0x48(r31)
/* 80282F38  38 04 FF FF */	addi r0, r4, -1
/* 80282F3C  54 00 18 38 */	slwi r0, r0, 3
/* 80282F40  7C 65 04 2E */	lfsx f3, r5, r0
/* 80282F44  4B FF EA C5 */	bl range_getParameter__Q27JStudio29TFunctionValueAttribute_rangeCFddd
/* 80282F48  D8 21 00 08 */	stfd f1, 8(r1)
/* 80282F4C  80 1F 00 54 */	lwz r0, 0x54(r31)
/* 80282F50  90 01 00 10 */	stw r0, 0x10(r1)
/* 80282F54  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 80282F58  90 01 00 14 */	stw r0, 0x14(r1)
/* 80282F5C  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 80282F60  90 01 00 18 */	stw r0, 0x18(r1)
/* 80282F64  38 61 00 1C */	addi r3, r1, 0x1c
/* 80282F68  38 81 00 18 */	addi r4, r1, 0x18
/* 80282F6C  38 A1 00 14 */	addi r5, r1, 0x14
/* 80282F70  38 C1 00 10 */	addi r6, r1, 0x10
/* 80282F74  38 E1 00 08 */	addi r7, r1, 8
/* 80282F78  48 00 06 65 */	bl func_802835DC
/* 80282F7C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80282F80  90 1F 00 54 */	stw r0, 0x54(r31)
/* 80282F84  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 80282F88  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 80282F8C  7C 03 00 40 */	cmplw r3, r0
/* 80282F90  40 82 00 0C */	bne lbl_80282F9C
/* 80282F94  C0 23 00 04 */	lfs f1, 4(r3)
/* 80282F98  48 00 00 3C */	b lbl_80282FD4
lbl_80282F9C:
/* 80282F9C  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 80282FA0  7C 03 00 40 */	cmplw r3, r0
/* 80282FA4  40 82 00 1C */	bne lbl_80282FC0
/* 80282FA8  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 80282FAC  38 03 FF F8 */	addi r0, r3, -8
/* 80282FB0  90 1F 00 54 */	stw r0, 0x54(r31)
/* 80282FB4  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 80282FB8  C0 23 00 04 */	lfs f1, 4(r3)
/* 80282FBC  48 00 00 18 */	b lbl_80282FD4
lbl_80282FC0:
/* 80282FC0  7F E3 FB 78 */	mr r3, r31
/* 80282FC4  C8 21 00 08 */	lfd f1, 8(r1)
/* 80282FC8  81 9F 00 58 */	lwz r12, 0x58(r31)
/* 80282FCC  7D 89 03 A6 */	mtctr r12
/* 80282FD0  4E 80 04 21 */	bctrl 
lbl_80282FD4:
/* 80282FD4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80282FD8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80282FDC  7C 08 03 A6 */	mtlr r0
/* 80282FE0  38 21 00 30 */	addi r1, r1, 0x30
/* 80282FE4  4E 80 00 20 */	blr 