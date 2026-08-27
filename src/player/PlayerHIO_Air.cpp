#include <player/PlayerHIO_Air.h>

const PlayerAirData PlayerHIO_Air::cData[2][2] = {
    // mario
    {
        // normal
        {
            0.000f, // x_accel_def
            0.080f, // x_accel_stage0
            0.030f, // x_accel_stage1
            0.060f, // x_accel_stage1_dush
            0.029f, // x_accel_stage2
            0.021f, // x_accel_stage3
            0.090f  // turn_decel
        },
        // star
        {
            0.000f, // x_accel_def
            0.110f, // x_accel_stage0
            0.040f, // x_accel_stage1
            0.078f, // x_accel_stage1_dush
            0.039f, // x_accel_stage2
            0.027f, // x_accel_stage3
            0.120f  // turn_decel
        }
    },
    // luigi
    {
        // normal
        {
            0.000f, // x_accel_def
            0.080f, // x_accel_stage0
            0.030f, // x_accel_stage1
            0.060f, // x_accel_stage1_dush
            0.029f, // x_accel_stage2
            0.021f, // x_accel_stage3
            0.070f  // turn_decel
        },
        // star
        {
            0.000f, // x_accel_def
            0.110f, // x_accel_stage0
            0.040f, // x_accel_stage1
            0.078f, // x_accel_stage1_dush
            0.039f, // x_accel_stage2
            0.027f, // x_accel_stage3
            0.120f  // turn_decel
        }
    }
};

PlayerHIO_Air::PlayerHIO_Air(PlayerMgr& mgr)
{
}
