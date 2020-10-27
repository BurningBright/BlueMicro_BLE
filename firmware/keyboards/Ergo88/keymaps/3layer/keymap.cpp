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
  * |  L2  |      |   A  |   S  |   D  |   F  |   G  | Del  |    |      |   H  |   J  |   K  |   L  |   ;  |   ,  |  Ent |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |      | Shift|   Z  |   X  |   C  |   V  |   B  | SLine|    |  GUI |   N  |   M  |   ,  |   .  |   /  |      | Shift|
  * |-------------------------------------------------------|    |-------------------------------------------------------|
  * | Ctrl |  GUI |      |  Alt | Paste| Copy | Space| Find |    |      | Space| Left |  Up  | Down | Right| Ins  | Ctrl |
  * `-------------------------------------------------------'    `-------------------------------------------------------'
  */

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
  {KEYMAP(
      KC_ESC,       KC_F1,       KC_F2,       KC_F3,       KC_F4,         KC_F5,         KC_F6,       KC_PGUP,
      KC_GRAVE,     KC_1,        KC_2,        KC_3,        KC_4,          KC_5,          KC_6,        KC_PGDN,
      KC_TAB,       _______,     KC_Q,        KC_W,        KC_E,          KC_R,          KC_T,        KC_BSPC,
      LAYER_2,      _______,     KC_A,        KC_S,        KC_D,          KC_F,          KC_G,        KC_DEL,
      _______,      KC_LSFT,     KC_Z,        KC_X,        KC_C,          KC_V,          KC_B,        MC_WIN_SLINE,
      KC_LCTL,      KC_LGUI,     _______,     KC_LALT,     LCTL(KC_V),    LCTL(KC_C),    KC_SPC,      LCTL(KC_F)
  )};


void setupKeymap() {

/* layer1 - MAC
  * .-------------------------------------------------------.    .-------------------------------------------------------.
  * |      |      |      |      |      |      |      |      |    |      |      |      |      |      |      |      |      |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |      |      |      |      |      |      |      |      |    |      |      |      |      |      |      |      |      |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |      |      |      |      |      |      |      |      |    |      |      |      |      |      |      |      |      |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |  L2  |      |      |      |      |      |      |      |    |      |      |      |      |      |      |      |      |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |      |      |      |      |      |      |      | SLine|    |      |      |      |      |      |      |      |      |
  * |-------------------------------------------------------|    |-------------------------------------------------------|
  * |      |  Alt |      |  GUI | Paste| Copy |      | Find |    |      |      |      |      |      |      |      |      |
  * `-------------------------------------------------------'    `-------------------------------------------------------'
  */

    uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
            _______,      _______,      _______,     _______,     _______,        _______,        _______,     _______,
            _______,      _______,      _______,     _______,     _______,        _______,        _______,     _______,
            _______,      _______,      _______,     _______,     _______,        _______,        _______,     _______,
            LAYER_2,      _______,      _______,     _______,     _______,        _______,        _______,     _______,
            _______,      _______,      _______,     _______,     _______,        _______,        _______,     MC_MAC_SLINE,
            _______,      KC_LALT,      _______,     KC_LGUI,     LGUI(KC_V),     LGUI(KC_C),     _______,     LGUI(KC_F)
        );

