#include <player/PlayerHIO_Speed.h>

const f32 PlayerHIO_Speed::cMaxRunSpeedLo = 1.5f;
const f32 PlayerHIO_Speed::cMaxRunSpeedMd = 2.25f;
const f32 PlayerHIO_Speed::cMaxRunSpeedHi = 3.0f;
const f32 PlayerHIO_Speed::cMaxRunSpeedHi_Star = 4.0f;

const PlayerSpeedData PlayerHIO_Speed::cData[2 * 2 * 2] = {
    // mario mini
    {
        cMaxRunSpeedLo,
        cMaxRunSpeedMd,
        cMaxRunSpeedHi,
        // power_normal
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.15f,  // turn_decel
            0.07f,  // x_accel_stage0
            0.07f,  // x_accel_stage1
            0.043f, // x_accel_stage1_dush
            0.035f, // x_accel_stage2
            0.035f, // x_accel_stage3
        },
        // power_ice
        {
            0.013125f,  // x_accel_def
            0.01875f,   // stop_x_accel
            0.02625f,   // stop_turn_decel
            0.05625f,   // turn_decel
            0.0175f,    // x_accel_stage0
            0.0175f,    // x_accel_stage1
            0.01075f,   // x_accel_stage1_dush
            0.00875f,   // x_accel_stage2
            0.00875f,   // x_accel_stage3
        },
        // power_snow
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.15f,  // turn_decel
            0.07f,  // x_accel_stage0
            0.07f,  // x_accel_stage1
            0.043f, // x_accel_stage1_dush
            0.035f, // x_accel_stage2
            0.035f, // x_accel_stage3
        }
    },
    // mario mini star
    {
        cMaxRunSpeedLo,
        cMaxRunSpeedMd,
        cMaxRunSpeedHi_Star,
        // power_normal
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.15f,  // turn_decel
            0.07f,  // x_accel_stage0
            0.07f,  // x_accel_stage1
            0.043f, // x_accel_stage1_dush
            0.035f, // x_accel_stage2
            0.035f, // x_accel_stage3
        },
        // power_ice
        {
            0.013125f,  // x_accel_def
            0.01875f,   // stop_x_accel
            0.02625f,   // stop_turn_decel
            0.05625f,   // turn_decel
            0.0175f,    // x_accel_stage0
            0.0175f,    // x_accel_stage1
            0.01075f,   // x_accel_stage1_dush
            0.00875f,   // x_accel_stage2
            0.00875f,   // x_accel_stage3
        },
        // power_snow
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.15f,  // turn_decel
            0.07f,  // x_accel_stage0
            0.07f,  // x_accel_stage1
            0.043f, // x_accel_stage1_dush
            0.035f, // x_accel_stage2
            0.035f, // x_accel_stage3
        }
    },
    // mario
    {
        cMaxRunSpeedLo,
        cMaxRunSpeedMd,
        cMaxRunSpeedHi,
        // power_normal
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.1f,   // turn_decel
            0.1f,   // x_accel_stage0
            0.03f,  // x_accel_stage1
            0.06f,  // x_accel_stage1_dush
            0.029f, // x_accel_stage2
            0.021f, // x_accel_stage3
        },
        // power_ice
        {
            0.013f, // x_accel_def
            0.015f, // stop_x_accel
            0.018f, // stop_turn_decel
            0.021f, // turn_decel
            0.02f,  // x_accel_stage0
            0.03f,  // x_accel_stage1
            0.06f,  // x_accel_stage1_dush
            0.028f, // x_accel_stage2
            0.02f,  // x_accel_stage3
        },
        // power_snow
        {
            0.025f, // x_accel_def
            0.03f,  // stop_x_accel
            0.06f,  // stop_turn_decel
            0.08f,  // turn_decel
            0.1f,   // x_accel_stage0
            0.03f,  // x_accel_stage1
            0.06f,  // x_accel_stage1_dush
            0.029f, // x_accel_stage2
            0.021f, // x_accel_stage3
        }
    },
    // mario star
    {
        2.0f,   // max_run_speed_lo
        3.25f,  // max_run_speed_md
        cMaxRunSpeedHi_Star,
        // power_normal
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.13f,  // turn_decel
            0.13f,  // x_accel_stage0
            0.04f,  // x_accel_stage1
            0.078f, // x_accel_stage1_dush
            0.039f, // x_accel_stage2
            0.027f, // x_accel_stage3
        },
        // power_ice
        {
            0.013f,     // x_accel_def
            0.015f,     // stop_x_accel
            0.0245f,    // stop_turn_decel
            0.027f,     // turn_decel
            0.06f,      // x_accel_stage0
            0.04f,      // x_accel_stage1
            0.078f,     // x_accel_stage1_dush
            0.038f,     // x_accel_stage2
            0.026f,     // x_accel_stage3
        },
        // power_snow
        {
            0.025f, // x_accel_def
            0.03f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.13f,  // turn_decel
            0.13f,  // x_accel_stage0
            0.04f,  // x_accel_stage1
            0.078f, // x_accel_stage1_dush
            0.039f, // x_accel_stage2
            0.027f, // x_accel_stage3
        }
    },
    // luigi mini
    {
        cMaxRunSpeedLo,
        cMaxRunSpeedMd,
        cMaxRunSpeedHi,
        // power_normal
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.04f,  // turn_decel
            0.07f,  // x_accel_stage0
            0.07f,  // x_accel_stage1
            0.043f, // x_accel_stage1_dush
            0.035f, // x_accel_stage2
            0.035f, // x_accel_stage3
        },
        // power_ice
        {
            0.013125f,  // x_accel_def
            0.01875f,   // stop_x_accel
            0.02625f,   // stop_turn_decel
            0.05625f,   // turn_decel
            0.0175f,    // x_accel_stage0
            0.0175f,    // x_accel_stage1
            0.01075f,   // x_accel_stage1_dush
            0.00875f,   // x_accel_stage2
            0.00875f,   // x_accel_stage3
        },
        // power_snow
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.15f,  // turn_decel
            0.07f,  // x_accel_stage0
            0.07f,  // x_accel_stage1
            0.043f, // x_accel_stage1_dush
            0.035f, // x_accel_stage2
            0.035f, // x_accel_stage3
        }
    },
    // luigi mini star
    {
        cMaxRunSpeedLo,
        cMaxRunSpeedMd,
        cMaxRunSpeedHi_Star,
        // power_normal
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.15f,  // turn_decel
            0.07f,  // x_accel_stage0
            0.07f,  // x_accel_stage1
            0.043f, // x_accel_stage1_dush
            0.035f, // x_accel_stage2
            0.035f, // x_accel_stage3
        },
        // power_ice
        {
            0.013125f,  // x_accel_def
            0.01875f,   // stop_x_accel
            0.02625f,   // stop_turn_decel
            0.05625f,   // turn_decel
            0.0175f,    // x_accel_stage0
            0.0175f,    // x_accel_stage1
            0.01075f,   // x_accel_stage1_dush
            0.00875f,   // x_accel_stage2
            0.00875f,   // x_accel_stage3
        },
        // power_snow
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.15f,  // turn_decel
            0.07f,  // x_accel_stage0
            0.07f,  // x_accel_stage1
            0.043f, // x_accel_stage1_dush
            0.035f, // x_accel_stage2
            0.035f, // x_accel_stage3
        }
    },
    // luigi
    {
        cMaxRunSpeedLo,
        cMaxRunSpeedMd,
        cMaxRunSpeedHi,
        // power_normal
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.04f,  // turn_decel
            0.1f,   // x_accel_stage0
            0.03f,  // x_accel_stage1
            0.06f,  // x_accel_stage1_dush
            0.029f, // x_accel_stage2
            0.021f, // x_accel_stage3
        },
        // power_ice
        {
            0.013f, // x_accel_def
            0.015f, // stop_x_accel
            0.018f, // stop_turn_decel
            0.021f, // turn_decel
            0.02f,  // x_accel_stage0
            0.03f,  // x_accel_stage1
            0.06f,  // x_accel_stage1_dush
            0.028f, // x_accel_stage2
            0.02f,  // x_accel_stage3
        },
        // power_snow
        {
            0.025f, // x_accel_def
            0.03f,  // stop_x_accel
            0.06f,  // stop_turn_decel
            0.08f,  // turn_decel
            0.1f,   // x_accel_stage0
            0.03f,  // x_accel_stage1
            0.06f,  // x_accel_stage1_dush
            0.029f, // x_accel_stage2
            0.021f, // x_accel_stage3
        }
    },
    // luigi star
    {
        2.0f,   // max_run_speed_lo
        3.25f,  // max_run_speed_md
        cMaxRunSpeedHi_Star,
        // power_normal
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.13f,  // turn_decel
            0.13f,  // x_accel_stage0
            0.04f,  // x_accel_stage1
            0.078f, // x_accel_stage1_dush
            0.039f, // x_accel_stage2
            0.027f, // x_accel_stage3
        },
        // power_ice
        {
            0.013f,     // x_accel_def
            0.015f,     // stop_x_accel
            0.0245f,    // stop_turn_decel
            0.027f,     // turn_decel
            0.06f,      // x_accel_stage0
            0.04f,      // x_accel_stage1
            0.078f,     // x_accel_stage1_dush
            0.038f,     // x_accel_stage2
            0.026f,     // x_accel_stage3
        },
        // power_snow
        {
            0.025f, // x_accel_def
            0.03f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.13f,  // turn_decel
            0.13f,  // x_accel_stage0
            0.04f,  // x_accel_stage1
            0.078f, // x_accel_stage1_dush
            0.039f, // x_accel_stage2
            0.027f, // x_accel_stage3
        }
    },
    /* NSMBUDX additions
    // (toadette) mario mini
    {
        cMaxRunSpeedLo,
        cMaxRunSpeedMd,
        cMaxRunSpeedHi,
        // power_normal
        {
            0.049f,     // x_accel_def
            0.08335f,   // stop_x_accel
            0.08169f,   // stop_turn_decel
            0.45f,      // turn_decel
            0.07f,      // x_accel_stage0
            0.07f,      // x_accel_stage1
            0.043f,     // x_accel_stage1_dush
            0.035f,     // x_accel_stage2
            0.035f,     // x_accel_stage3
        },
        // power_ice
        {
            0.035f,     // x_accel_def
            0.05f,      // stop_x_accel
            0.07f,      // stop_turn_decel
            0.15f,      // turn_decel
            0.07f,      // x_accel_stage0
            0.07f,      // x_accel_stage1
            0.043f,     // x_accel_stage1_dush
            0.035f,     // x_accel_stage2
            0.035f,     // x_accel_stage3
        },
        // power_snow
        {
            0.042f,     // x_accel_def
            0.06665f,   // stop_x_accel
            0.07581f,   // stop_turn_decel
            0.225f,     // turn_decel
            0.07f,      // x_accel_stage0
            0.07f,      // x_accel_stage1
            0.043f,     // x_accel_stage1_dush
            0.035f,     // x_accel_stage2
            0.035f,     // x_accel_stage3
        }
    },
    // (toadette) mario mini star
    {
        cMaxRunSpeedLo,
        cMaxRunSpeedMd,
        cMaxRunSpeedHi_Star,
        // power_normal
        {
            0.049f,     // x_accel_def
            0.08335f,   // stop_x_accel
            0.08169f,   // stop_turn_decel
            0.45f,      // turn_decel
            0.07f,      // x_accel_stage0
            0.07f,      // x_accel_stage1
            0.043f,     // x_accel_stage1_dush
            0.035f,     // x_accel_stage2
            0.035f,     // x_accel_stage3
        },
        // power_ice
        {
            0.035f,     // x_accel_def
            0.05f,      // stop_x_accel
            0.07f,      // stop_turn_decel
            0.15f,      // turn_decel
            0.07f,      // x_accel_stage0
            0.07f,      // x_accel_stage1
            0.043f,     // x_accel_stage1_dush
            0.035f,     // x_accel_stage2
            0.035f,     // x_accel_stage3
        },
        // power_snow
        {
            0.042f,     // x_accel_def
            0.06665f,   // stop_x_accel
            0.07581f,   // stop_turn_decel
            0.225f,     // turn_decel
            0.07f,      // x_accel_stage0
            0.07f,      // x_accel_stage1
            0.043f,     // x_accel_stage1_dush
            0.035f,     // x_accel_stage2
            0.035f,     // x_accel_stage3
        }
    },
    // (toadette) mario
    {
        cMaxRunSpeedLo,
        cMaxRunSpeedMd,
        cMaxRunSpeedHi,
        // power_normal
        {
            0.049f,     // x_accel_def
            0.08335f,   // stop_x_accel
            0.08169f,   // stop_turn_decel
            0.3f,       // turn_decel
            0.1f,       // x_accel_stage0
            0.03f,      // x_accel_stage1
            0.06f,      // x_accel_stage1_dush
            0.029f,     // x_accel_stage2
            0.021f,     // x_accel_stage3
        },
        // power_ice
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.1f,   // turn_decel
            0.1f,   // x_accel_stage0
            0.03f,  // x_accel_stage1
            0.06f,  // x_accel_stage1_dush
            0.029f, // x_accel_stage2
            0.021f, // x_accel_stage3
        },
        // power_snow
        {
            0.042f,     // x_accel_def
            0.06665f,   // stop_x_accel
            0.07581f,   // stop_turn_decel
            0.15f,      // turn_decel
            0.1f,       // x_accel_stage0
            0.03f,      // x_accel_stage1
            0.06f,      // x_accel_stage1_dush
            0.029f,     // x_accel_stage2
            0.021f,     // x_accel_stage3
        }
    },
    // (toadette) mario star
    {
        2.0f,   // max_run_speed_lo
        3.25f,  // max_run_speed_md
        cMaxRunSpeedHi_Star,
        // power_normal
        {
            0.049f,     // x_accel_def
            0.08335f,   // stop_x_accel
            0.08169f,   // stop_turn_decel
            0.39f,      // turn_decel
            0.13f,      // x_accel_stage0
            0.04f,      // x_accel_stage1
            0.078f,     // x_accel_stage1_dush
            0.039f,     // x_accel_stage2
            0.027f,     // x_accel_stage3
        },
        // power_ice
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.13f,  // turn_decel
            0.13f,  // x_accel_stage0
            0.04f,  // x_accel_stage1
            0.078f, // x_accel_stage1_dush
            0.039f, // x_accel_stage2
            0.027f, // x_accel_stage3
        },
        // power_snow
        {
            0.042f,     // x_accel_def
            0.06665f,   // stop_x_accel
            0.07581f,   // stop_turn_decel
            0.195f,     // turn_decel
            0.13f,      // x_accel_stage0
            0.04f,      // x_accel_stage1
            0.078f,     // x_accel_stage1_dush
            0.039f,     // x_accel_stage2
            0.027f,     // x_accel_stage3
        }
    },
    // (toadette) luigi mini
    {
        cMaxRunSpeedLo,
        cMaxRunSpeedMd,
        cMaxRunSpeedHi,
        // power_normal
        {
            0.049f,     // x_accel_def
            0.08335f,   // stop_x_accel
            0.08169f,   // stop_turn_decel
            0.12f,      // turn_decel
            0.07f,      // x_accel_stage0
            0.07f,      // x_accel_stage1
            0.043f,     // x_accel_stage1_dush
            0.035f,     // x_accel_stage2
            0.035f,     // x_accel_stage3
        },
        // power_ice
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.04f,  // turn_decel
            0.07f,  // x_accel_stage0
            0.07f,  // x_accel_stage1
            0.043f, // x_accel_stage1_dush
            0.035f, // x_accel_stage2
            0.035f, // x_accel_stage3
        },
        // power_snow
        {
            0.042f,     // x_accel_def
            0.06665f,   // stop_x_accel
            0.07581f,   // stop_turn_decel
            0.06f,      // turn_decel
            0.07f,      // x_accel_stage0
            0.07f,      // x_accel_stage1
            0.043f,     // x_accel_stage1_dush
            0.035f,     // x_accel_stage2
            0.035f,     // x_accel_stage3
        }
    },
    // (toadette) luigi mini star
    {
        cMaxRunSpeedLo,
        cMaxRunSpeedMd,
        cMaxRunSpeedHi_Star,
        // power_normal
        {
            0.049f,     // x_accel_def
            0.08335f,   // stop_x_accel
            0.08169f,   // stop_turn_decel
            0.45f,      // turn_decel
            0.07f,      // x_accel_stage0
            0.07f,      // x_accel_stage1
            0.043f,     // x_accel_stage1_dush
            0.035f,     // x_accel_stage2
            0.035f,     // x_accel_stage3
        },
        // power_ice
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.15f,  // turn_decel
            0.07f,  // x_accel_stage0
            0.07f,  // x_accel_stage1
            0.043f, // x_accel_stage1_dush
            0.035f, // x_accel_stage2
            0.035f, // x_accel_stage3
        },
        // power_snow
        {
            0.042f,     // x_accel_def
            0.06665f,   // stop_x_accel
            0.07581f,   // stop_turn_decel
            0.225f,     // turn_decel
            0.07f,      // x_accel_stage0
            0.07f,      // x_accel_stage1
            0.043f,     // x_accel_stage1_dush
            0.035f,     // x_accel_stage2
            0.035f,     // x_accel_stage3
        }
    },
    // (toadette) luigi
    {
        cMaxRunSpeedLo,
        cMaxRunSpeedMd,
        cMaxRunSpeedHi,
        // power_normal
        {
            0.049f,     // x_accel_def
            0.08335f,   // stop_x_accel
            0.08169f,   // stop_turn_decel
            0.12f,      // turn_decel
            0.1f,       // x_accel_stage0
            0.03f,      // x_accel_stage1
            0.06f,      // x_accel_stage1_dush
            0.029f,     // x_accel_stage2
            0.021f,     // x_accel_stage3
        },
        // power_ice
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.04f,  // turn_decel
            0.1f,   // x_accel_stage0
            0.03f,  // x_accel_stage1
            0.06f,  // x_accel_stage1_dush
            0.029f, // x_accel_stage2
            0.021f, // x_accel_stage3
        },
        // power_snow
        {
            0.042f,     // x_accel_def
            0.06665f,   // stop_x_accel
            0.07581f,   // stop_turn_decel
            0.06f,      // turn_decel
            0.1f,       // x_accel_stage0
            0.03f,      // x_accel_stage1
            0.06f,      // x_accel_stage1_dush
            0.029f,     // x_accel_stage2
            0.021f,     // x_accel_stage3
        }
    },
    // (toadette) luigi star
    {
        2.0f,   // max_run_speed_lo
        3.25f,  // max_run_speed_md
        cMaxRunSpeedHi_Star,
        // power_normal
        {
            0.049f,     // x_accel_def
            0.08335f,   // stop_x_accel
            0.08169f,   // stop_turn_decel
            0.39f,      // turn_decel
            0.13f,      // x_accel_stage0
            0.04f,      // x_accel_stage1
            0.078f,     // x_accel_stage1_dush
            0.039f,     // x_accel_stage2
            0.027f,     // x_accel_stage3
        },
        // power_ice
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.13f,  // turn_decel
            0.13f,  // x_accel_stage0
            0.04f,  // x_accel_stage1
            0.078f, // x_accel_stage1_dush
            0.039f, // x_accel_stage2
            0.027f, // x_accel_stage3
        },
        // power_snow
        {
            0.042f,     // x_accel_def
            0.06665f,   // stop_x_accel
            0.07581f,   // stop_turn_decel
            0.195f,     // turn_decel
            0.13f,      // x_accel_stage0
            0.04f,      // x_accel_stage1
            0.078f,     // x_accel_stage1_dush
            0.039f,     // x_accel_stage2
            0.027f,     // x_accel_stage3
        }
    },
    // (nabbit) mario
    {
        cMaxRunSpeedLo,
        cMaxRunSpeedMd,
        cMaxRunSpeedHi,
        // power_normal
        {
            0.049f,     // x_accel_def
            0.08335f,   // stop_x_accel
            0.08169f,   // stop_turn_decel
            0.3f,       // turn_decel
            0.1f,       // x_accel_stage0
            0.03f,      // x_accel_stage1
            0.06f,      // x_accel_stage1_dush
            0.029f,     // x_accel_stage2
            0.021f,     // x_accel_stage3
        },
        // power_ice
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.1f,   // turn_decel
            0.1f,   // x_accel_stage0
            0.03f,  // x_accel_stage1
            0.06f,  // x_accel_stage1_dush
            0.029f, // x_accel_stage2
            0.021f, // x_accel_stage3
        },
        // power_snow
        {
            0.042f,     // x_accel_def
            0.06665f,   // stop_x_accel
            0.07581f,   // stop_turn_decel
            0.15f,      // turn_decel
            0.1f,       // x_accel_stage0
            0.03f,      // x_accel_stage1
            0.06f,      // x_accel_stage1_dush
            0.029f,     // x_accel_stage2
            0.021f,     // x_accel_stage3
        }
    },
    // (nabbit) mario star
    {
        2.0f,   // max_run_speed_lo
        3.25f,  // max_run_speed_md
        cMaxRunSpeedHi_Star,
        // power_normal
        {
            0.049f,     // x_accel_def
            0.08335f,   // stop_x_accel
            0.08169f,   // stop_turn_decel
            0.39f,      // turn_decel
            0.13f,      // x_accel_stage0
            0.04f,      // x_accel_stage1
            0.078f,     // x_accel_stage1_dush
            0.039f,     // x_accel_stage2
            0.027f,     // x_accel_stage3
        },
        // power_ice
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.13f,  // turn_decel
            0.13f,  // x_accel_stage0
            0.04f,  // x_accel_stage1
            0.078f, // x_accel_stage1_dush
            0.039f, // x_accel_stage2
            0.027f, // x_accel_stage3
        },
        // power_snow
        {
            0.042f,     // x_accel_def
            0.06665f,   // stop_x_accel
            0.07581f,   // stop_turn_decel
            0.195f,     // turn_decel
            0.13f,      // x_accel_stage0
            0.04f,      // x_accel_stage1
            0.078f,     // x_accel_stage1_dush
            0.039f,     // x_accel_stage2
            0.027f,     // x_accel_stage3
        }
    },
    // (nabbit) luigi
    {
        cMaxRunSpeedLo,
        cMaxRunSpeedMd,
        cMaxRunSpeedHi,
        // power_normal
        {
            0.049f,     // x_accel_def
            0.08335f,   // stop_x_accel
            0.08169f,   // stop_turn_decel
            0.12f,      // turn_decel
            0.1f,       // x_accel_stage0
            0.03f,      // x_accel_stage1
            0.06f,      // x_accel_stage1_dush
            0.029f,     // x_accel_stage2
            0.021f,     // x_accel_stage3
        },
        // power_ice
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.04f,  // turn_decel
            0.1f,   // x_accel_stage0
            0.03f,  // x_accel_stage1
            0.06f,  // x_accel_stage1_dush
            0.029f, // x_accel_stage2
            0.021f, // x_accel_stage3
        },
        // power_snow
        {
            0.042f,     // x_accel_def
            0.06665f,   // stop_x_accel
            0.07581f,   // stop_turn_decel
            0.06f,      // turn_decel
            0.1f,       // x_accel_stage0
            0.03f,      // x_accel_stage1
            0.06f,      // x_accel_stage1_dush
            0.029f,     // x_accel_stage2
            0.021f,     // x_accel_stage3
        }
    },
    // (nabbit) luigi star
    {
        2.0f,   // max_run_speed_lo
        3.25f,  // max_run_speed_md
        cMaxRunSpeedHi_Star,
        // power_normal
        {
            0.049f,     // x_accel_def
            0.08335f,   // stop_x_accel
            0.08169f,   // stop_turn_decel
            0.39f,      // turn_decel
            0.13f,      // x_accel_stage0
            0.04f,      // x_accel_stage1
            0.078f,     // x_accel_stage1_dush
            0.039f,     // x_accel_stage2
            0.027f,     // x_accel_stage3
        },
        // power_ice
        {
            0.035f, // x_accel_def
            0.05f,  // stop_x_accel
            0.07f,  // stop_turn_decel
            0.13f,  // turn_decel
            0.13f,  // x_accel_stage0
            0.04f,  // x_accel_stage1
            0.078f, // x_accel_stage1_dush
            0.039f, // x_accel_stage2
            0.027f, // x_accel_stage3
        },
        // power_snow
        {
            0.042f,     // x_accel_def
            0.06665f,   // stop_x_accel
            0.07581f,   // stop_turn_decel
            0.195f,     // turn_decel
            0.13f,      // x_accel_stage0
            0.04f,      // x_accel_stage1
            0.078f,     // x_accel_stage1_dush
            0.039f,     // x_accel_stage2
            0.027f,     // x_accel_stage3
        }
    },
    */
};

PlayerHIO_Speed::PlayerHIO_Speed(PlayerMgr& mgr)
{
}
