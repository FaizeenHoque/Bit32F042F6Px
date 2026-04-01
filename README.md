# Bit32F042F6Px

Minimal STM32F042F6Px development board. USB-C, GPIO headers, onboard 3.3V regulation. No peripherals, no bloat.

Licensed under [CERN-OHL-S v2](LICENSE).

---

## Features

- STM32F042F6Px (32KB Flash, 6KB RAM, 48MHz)
- USB-C (USB 2.0 Full Speed via PA11/PA12)
- LP5912-3.3DRV LDO — 3.3V regulated output from 5V USB
- BOOT0 and RESET buttons
- SWD header (SWDIO, SWCLK, 3.3V, GND)
- GPIO headers — all available pins broken out
- Power indicator LED

---

## Bill of Materials

| Designator | Footprint | Qty | Value |
|------------|-----------|:---:|-------|
| BOOT1, RESET1 | SW_SPST_B3U-1000P | 2 | SW_Push |
| C1 | 0402 | 1 | 0.1µF |
| C2, C4, C5 | 0402 | 3 | 1µF |
| C3 | 0402 | 1 | 10µF |
| D1 | 0402 | 1 | LED |
| J1 | USB_C_Receptacle_GCT_USB4105-xx-A_16P_TopMnt_Horizontal | 1 | USB_C_Receptacle_USB2.0_16P |
| J2, J3 | PinHeader_1x09_P2.54mm_Vertical | 2 | Conn_01x09 |
| J4 | PinHeader_1x04_P2.54mm_Vertical | 1 | Conn_01x04 |
| R1, R2 | 0402 | 2 | 10kΩ |
| R3, R4 | 0402 | 2 | 5.1kΩ |
| R5 | 0402 | 1 | 1kΩ |
| U1 | TSSOP-20_4.4x6.5mm_P0.65mm | 1 | STM32F042F6Px |
| U2 | WSON-6-1EP_2x2mm_P0.65mm_EP1x1.6mm_ThermalVias | 1 | LP5912-3.3DRV |

---

## Pinout

| Header | Pins |
|--------|------|
| J2 | +5V, +3V3 (x2), GND, GPIO\_6, GPIO\_7, GPIO\_8, GPIO\_9, GPIO\_10 |
| J3 | +5V, GND, GPIO\_0–GPIO\_5, GND |
| J4 | +3V3, SWDIO, SWCLK, GND |

---

## Schematic

![Schematic](Images/schematic.png)

---

## PCB Renders

![PCB Top](Images/pcb_top.png)
![PCB Bottom](Images/pcb_bottom.png)

---

## BOM
> will be added later
---

## Programming
> will be added later
---

## Repository Structure

```
Bit32F042F6Px/
├── hardware/
│   ├── Bit32F042F6Px.kicad_sch
│   ├── Bit32F042F6Px.kicad_pcb
│   └── gerbers/
├── images/
│   ├── schematic.png
│   ├── pcb_top.png
│   ├── pcb_bottom.png
│   ├── render_top.png
│   └── render_bottom.png
├── LICENSE
└── README.md
```
