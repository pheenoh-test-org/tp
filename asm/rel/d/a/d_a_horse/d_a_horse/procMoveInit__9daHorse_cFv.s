lbl_80841F04:
/* 80841F04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80841F08  7C 08 02 A6 */	mflr r0
/* 80841F0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80841F10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80841F14  7C 7F 1B 78 */	mr r31, r3
/* 80841F18  3C 80 80 84 */	lis r4, lit_9546@ha
/* 80841F1C  38 A4 59 DC */	addi r5, r4, lit_9546@l
/* 80841F20  80 85 00 00 */	lwz r4, 0(r5)
/* 80841F24  80 05 00 04 */	lwz r0, 4(r5)
/* 80841F28  90 83 18 A4 */	stw r4, 0x18a4(r3)
/* 80841F2C  90 03 18 A8 */	stw r0, 0x18a8(r3)
/* 80841F30  80 05 00 08 */	lwz r0, 8(r5)
/* 80841F34  90 03 18 AC */	stw r0, 0x18ac(r3)
/* 80841F38  38 00 00 01 */	li r0, 1
/* 80841F3C  98 03 16 B4 */	stb r0, 0x16b4(r3)
/* 80841F40  80 A3 17 44 */	lwz r5, 0x1744(r3)
/* 80841F44  3C 80 FF FF */	lis r4, 0xFFFF /* 0xFFFEFDFF@ha */
/* 80841F48  38 04 FD FF */	addi r0, r4, 0xFDFF /* 0xFFFEFDFF@l */
/* 80841F4C  7C A0 00 38 */	and r0, r5, r0
/* 80841F50  90 03 17 44 */	stw r0, 0x1744(r3)
/* 80841F54  3C 80 80 84 */	lis r4, lit_4303@ha
/* 80841F58  C0 24 55 F0 */	lfs f1, lit_4303@l(r4)
/* 80841F5C  4B FF 98 D5 */	bl setMoveAnime__9daHorse_cFf
/* 80841F60  38 00 00 00 */	li r0, 0
/* 80841F64  B0 1F 17 1A */	sth r0, 0x171a(r31)
/* 80841F68  38 60 00 01 */	li r3, 1
/* 80841F6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80841F70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80841F74  7C 08 03 A6 */	mtlr r0
/* 80841F78  38 21 00 10 */	addi r1, r1, 0x10
/* 80841F7C  4E 80 00 20 */	blr 