#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qerty */
    KEYMAP_HHKBANANA(ESC, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, MINS, EQL, BSLS, \
           TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC, RBRC, BSPC, \
           CAPS,   A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT, ENT, PSCR, \
           LSFT,   Z,   X,   C,   V,   B,   N,   M,   COMM,DOT,SLSH,RSFT, \
           LCTL,  LGUI,  LALT, ENT,      FN0,      SPC,  RALT, RCTL,  LEFT, DOWN, RIGHT),
};

const action_t PROGMEM fn_actions[] = {
    [0]  = ACTION_BACKLIGHT_STEP()
};
