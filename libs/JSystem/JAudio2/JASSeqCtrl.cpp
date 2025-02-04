//
// Generated By: dol2asm
// Translation Unit: JASSeqCtrl
//

#include "JSystem/JAudio2/JASSeqCtrl.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/JAudio2/JASSeqReader.h"
#include "JSystem/JAudio2/JASTrack.h"

//
// Types:
//

// TODO: Use JASSeqParser.hh when possible
struct JASSeqParser {
    /* 80293CAC */ inline virtual ~JASSeqParser() {}
    /* 802958D4 */ virtual int parse(JASTrack*);
    /* 80295540 */ virtual void execNoteOnMidi(JASTrack*, u32, u32, u32);
    /* 80295498 */ virtual void execNoteOnGate(JASTrack*, u32, u32, u32, u32);
    /* 80295570 */ virtual void execNoteOff(JASTrack*, u32);
    /* 8029559C */ virtual void execCommand(JASTrack*, s32 (JASSeqParser::*)(JASTrack*, u32*), u32, u32*);

    static u8 sCmdInfo[1536];
    static u8 sExtCmdInfo[4080];
    static u8 sCallBackFunc[4];
};

struct JASSeqCtrl {
    enum IntrType {
        INTRTYPE_VALUE_0,
        INTRTYPE_VALUE_1,
        INTRTYPE_VALUE_2,
        INTRTYPE_VALUE_3,
        INTRTYPE_VALUE_4,
        INTRTYPE_VALUE_5,
        INTRTYPE_VALUE_6,
    };

    /* 802938BC */ JASSeqCtrl();
    /* 80293924 */ void init();
    /* 80293980 */ void start(void*, u32);
    /* 802939C4 */ int tickProc(JASTrack*);
    /* 80293ABC */ void interrupt(JASSeqCtrl::IntrType);
    /* 80293AE0 */ void setIntrMask(u32);
    /* 80293AF0 */ void clrIntrMask(u32);
    /* 80293B00 */ int retIntr();
    /* 80293B28 */ int findIntr();
    /* 80293B78 */ void checkIntr();
    /* 80293BE8 */ void timerProcess();

    u32 get24(int param_0) {
        return mReader.get24(param_0);
    }

    /* 0x00 */ JASSeqReader mReader;
    /* 0x3c */ JASSeqParser* field_0x3c;
    /* 0x40 */ s32 field_0x40;
    /* 0x44 */ void* field_0x44;
    /* 0x48 */ u32 field_0x48;
    /* 0x4c */ u16 field_0x4c;
    /* 0x4e */ u16 field_0x4e;
    /* 0x50 */ u8 field_0x50;
    /* 0x51 */ u8 field_0x51;
    /* 0x52 */ u16 field_0x52;
    /* 0x54 */ u32 field_0x54;
    /* 0x58 */ u32 field_0x58;
    static JASSeqParser sDefaultParser;
};

//
// Forward References:
//

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 80451238-80451240 000738 0004+04 3/3 0/0 0/0 .sbss            sDefaultParser__10JASSeqCtrl */
JASSeqParser JASSeqCtrl::sDefaultParser;

/* 802938BC-80293924 28E1FC 0068+00 0/0 1/1 0/0 .text            __ct__10JASSeqCtrlFv */
JASSeqCtrl::JASSeqCtrl() {
    mReader.init();
    field_0x3c = &sDefaultParser;
    field_0x40 = 0;
    field_0x44 = NULL;
    field_0x48 = 0;
    field_0x4c = 0;
    field_0x4e = 0;
    field_0x50 = 0;
    field_0x51 = 0;
    field_0x54 = 0;
    field_0x58 = 0;
    mReader.init();
}

/* 80293924-80293980 28E264 005C+00 0/0 1/1 0/0 .text            init__10JASSeqCtrlFv */
void JASSeqCtrl::init() {
    mReader.init();
    field_0x3c = &sDefaultParser;
    field_0x40 = 0;
    field_0x44 = NULL;
    field_0x48 = 0;
    field_0x4c = 0;
    field_0x4e = 0;
    field_0x50 = 0;
    field_0x54 = 0;
    field_0x58 = 0;
    field_0x51 = 0;
}

