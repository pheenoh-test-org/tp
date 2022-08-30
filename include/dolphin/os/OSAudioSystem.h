#ifndef OSAUDIOSYSTEM_H
#define OSAUDIOSYSTEM_H

#include "dolphin/types.h"

#ifdef __cplusplus
extern "C" {
#endif

void __OSInitAudioSystem(void);
void __OSStopAudioSystem(void);

#ifdef __cplusplus
};
#endif

#endif /* OSAUDIOSYSTEM_H */
