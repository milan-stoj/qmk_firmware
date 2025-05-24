/*
Copyright 2021-2022 Alin M Elena <alinm.elena@gmail.com>

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

#pragma once

#include "quantum.h"

#define LAYOUT_split_3x5( \
    L00, L01, L02, L03, L04,    R40, R41, R42, R43, R44, \
    L10, L11, L12, L13, L14,    R50, R51, R52, R53, R54, \
    L20, L21, L22, L23, L24,    R60, R61, R62, R63, R64, \
              L32, L33, L34,    R70, R71, R72\
) { \
    { L00,    L01,    L02,  L03,  L04 }, \
    { L10,    L11,    L12,  L13,  L14 }, \
    { L20,    L21,    L22,  L23,  L24 }, \
    { KC_NO,  KC_NO,  L32,  L33,  L34 }, \
    { R40,    R41,    R42,  R43,  R44 }, \
    { R50,    R51,    R52,  R53,  R54 }, \
    { R60,    R61,    R62,  R63,  R64 }, \
    { R70,    R71,    R72,  KC_NO,  KC_NO }  \
}
