// Copyright 2026 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

// Miryoku-style keymap for SZR35 (3x5+3).
// Includes home-row mods, layered thumbs, and dedicated utility layers.

#include QMK_KEYBOARD_H

enum layers {
    _BASE,       // home-row mods
    _BASE_PLAIN, // no home-row mods
    _NAV,
    _MSE,
    _MED,
    _NUM,
    _SYM,
    _FUN,
};

// Home-row mods (GACS on alpha row).
#define HM_A LGUI_T(KC_A)
#define HM_S LALT_T(KC_S)
#define HM_D LCTL_T(KC_D)
#define HM_F LSFT_T(KC_F)

#define HM_J RSFT_T(KC_J)
#define HM_K RCTL_T(KC_K)
#define HM_L RALT_T(KC_L)
#define HM_SCLN RGUI_T(KC_SCLN)

// Layer-tap thumbs in a Miryoku-like arrangement.
// Left hand
#define LT_NUM LT(_NUM, KC_ESC)
#define LT_NAV LT(_NAV, KC_TAB)
#define LT_MSE LT(_MSE, KC_SPC)

// Right hand
#define LT_SYM LT(_SYM, KC_ENT)
#define LT_FUN LT(_FUN, KC_BSPC)
#define LT_MED LT(_MED, KC_DEL)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_split_3x5_3(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        HM_A,    HM_S,    HM_D,    HM_F,    KC_G,      KC_H,    HM_J,    HM_K,    HM_L,    HM_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                          LT_NUM,  LT_NAV,  LT_MSE,    LT_SYM,  LT_FUN,  LT_MED
    ),

    [_BASE_PLAIN] = LAYOUT_split_3x5_3(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                          LT_NUM,  LT_NAV,  LT_MSE,    LT_SYM,  LT_FUN,  LT_MED
    ),

    [_NAV] = LAYOUT_split_3x5_3(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   KC_COPY, KC_UNDO, XXXXXXX, XXXXXXX, KC_PASTE,
        _______, _______, _______, _______, _______,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
        XXXXXXX, KC_CUT, XXXXXXX, XXXXXXX, XXXXXXX,   KC_HOME, KC_PGDN, KC_PGUP, KC_END, XXXXXXX,
                          _______, _______, _______,   _______, _______, _______
    ),

    [_MSE] = LAYOUT_split_3x5_3(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   KC_COPY, KC_UNDO, XXXXXXX, XXXXXXX, KC_PASTE,
        _______, _______, _______, _______, _______,    MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT, XXXXXXX,
        XXXXXXX, KC_CUT, XXXXXXX, XXXXXXX, XXXXXXX,   MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, XXXXXXX,
                          _______, _______, _______,   MS_BTN1, MS_BTN2, MS_BTN3
    ),

    [_MED] = LAYOUT_split_3x5_3(
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MPLY,
        RM_TOGG, RM_HUED, RM_HUEU, RM_SATD, RM_SATU,   RM_VALD, RM_VALU, RM_NEXT, XXXXXXX, XXXXXXX,
                          _______, _______, _______,   _______, _______, _______
    ),

    [_NUM] = LAYOUT_split_3x5_3(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   KC_P7,   KC_P8,   KC_P9,   KC_PSLS, KC_PAST,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   KC_P4,   KC_P5,   KC_P6,   KC_PMNS, KC_BSPC,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   KC_P1,   KC_P2,   KC_P3,   KC_PPLS, XXXXXXX,
                          _______, _______, _______,   KC_P0,   KC_PDOT, KC_PENT
    ),

    [_SYM] = LAYOUT_split_3x5_3(
        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
        KC_GRV,  KC_TILD, KC_QUOT, KC_DQUO, KC_PIPE,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
        KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, XXXXXXX,   KC_LT,   KC_GT,   KC_COMM, KC_DOT,  KC_SLSH,
                          _______, _______, _______,   _______, _______, _______
    ),

    [_FUN] = LAYOUT_split_3x5_3(
        XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,     KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F10,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F11,
                          DF(_BASE_PLAIN), DF(_BASE), _______,   _______, _______, KC_F12
    )
};
// clang-format on

#ifdef RGB_MATRIX_ENABLE
// LEDs on the row *below* ASDF/JKL; — they shine up onto the home row keys.
// Z-row left:  [2,0]=14 [2,1]=13 [2,2]=12 [2,3]=11  (under A S D F)
// Z-row right: [6,1]=31 [6,2]=30 [6,3]=29 [6,4]=28  (under J K L ;)
static const uint8_t HOME_ROW_LEDS_LEFT[]  = {14, 13, 12, 11};
static const uint8_t HOME_ROW_LEDS_RIGHT[] = {31, 30, 29, 28};

static void set_leds_white(const uint8_t *leds, uint8_t count) {
    for (uint8_t i = 0; i < count; i++) {
        rgb_matrix_set_color(leds[i], RGB_WHITE);
    }
}

bool rgb_matrix_indicators_user(void) {
    if (layer_state_cmp(default_layer_state, _BASE)) {
        if (is_keyboard_left()) {
            set_leds_white(HOME_ROW_LEDS_LEFT, ARRAY_SIZE(HOME_ROW_LEDS_LEFT));
        } else {
            set_leds_white(HOME_ROW_LEDS_RIGHT, ARRAY_SIZE(HOME_ROW_LEDS_RIGHT));
        }
    }
    return true;
}
#endif
