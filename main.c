#include <gb/gb.h>
#include "gamemanager.h"

uint8_t ticks = 0;

void main(void)
{
    state_t state;

    start(&state);

    while (1)
    {
        update(&state, ticks);

        ticks += 1;
        if(ticks >= 255)
            ticks = 0;

        delay(1);
    }
}

