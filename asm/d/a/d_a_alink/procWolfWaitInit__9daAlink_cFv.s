lbl_8012D1A8:
/* 8012D1A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012D1AC  7C 08 02 A6 */	mflr r0
/* 8012D1B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012D1B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012D1B8  7C 7F 1B 78 */	mr r31, r3
/* 8012D1BC  4B FF ED ED */	bl checkWolfWaitSlipPolygon__9daAlink_cFv
/* 8012D1C0  2C 03 00 00 */	cmpwi r3, 0
/* 8012D1C4  41 82 00 20 */	beq lbl_8012D1E4
/* 8012D1C8  C0 3F 33 AC */	lfs f1, 0x33ac(r31)
/* 8012D1CC  C0 02 92 A4 */	lfs f0, lit_6021(r2)
/* 8012D1D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8012D1D4  41 81 00 10 */	bgt lbl_8012D1E4
/* 8012D1D8  7F E3 FB 78 */	mr r3, r31
/* 8012D1DC  48 00 30 09 */	bl procWolfWaitSlipInit__9daAlink_cFv
/* 8012D1E0  48 00 00 B4 */	b lbl_8012D294
lbl_8012D1E4:
/* 8012D1E4  A0 1F 2F E8 */	lhz r0, 0x2fe8(r31)
/* 8012D1E8  28 00 00 F1 */	cmplwi r0, 0xf1
/* 8012D1EC  40 82 00 0C */	bne lbl_8012D1F8
/* 8012D1F0  38 60 00 00 */	li r3, 0
/* 8012D1F4  48 00 00 A0 */	b lbl_8012D294
lbl_8012D1F8:
/* 8012D1F8  28 00 00 EE */	cmplwi r0, 0xee
/* 8012D1FC  40 82 00 54 */	bne lbl_8012D250
/* 8012D200  7F E3 FB 78 */	mr r3, r31
/* 8012D204  4B FE 8A 1D */	bl checkEventRun__9daAlink_cCFv
/* 8012D208  2C 03 00 00 */	cmpwi r3, 0
/* 8012D20C  41 82 00 10 */	beq lbl_8012D21C
/* 8012D210  A8 1F 30 12 */	lha r0, 0x3012(r31)
/* 8012D214  2C 00 00 00 */	cmpwi r0, 0
/* 8012D218  41 82 00 38 */	beq lbl_8012D250
lbl_8012D21C:
/* 8012D21C  80 1F 31 98 */	lwz r0, 0x3198(r31)
/* 8012D220  2C 00 00 00 */	cmpwi r0, 0
/* 8012D224  41 82 00 14 */	beq lbl_8012D238
/* 8012D228  38 7F 1F D0 */	addi r3, r31, 0x1fd0
/* 8012D22C  48 03 12 A1 */	bl checkAnmEnd__16daPy_frameCtrl_cFv
/* 8012D230  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8012D234  40 82 00 1C */	bne lbl_8012D250
lbl_8012D238:
/* 8012D238  7F E3 FB 78 */	mr r3, r31
/* 8012D23C  4B F8 C0 19 */	bl checkNoUpperAnime__9daAlink_cCFv
/* 8012D240  2C 03 00 00 */	cmpwi r3, 0
/* 8012D244  41 82 00 0C */	beq lbl_8012D250
/* 8012D248  38 60 00 00 */	li r3, 0
/* 8012D24C  48 00 00 48 */	b lbl_8012D294
lbl_8012D250:
/* 8012D250  7F E3 FB 78 */	mr r3, r31
/* 8012D254  38 80 00 F1 */	li r4, 0xf1
/* 8012D258  4B F9 4D 15 */	bl commonProcInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 8012D25C  7F E3 FB 78 */	mr r3, r31
/* 8012D260  3C 80 80 39 */	lis r4, m__20daAlinkHIO_wlMove_c0@ha /* 0x8038EE28@ha */
/* 8012D264  38 84 EE 28 */	addi r4, r4, m__20daAlinkHIO_wlMove_c0@l /* 0x8038EE28@l */
/* 8012D268  C0 24 00 BC */	lfs f1, 0xbc(r4)
/* 8012D26C  4B FF B5 D9 */	bl setBlendWolfMoveAnime__9daAlink_cFf
/* 8012D270  A8 1F 04 E6 */	lha r0, 0x4e6(r31)
/* 8012D274  B0 1F 04 DE */	sth r0, 0x4de(r31)
/* 8012D278  38 00 00 04 */	li r0, 4
/* 8012D27C  98 1F 2F 98 */	stb r0, 0x2f98(r31)
/* 8012D280  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 8012D284  D0 1F 33 98 */	stfs f0, 0x3398(r31)
/* 8012D288  7F E3 FB 78 */	mr r3, r31
/* 8012D28C  4B F8 65 B9 */	bl initServiceWaitTime__9daAlink_cFv
/* 8012D290  38 60 00 01 */	li r3, 1
lbl_8012D294:
/* 8012D294  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012D298  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012D29C  7C 08 03 A6 */	mtlr r0
/* 8012D2A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8012D2A4  4E 80 00 20 */	blr 
