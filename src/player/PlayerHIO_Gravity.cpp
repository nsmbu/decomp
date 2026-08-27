#include <player/PlayerHIO_Gravity.h>

const PlayerGravityData PlayerHIO_Gravity::cData[] = {
    // mario
    {
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
                -0.34f,
                -0.34f,
                -0.34f,
                -0.25f,
                -0.34f,
                -0.34f
            },
            // button_gravity
            {
                -0.06f,
                -0.25f,
                -0.34f,
                -0.08f,
                -0.31f,
                -0.34f
            }
        }
    },
    // mario mini
    {
        -0.09f, // gravity
        // jump_data
        {
            // thresholds
            {
                2.5f,
                1.5f,
                0.0f,
                -2.0f,
                -2.0f
            },
            // normal_gravity
            {
                -0.09f,
                -0.09f,
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
    },
    // luigi
    {
        -0.34f, // gravity
        // jump_data
        {
            // thresholds
            {
                1.6f,
                1.0f,
                0.25f,
                -0.18f,
                -3.0f
            },
            // normal_gravity
            {
                -0.18f,
                -0.25f,
                -0.34f,
                -0.25f,
                -0.34f,
                -0.34f
            },
            // button_gravity
            {
                -0.06f,
                -0.25f,
                -0.3f,
                -0.03f,
                -0.25f,
                -0.34f
            }
        }
    },
    // luigi mini
    {
        -0.09f, // gravity
        // jump_data
        {
            // thresholds
            {
                2.0f,
                1.2f,
                0.0f,
                -2.0f,
                -2.0f
            },
            // normal_gravity
            {
                -0.09f,
                -0.09f,
                -0.09f,
                -0.06f,
                -0.09f,
                -0.09f
            },
            // button_gravity
            {
                -0.035f,
                -0.05f,
                -0.075f,
                -0.06f,
                -0.09f,
                -0.09f
            }
        }
    },
    // Unk
    {
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
                -0.18f,
                -0.25f,
                -0.34f,
                -0.25f,
                -0.34f,
                -0.34f
            },
            // button_gravity
            {
                -0.06f,
                -0.1f,
                -0.1f,
                -0.08f,
                -0.1f,
                -0.34f
            }
        }
    },
    /* NSMBUDX additions
    // Peachette
    {
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
                -0.34f,
                -0.34f,
                -0.34f,
                -0.25f,
                -0.34f,
                -0.34f
            },
            // button_gravity
            {
                -0.06f,
                -0.25f,
                -0.34f,
                -0.08f,
                -0.31f,
                -0.34f
            }
        }
    },
    // Unk2
    {
        -0.34f, // gravity
        // jump_data
        {
            // thresholds
            {
                2.5f,
                -0.55f,
                -1.2f,
                -2.0f,
                -3.0f
            },
            // normal_gravity
            {
                -0.34f,
                -0.34f,
                -0.34f,
                -0.25f,
                -0.34f,
                -0.34f
            },
            // button_gravity
            {
                -0.06f,
                -0.25f,
                -0.34f,
                -0.08f,
                -0.31f,
                -0.34f
            }
        }
    },
    */
};

PlayerHIO_Gravity::PlayerHIO_Gravity(PlayerMgr& mgr)
{
}
