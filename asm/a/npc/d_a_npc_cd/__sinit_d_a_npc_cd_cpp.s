lbl_80157A10:
/* 80157A10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80157A14  7C 08 02 A6 */	mflr r0
/* 80157A18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80157A1C  3C 60 80 39 */	lis r3, l_resMANa@ha
/* 80157A20  38 83 2A 18 */	addi r4, r3, l_resMANa@l
/* 80157A24  80 04 00 00 */	lwz r0, 0(r4)
/* 80157A28  3C 60 80 3B */	lis r3, l_bmdTbl@ha
/* 80157A2C  94 03 3C 04 */	stwu r0, l_bmdTbl@l(r3)
/* 80157A30  80 04 00 18 */	lwz r0, 0x18(r4)
/* 80157A34  90 03 00 08 */	stw r0, 8(r3)
/* 80157A38  80 04 00 30 */	lwz r0, 0x30(r4)
/* 80157A3C  90 03 00 10 */	stw r0, 0x10(r3)
/* 80157A40  80 04 00 48 */	lwz r0, 0x48(r4)
/* 80157A44  90 03 00 18 */	stw r0, 0x18(r3)
/* 80157A48  80 04 00 60 */	lwz r0, 0x60(r4)
/* 80157A4C  90 03 00 20 */	stw r0, 0x20(r3)
/* 80157A50  80 04 00 78 */	lwz r0, 0x78(r4)
/* 80157A54  90 03 00 28 */	stw r0, 0x28(r3)
/* 80157A58  80 04 00 90 */	lwz r0, 0x90(r4)
/* 80157A5C  90 03 00 30 */	stw r0, 0x30(r3)
/* 80157A60  80 04 00 A8 */	lwz r0, 0xa8(r4)
/* 80157A64  90 03 00 38 */	stw r0, 0x38(r3)
/* 80157A68  80 04 00 C0 */	lwz r0, 0xc0(r4)
/* 80157A6C  90 03 00 40 */	stw r0, 0x40(r3)
/* 80157A70  80 04 00 D8 */	lwz r0, 0xd8(r4)
/* 80157A74  90 03 00 48 */	stw r0, 0x48(r3)
/* 80157A78  80 04 00 F0 */	lwz r0, 0xf0(r4)
/* 80157A7C  90 03 00 50 */	stw r0, 0x50(r3)
/* 80157A80  80 04 01 08 */	lwz r0, 0x108(r4)
/* 80157A84  90 03 00 58 */	stw r0, 0x58(r3)
/* 80157A88  80 04 01 20 */	lwz r0, 0x120(r4)
/* 80157A8C  90 03 00 60 */	stw r0, 0x60(r3)
/* 80157A90  80 04 01 38 */	lwz r0, 0x138(r4)
/* 80157A94  90 03 00 68 */	stw r0, 0x68(r3)
/* 80157A98  80 04 01 50 */	lwz r0, 0x150(r4)
/* 80157A9C  90 03 00 70 */	stw r0, 0x70(r3)
/* 80157AA0  80 04 01 68 */	lwz r0, 0x168(r4)
/* 80157AA4  90 03 00 78 */	stw r0, 0x78(r3)
/* 80157AA8  80 04 01 80 */	lwz r0, 0x180(r4)
/* 80157AAC  90 03 00 80 */	stw r0, 0x80(r3)
/* 80157AB0  80 04 01 98 */	lwz r0, 0x198(r4)
/* 80157AB4  90 03 00 88 */	stw r0, 0x88(r3)
/* 80157AB8  80 04 01 B0 */	lwz r0, 0x1b0(r4)
/* 80157ABC  90 03 00 90 */	stw r0, 0x90(r3)
/* 80157AC0  80 04 01 C8 */	lwz r0, 0x1c8(r4)
/* 80157AC4  90 03 00 98 */	stw r0, 0x98(r3)
/* 80157AC8  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80157ACC  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 80157AD0  80 04 01 F8 */	lwz r0, 0x1f8(r4)
/* 80157AD4  90 03 00 A8 */	stw r0, 0xa8(r3)
/* 80157AD8  80 04 02 10 */	lwz r0, 0x210(r4)
/* 80157ADC  90 03 00 B0 */	stw r0, 0xb0(r3)
/* 80157AE0  80 04 02 28 */	lwz r0, 0x228(r4)
/* 80157AE4  90 03 00 B8 */	stw r0, 0xb8(r3)
/* 80157AE8  80 04 02 40 */	lwz r0, 0x240(r4)
/* 80157AEC  90 03 00 C0 */	stw r0, 0xc0(r3)
/* 80157AF0  80 04 02 58 */	lwz r0, 0x258(r4)
/* 80157AF4  90 03 00 C8 */	stw r0, 0xc8(r3)
/* 80157AF8  80 04 02 70 */	lwz r0, 0x270(r4)
/* 80157AFC  90 03 00 D0 */	stw r0, 0xd0(r3)
/* 80157B00  80 04 02 88 */	lwz r0, 0x288(r4)
/* 80157B04  90 03 00 D8 */	stw r0, 0xd8(r3)
/* 80157B08  80 04 02 A0 */	lwz r0, 0x2a0(r4)
/* 80157B0C  90 03 00 E0 */	stw r0, 0xe0(r3)
/* 80157B10  80 04 02 B8 */	lwz r0, 0x2b8(r4)
/* 80157B14  90 03 00 E8 */	stw r0, 0xe8(r3)
/* 80157B18  38 64 00 00 */	addi r3, r4, 0
/* 80157B1C  80 03 00 04 */	lwz r0, 4(r3)
/* 80157B20  3C 60 80 3B */	lis r3, l_bmdTWTbl@ha
/* 80157B24  94 03 3C F4 */	stwu r0, l_bmdTWTbl@l(r3)
/* 80157B28  38 A4 00 18 */	addi r5, r4, 0x18
/* 80157B2C  80 05 00 04 */	lwz r0, 4(r5)
/* 80157B30  90 03 00 08 */	stw r0, 8(r3)
/* 80157B34  38 A4 00 30 */	addi r5, r4, 0x30
/* 80157B38  80 05 00 04 */	lwz r0, 4(r5)
/* 80157B3C  90 03 00 10 */	stw r0, 0x10(r3)
/* 80157B40  38 A4 00 48 */	addi r5, r4, 0x48
/* 80157B44  80 05 00 04 */	lwz r0, 4(r5)
/* 80157B48  90 03 00 18 */	stw r0, 0x18(r3)
/* 80157B4C  38 A4 00 60 */	addi r5, r4, 0x60
/* 80157B50  80 05 00 04 */	lwz r0, 4(r5)
/* 80157B54  90 03 00 20 */	stw r0, 0x20(r3)
/* 80157B58  38 A4 00 78 */	addi r5, r4, 0x78
/* 80157B5C  80 05 00 04 */	lwz r0, 4(r5)
/* 80157B60  90 03 00 28 */	stw r0, 0x28(r3)
/* 80157B64  38 A4 00 90 */	addi r5, r4, 0x90
/* 80157B68  80 05 00 04 */	lwz r0, 4(r5)
/* 80157B6C  90 03 00 30 */	stw r0, 0x30(r3)
/* 80157B70  38 A4 00 A8 */	addi r5, r4, 0xa8
/* 80157B74  80 05 00 04 */	lwz r0, 4(r5)
/* 80157B78  90 03 00 38 */	stw r0, 0x38(r3)
/* 80157B7C  38 A4 00 C0 */	addi r5, r4, 0xc0
/* 80157B80  80 05 00 04 */	lwz r0, 4(r5)
/* 80157B84  90 03 00 40 */	stw r0, 0x40(r3)
/* 80157B88  38 A4 00 D8 */	addi r5, r4, 0xd8
/* 80157B8C  80 05 00 04 */	lwz r0, 4(r5)
/* 80157B90  90 03 00 48 */	stw r0, 0x48(r3)
/* 80157B94  38 A4 00 F0 */	addi r5, r4, 0xf0
/* 80157B98  80 05 00 04 */	lwz r0, 4(r5)
/* 80157B9C  90 03 00 50 */	stw r0, 0x50(r3)
/* 80157BA0  38 A4 01 08 */	addi r5, r4, 0x108
/* 80157BA4  80 05 00 04 */	lwz r0, 4(r5)
/* 80157BA8  90 03 00 58 */	stw r0, 0x58(r3)
/* 80157BAC  38 A4 01 20 */	addi r5, r4, 0x120
/* 80157BB0  80 05 00 04 */	lwz r0, 4(r5)
/* 80157BB4  90 03 00 60 */	stw r0, 0x60(r3)
/* 80157BB8  38 A4 01 38 */	addi r5, r4, 0x138
/* 80157BBC  80 05 00 04 */	lwz r0, 4(r5)
/* 80157BC0  90 03 00 68 */	stw r0, 0x68(r3)
/* 80157BC4  38 A4 01 50 */	addi r5, r4, 0x150
/* 80157BC8  80 05 00 04 */	lwz r0, 4(r5)
/* 80157BCC  90 03 00 70 */	stw r0, 0x70(r3)
/* 80157BD0  38 A4 01 68 */	addi r5, r4, 0x168
/* 80157BD4  80 05 00 04 */	lwz r0, 4(r5)
/* 80157BD8  90 03 00 78 */	stw r0, 0x78(r3)
/* 80157BDC  38 A4 01 80 */	addi r5, r4, 0x180
/* 80157BE0  80 05 00 04 */	lwz r0, 4(r5)
/* 80157BE4  90 03 00 80 */	stw r0, 0x80(r3)
/* 80157BE8  38 A4 01 98 */	addi r5, r4, 0x198
/* 80157BEC  80 05 00 04 */	lwz r0, 4(r5)
/* 80157BF0  90 03 00 88 */	stw r0, 0x88(r3)
/* 80157BF4  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 80157BF8  80 05 00 04 */	lwz r0, 4(r5)
/* 80157BFC  90 03 00 90 */	stw r0, 0x90(r3)
/* 80157C00  38 A4 01 C8 */	addi r5, r4, 0x1c8
/* 80157C04  80 05 00 04 */	lwz r0, 4(r5)
/* 80157C08  90 03 00 98 */	stw r0, 0x98(r3)
/* 80157C0C  38 A4 01 E0 */	addi r5, r4, 0x1e0
/* 80157C10  80 05 00 04 */	lwz r0, 4(r5)
/* 80157C14  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 80157C18  38 A4 01 F8 */	addi r5, r4, 0x1f8
/* 80157C1C  80 05 00 04 */	lwz r0, 4(r5)
/* 80157C20  90 03 00 A8 */	stw r0, 0xa8(r3)
/* 80157C24  38 A4 02 10 */	addi r5, r4, 0x210
/* 80157C28  80 05 00 04 */	lwz r0, 4(r5)
/* 80157C2C  90 03 00 B0 */	stw r0, 0xb0(r3)
/* 80157C30  38 A4 02 28 */	addi r5, r4, 0x228
/* 80157C34  80 05 00 04 */	lwz r0, 4(r5)
/* 80157C38  90 03 00 B8 */	stw r0, 0xb8(r3)
/* 80157C3C  38 A4 02 40 */	addi r5, r4, 0x240
/* 80157C40  80 05 00 04 */	lwz r0, 4(r5)
/* 80157C44  90 03 00 C0 */	stw r0, 0xc0(r3)
/* 80157C48  38 A4 02 58 */	addi r5, r4, 0x258
/* 80157C4C  80 05 00 04 */	lwz r0, 4(r5)
/* 80157C50  90 03 00 C8 */	stw r0, 0xc8(r3)
/* 80157C54  38 A4 02 70 */	addi r5, r4, 0x270
/* 80157C58  80 05 00 04 */	lwz r0, 4(r5)
/* 80157C5C  90 03 00 D0 */	stw r0, 0xd0(r3)
/* 80157C60  38 A4 02 88 */	addi r5, r4, 0x288
/* 80157C64  80 05 00 04 */	lwz r0, 4(r5)
/* 80157C68  90 03 00 D8 */	stw r0, 0xd8(r3)
/* 80157C6C  38 A4 02 A0 */	addi r5, r4, 0x2a0
/* 80157C70  80 05 00 04 */	lwz r0, 4(r5)
/* 80157C74  90 03 00 E0 */	stw r0, 0xe0(r3)
/* 80157C78  38 84 02 B8 */	addi r4, r4, 0x2b8
/* 80157C7C  80 04 00 04 */	lwz r0, 4(r4)
/* 80157C80  90 03 00 E8 */	stw r0, 0xe8(r3)
/* 80157C84  3C 60 80 42 */	lis r3, l_Cd_HIO@ha
/* 80157C88  38 63 59 84 */	addi r3, r3, l_Cd_HIO@l
/* 80157C8C  4B FF F9 75 */	bl __ct__13daNpcCd_HIO_cFv
/* 80157C90  3C 80 80 15 */	lis r4, __dt__13daNpcCd_HIO_cFv@ha
/* 80157C94  38 84 79 64 */	addi r4, r4, __dt__13daNpcCd_HIO_cFv@l
/* 80157C98  3C A0 80 42 */	lis r5, lit_3974@ha
/* 80157C9C  38 A5 59 78 */	addi r5, r5, lit_3974@l
/* 80157CA0  48 20 9F 85 */	bl __register_global_object
/* 80157CA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80157CA8  7C 08 03 A6 */	mtlr r0
/* 80157CAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80157CB0  4E 80 00 20 */	blr 