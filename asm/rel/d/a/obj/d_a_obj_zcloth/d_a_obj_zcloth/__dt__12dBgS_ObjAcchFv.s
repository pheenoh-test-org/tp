lbl_80D3F13C:
/* 80D3F13C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D3F140  7C 08 02 A6 */	mflr r0
/* 80D3F144  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D3F148  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D3F14C  93 C1 00 08 */	stw r30, 8(r1)
/* 80D3F150  7C 7E 1B 79 */	or. r30, r3, r3
/* 80D3F154  7C 9F 23 78 */	mr r31, r4
/* 80D3F158  41 82 00 38 */	beq lbl_80D3F190
/* 80D3F15C  3C 80 80 D4 */	lis r4, __vt__12dBgS_ObjAcch@ha /* 0x80D3F380@ha */
/* 80D3F160  38 84 F3 80 */	addi r4, r4, __vt__12dBgS_ObjAcch@l /* 0x80D3F380@l */
/* 80D3F164  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80D3F168  38 04 00 0C */	addi r0, r4, 0xc
/* 80D3F16C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80D3F170  38 04 00 18 */	addi r0, r4, 0x18
/* 80D3F174  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80D3F178  38 80 00 00 */	li r4, 0
/* 80D3F17C  4B 33 6E 19 */	bl __dt__9dBgS_AcchFv
/* 80D3F180  7F E0 07 35 */	extsh. r0, r31
/* 80D3F184  40 81 00 0C */	ble lbl_80D3F190
/* 80D3F188  7F C3 F3 78 */	mr r3, r30
/* 80D3F18C  4B 58 FB B1 */	bl __dl__FPv
lbl_80D3F190:
/* 80D3F190  7F C3 F3 78 */	mr r3, r30
/* 80D3F194  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D3F198  83 C1 00 08 */	lwz r30, 8(r1)
/* 80D3F19C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D3F1A0  7C 08 03 A6 */	mtlr r0
/* 80D3F1A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80D3F1A8  4E 80 00 20 */	blr 
