#include <gb/gb.h>
#include "gamemanager.h"

state_t state;
uint8_t ticks = 0;

void main(void)
{
    start(&state);

    while (TRUE)
    {
        tick();
    }
}


void tick(void)
{
    update(&state, ticks);

    ticks += 1;
    if(ticks >= 255)
        ticks = 0;

    delay(1);
}
