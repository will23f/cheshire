#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 _______   _________________________________________        ________________________________________________
|  grv  | | esc | 1   | 2   | 3   | 4   | 5   | 6   |      | 7   | 8   | 9   | 0   | -   | +   | \   |borked|
|_______| |_____|_____|_____|_____|_____|_____|_____|    __|_____|_____|_____|_____|_____|_____|_____|______|
| home  | |  tab   | q   | w   | e   | r   | t   |      | y   | u   | i   | o   | p   | [   | ]   |  bksp   |
|_______| |________|_____|_____|_____|_____|_____|_     |_____|_____|_____|_____|_____|_____|_____|_________|
| end   | |  ctl     | a   | s   | d   | f   | g   |      | h   | j   | k   | l   | ;   | '"  |     ent     |
|_______| |__________|_____|_____|_____|_____|_____|     _|_____|_____|_____|_____|_____|_____|_____________|
          |  shift   | z   | x   | c   | v   | b   |    |mo(1)| n   | m   | ,   | .   | /?  | shift | mo(1) |
          |__________|_____|_____|_____|_____|_____|    |_____|_____|_____|_____|_____|_____|_______|_______|
          | alt  |     | gui  |   space    | bksp |     |   space   | gui  |                        | alt   |
          |______|     |______|____________|______|     |___________|______|                        |_______|

  * * * * * * * * * *     split backspace layout is borked in REV1     * * * * * * * * * *
*/

[0] = KEYMAP( /* Default Layout - Split backspace layout */
    KC_GRV,     KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,          KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS,                     \
    KC_DEL,     KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,              \
    KC_UP,      KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,               KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE, KC_ENT,                    \
                KC_LSFT, KC_Z, KC_X, KC_C, KC_V,                     KC_B, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLASH, KC_RSFT, MO(1),    \
                KC_LALT, KC_LGUI, KC_SPC, KC_BSPC,                   KC_SPC, KC_RGUI, KC_RALT
    ),


  [1] = KEYMAP( /* Default Layout - Split backspace layout */
    KC_GRV,     KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,          KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_BSLS,                           \
    KC_DEL,     KC_CAPS, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, KC_UP, _______, KC_DEL,            \
    KC_UP,      _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, KC_LEFT, KC_RIGHT, _______,                 \
                _______, _______, _______, _______, _______,              _______, _______, _______, _______, _______, _______, KC_DOWN, KC_RSFT, _______,\
                _______, _______, _______, _______,                       _______, _______, _______
    ),
};


