lbl_80049408:
/* 80049408  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8004940C  90 83 00 0C */	stw r4, 0xc(r3)
/* 80049410  28 04 00 00 */	cmplwi r4, 0
/* 80049414  4D 82 00 20 */	beqlr 
/* 80049418  90 04 00 04 */	stw r0, 4(r4)
/* 8004941C  4E 80 00 20 */	blr 