// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
// i dont know whats going on help me
#include QMK_KEYBOARD_H

enum custom_keycodes {
    ENC_SW = SAFE_RANGE
};

static bool leds_enabled = true;
static uint8_t led_brightness = 128;

void set_underlighting(void) {
    if (!leds_enabled) {
        rgblight_disable_noeeprom();
        return;
    }
    rgblight_enable_noeeprom();
    rgblight_sethsv_noeeprom(0, 0, led_brightness);
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (!leds_enabled) return false;

    if (clockwise) {
        if (led_brightness < 255) {
            led_brightness += 8;
        }
    } else {
        if (led_brightness > 0) {
            led_brightness -= 8;
        }
    }

    set_underlighting();
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed) return true;

    switch (keycode) {
        case ENC_SW:
            leds_enabled = !leds_enabled;
            set_underlighting();
            return false;
    }
    return true;
}

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
    RCTL(KC_R),          // reload
    KC_MUTE,             // mute
    C(S(KC_T)),          // terminal
    LGUI(KC_L),          // lock

    LCTL(LSFT(KC_I)),    // inspect
    LCTL(LALT(KC_S)),    // status
    LCTL(LALT(KC_P)),    // pull
    LCTL(LALT(KC_C))     // commit
)
}; // ngl i have no idea if this is gonna work T_T sorry in advance

