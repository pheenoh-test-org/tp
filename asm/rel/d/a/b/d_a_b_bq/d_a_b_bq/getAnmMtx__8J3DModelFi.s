lbl_805BA338:
/* 805BA338  80 63 00 84 */	lwz r3, 0x84(r3)
/* 805BA33C  80 63 00 0C */	lwz r3, 0xc(r3)
/* 805BA340  1C 04 00 30 */	mulli r0, r4, 0x30
/* 805BA344  7C 63 02 14 */	add r3, r3, r0
/* 805BA348  4E 80 00 20 */	blr 