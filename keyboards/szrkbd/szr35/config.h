
#pragma once

#undef STM32_HSECLK
#define STM32_HSECLK 16000000

#define TAPPING_TOGGLE 2
#define DYNAMIC_KEYMAP_LAYER_COUNT 9
#define DYNAMIC_KEYMAP_MACRO_COUNT 15

// #define MATRIX_ROWS 8
// #define MATRIX_COLS 9
/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */

// #define MATRIX_ROW_PINS { B4, B6, C15, C14, B7, A8 }
// #define MATRIX_COL_PINS { B3, B8, C9, C8, B5, A5, A6, B1, B2 }
// #define MATRIX_ROW_PINS_RIGHT { B4, B6, C15, C14, B7, A8 }
// #define MATRIX_COL_PINS_RIGHT {  B3, B8, C9, C8, B5, A5, A6, B1, B2 }

// #define DIODE_DIRECTION COL2ROW
#define DEBOUNCE 5
// #define FORCE_NKRO

// #define LOCKING_SUPPORT_ENABLE
// #define LOCKING_RESYNC_ENABLE
// #define TAPPING_TERM 100
// #define TAP_CODE_DELAY 15

// #define USB_POLLING_INTERVAL_MS 1
// #define QMK_KEYS_PER_SCAN 4

// #define EE_HANDS

// #define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN A9 // USART TX pin
// #define SERIAL_USART_RX_PIN A10     // USART RX pin
// #define USART1_REMAP             // Remap USART TX and RX pins on STM32F103 MCUs, see table below.
// #define SERIAL_USART_PIN_SWAP    // Swap TX and RX pins if keyboard is master halve.
//  Check if this feature is necessary with your keyboard design and available on the mcu.
#define SELECT_SOFT_SERIAL_SPEED 5 // or 0, 2, 3, 4, 5
//  0: 460800 baud
//  1: 230400 baud (default)
//  2: 115200 baud
//  3: 57600 baud
//  4: 38400 baud
//  5: 19200 baud
#define SERIAL_USART_DRIVER SD1    // USART driver of TX and RX pin. default: SD1
#define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_RX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_TIMEOUT 20    // USART driver timeout. default 20

#define MASTER_LEFT

#define SPLIT_HAND_PIN C7
// #define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE

// #define SPLIT_LED_STATE_ENABLE
// #define VIA_HAS_BROKEN_KEYCODES
#define BOOTMAGIC_ROW_RIGHT 4
#define BOOTMAGIC_COLUMN_RIGHT 4
// #define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT_POLL 10
#define SPLIT_WATCHDOG_TIMEOUT 3000

#define WS2812_PWM_DRIVER PWMD3              // default: PWMD2
#define WS2812_PWM_CHANNEL 2                 // default: 2
#define WS2812_PWM_PAL_MODE 2                // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM2 // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_DMA_CHANNEL 5                 // DMA Channel for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
// #    define WS2812_DMAMUX_ID STM32_DMAMUX1_TIM2_UP // DMAMUX configuration for TIMx_UP -- only required if your MCU has a DMAMUX peripheral, see the respective reference manual for the appropriate values for your MCU.

#define WEAR_LEVELING_LOGICAL_SIZE 2048
#define WEAR_LEVELING_BACKING_SIZE (WEAR_LEVELING_LOGICAL_SIZE * 2)

/* disable these deprecated features by default */
// #define NO_ACTION_MACRO
// #define NO_ACTION_FUNCTION

#define SPLIT_USB_DETECT
#define SPLIT_WATCHDOG_ENABLE
#define USB_POLLING_INTERVAL_MS 1

// #define NEW_401_BL