/* layer2 - FUNCTION
  * .-------------------------------------------------------.    .-------------------------------------------------------.
  * |  DFU |  BI  |  BD  |  NO  |  NO  |  NO  |  NO  | LOG  |    |  PRV |  PLY |  NXT |  VM  |  VUP |  VDN |  NO  |  NO  |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |  NO  | GPULL|  GST |  GCI | GPUSH|  NO  |  NO  | LOGD |    |      | NLCK |   *  |   /  |   -  |  NO  |  NO  | BSPC |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |  CAP |      | MW_UP| M_UP | MW_DW|  NO  |  NO  |  FF  |    |  NO  |   7  |   8  |   9  |   +  |  NO  |  NO  |  NO  |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |  L2  |      | M_LF | M_DW | M_RT |  NO  |  NO  |  FC  |    |      |  NO  |   4  |   5  |   6  | BSPC |  NO  |  Ent |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |      |  ENT |M_BTN4|M_BTN5|  AC0 |  AC1 |  AC2 |  FCP |    |  NO  |  NO  |   1  |   2  |   3  |  Ent |      | Shift|
  * |-------------------------------------------------------|    |-------------------------------------------------------|
  * |TG(L1)|TG(L2)|      |  NO  |M_BTN2|M_BTN1|  NO  |  NO  |    |      |  0   |   00 |  000 |   .  |  Ent |  NO  |  NO  |
  * `-------------------------------------------------------'    `-------------------------------------------------------'
  */

    uint32_t layer2[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
            DFU,            KC_DISPLAY_BRIGHTI,    KC_DISPLAY_BRIGHTD,    KC_NO,            KC_NO,           KC_NO,           KC_NO,           MC_LOG,
            KC_NO,          MC_GIT_PULL,           MC_GIT_STATUS,         MC_GIT_COMMIT,    MC_GIT_PUSH,     KC_NO,           KC_NO,           MC_LOG_D,
            KC_CAPS,        _______,               KC_MS_WH_UP,           KC_MS_UP,         KC_MS_WH_DOWN,   KC_NO,           KC_NO,           MC_FIND_FILE,
            LAYER_2,        _______,               KC_MS_LEFT,            KC_MS_DOWN,       KC_MS_RIGHT,     KC_NO,           KC_NO,           MC_FIND_CONT,
            _______,        KC_ENT,                KC_MS_BTN4,            KC_MS_BTN5,       KC_MS_ACCEL0,    KC_MS_ACCEL1,    KC_MS_ACCEL2,    MC_FIND_CONT_PERL,
            TG(LAYER_1),    TG(LAYER_2),           _______,               KC_NO,            KC_MS_BTN2,      KC_MS_BTN1,      KC_NO,           KC_NO
        );

    /*
     * add the other layers
     */
    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            matrix[row][col].addActivation(_L1, Method::PRESS, layer1[row][col]);
            matrix[row][col].addActivation(_L2, Method::PRESS, layer2[row][col]);
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
  * | L2   |      |   A  |   S  |   D  |   F  |   G  | Del  |    |      |   H  |   J  |   K  |   L  |   ;  |   ,  |  Ent |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |      | Shift|   Z  |   X  |   C  |   V  |   B  | SLine|    |  GUI |   N  |   M  |   ,  |   .  |   /  |      | Shift|
  * |-------------------------------------------------------|    |-------------------------------------------------------|
  * | Ctrl |  GUI |      |  Alt | Paste| Copy | Space| Find |    |      | Space| Left |  Up  | Down | Right| Ins  | Ctrl |
  * `-------------------------------------------------------'    `-------------------------------------------------------'
  */

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
  {KEYMAP(
      KC_F7,        KC_F8,       KC_F9,        KC_F10,      KC_F11,      KC_F12,          KC_HOME,         KC_END,
      _______,      KC_7,        KC_8,         KC_9,        KC_0,        KC_MINUS,        KC_EQUAL,        KC_BSPC,
      KC_Y,         KC_U,        KC_I,         KC_O,        KC_P,        KC_LBRACKET,     KC_RBRACKET,     KC_BSLS,
      _______,      KC_H,        KC_J,         KC_K,        KC_L,        KC_SCLN,         KC_QUOT,         KC_ENT,
      KC_RGUI,      KC_N,        KC_M,         KC_COMM,     KC_DOT,      KC_SLSH,         _______,         KC_RSFT,
      _______,      KC_SPC,      KC_LEFT,      KC_UP,       KC_DOWN,     KC_RGHT,         KC_INS,          KC_RCTL
  )};


void setupKeymap() {

/* layer1 - MAC
  * .-------------------------------------------------------.    .-------------------------------------------------------.
  * |      |      |      |      |      |      |      |      |    |      |      |      |      |      |      |      |      |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |      |      |      |      |      |      |      |      |    |      |      |      |      |      |      |      |      |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |      |      |      |      |      |      |      |      |    |      |      |      |      |      |      |      |      |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |  L2  |      |      |      |      |      |      |      |    |      |      |      |      |      |      |      |      |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |      |      |      |      |      |      |      | SLine|    |      |      |      |      |      |      |      |      |
  * |-------------------------------------------------------|    |-------------------------------------------------------|
  * |      |  Alt |      |  GUI | Paste| Copy |      | Find |    |      |      |      |      |      |      |      |      |
  * `-------------------------------------------------------'    `-------------------------------------------------------'
  */

    uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
            _______,      _______,      _______,     _______,     _______,     _______,     _______,     _______,
            _______,      _______,      _______,     _______,     _______,     _______,     _______,     _______,
            _______,      _______,      _______,     _______,     _______,     _______,     _______,     _______,
            _______,      _______,      _______,     _______,     _______,     _______,     _______,     _______,
            _______,      _______,      _______,     _______,     _______,     _______,     _______,     _______,
            _______,      _______,      _______,     _______,     _______,     _______,     _______,     _______
        );

