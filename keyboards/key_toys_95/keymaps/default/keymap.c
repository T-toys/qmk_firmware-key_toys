#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define BASE  0
#define LOWER 1
#define RAISE 2 
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LAYOUT( 
	  KC_DEL,  KC_ESC,  KC_1,    KC_2,    KC_3,      KC_4,    KC_5,    KC_MINS, KC_EQL,  KC_PSLS, KC_PAST, KC_BSPC,    KC_6,    KC_7,    KC_8,      KC_9,    KC_0,    KC_BSPC, KC_DEL,\
    KC_BSLS, KC_TAB,  KC_Q,    KC_W,    KC_E,      KC_R,    KC_T,    KC_UP,   KC_P7,   KC_P8,   KC_P9,   KC_PMNS,    KC_Y,    KC_U,    KC_I,      KC_O,    KC_P,    KC_QUOT, KC_HOME,\
    KC_LBRC, KC_GRV,  KC_A,    KC_S,    KC_D,      KC_F,    KC_G,    KC_RGHT, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,    KC_H,    KC_J,    KC_K,      KC_L,    KC_SCLN, KC_ENT,  KC_PGUP,\
    KC_RBRC, KC_LSFT, KC_Z,    KC_X,    KC_C,      KC_V,    KC_B,    KC_LEFT, KC_P1,   KC_P2,   KC_P3,   KC_PENT,    KC_N,    KC_M,    KC_COMM,   KC_DOT,  KC_SLSH, KC_RSFT, KC_PGDN,\
    KC_PSCR, KC_LCTL, KC_LGUI, KC_LALT, MO(LOWER), KC_SPC,  KC_SPC,  KC_DOWN, KC_P0,   KC_PDOT, KC_COMM, S(KC_COLN), KC_SPC,  KC_SPC,  MO(LOWER), KC_RALT, KC_RGUI, KC_RCTL, KC_END \
  ),
  [LOWER] = LAYOUT(
    _______, _______, KC_F1,   KC_F2,   KC_F3,     KC_F4,   KC_F5,   _______, _______, _______, _______, _______,    KC_F6,   KC_F7,   KC_F8,     KC_F9,   KC_F10,  _______, _______,\
    _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______,   _______, _______, _______, _______,\
    _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______,   _______, _______, _______, _______,\
    _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______,   _______, _______, _______, _______,\
    _______, _______, _______, _______, KC_TRNS,   _______, _______, _______, _______, _______, _______, _______,    _______, _______, KC_TRNS,   _______, _______, _______, _______ \
  ),
  [RAISE] = LAYOUT(
    _______, _______, KC_F1,   KC_F2,   KC_F3,     KC_F4,   KC_F5,   _______, _______, _______, _______, _______,    KC_F6,   KC_F7,   KC_F8,     KC_F9,   KC_F10,  _______, _______,\
    _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______,   _______, _______, _______, _______,\
    _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______,   _______, _______, _______, _______,\
    _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______,   _______, _______, _______, _______,\
    _______, _______, _______, _______, KC_TRNS,   _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______,   _______, _______, _______, _______ \
  ),
};
