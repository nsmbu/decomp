#include <player/PlayerHIO_Turn.h>

const PlayerTurnData PlayerHIO_Turn::cData[2] = {
    // mario
    {
        // normal
        {
            // normal
            {
                0.12f,  // normal
                0.12f,  // saka_up
                0.094f, // saka_down
                0.25f,  // air
            },
            // star
            {
                0.12f,  // normal
                0.12f,  // saka_up
                0.094f, // saka_down
                0.25f,  // air
            }
        },
        // ice
        {
            // normal
            {
                0.028f, // normal
                0.028f, // saka_up
                0.032f, // saka_down
                0.25f,  // air
            },
            // star
            {
                0.038f, // normal
                0.038f, // saka_up
                0.042f, // saka_down
                0.25f,  // air
            }
        },
        // snow
        {
            // normal
            {
                0.07f,  // normal
                0.07f,  // saka_up
                0.07f,  // saka_down
                0.25f,  // air
            },
            // star
            {
                0.07f,  // normal
                0.07f,  // saka_up
                0.07f,  // saka_down
                0.25f,  // air
            }
        }
    },
    // luigi
    {
        // normal
        {
            // normal
            {
                0.05f,  // normal
                0.05f,  // saka_up
                0.04f,  // saka_down
                0.25f,  // air
            },
            // star
            {
                0.12f,  // normal
                0.12f,  // saka_up
                0.094f, // saka_down
                0.25f,  // air
            }
        },
        // ice
        {
            // normal
            {
                0.028f, // normal
                0.028f, // saka_up
                0.032f, // saka_down
                0.25f,  // air
            },
            // star
            {
                0.038f, // normal
                0.038f, // saka_up
                0.042f, // saka_down
                0.25f,  // air
            }
        },
        // snow
        {
            // normal
            {
                0.07f,  // normal
                0.07f,  // saka_up
                0.07f,  // saka_down
                0.25f,  // air
            },
            // star
            {
                0.07f,  // normal
                0.07f,  // saka_up
                0.07f,  // saka_down
                0.25f,  // air
            }
        }
    },
    /* NSMBUDX additions
    // toadette
    {
        // normal
        {
            // normal
            {
                0.21f,      // normal
                0.21f,      // saka_up
                0.1645f,    // saka_down
                0.25f,      // air
            },
            // star
            {
                0.21f,      // normal
                0.21f,      // saka_up
                0.1645f,    // saka_down
                0.25f,      // air
            }
        },
        // ice
        {
            // normal
            {
                0.12f,  // normal
                0.12f,  // saka_up
                0.094f, // saka_down
                0.25f,  // air
            },
            // star
            {
                0.12f,  // normal
                0.12f,  // saka_up
                0.094f, // saka_down
                0.25f,  // air
            }
        },
        // snow
        {
            // normal
            {
                0.165f,     // normal
                0.165f,     // saka_up
                0.12925f,   // saka_down
                0.25f,      // air
            },
            // star
            {
                0.165f,     // normal
                0.165f,     // saka_up
                0.12925f,   // saka_down
                0.25f,      // air
            }
        }
    },
    // toadette star
    {
        // normal
        {
            // normal
            {
                0.0875f,    // normal
                0.0875f,    // saka_up
                0.07f,      // saka_down
                0.25f,      // air
            },
            // star
            {
                0.21f,      // normal
                0.21f,      // saka_up
                0.1645f,    // saka_down
                0.25f,      // air
            }
        },
        // ice
        {
            // normal
            {
                0.05f,  // normal
                0.05f,  // saka_up
                0.04f,  // saka_down
                0.25f,  // air
            },
            // star
            {
                0.12f,  // normal
                0.12f,  // saka_up
                0.094f, // saka_down
                0.25f,  // air
            }
        },
        // snow
        {
            // normal
            {
                0.06875f,   // normal
                0.06875f,   // saka_up
                0.055f,     // saka_down
                0.25f,      // air
            },
            // star
            {
                0.165f,     // normal
                0.165f,     // saka_up
                0.12925f,   // saka_down
                0.25f,      // air
            }
        }
    },
    // nabbit
    {
        // normal
        {
            // normal
            {
                0.21f,      // normal
                0.21f,      // saka_up
                0.1645f,    // saka_down
                0.25f,      // air
            },
            // star
            {
                0.21f,      // normal
                0.21f,      // saka_up
                0.1645f,    // saka_down
                0.25f,      // air
            }
        },
        // ice
        {
            // normal
            {
                0.12f,  // normal
                0.12f,  // saka_up
                0.094f, // saka_down
                0.25f,  // air
            },
            // star
            {
                0.12f,  // normal
                0.12f,  // saka_up
                0.094f, // saka_down
                0.25f,  // air
            }
        },
        // snow
        {
            // normal
            {
                0.165f,     // normal
                0.165f,     // saka_up
                0.12925f,   // saka_down
                0.25f,      // air
            },
            // star
            {
                0.165f,     // normal
                0.165f,     // saka_up
                0.12925f,   // saka_down
                0.25f,      // air
            }
        }
    },
    // nabbit star
    {
        // normal
        {
            // normal
            {
                0.0875f,    // normal
                0.0875f,    // saka_up
                0.07f,      // saka_down
                0.25f,      // air
            },
            // star
            {
                0.21f,      // normal
                0.21f,      // saka_up
                0.1645f,    // saka_down
                0.25f,      // air
            }
        },
        // ice
        {
            // normal
            {
                0.05f,  // normal
                0.05f,  // saka_up
                0.04f,  // saka_down
                0.25f,  // air
            },
            // star
            {
                0.12f,  // normal
                0.12f,  // saka_up
                0.094f, // saka_down
                0.25f,  // air
            }
        },
        // snow
        {
            // normal
            {
                0.06875f,   // normal
                0.06875f,   // saka_up
                0.055f,     // saka_down
                0.25f,      // air
            },
            // star
            {
                0.165f,     // normal
                0.165f,     // saka_up
                0.12925f,   // saka_down
                0.25f,      // air
            }
        }
    }
    */
};

PlayerHIO_Turn::PlayerHIO_Turn(PlayerMgr& mgr)
{
}
