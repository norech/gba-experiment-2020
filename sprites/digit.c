#include <gb/gb.h>
#include <stdio.h>
#include "../sprites.h"

#include "../tiles/digit.c"

void set_digit_to_unknown(uint8_t sprite_id)
{
    set_sprite_tile(sprite_id, 12);
}

uint8_t add_digit_sprite()
{
    uint8_t sprite_id = get_sprites_count();
    increment_sprites_count();

    set_sprite_data(sprite_id, 11, DigitTile);
    set_digit_to_unknown(sprite_id);

    return (sprite_id);
}

void set_digit(uint8_t sprite_id, uint8_t digit)
{
    if(digit > 9) {
        set_digit_to_unknown(sprite_id);
        return;
    }

    set_sprite_tile(sprite_id, digit + 2);
}