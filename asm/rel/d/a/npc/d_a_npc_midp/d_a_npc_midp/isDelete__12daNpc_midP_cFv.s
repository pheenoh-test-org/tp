lbl_80A7166C:
/* 80A7166C  88 03 0F 80 */	lbz r0, 0xf80(r3)
/* 80A71670  2C 00 00 00 */	cmpwi r0, 0
/* 80A71674  41 82 00 08 */	beq lbl_80A7167C
/* 80A71678  48 00 00 0C */	b lbl_80A71684
lbl_80A7167C:
/* 80A7167C  38 60 00 00 */	li r3, 0
/* 80A71680  4E 80 00 20 */	blr 
lbl_80A71684:
/* 80A71684  38 60 00 00 */	li r3, 0
/* 80A71688  4E 80 00 20 */	blr 