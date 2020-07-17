#ifndef GAMEMANAGER_H
    #define GAMEMANAGER_H
    
    #include <stdint.h>

    struct State {
        uint8_t score;
        uint8_t ticks;
    };

    typedef struct State state_t;

    void start(state_t *state);

    void update(state_t *state);

#endif