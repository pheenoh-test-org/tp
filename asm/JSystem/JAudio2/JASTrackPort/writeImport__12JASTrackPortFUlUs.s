lbl_802935C4:
/* 802935C4  A0 C3 00 00 */	lhz r6, 0(r3)
/* 802935C8  38 00 00 01 */	li r0, 1
/* 802935CC  7C 00 20 30 */	slw r0, r0, r4
/* 802935D0  7C C0 03 78 */	or r0, r6, r0
/* 802935D4  B0 03 00 00 */	sth r0, 0(r3)
/* 802935D8  54 80 08 3C */	slwi r0, r4, 1
/* 802935DC  7C 63 02 14 */	add r3, r3, r0
/* 802935E0  B0 A3 00 04 */	sth r5, 4(r3)
/* 802935E4  4E 80 00 20 */	blr 