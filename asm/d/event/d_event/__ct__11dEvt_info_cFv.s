lbl_800433F0:
/* 800433F0  3C 80 80 3A */	lis r4, __vt__11dEvt_info_c@ha
/* 800433F4  38 04 35 D0 */	addi r0, r4, __vt__11dEvt_info_c@l
/* 800433F8  90 03 00 00 */	stw r0, 0(r3)
/* 800433FC  38 80 00 00 */	li r4, 0
/* 80043400  B0 83 00 04 */	sth r4, 4(r3)
/* 80043404  38 00 00 02 */	li r0, 2
/* 80043408  B0 03 00 06 */	sth r0, 6(r3)
/* 8004340C  38 00 FF FF */	li r0, -1
/* 80043410  B0 03 00 08 */	sth r0, 8(r3)
/* 80043414  38 00 00 FF */	li r0, 0xff
/* 80043418  98 03 00 0A */	stb r0, 0xa(r3)
/* 8004341C  90 83 00 0C */	stw r4, 0xc(r3)
/* 80043420  98 83 00 0B */	stb r4, 0xb(r3)
/* 80043424  4E 80 00 20 */	blr 