lbl_80611C20:
/* 80611C20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80611C24  7C 08 02 A6 */	mflr r0
/* 80611C28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80611C2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80611C30  7C 7F 1B 78 */	mr r31, r3
/* 80611C34  4B A0 70 AC */	b fopAc_IsActor__FPv
/* 80611C38  2C 03 00 00 */	cmpwi r3, 0
/* 80611C3C  41 82 00 24 */	beq lbl_80611C60
/* 80611C40  A8 1F 00 08 */	lha r0, 8(r31)
/* 80611C44  2C 00 02 02 */	cmpwi r0, 0x202
/* 80611C48  40 82 00 18 */	bne lbl_80611C60
/* 80611C4C  3C 60 80 62 */	lis r3, bf_ct@ha
/* 80611C50  38 83 B5 3C */	addi r4, r3, bf_ct@l
/* 80611C54  80 64 00 00 */	lwz r3, 0(r4)
/* 80611C58  38 03 00 01 */	addi r0, r3, 1
/* 80611C5C  90 04 00 00 */	stw r0, 0(r4)
lbl_80611C60:
/* 80611C60  38 60 00 00 */	li r3, 0
/* 80611C64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80611C68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80611C6C  7C 08 03 A6 */	mtlr r0
/* 80611C70  38 21 00 10 */	addi r1, r1, 0x10
/* 80611C74  4E 80 00 20 */	blr 