lbl_8035D8E4:
/* 8035D8E4  7C 80 00 34 */	cntlzw r0, r4
/* 8035D8E8  20 00 00 1F */	subfic r0, r0, 0x1f
/* 8035D8EC  54 05 26 76 */	rlwinm r5, r0, 4, 0x19, 0x1b
/* 8035D8F0  3C 80 CC 01 */	lis r4, 0xCC01 /* 0xCC008000@ha */
/* 8035D8F4  38 00 00 10 */	li r0, 0x10
/* 8035D8F8  38 A5 06 00 */	addi r5, r5, 0x600
/* 8035D8FC  98 04 80 00 */	stb r0, 0x8000(r4)
/* 8035D900  64 A0 00 0F */	oris r0, r5, 0xf
/* 8035D904  94 04 80 00 */	stwu r0, -0x8000(r4)
/* 8035D908  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8035D90C  7C C6 32 78 */	xor r6, r6, r6
/* 8035D910  E0 A3 00 10 */	psq_l f5, 16(r3), 0, 0 /* qr0 */
/* 8035D914  E0 83 00 18 */	psq_l f4, 24(r3), 0, 0 /* qr0 */
/* 8035D918  E0 63 00 20 */	psq_l f3, 32(r3), 0, 0 /* qr0 */
/* 8035D91C  E0 43 00 28 */	psq_l f2, 40(r3), 0, 0 /* qr0 */
/* 8035D920  E0 23 00 30 */	psq_l f1, 48(r3), 0, 0 /* qr0 */
/* 8035D924  E0 03 00 38 */	psq_l f0, 56(r3), 0, 0 /* qr0 */
/* 8035D928  90 C4 00 00 */	stw r6, 0(r4)
/* 8035D92C  90 C4 00 00 */	stw r6, 0(r4)
/* 8035D930  90 C4 00 00 */	stw r6, 0(r4)
/* 8035D934  90 04 00 00 */	stw r0, 0(r4)
/* 8035D938  F0 A4 00 00 */	psq_st f5, 0(r4), 0, 0 /* qr0 */
/* 8035D93C  F0 84 00 00 */	psq_st f4, 0(r4), 0, 0 /* qr0 */
/* 8035D940  F0 64 00 00 */	psq_st f3, 0(r4), 0, 0 /* qr0 */
/* 8035D944  F0 44 00 00 */	psq_st f2, 0(r4), 0, 0 /* qr0 */
/* 8035D948  F0 24 00 00 */	psq_st f1, 0(r4), 0, 0 /* qr0 */
/* 8035D94C  F0 04 00 00 */	psq_st f0, 0(r4), 0, 0 /* qr0 */
/* 8035D950  80 62 CB 80 */	lwz r3, __GXData(r2)
/* 8035D954  38 00 00 01 */	li r0, 1
/* 8035D958  B0 03 00 02 */	sth r0, 2(r3)
/* 8035D95C  4E 80 00 20 */	blr 