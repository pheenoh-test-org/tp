/* 8005A154 00057094  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8005A158 00057098  7C 08 02 A6 */ mflr r0
/* 8005A15C 0005709C  90 01 00 14 */ stw r0, 0x14(r1)
/* 8005A160 000570A0  4B FF F5 C9 */ bl wether_move_vrkumo
/* 8005A164 000570A4  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8005A168 000570A8  7C 08 03 A6 */ mtlr r0
/* 8005A16C 000570AC  38 21 00 10 */ addi r1, r1, 0x10
/* 8005A170 000570B0  4E 80 00 20 */ blr