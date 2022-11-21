/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ ~ │ \ │   │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤
     * │Tab  │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │Backs│Del│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │Cmd   │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │Enter   │PgU│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
     * │Shift   │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │Shift │ ↑ │PgD│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬─┬───┼───┼───┤
     * │Ctrl│Alt │Cmd │                        │Fn  │Cmd │ │ ← │ ↓ │ → │
     * └────┴────┴────┴────────────────────────┴────┴────┘ └───┴───┴───┘
     */
    [0] = LAYOUT_65_ansi_blocker_split_bs(
        KC_ESC,  KC_1,         KC_2,         KC_3,         KC_4,         KC_5, KC_6,         KC_7,         KC_8,         KC_9,         KC_0,            KC_MINS, KC_EQL,  KC_GRV, KC_BSLS, KC_NO,
        KC_TAB,  LSFT_T(KC_Q), LCTL_T(KC_W), LALT_T(KC_E), LGUI_T(KC_R), KC_T, KC_Y,         RGUI_T(KC_U), RALT_T(KC_I), RCTL_T(KC_O), RSFT_T(KC_P),    KC_LBRC, KC_RBRC, KC_BSPC,         KC_DEL,
        KC_LGUI, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H,         RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT,     KC_ENT,               KC_PGUP,
        KC_LSFT,               KC_Z,         KC_X,         KC_C,         KC_V, KC_B,         KC_N,         KC_M,         KC_COMM,      KC_DOT,          KC_SLSH, KC_RSFT,     KC_UP,       KC_PGDN,
        KC_LCTL, KC_LALT,      KC_LGUI,                                        LT(2,KC_SPC),                             MO(1),        KC_RGUI,                      KC_LEFT, KC_DOWN,     KC_RGHT
    ),

    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Fla│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│F13│F14│F15│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤
     * │     │   │   │   │   │   │   │   │   │   │   │   │   │Delet│Mut│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │Cmd   │ * │ * │ * │ * │   │   │   │   │   │   │   │Enter   │Vl+│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
     * │Shift   │   │   │   │   │   │   │   │   │   │   │Shift │PgU│Vl-│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬─┬───┼───┼───┤
     * │Ctrl│Alt │Cmd │                        │Fn  │    │ │Hom│PgD│End│
     * └────┴────┴────┴────────────────────────┴────┴────┘ └───┴───┴───┘
     */
    [1] = LAYOUT_65_ansi_blocker_split_bs(
        QK_BOOT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_MUTE,
        KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PENT, KC_VOLU,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_PGUP, KC_VOLD,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_HOME, KC_PGDN, KC_END
    ),

    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤
     * │     │   │   │   │   │   │   │Hom│ ↑ │End│PgU│   │   │     │   │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │      │ * │ * │ * │ * │   │   │ ← │ ↓ │ → │PgD│   │        │PgU│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
     * │        │   │   │   │   │   │   │   │DT-│DT+│DTP|      │   │PgD│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬─┬───┼───┼───┤
     * │    │    │    │                        │    │    │ │   │   │   │
     * └────┴────┴────┴────────────────────────┴────┴────┘ └───┴───┴───┘
     */
    [2] = LAYOUT_65_ansi_blocker_split_bs(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_NO, KC_NO, KC_PGUP,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DT_DOWN, DT_UP, DT_PRNT, KC_NO, KC_NO, KC_PGDN,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    )
};
