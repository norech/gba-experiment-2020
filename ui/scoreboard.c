#include <gb/gb.h>
#include <stdio.h>
#include <stdint.h>

#include "../gamemanager.h"
#include "../sprites.h"
#include "../sprites/digit.h"

uint8_t first_sprite;
uint8_t second_sprite;
uint8_t third_sprite;

void start_scoreboard(state_t *state)
{
    const uint8_t X_POS = MAX_X - 32;
    const uint8_t Y_POS = MIN_Y + 8;

    first_sprite = add_digit_sprite();
    move_sprite(first_sprite, X_POS, Y_POS);

    second_sprite = add_digit_sprite();
    move_sprite(second_sprite, X_POS + 8, Y_POS);

    third_sprite = add_digit_sprite();
    move_sprite(third_sprite, X_POS + 16, Y_POS);
}

void update_scoreboard(state_t *state)
{
    static uint8_t first = 0;
    static uint8_t second = 0;
    static uint8_t third = 0;

    static uint8_t old_score = 0;

    uint8_t score = (*state).score;

    if(score == old_score)
        return;

    uint8_t i = old_score;

    if(score < old_score) {
        i = 0;
        first = 0;
        second = 0;
        third = 0;
    }

    while(i < score) {
        third++;

        if(third > 9) {
            third = 0;
            second++;
        }

        if(second > 9) {
            second = 0;
            first++;
        }

        i++;
    }

    old_score = score;

    set_digit(first_sprite, first);
    set_digit(second_sprite, second);
    set_digit(third_sprite, third);
}