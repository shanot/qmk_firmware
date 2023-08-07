#include QMK_KEYBOARD_H


#define H_A     LCTL_T(KC_A)
#define H_S     LALT_T(KC_S)
#define H_D     LGUI_T(KC_D)
#define H_F     LSFT_T(KC_F)
#define H_J     RSFT_T(KC_J)
#define H_K     LGUI_T(KC_K)
#define H_L     RALT_T(KC_L)
#define H_SCLN  RCTL_T(KC_SCLN)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,  KC_I,    KC_O,   KC_P,
    H_A,     H_S,     H_D,     H_F,     KC_G,            KC_H,    H_J,   H_K,     H_L,    H_SCLN,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M,  KC_COMM, KC_DOT, KC_SLSH,
                               MO(2), LT(1,KC_TAB), LT(4,KC_SPC), MO(3)
  ),

  [1] = LAYOUT(
    _______, KC_HOME, KC_UP,   KC_PGUP, KC_VOLU,         _______, KC_HOME, KC_PGUP, KC_VOLU, _______,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_VOLD,         KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
    _______, KC_END,  _______, KC_PGDN, KC_MUTE,         _______, KC_END,  KC_PGDN, KC_VOLD, _______,
                                    _______, _______, KC_ENT,  KC_DEL  
  ),

  [2] = LAYOUT(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,         KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,         _______, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
                                    _______, _______, _______, _______  
	),

  [3] = LAYOUT(
    KC_GRV,  _______, _______, KC_LBRC, KC_ASTR,         KC_SLSH, KC_RBRC, _______, _______, KC_BSLS,
    _______, _______, KC_QUOT, SC_LSPO, KC_UNDS,         KC_EQL,  SC_RSPC, KC_DQUO, _______, KC_QUOT,
    _______, _______, _______, KC_LCBR, KC_MINS,         KC_PLUS, KC_RCBR, _______, _______, KC_ENT,
                                    _______, _______, _______, _______  
  ),
};


#include "g/keymap_combo.h"
