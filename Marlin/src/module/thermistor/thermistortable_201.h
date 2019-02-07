/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// PT100 with LMV324 amp on Overlord v1.1 electronics
//
// This does not match the normal thermistor behaviour so we need to set the following defines
#if THERMISTORHEATER_0 == 201
  #define HEATER_0_RAW_HI_TEMP 16383
  #define HEATER_0_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_1 == 201
  #define HEATER_1_RAW_HI_TEMP 16383
  #define HEATER_1_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_2 == 201
  #define HEATER_2_RAW_HI_TEMP 16383
  #define HEATER_2_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_3 == 201
  #define HEATER_3_RAW_HI_TEMP 16383
  #define HEATER_3_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_4 == 201
  #define HEATER_4_RAW_HI_TEMP 16383
  #define HEATER_4_RAW_LO_TEMP 0
#endif
#if THERMISTORBED == 201
  #define HEATER_BED_RAW_HI_TEMP 16383
  #define HEATER_BED_RAW_LO_TEMP 0
#endif
#if THERMISTORCHAMBER == 201
  #define HEATER_CHAMBER_RAW_HI_TEMP 16383
  #define HEATER_CHAMBER_RAW_LO_TEMP 0
#endif

const short temptable_201[][2] PROGMEM = {
  {         0,       0       },
  {       103,       1       },
  {       340,       7       },
  {       477,       15      },
  {       660,       21      },
  {       961,       28      },
  {       1260,       36      },
  {       2300,       62      },
  {       4384,       110     },
  {       4771,       120     },
  {       5141,       130     },
  {       5525,       140     },
  {       5865,       150     },
  {       6261,       160     },
  {       6629,       170     },
  {       7014,       180     },
  {       7361,       190     },
  {       7729,       200     },
  {       8082,       210     },
  {       8451,       220     },
  {       8769,       230     },
  {       9159,       240     },
  {       18493,       500     }
};
