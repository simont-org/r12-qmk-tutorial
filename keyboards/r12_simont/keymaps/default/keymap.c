#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_numpad_3x4k(
        KC_H      ,KC_F      ,KC_E      ,KC_ESCAPE , S(KC_1),   
        KC_X      ,KC_M      ,KC_D      ,KC_I      ,
        KC_1      ,KC_2      ,KC_3      ,KC_ENT    
        
    )
};

// function per simulare la rotella del mouse quando si ruota l'encoder

bool encoder_update_user(uint8_t i, bool cw) {
    tap_code16(cw ? KC_WH_D : KC_WH_U);   // scroll down / up
    return false;
}
