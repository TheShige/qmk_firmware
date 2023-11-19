// Copyright 2023 TheShige (@TheShige)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include <stdint.h>
#include "features/achordion.h"

#define ____ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
    KC_ESC, 	    KC_1,	        KC_2,	        KC_3,	        KC_4,	        KC_5,	        KC_MPLY,	KC_NO,	KC_6,	        KC_7,	        KC_8,		    KC_9,		    KC_0,		        KC_MINS,
    KC_TAB, 	    KC_Q,	        KC_W,           KC_F,           KC_P,           KC_B,                               KC_J, 	        KC_L,           KC_U,   	    KC_Y,   	    KC_SCLN,   	        KC_EQL,
	LT(4, KC_CAPS), LGUI_T(KC_A), 	LALT_T(KC_R),   LCTL_T(KC_S),   LSFT_T(KC_T),     KC_G,                      	    KC_M, 	        RSFT_T(KC_N),   RCTL_T(KC_E),   LALT_T(KC_I),	RGUI_T(KC_O),       KC_QUOT,
	KC_LCTL, 	    KC_Z, 	        KC_X,           KC_C,           KC_D,           KC_V,           TG(1),		TG(6),  KC_K, 	        KC_H,           KC_COMMA,	    KC_DOT, 	    KC_SLSH, 	        KC_DEL,
						            KC_LGUI,        MO(3),          KC_LCTL,        LT(3, KC_SPC),    	                LT(2, KC_ENT), 	KC_BSPC,        KC_DEL,         KC_RALT
	),

    [1] = LAYOUT(
    KC_ESC, 	    KC_1,	        KC_2,	        KC_3,	        KC_4,	        KC_5,	        ____,	    ____,	KC_6,	        KC_7,	        KC_8,		    KC_9,		    KC_0,		        KC_MINS,
    KC_TAB, 	    KC_Q,	        KC_W,           KC_E,           KC_R,           KC_T,                               KC_Y, 	        KC_U,           KC_I,   	    KC_O,   	    KC_P,   	        KC_EQL,
	LT(4, KC_CAPS), LGUI_T(KC_A), 	LALT_T(KC_S),   LCTL_T(KC_D),   LSFT_T(KC_F),     KC_G,                      	    KC_H, 	        RSFT_T(KC_J),   RCTL_T(KC_K),   LALT_T(KC_L),	RGUI_T(KC_SCLN),    KC_QUOT,
	KC_LCTL, 	    KC_Z, 	        KC_X,           KC_C,           KC_V,           KC_B,           TG(1),		TG(6),  KC_N, 	        KC_M,           KC_COMMA,	    KC_DOT, 	    KC_SLSH, 	        KC_DEL,
						            KC_LGUI,        MO(3),          KC_LCTL,        LT(3, KC_SPC),    	               LT(2, KC_ENT), 	KC_BSPC,        KC_DEL,         KC_RALT
	),

    [2] = LAYOUT(
    LSFT(KC_2),     KC_GRAVE,       LSFT(KC_9),     LSFT(KC_0),     KC_SCLN,        KC_COMMA,       ____,       ____,   ____,   ____,   ____,   ____,   ____,   ____,
	LSFT(KC_1),     LSFT(KC_LBRC),  KC_QUOT,        LSFT(KC_QUOT),  LSFT(KC_RBRC),  LSFT(KC_SLSH),                      ____,   ____,   ____,   ____,   ____,   ____,
	LSFT(KC_3),     LSFT(KC_6),     KC_EQL,         LSFT(KC_MINS),  LSFT(KC_4),     LSFT(KC_8),                         ____,   ____,   ____,   ____,   ____,   ____,
	LSFT(KC_GRV),   LSFT(KC_COMMA), LSFT(KC_BSLS),  KC_MINS,        LSFT(KC_DOT),   KC_SLSH,        ____,    ____,   ____,   ____,   ____,   ____,   ____,   ____,
	                                LSFT(KC_5),     KC_DOT,         LSFT(KC_SCLN),  KC_SCLN,                            ____,   ____,   ____,   ____
    ),

    [3] = LAYOUT(
    ____, ____, ____, ____, ____, ____, ____,        ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____,                    ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____,                    KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, ____, ____,
	____, ____, ____, ____, ____, ____, ____,        ____, KC_HOME, KC_PGUP, KC_PGDN, KC_END, ____, ____,
					  ____, ____, ____, ____,      	 ____, ____, ____, ____
    ),

    [4] = LAYOUT(
    ____, ____, ____, ____, ____, ____, ____,        ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____,                    LSFT_T(KC_5), KC_7, KC_8, KC_9, LSFT_T(KC_SCLN), ____,
	____, ____, ____, ____, ____, ____,                    LSFT_T(KC_EQL), KC_4, KC_5, KC_6, KC_MINS, ____,
	____, ____, ____, ____, ____, ____, ____,        ____, LSFT_T(KC_8), KC_1, KC_2, KC_3, KC_SLSH, ____,
					  ____, ____, ____, ____,      	 KC_0, ____, KC_EQL, ____
    ),

    [5] = LAYOUT(
    ____, ____, ____, ____, ____, ____, ____,        ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____,                    ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____,                    ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____,        ____, ____, ____, ____, ____, ____, ____,
					  ____, ____, ____, ____,      	 ____, ____, ____, ____
    ),

    [6] = LAYOUT(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, ____,        ____, KC_6, KC_7, KC_8, KC_9, KC_0, ____,
	KC_DEL, KC_TAB, KC_Q, KC_W, KC_E, KC_R,                    KC_Y, KC_U, KC_I, KC_O, KC_P, ____,
	KC_T, KC_LSFT, KC_A, KC_S, KC_D, KC_F,                    KC_H, KC_J, KC_K, KC_L, KC_SCLN, ____,
	KC_B, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_G,        TG(6), KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLSH, ____,
					  KC_Z, KC_LALT, KC_LCTL, KC_SPC,      	KC_ENT, ____, ____, ____
    ),


    [7] = LAYOUT(
    ____, ____, ____, ____, ____, ____, ____,        ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____,                    ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____,                    ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____,        ____, ____, ____, ____, ____, ____, ____,
					  ____, ____, ____, ____,      	 ____, ____, ____, ____
    ),
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [4] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [5] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [6] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [7] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};

