lbl_809D56D4:
/* 809D56D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809D56D8  7C 08 02 A6 */	mflr r0
/* 809D56DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 809D56E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809D56E4  93 C1 00 08 */	stw r30, 8(r1)
/* 809D56E8  7C 7E 1B 78 */	mr r30, r3
/* 809D56EC  7C 9F 23 78 */	mr r31, r4
/* 809D56F0  38 00 00 03 */	li r0, 3
/* 809D56F4  B0 03 0E 22 */	sth r0, 0xe22(r3)
/* 809D56F8  38 7E 10 CC */	addi r3, r30, 0x10cc
/* 809D56FC  4B 98 C9 1C */	b __ptmf_test
/* 809D5700  2C 03 00 00 */	cmpwi r3, 0
/* 809D5704  41 82 00 18 */	beq lbl_809D571C
/* 809D5708  7F C3 F3 78 */	mr r3, r30
/* 809D570C  38 80 00 00 */	li r4, 0
/* 809D5710  39 9E 10 CC */	addi r12, r30, 0x10cc
/* 809D5714  4B 98 C9 70 */	b __ptmf_scall
/* 809D5718  60 00 00 00 */	nop 
lbl_809D571C:
/* 809D571C  38 00 00 00 */	li r0, 0
/* 809D5720  B0 1E 0E 22 */	sth r0, 0xe22(r30)
/* 809D5724  80 7F 00 00 */	lwz r3, 0(r31)
/* 809D5728  80 1F 00 04 */	lwz r0, 4(r31)
/* 809D572C  90 7E 10 CC */	stw r3, 0x10cc(r30)
/* 809D5730  90 1E 10 D0 */	stw r0, 0x10d0(r30)
/* 809D5734  80 1F 00 08 */	lwz r0, 8(r31)
/* 809D5738  90 1E 10 D4 */	stw r0, 0x10d4(r30)
/* 809D573C  38 7E 10 CC */	addi r3, r30, 0x10cc
/* 809D5740  4B 98 C8 D8 */	b __ptmf_test
/* 809D5744  2C 03 00 00 */	cmpwi r3, 0
/* 809D5748  41 82 00 18 */	beq lbl_809D5760
/* 809D574C  7F C3 F3 78 */	mr r3, r30
/* 809D5750  38 80 00 00 */	li r4, 0
/* 809D5754  39 9E 10 CC */	addi r12, r30, 0x10cc
/* 809D5758  4B 98 C9 2C */	b __ptmf_scall
/* 809D575C  60 00 00 00 */	nop 
lbl_809D5760:
/* 809D5760  38 60 00 01 */	li r3, 1
/* 809D5764  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809D5768  83 C1 00 08 */	lwz r30, 8(r1)
/* 809D576C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809D5770  7C 08 03 A6 */	mtlr r0
/* 809D5774  38 21 00 10 */	addi r1, r1, 0x10
/* 809D5778  4E 80 00 20 */	blr 