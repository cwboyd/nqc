/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * The Initial Developer of this code is David Baum.
 * Portions created by David Baum are Copyright (C) 1999 David Baum.
 * All Rights Reserved.
 *
 * Portions created by John Hansen are Copyright (C) 2005 John Hansen.
 * All Rights Reserved.
 *
 */
#include "USBTowerWin.h"
#include <cstddef>

struct LEGOTowerFunctionName
{
  char const * const name;
  size_t offset;
};

// N.B. offsetof() is a macro (per http://www.cplusplus.com/reference/cstddef/offsetof/) and is
// therefore not in the namespace std.
#define FUNCTION(name) { "LEGOTower" #name, offsetof(LEGOTowerFunctions, name) },

HINSTANCE LoadLEGOTowerFunctions(LEGOTowerFunctions* list)
{
  static LEGOTowerFunctionName names[] =
    {
    FUNCTION(FindFirst)
    FUNCTION(FindNext)
    FUNCTION(FindPrev)
    FUNCTION(FindStop)
    FUNCTION(Flush)
    FUNCTION(GetCaps)
    FUNCTION(GetCarrierDutyCycle)
    FUNCTION(GetCarrierFrequency)
    FUNCTION(GetCommStats)
    FUNCTION(GetCopyright)
    FUNCTION(GetCredits)
    FUNCTION(GetDefaultConfig)
    FUNCTION(GetDeviceInfo)
    FUNCTION(GetDeviceInfoByNumber)
    FUNCTION(GetEndianness)
    FUNCTION(GetErrorState)
    FUNCTION(GetFactoryConfig)
    FUNCTION(GetHostControllerInfo)
    FUNCTION(GetIRCPacketSize)
    FUNCTION(GetIRCParm)
    FUNCTION(GetIRCTimeFrame)
    FUNCTION(GetIRSpeed)
    FUNCTION(GetLedMode)
    FUNCTION(GetLedState)
    FUNCTION(GetLinkMode)
    FUNCTION(GetPathName)
    FUNCTION(GetPathNameCopy)
    FUNCTION(GetProblemDesc)
    FUNCTION(GetRange)
    FUNCTION(GetState)
    FUNCTION(GetTimeouts)
    FUNCTION(GetVersion)
    FUNCTION(GetWin32Error)
    FUNCTION(IsUSBEnabled)
    FUNCTION(ReenumerateAll)
    FUNCTION(Reset)
    FUNCTION(ResetCommStats)
    FUNCTION(Restart)
    FUNCTION(RestartAll)
    FUNCTION(SetCarrierDutyCycle)
    FUNCTION(SetCarrierFrequency)
    FUNCTION(SetDefaultConfig)
    FUNCTION(SetEndianness)
    FUNCTION(SetIRCPacketSize)
    FUNCTION(SetIRCParm)
    FUNCTION(SetIRCTimeFrame)
    FUNCTION(SetIRSpeed)
    FUNCTION(SetLedMode)
    FUNCTION(SetLedState)
    FUNCTION(SetLinkMode)
    FUNCTION(SetRange)
    FUNCTION(SetTimeouts)
    { 0, 0 }
    };

  HINSTANCE hi = LoadLibrary("towerapi.dll");
  if (!hi) return 0;

  LEGOTowerFunctionName* fn = names;
  while (fn->name)
    {
    FARPROC fp = GetProcAddress(hi, fn->name);
    if (!fp)
      {
      FreeLibrary(hi);
      return 0;
      }
    *(FARPROC*)((char*)list + fn->offset) = fp;
    fn++;
    }

  return hi;
}

LEGOTowerFunctions TOWER;
