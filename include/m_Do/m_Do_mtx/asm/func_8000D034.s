/* 8000D034 00009F74  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8000D038 00009F78  7C 08 02 A6 */ mflr r0
/* 8000D03C 00009F7C  90 01 00 14 */ stw r0, 0x14(r1)
/* 8000D040 00009F80  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8000D044 00009F84  7C 7F 1B 79 */ or. r31, r3, r3
/* 8000D048 00009F88  41 82 00 10 */ beq lbl_8000D058
/* 8000D04C 00009F8C  7C 80 07 35 */ extsh. r0, r4
/* 8000D050 00009F90  40 81 00 08 */ ble lbl_8000D058
/* 8000D054 00009F94  48 2C 1C E9 */ bl __dl__FPv
lbl_8000D058:
/* 8000D058 00009F98  7F E3 FB 78 */ mr r3, r31
/* 8000D05C 00009F9C  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8000D060 00009FA0  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8000D064 00009FA4  7C 08 03 A6 */ mtlr r0
/* 8000D068 00009FA8  38 21 00 10 */ addi r1, r1, 0x10
/* 8000D06C 00009FAC  4E 80 00 20 */ blr