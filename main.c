#include <gb/gb.h>
#include "gamemanager.h"

void main(void)
{
    state_t state;

    start(&state);
    while(1) {
        update(&state);

        state.ticks += 1;
        if(state.ticks >= 255)
            state.ticks = 0;

        delay(1);
    }
}

