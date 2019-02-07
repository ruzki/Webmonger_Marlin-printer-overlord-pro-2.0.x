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

/**
 * Dreammaker Overlord v1.1 pin assignments
 */

/**
 * Rev A   12 JAN 2019
 *
 *  
 *   
 *    
 */

#ifndef __AVR_ATmega2560__
  #error "Oops! Select 'Arduino/Genuino Mega or Mega 2560' in 'Tools > Board.'"
#endif

#define DEFAULT_MACHINE_NAME    "OVERLORD"
//#define DEFAULT_SOURCE_CODE_URL " "
#define BOARD_NAME              "OVERLORD"

#if MOTHERBOARD == 720
  #define KNOWN_BOARD
/*****************************************************************
 * Overlord pin assignment
 ******************************************************************/

  #ifndef __AVR_ATmega1280__
    #ifndef __AVR_ATmega2560__
      #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
    #endif
  #endif

  #define LARGE_FLASH true

  #define X_STEP_PIN 25
  #define X_DIR_PIN 23
  #define X_MIN_PIN 46 //JC Change from 22 in GGC source
  #define X_MAX_PIN 24
  #define X_ENABLE_PIN 27

  #define Y_STEP_PIN 31
  #define Y_DIR_PIN 33
  #define Y_MIN_PIN -1 // JC: Changed from 26 in GGC source
  #define Y_MAX_PIN 28
  #define Y_ENABLE_PIN 29

  #define Z_STEP_PIN 37
  #define Z_DIR_PIN 39
  #define Z_MIN_PIN 30 // Test for BL-Touch JC: Changed from 30 in GGC source
  #define Z_MIN_PROBE_PIN 11// Test for BL-Touch
  #define SERVO0_PIN 46 // Test for BL-Touch
  #define Z_MAX_PIN 32
  #define Z_ENABLE_PIN 35

  #define HEATER_BED_PIN 4
  #define TEMP_BED_PIN 10

  #define HEATER_0_PIN  2
  #define TEMP_0_PIN 8

  #define HEATER_1_PIN 3
  #define TEMP_1_PIN 9

  #define E0_STEP_PIN         43
  #define E0_DIR_PIN          45
  #define E0_ENABLE_PIN       41

  #define E1_STEP_PIN         49
  #define E1_DIR_PIN          47
  #define E1_ENABLE_PIN       48

  #define SDSS                53
  #define LED_PIN             8 // JC: According to the MarlinForOverlord source this should be 13
  #define FAN_PIN             7

  #define PS_ON_PIN           12 //JC: Changed from 12 in GGE Source
  #define EXP_VOLTAGE_LEVEL_PIN 34 //GGE Test
 
//  #define KILL_PIN           -1 // JC: uncommented
//  #define SUICIDE_PIN        -1  // JC: This was set to 12 and commented reset to -1 //PIN that has to be turned on right after start, to keep power flowing.
 #define SLEEP_PIN 6          
 #define ENERGE_PIN 12        // Not exsisting for Marlin

  #define BTN_ENC 16          //GGE Enter Pin
  #define BTN_UP 19             //GGE Button UP Pin
  #define BTN_DWN  17           //GGE Button DOWN Pin

  #ifdef FilamentDetection
  #define FilamentDetectionPin 46
  #endif

  #define SD_DETECT_PIN 38

// ULTI LCD PINS
//#define LCD_PINS_RS 20
//#define LCD_PINS_D5 21
#define LCD_PINS_ENABLE 15
#define LCD_PINS_D4 14
#define LCD_PINS_D6 5
#define LCD_PINS_D7 6

//  #define APPROACH_PIN 11
//  #define APPROACH_PIN -1
  #define APPROACH_PIN 46

//#define GATE_PIN 36

#endif
