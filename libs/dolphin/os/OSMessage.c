//
// Generated By: dol2asm
// Translation Unit: OSMessage
//

#include "dolphin/os/OSMessage.h"
#include "dol2asm.h"
#include "dolphin/os/OSInterrupt.h"
#include "dolphin/os/OSThread.h"

//
// Declarations:
//

/* 8033E994-8033E9F4 3392D4 0060+00 0/0 13/13 5/5 .text            OSInitMessageQueue */
void OSInitMessageQueue(OSMessageQueue* mq, OSMessage* msgArray, s32 msgCount) {
    OSInitThreadQueue(&mq->sending_queue);
    OSInitThreadQueue(&mq->receiving_queue);
    mq->message_array = msgArray;
    mq->num_messages = msgCount;
    mq->first_index = 0;
    mq->num_used = 0;
}

/* 8033E9F4-8033EABC 339334 00C8+00 0/0 21/21 9/9 .text            OSSendMessage */
BOOL OSSendMessage(OSMessageQueue* mq, OSMessage msg, s32 flags) {
    BOOL enabled;
    s32 lastIndex;

    enabled = OSDisableInterrupts();

    while (mq->num_messages <= mq->num_used) {
        if (!(flags & OS_MESSAGE_BLOCK)) {
            OSRestoreInterrupts(enabled);
            return FALSE;
        } else {
            OSSleepThread(&mq->sending_queue);
        }
    }

    lastIndex = (mq->first_index + mq->num_used) % mq->num_messages;
    mq->message_array[lastIndex] = msg;
    mq->num_used++;

    OSWakeupThread(&mq->receiving_queue);

    OSRestoreInterrupts(enabled);
    return TRUE;
}

/* 8033EABC-8033EB98 3393FC 00DC+00 0/0 15/15 9/9 .text            OSReceiveMessage */
BOOL OSReceiveMessage(OSMessageQueue* mq, OSMessage* msg, s32 flags) {
    BOOL enabled;

    enabled = OSDisableInterrupts();

    while (mq->num_used == 0) {
        if (!(flags & OS_MESSAGE_BLOCK)) {
            OSRestoreInterrupts(enabled);
            return FALSE;
        } else {
            OSSleepThread(&mq->receiving_queue);
        }
    }

    if (msg != NULL) {
        *msg = mq->message_array[mq->first_index];
    }
    mq->first_index = (mq->first_index + 1) % mq->num_messages;
    mq->num_used--;

    OSWakeupThread(&mq->sending_queue);

    OSRestoreInterrupts(enabled);
    return TRUE;
}

/* 8033EB98-8033EC6C 3394D8 00D4+00 0/0 1/1 0/0 .text            OSJamMessage */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm BOOL OSJamMessage(OSMessageQueue* queue, OSMessage msg, s32 flags) {
    nofralloc
#include "asm/dolphin/os/OSMessage/OSJamMessage.s"
}
#pragma pop
