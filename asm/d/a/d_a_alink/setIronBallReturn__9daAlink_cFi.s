lbl_801126F8:
/* 801126F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801126FC  7C 08 02 A6 */	mflr r0
/* 80112700  90 01 00 14 */	stw r0, 0x14(r1)
/* 80112704  2C 04 00 00 */	cmpwi r4, 0
/* 80112708  41 82 00 1C */	beq lbl_80112724
/* 8011270C  A8 83 30 1E */	lha r4, 0x301e(r3)
/* 80112710  2C 04 00 00 */	cmpwi r4, 0
/* 80112714  41 82 00 10 */	beq lbl_80112724
/* 80112718  38 04 FF FF */	addi r0, r4, -1
/* 8011271C  B0 03 30 1E */	sth r0, 0x301e(r3)
/* 80112720  48 00 00 38 */	b lbl_80112758
lbl_80112724:
/* 80112724  A8 03 30 18 */	lha r0, 0x3018(r3)
/* 80112728  2C 00 00 07 */	cmpwi r0, 7
/* 8011272C  41 82 00 2C */	beq lbl_80112758
/* 80112730  38 00 00 07 */	li r0, 7
/* 80112734  B0 03 30 18 */	sth r0, 0x3018(r3)
/* 80112738  38 00 00 00 */	li r0, 0
/* 8011273C  B0 03 30 1E */	sth r0, 0x301e(r3)
/* 80112740  3C 80 00 02 */	lis r4, 0x0002 /* 0x00020033@ha */
/* 80112744  38 84 00 33 */	addi r4, r4, 0x0033 /* 0x00020033@l */
/* 80112748  81 83 06 28 */	lwz r12, 0x628(r3)
/* 8011274C  81 8C 01 18 */	lwz r12, 0x118(r12)
/* 80112750  7D 89 03 A6 */	mtctr r12
/* 80112754  4E 80 04 21 */	bctrl 
lbl_80112758:
/* 80112758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011275C  7C 08 03 A6 */	mtlr r0
/* 80112760  38 21 00 10 */	addi r1, r1, 0x10
/* 80112764  4E 80 00 20 */	blr 