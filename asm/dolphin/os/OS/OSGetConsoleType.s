lbl_80339EFC:
/* 80339EFC  80 6D 90 80 */	lwz r3, BootInfo(r13)
/* 80339F00  28 03 00 00 */	cmplwi r3, 0
/* 80339F04  41 82 00 10 */	beq lbl_80339F14
/* 80339F08  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 80339F0C  28 03 00 00 */	cmplwi r3, 0
/* 80339F10  40 82 00 10 */	bne lbl_80339F20
lbl_80339F14:
/* 80339F14  3C 60 10 00 */	lis r3, 0x1000 /* 0x10000002@ha */
/* 80339F18  38 63 00 02 */	addi r3, r3, 0x0002 /* 0x10000002@l */
/* 80339F1C  48 00 00 04 */	b lbl_80339F20
lbl_80339F20:
/* 80339F20  4E 80 00 20 */	blr 