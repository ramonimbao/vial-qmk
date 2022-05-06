/* Copyright 2022 Ramon Imbao
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

#include "tkl_ff_v2040.h"

#ifdef RGBLIGHT_ENABLE
const rgblight_segment_t PROGMEM ll_cl[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_OFF}
);

const rgblight_segment_t PROGMEM ll_sl[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 1, HSV_OFF}
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(ll_cl, ll_sl);

void keyboard_post_init_kb(void) {
    rgblight_layers = rgb_layers;

    keyboard_post_init_user();
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);

    if (res) {
        rgblight_set_layer_state(0, !led_state.caps_lock);
        rgblight_set_layer_state(1, !led_state.scroll_lock);
    }

    return res;
}
#endif
