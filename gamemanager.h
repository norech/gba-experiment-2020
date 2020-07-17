#ifndef GAMEMANAGER_H
    #define GAMEMANAGER_H

    #include <stdint.h>

    struct State {
        uint8_t score;
    };

    typedef struct State state_t;

    void start(state_t *state);

    void update(state_t *state, uint8_t ticks);

#endif