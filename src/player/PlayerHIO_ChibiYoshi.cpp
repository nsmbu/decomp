#include <player/PlayerHIO_ChibiYoshi.h>

const f32 PlayerHIO_ChibiYoshi::cBalloonCYFlyAccelF = 0.02f;
const f32 PlayerHIO_ChibiYoshi::cBalloonCYFlyMaxSpeedF = 1.5f;

const f32 PlayerHIO_ChibiYoshi::cBalloonCYFlyInitSpeedY = 2.3f;
const f32 PlayerHIO_ChibiYoshi::cBalloonCYFlyInitSpeedYMax = 3.0f;
const f32 PlayerHIO_ChibiYoshi::cBalloonCYFlySmallInitSpeedYDecel = 0.6f;

const f32 PlayerHIO_ChibiYoshi::cBalloonCYFlySpinSpeedYMax = 3.0f;
const f32 PlayerHIO_ChibiYoshi::cBalloonCYFlySpinAddSpeedY = 4.0f;
const f32 PlayerHIO_ChibiYoshi::cBalloonCYFlySpinTrigSpeedY = 0.3f;

const s32 PlayerHIO_ChibiYoshi::cBalloonCYFlyAscendMinTime = 5;

const f32 PlayerHIO_ChibiYoshi::cBalloonCYFlyDescendStartSpeedY = 0.0f;
const f32 PlayerHIO_ChibiYoshi::cBalloonCYFlyAscendEndGravity = -0.03f;
const f32 PlayerHIO_ChibiYoshi::cBalloonCYFlyDescendGravity = -0.03f;

const f32 PlayerHIO_ChibiYoshi::cBalloonCYFlyMaxFallSpeed = -1.5f;

const s32 PlayerHIO_ChibiYoshi::cBalloonCYFlyAscendGravityTime = 10;
const f32 PlayerHIO_ChibiYoshi::cBalloonCYFlyAscendGravity = -0.2f;

const PlayerGravityData PlayerHIO_ChibiYoshi::cUnkGravityData = {
    -0.34f, // gravity
    // jump_data
    {
        // thresholds
        {
            2.5f,
            1.5f,
            0.3f,
            -0.12f,
            -3.0f
        },
        // normal_gravity
        {
            -0.04f,
            -0.06f,
            -0.09f,
            -0.06f,
            -0.09f,
            -0.09f
        },
        // button_gravity
        {
            -0.04f,
            -0.06f,
            -0.09f,
            -0.06f,
            -0.09f,
            -0.09f
        }
    }
};

PlayerHIO_ChibiYoshi::PlayerHIO_ChibiYoshi(PlayerMgr& mgr)
{
}
