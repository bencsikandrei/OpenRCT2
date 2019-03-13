/*****************************************************************************
 * Copyright (c) 2014-2018 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#ifndef _VEHICLE_DATA_H
#define _VEHICLE_DATA_H

#include "../common.h"

extern const uint8_t* Rotation1TimeToSpriteMaps[];
extern const uint8_t* Rotation2TimeToSpriteMaps[];
extern const uint8_t* Rotation3TimeToSpriteMaps[];

struct top_spin_time_to_sprite_map
{
    uint8_t arm_rotation;
    uint8_t bank_rotation;
};

extern const top_spin_time_to_sprite_map* TopSpinTimeToSpriteMaps[];

extern const uint8_t MotionSimulatorTimeToSpriteMap[];
extern const int32_t MotionSimulatorTimeToSpriteMapCount;

extern const int32_t dword_9A2930[];
extern const int32_t dword_9A2970[];

extern const int32_t SpriteDirectionToSoundDirection[];

#endif