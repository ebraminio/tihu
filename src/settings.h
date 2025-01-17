/*******************************************************************************
 * This file is part of Tihu.
 *
 * Tihu is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Tihu is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Tihu.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Contributor(s):
 *    Mostafa Sedaghat Joo (mostafa.sedaghat@gmail.com)
 *
 *******************************************************************************/
#ifndef __TIHU__SETTINGS_H
#define __TIHU__SETTINGS_H

#pragma once

#include "helper.h"

class CSettings {
  public:
    CSettings();

    int GetPitch() const;
    int GetRate() const;
    int GetVolume() const;
    int GetFrequency() const;
    bool IsDebugMode() const;

    void SetPitch(int pitch_adjust);
    void SetRate(int rate_adjust);
    void SetVolume(int volume_adjust);
    void SetFrequency(int frequency);
    void SetIsDebugMode(bool enable);

  private:
    int Pitch;
    int Rate;
    int Volume;
    int Frequency;
    bool DebugMode;
};

#endif
