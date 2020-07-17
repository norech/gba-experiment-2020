#ifndef SPRITES_H
    #define SPRITES_H
    
    #include <stdint.h>

    const uint8_t MIN_X = 8;
    const uint8_t MIN_Y = 16;
    const uint8_t MAX_X = 168;
    const uint8_t MAX_Y = 160;

    uint8_t get_sprites_count(void);
    void increment_sprites_count(void);

    void move_sprite_out_of_bounds(uint8_t sprite_id);

    void clear_sprites(void);
    
#endif