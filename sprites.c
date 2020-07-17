#include <gb/gb.h>
#include <stdint.h>
#include "sprites.h"

uint8_t sprites_count = 0;

uint8_t get_sprites_count(void)
{
    return (sprites_count);
}

void increment_sprites_count(void)
{
    sprites_count++;
}

void move_sprite_out_of_bounds(uint8_t sprite_id)
{
    move_sprite(sprite_id, 255, 255);
}

void clear_sprites(void)
{
    unsigned char empty_array[];

    for(uint8_t i = 0; i < sprites_count; i++)
    {
        move_sprite_out_of_bounds(i);
        set_sprite_tile(i, 0);
        set_sprite_data(i, 0, empty_array);
    }

    sprites_count = 0;
}