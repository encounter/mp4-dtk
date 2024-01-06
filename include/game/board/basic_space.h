#ifndef _BOARD_BASIC_SPACE_H
#define _BOARD_BASIC_SPACE_H

#include "dolphin.h"
#include "game/process.h"

extern Process *boardObjMan;

void BoardEventLandBlue(s32, s16);
void BoardEventLandRed(s32, s16);
s8 BoardCoinChgCreate(Vec*, s8);
s32 BoardCoinChgExist(s32);
void BoardCoinChgHide(s32);

#endif
