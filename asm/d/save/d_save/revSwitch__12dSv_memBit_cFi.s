lbl_8003488C:
/* 8003488C  7C 86 2E 70 */	srawi r6, r4, 5
/* 80034890  38 A0 00 01 */	li r5, 1
/* 80034894  54 80 06 FE */	clrlwi r0, r4, 0x1b
/* 80034898  7C A4 00 30 */	slw r4, r5, r0
/* 8003489C  54 C0 10 3A */	slwi r0, r6, 2
/* 800348A0  7C 63 02 14 */	add r3, r3, r0
/* 800348A4  80 03 00 08 */	lwz r0, 8(r3)
/* 800348A8  7C 00 22 78 */	xor r0, r0, r4
/* 800348AC  90 03 00 08 */	stw r0, 8(r3)
/* 800348B0  80 03 00 08 */	lwz r0, 8(r3)
/* 800348B4  7C 03 20 38 */	and r3, r0, r4
/* 800348B8  30 03 FF FF */	addic r0, r3, -1
/* 800348BC  7C 60 19 10 */	subfe r3, r0, r3
/* 800348C0  4E 80 00 20 */	blr 