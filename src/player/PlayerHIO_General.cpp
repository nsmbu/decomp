#include <player/PlayerHIO_General.h>

const s32 PlayerHIO_General::cMaxAngleZ_1 = 0x15555555; //  30 degrees
const s32 PlayerHIO_General::cMinAngleZ_1 = 0xE0000000; // -45 degrees

const s32 PlayerHIO_General::cMaxAngleZ_2 =  0xC16C16C; //  17 degrees
const s32 PlayerHIO_General::cMinAngleZ_2 = -0xC16C16C; // -17 degrees

const s32 PlayerHIO_General::cMaxAngleY = 0x505B05B0;   // 113 degrees

const f32 PlayerHIO_General::cSandSinkRate = -1.26f;

PlayerHIO_General::PlayerHIO_General(PlayerMgr& mgr)
{
}
