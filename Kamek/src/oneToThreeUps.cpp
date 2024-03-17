
#include <game.h>
#include <dScoreMgn_c.h>

extern "C" void daEnItem_cOneUp(dScoreMng_c *scoreMgr, uint flags, int playerID, int playsound); // 0x800e25a0


void replaceOneToThreeUps(dScoreMng_c *scoreMgr, uint flags, int playerID, int playsound) {
    daEnItem_cOneUp(scoreMgr, flags, playerID, playsound);
    LivesArray[CharIDArray[playerID]] = min(LivesArray[CharIDArray[playerID]] + 2, MaxLives);
}
