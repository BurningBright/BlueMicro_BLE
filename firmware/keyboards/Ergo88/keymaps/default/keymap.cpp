/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"

#if KEYBOARD_SIDE == LEFT

/* QWERTY
  * .-------------------------------------------------------.    .-------------------------------------------------------.
  * | Esc  |   F1 |   F2 |   F3 |   F4 |   F5 |   F6 | PgUp |    |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 | HOME |  END |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |   `  |   1  |   2  |   3  |   4  |   5  |   6  | PgDn |    |      |   7  |   8  |   9  |   0  |   -  |   +  | BSPC |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * | TAB  |      |   Q  |   W  |   E  |   R  |   T  | BSPC |    |   Y  |   U  |   I  |   O  |   P  |   [  |   ]  |   |  |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * | CAP  |      |   A  |   S  |   D  |   F  |   G  | Del  |    |      |   H  |   J  |   K  |   L  |   ;  |   ,  |  Ent |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |      | Shift|   Z  |   X  |   C  |   V  |   B  | Ent  |    |  GUI |   N  |   M  |   ,  |   .  |   /  |      | Shift|
  * |-------------------------------------------------------|    |-------------------------------------------------------|
  * | Ctrl |  GUI |      |  Alt | HOME |  END | Space| SLine|    |      | Space| Left |  Up  | Down | Right| Ins  | Ctrl |
  * `-------------------------------------------------------'    `-------------------------------------------------------'
  */

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
  {KEYMAP(
      KC_ESC,       KC_F1,         KC_F2,      KC_F3,     KC_F4,          KC_F5,          KC_F6,     KC_PGUP,
      KC_GRAVE,     KC_1,          KC_2,       KC_3,      KC_4,           KC_5,           KC_6,      KC_PGDN,
      KC_TAB,       _______,       KC_Q,       KC_W,      KC_E,           KC_R,           KC_T,      KC_BSPC,
      KC_CAPS,      _______,       KC_A,       KC_S,      KC_D,           KC_F,           KC_G,      KC_DEL,
      _______,      KC_LSFT,       KC_Z,       KC_X,      KC_C,           KC_V,           KC_B,      KC_ENT,
      KC_LCTL,      KC_LGUI,       _______,    KC_LALT,   KC_HOME,        KC_END,         KC_SPC,    MC_SLINE
  )};


void setupKeymap() {

/* layer1 - function
  * .-------------------------------------------------------.    .-------------------------------------------------------.
  * |  NO  |  NO  |  PS  |  NO  |  NO  |  NO  |  NO  |  NO  |    |  DFU |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |    |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |  NO  |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |    |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |  NO  |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |    |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |    |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |      |  NO  |
  * |-------------------------------------------------------|    |-------------------------------------------------------|
  * |  NO  |  NO  |      |  NO  |  NO  |  NO  |  NO  |  NO  |    |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |
  * `-------------------------------------------------------'    `-------------------------------------------------------'
  */

    uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
            KC_NO,    KC_NO,      KC_NO,      KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,
            KC_NO,    KC_NO,      KC_NO,      KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,
            KC_NO,    _______,    KC_NO,      KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,
            KC_NO,    _______,    KC_NO,      KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,
            _______,    KC_NO,    KC_NO,      KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,
            KC_NO,    KC_NO,      _______,    KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO
        );

    /*
     * add the other layers
     */
    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            matrix[row][col].addActivation(_L1, Method::PRESS, layer1[row][col]);
        }
    }

}

#endif //left



#if KEYBOARD_SIDE == RIGHT

/* QWERTY
  * .-------------------------------------------------------.    .-------------------------------------------------------.
  * | Esc  |   F1 |   F2 |   F3 |   F4 |   F5 |   F6 | PgUp |    |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 | HOME |  END |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |   `  |   1  |   2  |   3  |   4  |   5  |   6  | PgDn |    |      |   7  |   8  |   9  |   0  |   -  |   +  | BSPC |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * | TAB  |      |   Q  |   W  |   E  |   R  |   T  | BSPC |    |   Y  |   U  |   I  |   O  |   P  |   [  |   ]  |   |  |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * | CAPS |      |   A  |   S  |   D  |   F  |   G  | Del  |    |      |   H  |   J  |   K  |   L  |   ;  |   ,  |  Ent |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |      | Shift|   Z  |   X  |   C  |   V  |   B  | Ent  |    |  GUI |   N  |   M  |   ,  |   .  |   /  |      | Shift|
  * |-------------------------------------------------------|    |-------------------------------------------------------|
  * | Ctrl |  GUI |      |  Alt | HOME |  END | Space| SLine|    |      | Space| Left |  Up  | Down | Right| Ins  | Ctrl |
  * `-------------------------------------------------------'    `-------------------------------------------------------'
  */

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
  {KEYMAP(
      KC_F7,      KC_F8,     KC_F9,      KC_F10,     KC_F11,     KC_F12,         KC_HOME,        KC_END,
      _______,    KC_7,      KC_8,       KC_9,       KC_0,       KC_MINUS,       KC_EQUAL,       KC_BSPC,
      KC_Y,       KC_U,      KC_I,       KC_O,       KC_P,       KC_LBRACKET,    KC_RBRACKET,    KC_BSLS,
      _______,    KC_H,      KC_J,       KC_K,       KC_L,       KC_SCLN,        KC_QUOT,        KC_ENT,
      KC_RGUI,    KC_N,      KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,        _______,        KC_RSFT,
      _______,    KC_SPC,    KC_LEFT,    KC_UP,      KC_DOWN,    KC_RGHT,        KC_INS,         KC_RCTL
  )};


void setupKeymap() {

/* layer1 - function
  * .-------------------------------------------------------.    .  -------------------------------------------------------.
  * |  NO  |  NO  |  PS  |  NO  |  NO  |  NO  |  NO  |  NO  |    |  DFU |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |    |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |  NO  |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |    |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |  NO  |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |    |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |    |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |      |  NO  |
  * |-------------------------------------------------------|    |-------------------------------------------------------|
  * |  NO  |  NO  |      |  NO  |  NO  |  NO  |  NO  |  NO  |    |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |
  * `-------------------------------------------------------'    `-------------------------------------------------------'
  */

    uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
            KC_NO,      KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,
            _______,    KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,
            KC_NO,      KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,
            _______,    KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,
            KC_NO,      KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_NO,    _______,  KC_NO,
            _______,    KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO
        );

    /*
     * add the other layers
     */
    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            matrix[row][col].addActivation(_L1, Method::PRESS, layer1[row][col]);
        }
    }

}

#endif

void process_user_macros(uint16_t macroid)
{
    switch ((macroid))
    { 
        case MC_SLINE:
            addKeycodeToQueue(KC_END);
            addKeycodeToQueue(MOD_STHOME);
            break;
    }
}