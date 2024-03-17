#ifndef __SCOREMGN_H
#define __SCOREMGN_H

#include <game.h>

extern "C" int LivesArray[4]; // 0x80355190
extern "C" uint CharIDArray[4]; // 0x80355160
extern "C" int MaxLives; // 0x80427c00

class dScoreMng_c {
    u32 field0_0x0;
};

#endif // __SCOREMGN_H
