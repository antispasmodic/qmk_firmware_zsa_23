/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */



#include QMK_KEYBOARD_H
#include "version.h"

#include "generated_custom_keycodes.c"

#ifdef KEY_OVERRIDE_ENABLE
#include "generated_key_overrides.c"
#endif

#ifdef RGB_MATRIX_CUSTOM_KB
#include "generated_rgb_matrix.c"
#include "static_rgb_matrix.c"
#endif

#include "generated_macros.c"
#include "generated_keymap.c"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_macro(keycode, record)) {
        return false;
    }
    /*
    if (record->event.pressed) {
        switch (keycode) {
        case VERSION:
            SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
            return false;
        }
    }
    */
    return true;
}