// Combos setup

const uint16_t PROGMEM combo1[] = {LSFT(KC_6), KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo2[] = {KC_EQL, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo3[] = {LSFT(KC_MINS), KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo4[] = {LSFT(KC_4), KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo5[] = {LSFT(KC_8), KC_SCLN, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo1, KC_LBRC),
    COMBO(combo2, LSFT(KC_7)),
    COMBO(combo3, LSFT(KC_EQL)),
    COMBO(combo4, KC_RBRC),
    COMBO(combo5, KC_BSLS),
};

// Achordion setup

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
  switch (tap_hold_keycode) {
    case LT(2, KC_ENT):
      return 0;
  }

  return 800;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_achordion(keycode, record)) {
        return false;
    }

    return true;
}

void matrix_scan_user(void) {
    achordion_task();
}

// OLED setup

oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}
static void print_status_narrow(void) {
	// Create OLED content
    oled_advance_page(true);
    oled_write_P(PSTR("Lotus -58-"), false);
    oled_advance_page(true);

    // Print current layer
    oled_write_P(PSTR("Layer"), false);
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("-Clmk\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("-Qwer\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("-Symb\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("-Nav\n"), false);
            break;
        case 4:
            oled_write_P(PSTR("-Num\n"), false);
            break;
        case 5:
            oled_write_P(PSTR("-5\n"), false);
            break;
        case 6:
            oled_write_P(PSTR("-Game\n"), false);
            break;
        case 7:
            oled_write_P(PSTR("-7\n"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }

}

bool is_oled_enabled = true;

bool oled_task_user(void) {
    if (!is_keyboard_master()) {
        if (!is_oled_enabled) {
            oled_off();
            return false;
        } else  {
            oled_on();
        }

        print_status_narrow();
    }

	return false;
}

void housekeeping_task_user(void) {
    is_oled_enabled = (bool)(last_input_activity_elapsed() < 30000);
}
