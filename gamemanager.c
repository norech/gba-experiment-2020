#include <gb/gb.h>
#include "gamemanager.h"
#include "ui/scoreboard.h"

void start(state_t *state)
{    
    SHOW_SPRITES;
    start_scoreboard(state);
}

void update(state_t *state, uint8_t ticks)
{
    if ((ticks % 16) == 0)
    {
        (*state).score++;

        if ((*state).score > 255)
        {
            (*state).score = 0;
        }
    }

    update_scoreboard(state);
}
