//
// Generated By: dol2asm
// Translation Unit: JAISoundHandles
//

#include "JSystem/JAudio2/JAISoundHandles.h"
#include "dolphin/types.h"

//
// Forward References:
//

//
// Declarations:
//

/* 802A2C98-802A2CF4 29D5D8 005C+00 0/0 1/1 0/0 .text
 * getHandleSoundID__15JAISoundHandlesF10JAISoundID             */
JAISoundHandle* JAISoundHandles::getHandleSoundID(JAISoundID param_0) {
    for (int i = 0; i < numHandles_; i++) {
        if (mSoundHandle[i].isSoundAttached()) {
            if (JAISoundID(mSoundHandle[i]->soundID) == param_0) {
                return &mSoundHandle[i];
            }
        }
    }
    return NULL;
}

/* 802A2CF4-802A2D34 29D634 0040+00 0/0 2/2 0/0 .text            getFreeHandle__15JAISoundHandlesFv
 */
JAISoundHandle* JAISoundHandles::getFreeHandle() {
    for (int i = 0; i < numHandles_; i++) {
        if (!mSoundHandle[i].isSoundAttached()) {
            return &mSoundHandle[i];
        }
    }
    return NULL;
}
