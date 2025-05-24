# SZR35 - A 36-Key Split Keyboard by SZRKBD

## Introduction
The **SZR35** is a minimalist 36-key split keyboard designed by SZRKBD. It follows the popular 3x5+3 layout and is aimed at users who value ergonomic typing, portability, and open-source firmware flexibility. It ships with Vial-compatible firmware and is built around an STM32 microcontroller.


## Features
- 36-key (3x5 grid + 3 thumb keys per side)
- Split ergonomic design
- USB-C connectivity on both halves
- Fully programmable with QMK and Vial
- Per-key RGB backlighting
- Vial-compatible firmware for live remapping
- STM32 DFU bootloader support


## Hardware

- **Microcontroller:** STM32F401RBT6 (Cortex-M4, 128KB Flash, 64KB RAM)
- **PCB Color:** Purple
- **Switches:** Leobog Graywood V4 Linear
- **Keycaps:** _mystery_
- **Backlighting:** Addressable RGB (WS2812 or similar)
- **Connection:** USB-C on both halves, TRRS jack for interconnect

## Bootloader & Flashing Behavior

- The **left half** supports entering DFU mode by **holding the `Q` key while plugging in USB** (Bootmagic Lite).
- The **right half must be manually shorted at the RESET pads while plugging in** to enter bootloader mode.
- **TRRS cable should be unplugged during flashing** to avoid any voltage conflicts, and per SZRKB's recommendation.
- **Both halves must be flashed individually**, using the **same `.bin` file**.


## Photos

![SZR35 Keyboard](https://i.ibb.co/ccbnBkRq/photos.png)

## Firmware

The SZR35 runs a **custom QMK firmware** with full Vial support and is easy to extend or customize.

### Building the Firmware

#### Requirements
- [QMK CLI](https://docs.qmk.fm/#/newbs/getting_started)
- szr35 firmware source code

To build the firmware using QMK CLI:

```bash
qmk setup
qmk compile -kb szr35 -km via
```

You may also create your own keymap folder (e.g. `miryoku`) and compile:

```bash
qmk compile -kb szr35 -km miryoku
```


## Flashing the Firmware

### Requirements
- `dfu-util` installed (or use [QMK Toolbox](https://qmk.fm/toolbox/))
- Board in **DFU mode**

### Flashing via CLI
```bash
dfu-util -d 0483:df11 -a 0 -s 0x08000000:leave -D szr35_via.bin
```

### Flashing via QMK Toolbox
1. Open QMK Toolbox
2. Load your compiled `.bin` file
3. Verify that the TRRS cable is unplugged.
4. Plug in one half while holding the boot key (Q on left) or shorting reset (right)
5. Toolbox should auto-detect the DFU device
6. Click “Flash”

## Keymap Customization

You can customize your layout by editing:
```
keyboards/szr35/keymaps/your_keymap/keymap.c
```


## Troubleshooting

- **Right half won’t enter DFU with a key**  
  This is expected. Use the RESET pads while plugging in USB.

- **Only one half responds when plugged in**  
  Flash both halves individually using the same firmware and unplug TRRS during flashing.

- **DFU device not detected**  
  Use a data-capable USB-C cable and confirm VID:PID `0483:df11` with `dfu-util -l`


## Contributing

Contributions are welcome! If you:
- Improve the firmware
- Port the board to QMK mainline
- Clean up matrix or add bootloader features (i.e. magic key on the right-half instead of shortin reset pads)

Please fork and submit a pull request to make this board more accessible to the community!


## License

This project and firmware source files are subject to the terms of the [GPLv2 License](https://www.gnu.org/licenses/old-licenses/gpl-2.0.html), in accordance with QMK and Vial licensing.


## Credits

- Shoutout to SZRKBD for the original firmware source, hardware design, and all around willingness to share knowledge.
- Thanks to the QMK community for their support and resources.
- Special thanks to my partner for her patience and support while I nerd out on this project. 💕
