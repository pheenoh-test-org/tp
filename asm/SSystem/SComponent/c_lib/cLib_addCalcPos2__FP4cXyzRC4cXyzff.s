lbl_80270178:
/* 80270178  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8027017C  7C 08 02 A6 */	mflr r0
/* 80270180  90 01 00 74 */	stw r0, 0x74(r1)
/* 80270184  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80270188  F3 E1 00 68 */	psq_st f31, 104(r1), 0, 0 /* qr0 */
/* 8027018C  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 80270190  F3 C1 00 58 */	psq_st f30, 88(r1), 0, 0 /* qr0 */
/* 80270194  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80270198  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8027019C  7C 7E 1B 78 */	mr r30, r3
/* 802701A0  7C 9F 23 78 */	mr r31, r4
/* 802701A4  FF C0 08 90 */	fmr f30, f1
/* 802701A8  FF E0 10 90 */	fmr f31, f2
/* 802701AC  4B FF 6E C1 */	bl __ne__4cXyzCFRC3Vec
/* 802701B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802701B4  41 82 01 74 */	beq lbl_80270328
/* 802701B8  38 61 00 24 */	addi r3, r1, 0x24
/* 802701BC  7F C4 F3 78 */	mr r4, r30
/* 802701C0  7F E5 FB 78 */	mr r5, r31
/* 802701C4  4B FF 69 71 */	bl __mi__4cXyzCFRC3Vec
/* 802701C8  38 61 00 18 */	addi r3, r1, 0x18
/* 802701CC  38 81 00 24 */	addi r4, r1, 0x24
/* 802701D0  FC 20 F0 90 */	fmr f1, f30
/* 802701D4  4B FF 69 B1 */	bl __ml__4cXyzCFf
/* 802701D8  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 802701DC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 802701E0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802701E4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802701E8  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 802701EC  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 802701F0  38 61 00 30 */	addi r3, r1, 0x30
/* 802701F4  48 0D 6F 45 */	bl PSVECSquareMag
/* 802701F8  C0 02 B7 E0 */	lfs f0, lit_2262(r2)
/* 802701FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80270200  40 81 00 58 */	ble lbl_80270258
/* 80270204  FC 00 08 34 */	frsqrte f0, f1
/* 80270208  C8 82 B7 E8 */	lfd f4, lit_2379(r2)
/* 8027020C  FC 44 00 32 */	fmul f2, f4, f0
/* 80270210  C8 62 B7 F0 */	lfd f3, lit_2380(r2)
/* 80270214  FC 00 00 32 */	fmul f0, f0, f0
/* 80270218  FC 01 00 32 */	fmul f0, f1, f0
/* 8027021C  FC 03 00 28 */	fsub f0, f3, f0
/* 80270220  FC 02 00 32 */	fmul f0, f2, f0
/* 80270224  FC 44 00 32 */	fmul f2, f4, f0
/* 80270228  FC 00 00 32 */	fmul f0, f0, f0
/* 8027022C  FC 01 00 32 */	fmul f0, f1, f0
/* 80270230  FC 03 00 28 */	fsub f0, f3, f0
/* 80270234  FC 02 00 32 */	fmul f0, f2, f0
/* 80270238  FC 44 00 32 */	fmul f2, f4, f0
/* 8027023C  FC 00 00 32 */	fmul f0, f0, f0
/* 80270240  FC 01 00 32 */	fmul f0, f1, f0
/* 80270244  FC 03 00 28 */	fsub f0, f3, f0
/* 80270248  FC 02 00 32 */	fmul f0, f2, f0
/* 8027024C  FC 21 00 32 */	fmul f1, f1, f0
/* 80270250  FC 20 08 18 */	frsp f1, f1
/* 80270254  48 00 00 88 */	b lbl_802702DC
lbl_80270258:
/* 80270258  C8 02 B7 F8 */	lfd f0, lit_2381(r2)
/* 8027025C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80270260  40 80 00 10 */	bge lbl_80270270
/* 80270264  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80270268  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 8027026C  48 00 00 70 */	b lbl_802702DC
lbl_80270270:
/* 80270270  D0 21 00 08 */	stfs f1, 8(r1)
/* 80270274  80 81 00 08 */	lwz r4, 8(r1)
/* 80270278  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8027027C  3C 00 7F 80 */	lis r0, 0x7f80
/* 80270280  7C 03 00 00 */	cmpw r3, r0
/* 80270284  41 82 00 14 */	beq lbl_80270298
/* 80270288  40 80 00 40 */	bge lbl_802702C8
/* 8027028C  2C 03 00 00 */	cmpwi r3, 0
/* 80270290  41 82 00 20 */	beq lbl_802702B0
/* 80270294  48 00 00 34 */	b lbl_802702C8
lbl_80270298:
/* 80270298  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8027029C  41 82 00 0C */	beq lbl_802702A8
/* 802702A0  38 00 00 01 */	li r0, 1
/* 802702A4  48 00 00 28 */	b lbl_802702CC
lbl_802702A8:
/* 802702A8  38 00 00 02 */	li r0, 2
/* 802702AC  48 00 00 20 */	b lbl_802702CC
lbl_802702B0:
/* 802702B0  54 80 02 7F */	clrlwi. r0, r4, 9
/* 802702B4  41 82 00 0C */	beq lbl_802702C0
/* 802702B8  38 00 00 05 */	li r0, 5
/* 802702BC  48 00 00 10 */	b lbl_802702CC
lbl_802702C0:
/* 802702C0  38 00 00 03 */	li r0, 3
/* 802702C4  48 00 00 08 */	b lbl_802702CC
lbl_802702C8:
/* 802702C8  38 00 00 04 */	li r0, 4
lbl_802702CC:
/* 802702CC  2C 00 00 01 */	cmpwi r0, 1
/* 802702D0  40 82 00 0C */	bne lbl_802702DC
/* 802702D4  3C 60 80 45 */	lis r3, __float_nan@ha
/* 802702D8  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_802702DC:
/* 802702DC  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 802702E0  40 81 00 38 */	ble lbl_80270318
/* 802702E4  38 61 00 0C */	addi r3, r1, 0xc
/* 802702E8  38 81 00 30 */	addi r4, r1, 0x30
/* 802702EC  4B FF 6A 45 */	bl normZP__4cXyzCFv
/* 802702F0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802702F4  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 802702F8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802702FC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80270300  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80270304  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80270308  38 61 00 30 */	addi r3, r1, 0x30
/* 8027030C  7C 64 1B 78 */	mr r4, r3
/* 80270310  FC 20 F8 90 */	fmr f1, f31
/* 80270314  48 0D 6D C5 */	bl PSVECScale
lbl_80270318:
/* 80270318  7F C3 F3 78 */	mr r3, r30
/* 8027031C  38 81 00 30 */	addi r4, r1, 0x30
/* 80270320  7F C5 F3 78 */	mr r5, r30
/* 80270324  48 0D 6D 91 */	bl PSVECSubtract
lbl_80270328:
/* 80270328  E3 E1 00 68 */	psq_l f31, 104(r1), 0, 0 /* qr0 */
/* 8027032C  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80270330  E3 C1 00 58 */	psq_l f30, 88(r1), 0, 0 /* qr0 */
/* 80270334  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80270338  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8027033C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80270340  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80270344  7C 08 03 A6 */	mtlr r0
/* 80270348  38 21 00 70 */	addi r1, r1, 0x70
/* 8027034C  4E 80 00 20 */	blr 