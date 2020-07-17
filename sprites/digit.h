#ifndef SPRITES__DIGIT_H
    #define SPRITES__DIGIT_H
    
    #include <stdint.h>

    uint8_t add_digit_sprite();

    void set_digit_to_unknown(uint8_t sprite_id);

    void set_digit(uint8_t sprite_id, uint8_t digit);

#endif