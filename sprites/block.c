#include <gb/gb.h>
#include "../sprites.h"

#include "../tiles/block.c"

uint8_t add_block_sprite(void)
{
    uint8_t sprite_id = get_sprites_count();
    increment_sprites_count();

    set_sprite_data(sprite_id, 1, BlockTile);
    set_sprite_tile(sprite_id, 0);

    return (sprite_id);
}