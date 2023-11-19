// Copyright 2023 TheShige (@TheShige)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Disabling Lock Key support
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

// Setting up split keyboard
#define SPLIT_HAND_PIN B5
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE

// OLED on slave side
#undef SPLIT_OLED_ENABLE
#define SPLIT_ACTIVITY_ENABLE
#define OLED_TIMEOUT 0
#define OLED_BRIGHTNESS 150

// Layer count
#define LAYER_STATE_8BIT
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

// Homerow mod
#define TAPPING_TERM 200

// Rgblight
#define RGBLIGHT_DEFAULT_VAL 87
#define RGBLIGHT_SLEEP
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_BREATHING
