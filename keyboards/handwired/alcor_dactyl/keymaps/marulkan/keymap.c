// Copyright 2022 Ethan (@rocketstrong)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

/*
 *          ┌──┐┌──┐┌──┐┌──┐┌──┐            ┌──┐┌──┐┌──┐┌──┐┌──┐
 *┌────┐┌──┐│  ││  ││  ││  ││  │            │  ││  ││  ││  ││  │┌──┐┌────┐
 *│    ││  │└──┘└──┘└──┘└──┘└──┘            └──┘└──┘└──┘└──┘└──┘│  ││    │
 *└────┘└──┘┌──┐┌──┐┌──┐┌──┐┌──┐            ┌──┐┌──┐┌──┐┌──┐┌──┐└──┘└────┘
 *┌────┐┌──┐│  ││  ││  ││  ││  │            │  ││  ││  ││  ││  │┌──┐┌────┐
 *│    ││  │└──┘└──┘└──┘└──┘└──┘            └──┘└──┘└──┘└──┘└──┘│  ││    │
 *└────┘└──┘┌──┐┌──┐┌──┐┌──┐┌──┐            ┌──┐┌──┐┌──┐┌──┐┌──┐└──┘└────┘
 *┌────┐┌──┐│  ││  ││  ││  ││  │            │  ││  ││  ││  ││  │┌──┐┌────┐
 *│    ││  │└──┘└──┘└──┘└──┘└──┘            └──┘└──┘└──┘└──┘└──┘│  ││    │
 *└────┘└──┘┌──┐┌──┐┌──┐┌──┐                    ┌──┐┌──┐┌──┐┌──┐└──┘└────┘
 *┌────┐┌──┐│  ││  ││  ││  │                    │  ││  ││  ││  │┌──┐┌────┐
 *│    ││  │└──┘└──┘└──┘└──┘                    └──┘└──┘└──┘└──┘│  ││    │
 *└────┘└──┘┌──┐┌──┐                                    ┌──┐┌──┐└──┘└────┘
 *  ┌──┐┌──┐│3 ││4 │  ┌──┐ ┌──┐              ┌──┐ ┌──┐  │5 ││6 │┌──┐┌──┐
 *  │1 ││2 │└──┘└──┘  │  │ │  │              │  │ │  │  └──┘└──┘│7 ││8 │
 *  └──┘└──┘          │a │ │e │              │h │ │d │          └──┘└──┘
 *                    │  │ └──┘              └──┘ │  │
 *                    └──┘ ┌──┐ ┌──┐    ┌──┐ ┌──┐ └──┘
 *                         │i │ │f │    │g │ │l │
 *                         └──┘ └──┘    └──┘ └──┘
 *                         ┌──┐┌──┐      ┌──┐┌──┐
 *                         │j ││b │      │c ││k │
 *                         └──┘└──┘      └──┘└──┘
 */
enum Marulkanlayers {
  _ARSTG,
  _NUMPAD,
  _SYMBOLS,
  _HERB
};

