lbl_8033403C:
/* 8033403C  80 C3 00 04 */	lwz r6, 4(r3)
/* 80334040  80 A3 00 08 */	lwz r5, 8(r3)
/* 80334044  54 80 08 3C */	slwi r0, r4, 1
/* 80334048  7C 05 02 2E */	lhzx r0, r5, r0
/* 8033404C  1C 00 01 38 */	mulli r0, r0, 0x138
/* 80334050  7C 86 02 14 */	add r4, r6, r0
/* 80334054  88 04 00 07 */	lbz r0, 7(r4)
/* 80334058  28 00 00 FF */	cmplwi r0, 0xff
/* 8033405C  41 82 00 10 */	beq lbl_8033406C
/* 80334060  80 63 00 64 */	lwz r3, 0x64(r3)
/* 80334064  7C 63 00 AE */	lbzx r3, r3, r0
/* 80334068  4E 80 00 20 */	blr 
lbl_8033406C:
/* 8033406C  38 60 00 01 */	li r3, 1
/* 80334070  4E 80 00 20 */	blr 