/* 80293980-802939C4 28E2C0 0044+00 0/0 1/1 0/0 .text            start__10JASSeqCtrlFPvUl */
void JASSeqCtrl::start(void* param_0, u32 param_1) {
    mReader.init(param_0);
    mReader.jump(param_1);
}

/* 802939C4-80293ABC 28E304 00F8+00 0/0 1/1 0/0 .text            tickProc__10JASSeqCtrlFP8JASTrack
 */
int JASSeqCtrl::tickProc(JASTrack* param_0) {
    if (!mReader.getBase()) {
        return 0;
    }

    interrupt(INTRTYPE_VALUE_6);
    timerProcess();

    if (field_0x51) {
        if (!param_0->checkNoteStop(0)) {
            return 0;
        }

        field_0x51 = 0;
    }

    if (field_0x40 > 0) {
        field_0x40--;
    }

    checkIntr();

    while ((field_0x40 == 0 || field_0x44 != NULL) && field_0x51 == 0) {
        if (field_0x3c->parse(param_0) < 0) {
            return -1;
        }
    }
    
    return 0;
}

/* 80293ABC-80293AE0 28E3FC 0024+00 2/2 2/2 0/0 .text
 * interrupt__10JASSeqCtrlFQ210JASSeqCtrl8IntrType              */
void JASSeqCtrl::interrupt(JASSeqCtrl::IntrType param_0) {
    if (field_0x4e & (1 << param_0)) {
        field_0x4c |= (1 << param_0);
    }
}

/* 80293AE0-80293AF0 28E420 0010+00 0/0 1/1 0/0 .text            setIntrMask__10JASSeqCtrlFUl */
void JASSeqCtrl::setIntrMask(u32 param_0) {
    field_0x4e |= param_0;
}

/* 80293AF0-80293B00 28E430 0010+00 0/0 1/1 0/0 .text            clrIntrMask__10JASSeqCtrlFUl */
void JASSeqCtrl::clrIntrMask(u32 param_0) {
    field_0x4e &= ~param_0;
}

/* 80293B00-80293B28 28E440 0028+00 0/0 1/1 0/0 .text            retIntr__10JASSeqCtrlFv */
int JASSeqCtrl::retIntr() {
    if (field_0x44 == NULL) {
        return 0;
    }

    mReader.jump(field_0x44);
    field_0x44 = NULL;
    return 1;
}

/* 80293B28-80293B78 28E468 0050+00 1/1 0/0 0/0 .text            findIntr__10JASSeqCtrlFv */
int JASSeqCtrl::findIntr() {
    u32 uVar1 = field_0x4e & field_0x4c;
    for (int i = 0; uVar1 != 0; uVar1 >>= 1, i++) {
        if (uVar1 & 1) {
            field_0x4c &= ~(1 << i);
            return i;
        }
    }
    return -1;
}

/* 80293B78-80293BE8 28E4B8 0070+00 1/1 2/2 0/0 .text            checkIntr__10JASSeqCtrlFv */
void JASSeqCtrl::checkIntr() {
    if (field_0x44) return;
    int intr = findIntr();

    if (intr < 0) return;

    u32 uVar2 = field_0x48;
    uVar2 += intr * 3;
    u32 uVar1 = get24(uVar2);
    field_0x44 = mReader.getCur();
    mReader.jump(uVar1);
}

/* 80293BE8-80293C6C 28E528 0084+00 1/1 0/0 0/0 .text            timerProcess__10JASSeqCtrlFv */
void JASSeqCtrl::timerProcess() {
    if (field_0x54 == 0) return;
    
    field_0x54--;
    if (field_0x54) return;
    
    interrupt(INTRTYPE_VALUE_5);

    if (field_0x50) {
        field_0x50--;
        if (field_0x50) {
            field_0x54 = field_0x58;
        }
    } else {
        field_0x54 = field_0x58;
    }
}

/* ############################################################################################## */
