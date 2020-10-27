/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef KEYMAP_H
#define KEYMAP_H

#include <stdint.h>
#include "hid_keycodes.h"
#include "keyboard_config.h"
#include "advanced_keycodes.h"
#include "KeyScanner.h"
#include <array>

/**
 * layers
 * 1. Make windows the default layout
 * 2. `layer1` as macos layer (gui alt copy paste)
 * 3. `Cap + m` toggle macos layout
 * 4. `Cap` as `layer2` momentary open key
 * 5. `layer2` as function layer
 */
#define _QWERTY 0        // windows
#define _L1     1        // macos
#define _L2     2        // function
#define _______ KC_TRNS  // transparent

void setupKeymap();
extern std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix;

// macros
#define USER_MACRO_FUNCTION   0

/**
 * MOD_WIN_STHOME             select to home (windows)
 * MC_WIN_SLINE               select a line (windows)
 * 
 * MOD_MAC_END                command + -> (macos)
 * MOD_MAC_HOME               command + <- (macos)
 * MOD_MAC_STHOME             select to home (macos)
 * MC_MAC_SLINE               select a line (macos)
 * 
 * MC_GIT_PULL                git pull
 * MC_GIT_STATUS              git status
 * MC_GIT_COMMIT              git commit
 * MC_GIT_PUSH                git push
 * MC_FIND_FILE               find file by name
 * MC_FIND_CONT               find content in files
 * MC_FIND_CONT_PERL          find content in files by perl
 * MC_LS                      list all file
 * MC_PS                      process status
 * MC_LOG                     log
 * MC_LOG_D                   log in docker
 * MC_PAD_00                  input 00
 * MC_PAD_000                 input 000
 */
#define MOD_WIN_STHOME        MOD(MOD_LSHIFT, KC_HOME)
#define MOD_MAC_END           MOD(MOD_LGUI, KC_RIGHT)
#define MOD_MAC_HOME          MOD(MOD_LGUI, KC_LEFT)
#define MOD_MAC_STHOME        MOD(MOD_LSHIFT, MOD_MAC_HOME)
#define MC_WIN_SLINE          MC(KC_A)
#define MC_MAC_SLINE          MC(KC_C)
#define MC_GIT_PULL           MC(KC_E)
#define MC_GIT_STATUS         MC(KC_G)
#define MC_GIT_COMMIT         MC(KC_I)
#define MC_GIT_PUSH           MC(KC_K)
#define MC_FIND_FILE          MC(KC_M)
#define MC_FIND_CONT          MC(KC_O)
#define MC_FIND_CONT_PERL     MC(KC_Q)
#define MC_LS                 MC(KC_S)
#define MC_PS                 MC(KC_U)
#define MC_LOG                MC(KC_W)
#define MC_LOG_D              MC(KC_X)
#define MC_PAD_00             MC(KC_Y)
#define MC_PAD_000            MC(KC_Z)

void process_user_macros(uint16_t macroid);
extern void addStringToQueue(const char* str);
extern void addKeycodeToQueue(const uint16_t keycode);

#endif /* KEYMAP_H */