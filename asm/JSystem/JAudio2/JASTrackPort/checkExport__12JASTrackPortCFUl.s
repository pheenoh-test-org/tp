lbl_80293628:
/* 80293628  A0 63 00 02 */	lhz r3, 2(r3)
/* 8029362C  38 00 00 01 */	li r0, 1
/* 80293630  7C 00 20 30 */	slw r0, r0, r4
/* 80293634  7C 63 00 38 */	and r3, r3, r0
/* 80293638  30 03 FF FF */	addic r0, r3, -1
/* 8029363C  7C 60 19 10 */	subfe r3, r0, r3
/* 80293640  4E 80 00 20 */	blr 