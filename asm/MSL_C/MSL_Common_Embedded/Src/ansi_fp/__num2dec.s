lbl_80363124:
/* 80363124  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80363128  7C 08 02 A6 */	mflr r0
/* 8036312C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80363130  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80363134  7C 9F 23 78 */	mr r31, r4
/* 80363138  93 C1 00 08 */	stw r30, 8(r1)
/* 8036313C  AB C3 00 02 */	lha r30, 2(r3)
/* 80363140  7F E3 FB 78 */	mr r3, r31
/* 80363144  48 00 01 85 */	bl __num2dec_internal
/* 80363148  88 1F 00 05 */	lbz r0, 5(r31)
/* 8036314C  28 00 00 09 */	cmplwi r0, 9
/* 80363150  41 81 01 60 */	bgt lbl_803632B0
/* 80363154  7F C0 07 34 */	extsh r0, r30
/* 80363158  2C 00 00 24 */	cmpwi r0, 0x24
/* 8036315C  40 81 00 08 */	ble lbl_80363164
/* 80363160  3B C0 00 24 */	li r30, 0x24
lbl_80363164:
/* 80363164  7F C6 07 35 */	extsh. r6, r30
/* 80363168  40 81 00 E8 */	ble lbl_80363250
/* 8036316C  88 1F 00 04 */	lbz r0, 4(r31)
/* 80363170  7C 06 00 00 */	cmpw r6, r0
/* 80363174  40 80 00 DC */	bge lbl_80363250
/* 80363178  7C BF 32 14 */	add r5, r31, r6
/* 8036317C  88 05 00 05 */	lbz r0, 5(r5)
/* 80363180  28 00 00 05 */	cmplwi r0, 5
/* 80363184  40 81 00 0C */	ble lbl_80363190
/* 80363188  38 00 00 01 */	li r0, 1
/* 8036318C  48 00 00 64 */	b lbl_803631F0
lbl_80363190:
/* 80363190  40 80 00 0C */	bge lbl_8036319C
/* 80363194  38 00 FF FF */	li r0, -1
/* 80363198  48 00 00 58 */	b lbl_803631F0
lbl_8036319C:
/* 8036319C  88 7F 00 04 */	lbz r3, 4(r31)
/* 803631A0  38 85 00 06 */	addi r4, r5, 6
/* 803631A4  38 63 00 05 */	addi r3, r3, 5
/* 803631A8  7C 7F 1A 14 */	add r3, r31, r3
/* 803631AC  7C 04 18 50 */	subf r0, r4, r3
/* 803631B0  7C 09 03 A6 */	mtctr r0
/* 803631B4  7C 04 18 40 */	cmplw r4, r3
/* 803631B8  40 80 00 20 */	bge lbl_803631D8
lbl_803631BC:
/* 803631BC  88 04 00 00 */	lbz r0, 0(r4)
/* 803631C0  28 00 00 00 */	cmplwi r0, 0
/* 803631C4  41 82 00 0C */	beq lbl_803631D0
/* 803631C8  38 00 00 01 */	li r0, 1
/* 803631CC  48 00 00 24 */	b lbl_803631F0
lbl_803631D0:
/* 803631D0  38 84 00 01 */	addi r4, r4, 1
/* 803631D4  42 00 FF E8 */	bdnz lbl_803631BC
lbl_803631D8:
/* 803631D8  88 05 00 04 */	lbz r0, 4(r5)
/* 803631DC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803631E0  41 82 00 0C */	beq lbl_803631EC
/* 803631E4  38 00 00 01 */	li r0, 1
/* 803631E8  48 00 00 08 */	b lbl_803631F0
lbl_803631EC:
/* 803631EC  38 00 FF FF */	li r0, -1
lbl_803631F0:
/* 803631F0  2C 00 00 00 */	cmpwi r0, 0
/* 803631F4  98 DF 00 04 */	stb r6, 4(r31)
/* 803631F8  41 80 00 58 */	blt lbl_80363250
/* 803631FC  38 BF 00 05 */	addi r5, r31, 5
/* 80363200  38 86 FF FF */	addi r4, r6, -1
/* 80363204  7C 85 22 14 */	add r4, r5, r4
/* 80363208  38 00 00 00 */	li r0, 0
lbl_8036320C:
/* 8036320C  88 64 00 00 */	lbz r3, 0(r4)
/* 80363210  28 03 00 09 */	cmplwi r3, 9
/* 80363214  40 80 00 10 */	bge lbl_80363224
/* 80363218  38 03 00 01 */	addi r0, r3, 1
/* 8036321C  98 04 00 00 */	stb r0, 0(r4)
/* 80363220  48 00 00 30 */	b lbl_80363250
lbl_80363224:
/* 80363224  7C 04 28 40 */	cmplw r4, r5
/* 80363228  40 82 00 1C */	bne lbl_80363244
/* 8036322C  38 00 00 01 */	li r0, 1
/* 80363230  98 04 00 00 */	stb r0, 0(r4)
/* 80363234  A8 7F 00 02 */	lha r3, 2(r31)
/* 80363238  38 03 00 01 */	addi r0, r3, 1
/* 8036323C  B0 1F 00 02 */	sth r0, 2(r31)
/* 80363240  48 00 00 10 */	b lbl_80363250
lbl_80363244:
/* 80363244  98 04 00 00 */	stb r0, 0(r4)
/* 80363248  38 84 FF FF */	addi r4, r4, -1
/* 8036324C  4B FF FF C0 */	b lbl_8036320C
lbl_80363250:
/* 80363250  38 A0 00 00 */	li r5, 0
/* 80363254  48 00 00 18 */	b lbl_8036326C
lbl_80363258:
/* 80363258  88 9F 00 04 */	lbz r4, 4(r31)
/* 8036325C  38 64 00 01 */	addi r3, r4, 1
/* 80363260  38 04 00 05 */	addi r0, r4, 5
/* 80363264  98 7F 00 04 */	stb r3, 4(r31)
/* 80363268  7C BF 01 AE */	stbx r5, r31, r0
lbl_8036326C:
/* 8036326C  88 7F 00 04 */	lbz r3, 4(r31)
/* 80363270  7C 03 30 00 */	cmpw r3, r6
/* 80363274  41 80 FF E4 */	blt lbl_80363258
/* 80363278  A8 1F 00 02 */	lha r0, 2(r31)
/* 8036327C  38 63 FF FF */	addi r3, r3, -1
/* 80363280  38 A0 00 00 */	li r5, 0
/* 80363284  7C 03 00 50 */	subf r0, r3, r0
/* 80363288  B0 1F 00 02 */	sth r0, 2(r31)
/* 8036328C  48 00 00 18 */	b lbl_803632A4
lbl_80363290:
/* 80363290  38 85 00 05 */	addi r4, r5, 5
/* 80363294  38 A5 00 01 */	addi r5, r5, 1
/* 80363298  7C 7F 20 AE */	lbzx r3, r31, r4
/* 8036329C  38 03 00 30 */	addi r0, r3, 0x30
/* 803632A0  7C 1F 21 AE */	stbx r0, r31, r4
lbl_803632A4:
/* 803632A4  88 1F 00 04 */	lbz r0, 4(r31)
/* 803632A8  7C 05 00 00 */	cmpw r5, r0
/* 803632AC  41 80 FF E4 */	blt lbl_80363290
lbl_803632B0:
/* 803632B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803632B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803632B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803632BC  7C 08 03 A6 */	mtlr r0
/* 803632C0  38 21 00 10 */	addi r1, r1, 0x10
/* 803632C4  4E 80 00 20 */	blr 