#define TG_NUM TG(_NUMPAD)
#define TG_SYM TG(_SYMBOLS)
#define OSL_HRB OSL(_HERB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ARSTG] = LAYOUT(
        TG_NUM,  KC_1,     KC_2,    KC_3,    KC_4,   KC_5,   KC_HOME,            KC_PGUP, KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    TG_SYM,
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,   KC_T,   KC_END,             KC_PGDN, KC_Y,    KC_U,   KC_I,    KC_O,    KC_SCLN, KC_BSLS,
        KC_ESC,  KC_A,     KC_S,    KC_D,    KC_F,   KC_G,   KC_INS,             KC_GRV,  KC_H,    KC_J,   KC_K,    KC_L,    KC_P,    KC_QUOT,
        KC_LSFT, KC_Z,     KC_X,    KC_C,    KC_V,   KC_B,                                KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LEFT, KC_RIGHT, KC_LBRC, KC_RBRC,                                                               KC_EQL,  KC_MINS, KC_UP,   KC_DOWN,

                        KC_BSPC, OSL_HRB, OSL_HRB, KC_SPC, KC_LSFT, KC_LCTL, KC_RCTL, KC_RSFT, KC_DEL, KC_LALT, KC_RALT, KC_ENT

    ),
    [_NUMPAD] = LAYOUT(
        TG_NUM  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   ,       KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , KC_NO   ,
        KC_TRNS , KC_PGUP , KC_HOME , KC_UP   , KC_END  , KC_NO   , KC_NO   ,       KC_NO   , KC_NUM  , KC_P7   , KC_P8   , KC_P9   , KC_PMNS , KC_NO   ,
        KC_TRNS , KC_PGDN , KC_LEFT , KC_DOWN , KC_RIGHT, KC_NO   , KC_TRNS ,       KC_TRNS , KC_PSLS , KC_P4   , KC_P5   , KC_P6   , KC_PPLS , KC_NO   ,
        KC_TRNS , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,                           KC_PAST , KC_P1   , KC_P2   , KC_P3   , KC_PEQL , KC_NO   ,
        KC_TRNS , KC_NO   , KC_NO   , KC_NO   ,                                                                   KC_P0   , KC_PDOT , KC_PCMM , KC_NO   ,
                                                        KC_TRNS , KC_TRNS ,           KC_TRNS , KC_PENT ,
                                                          KC_TRNS , KC_TRNS ,       KC_TRNS , KC_TRNS ,
                                                          KC_TRNS , KC_TRNS ,       KC_TRNS , KC_TRNS
    ),
    [_SYMBOLS] = LAYOUT(
        KC_NO   , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   ,       KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , TG_SYM  ,
        KC_TRNS , KC_QUOT , KC_LT   , KC_GT   , KC_DQT  , KC_DOT  , KC_NO   ,       KC_NO   , KC_AMPR , KC_TRNS , KC_LBRC , KC_RBRC , KC_PERC , KC_NO   ,
        KC_TRNS , KC_EXLM , KC_MINS , KC_PLUS , KC_EQL  , KC_HASH , KC_NO   ,       KC_NO   , KC_PIPE , KC_COLN , KC_LPRN , KC_RPRN , KC_QUES , KC_NO   ,
        KC_TRNS , KC_CIRC , KC_SLSH , KC_ASTR , KC_BSLS , KC_TRNS ,                           KC_TILD , KC_DLR  , KC_LCBR , KC_RCBR , KC_AT   , KC_NO   ,
        KC_TRNS , KC_NO   , KC_NO   , KC_NO   ,                                                                   KC_NO   , KC_NO   , KC_NO   , KC_NO   ,
                                                        KC_TRNS , KC_TRNS ,           KC_TRNS , KC_PENT ,
                                                          KC_TRNS , KC_TRNS ,       KC_TRNS , KC_TRNS ,
                                                          KC_TRNS , KC_TRNS ,       KC_TRNS , KC_TRNS
    ),
    [_HERB] = LAYOUT(
        TG_NUM,  G(KC_1),     G(KC_2,    G(KC_3,    G(KC_4,   G(KC_5,   KC_HOME,            KC_PGUP, G(KC_6,    G(KC_7,   G(KC_8),    G(KC_9),    G(KC_0),    TG_SYM,
        KC_TRNS, KC_Q,     KC_W,    KC_E,    KC_R,   KC_T,   KC_END,             KC_PGDN, KC_Y,    KC_U,   KC_I,    KC_O,    KC_SCLN, KC_BSLS,
        KC_TRNS, KC_A,     KC_S,    KC_D,    KC_F,   KC_G,   KC_INS,             KC_GRV,  KC_H,    KC_J,   KC_K,    KC_L,    KC_P,    KC_QUOT,
        KC_TRNS, KC_Z,     KC_X,    KC_C,    KC_V,   KC_B,                                KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_TRNS, KC_RIGHT, KC_LBRC, KC_RBRC,                                                               KC_EQL,  KC_MINS, KC_UP,   KC_DOWN,

                        KC_TRNS, OSL_HRB, OSL_HRB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

/*
|`LCTL(kc)`|`C(kc)`                           |Hold Left Control and press `kc`                      |
|`LSFT(kc)`|`S(kc)`                           |Hold Left Shift and press `kc`                        |
|`LALT(kc)`|`A(kc)`, `LOPT(kc)`               |Hold Left Alt and press `kc`                          |
|`LGUI(kc)`|`G(kc)`, `LCMD(kc)`, `LWIN(kc)`   |Hold Left GUI and press `kc`                          |
*/