/* layer2 - FUNCTION
  * .-------------------------------------------------------.    .-------------------------------------------------------.
  * |  DFU |  BI  |  BD  |  NO  |  NO  |  NO  |  NO  | LOG  |    |  PRV |  PLY |  NXT |  VM  |  VUP |  VDN |  NO  |  NO  |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |  NO  | GPULL|  GST |  GCI | GPUSH|  NO  |  NO  | LOGD |    |      | NLCK |   *  |   /  |   -  |  NO  |  NO  | BSPC |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |  CAP |      | MW_UP| M_UP | MW_DW|  NO  |  NO  |  FF  |    |  NO  |   7  |   8  |   9  |   +  |  NO  |  NO  |  NO  |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |  L2  |      | M_LF | M_DW | M_RT |  NO  |  NO  |  FC  |    |      |  NO  |   4  |   5  |   6  | BSPC |  NO  |  Ent |
  * |------+------+------+------+------+------+------+------|    |------+------+------+------+------+------+------+------|
  * |      |  ENT |M_BTN4|M_BTN5|  AC0 |  AC1 |  AC2 |  FCP |    |  NO  |  NO  |   1  |   2  |   3  |  Ent |      | Shift|
  * |-------------------------------------------------------|    |-------------------------------------------------------|
  * |TG(L1)|TG(L2)|      |  NO  |M_BTN2|M_BTN1|  NO  |  NO  |    |      |  0   |   00 |  000 |   .  |  Ent |  NO  |  NO  |
  * `-------------------------------------------------------'    `-------------------------------------------------------'
  */

    uint32_t layer2[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
            KC_MPRV,     KC_MPLY,     KC_MNXT,      KC_MUTE,       KC_VOLU,     KC_VOLD,     KC_NO,       KC_NO,
            _______,     KC_NLCK,     KC_PAST,      KC_PSLS,       KC_PMNS,     KC_NO,       KC_NO,       KC_BSPC,
            KC_NO,       KC_P7,       KC_P8,        KC_P9,         KC_PPLS,     KC_NO,       KC_NO,       KC_NO,
            _______,     KC_NO,       KC_P4,        KC_P5,         KC_P6,       KC_BSPC,     KC_NO,       KC_ENT,
            KC_NO,       KC_NO,       KC_P1,        KC_P2,         KC_P3,       KC_PENT,     _______,     KC_RSFT,
            _______,     KC_P0,       MC_PAD_00,    MC_PAD_000,    KC_PDOT,     KC_PENT,     KC_NO,       KC_NO
        );

    /*
     * add the other layers
     */
    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            matrix[row][col].addActivation(_L1, Method::PRESS, layer1[row][col]);
            matrix[row][col].addActivation(_L2, Method::PRESS, layer2[row][col]);
        }
    }

}

#endif

void process_user_macros(uint16_t macroid)
{
    switch ((macroid))
    {
        case MC_WIN_SLINE:
            addKeycodeToQueue(KC_END);
            addKeycodeToQueue(MOD_WIN_STHOME);
            break;
        case MC_MAC_SLINE:
            addKeycodeToQueue(MOD_MAC_END);
            addKeycodeToQueue(MOD_MAC_STHOME);
            break;
        case MC_GIT_PULL:
            addStringToQueue("git pull origin ");
            break;
        case MC_GIT_STATUS:
            addStringToQueue("git status -s");
            break;
        case MC_GIT_COMMIT:
            addStringToQueue("git commit -m \"\"");
            addKeycodeToQueue(KC_LEFT);
            break;
        case MC_GIT_PUSH:
            addStringToQueue("git push origin ");
            break;
        case MC_LS:
            addStringToQueue("ls -la");
            break;
        case MC_PS:
            addStringToQueue("ps -ef | grep ");
            break;
        case MC_FIND_FILE:
            addStringToQueue("find . -type f -name \"\"");
            addKeycodeToQueue(KC_LEFT);
            break;
        case MC_FIND_CONT:
            addStringToQueue("xargs grep -Hn --color=auto \"\"");
            addKeycodeToQueue(KC_LEFT);
            break;
        case MC_FIND_CONT_PERL:
            addStringToQueue("xargs grep -iohP \"\"");
            addKeycodeToQueue(KC_LEFT);
            break;
        case MC_LOG:
            addStringToQueue("tail -f ");
            break;
        case MC_LOG_D:
            addStringToQueue("docker logs -f -t --tail=");
            break;
        case MC_PAD_00:
            addStringToQueue("00");
            break;
        case MC_PAD_000:
            addStringToQueue("000");
            break;
    }
}
