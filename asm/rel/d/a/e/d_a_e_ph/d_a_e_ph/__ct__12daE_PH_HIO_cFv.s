lbl_8073D44C:
/* 8073D44C  3C 80 80 74 */	lis r4, lit_3767@ha
/* 8073D450  38 A4 1B F4 */	addi r5, r4, lit_3767@l
/* 8073D454  3C 80 80 74 */	lis r4, __vt__12daE_PH_HIO_c@ha
/* 8073D458  38 04 1D A8 */	addi r0, r4, __vt__12daE_PH_HIO_c@l
/* 8073D45C  90 03 00 00 */	stw r0, 0(r3)
/* 8073D460  38 00 FF FF */	li r0, -1
/* 8073D464  98 03 00 04 */	stb r0, 4(r3)
/* 8073D468  C0 05 00 00 */	lfs f0, 0(r5)
/* 8073D46C  D0 03 00 08 */	stfs f0, 8(r3)
/* 8073D470  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8073D474  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8073D478  C0 05 00 04 */	lfs f0, 4(r5)
/* 8073D47C  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8073D480  C0 05 00 08 */	lfs f0, 8(r5)
/* 8073D484  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8073D488  4E 80 00 20 */	blr 