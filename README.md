# Blinky

Example embedded **PDK** project with some very simple example embedded apps. 
* blinky - Flashes an LED at around 1 Hz
* hellow - The famous console confidence check
* fault - Deliberate crash to check the fault handler

|File              |Description|
|------------------|-----------|
|**CMakeLists.txt**|Build script|
|**Makefile**      |Build helper. Configure and launch a `CMake` build|
|**PDK**           |Portable Development Kit|
|**blinky.cpp**    |Flash an LED at 1 Hz|
|**hellow.cpp**    |Send "Hello, world\n" to the console|
|**fault.cpp**     |Deliberate memory fault to exercise fault handler|

## Status

[![Build Status](https://github.com/SloeComputers/Blinky/actions/workflows/build_on_push.yml/badge.svg)](https://github.com/SloeComputers/Blinky/actions/workflows/build_on_push.yml)

Testing against PDK [commit](https://github.com/SloeComputers/PDK/commit/4c3822f86d2d15059b77a312f485e95fffe888e6)

|PDK_TARGET  |Module    |blinky|hellow|fault|Notes|
|------------|----------|------|------|-----|-----|
|**rp2040**  |RPIPICO   | PASS | PASS | PASS|     |
|**rp2350**  |RPIPICO   | PASS | PASS | PASS|     |
|**LPC11U24**|MBED      | PASS | PASS | PASS|double reset issue|
|**LPC1768** |MBED      | PASS | PASS | PASS|     |
|**LPC810**  |DIP       | ?    | ?    | ?   |     |
|**LPC1114** |DIP       | ?    | ?    | ?   |     |
|**nRF51**   |MICROBITv1| PASS | PASS | PASS|     |
|**nRF52**   |MICROBITv2| ?    | ?    | ?   |     |
|**native**  |-         | PASS | PASS | PASS|     |

## Supported targets

Supported micro-controllers..

|PDK_TARGET  |Core           |Clock  |RAM |Description|
|------------|---------------|-------|----|-----------|
|**rp2040**  |Arm Cortex-M0  |133 MHz|264K|Raspberry Pi RP2040 MCU|
|**rp2350**  |Arm Cortex-M33F|150 MHz|520K|Raspberry Pi RP2350 MCU|
|**LPC11U24**|Arm Cortex-M0  | 48 MHz|  8K|NXP LPC11u24 MCU|
|**LPC1768** |Arm Cortex-M3  | 96 MHz| 32K|NXP LPC1768 MCU|
|**LPC810**  |Arm Cortex-M0  | 25 MHz|  1K|NXP LPC810 MCU|
|**LPC1114** |Arm Cortex-M0  | 25 MHz|  8K|NXP LPC1114 MCU|
|**nRF51**   |Arm Cortex-M0  | 16 MHz| 16K|Nordic Semi nRF51 MCU|
|**nRF52**   |Arm Cortex-M4  | 64 MHz|128K|Nordic Semi nRF52 MCU|
|**native**  |arm64, x86-64  |-      |-   |Simulated hardware on macOS or Linux|

Supported modules..

|PDK_TARGET  |Modules|
|------------|-------|
|**rp2040**  |[RPIPICO](https://www.raspberrypi.com/documentation/microcontrollers/pico-series.html#pico1), [BADGER2040](https://shop.pimoroni.com/products/badger-2040), [TUFTY2040](https://shop.pimoroni.com/products/tufty-2040)|
|**rp2350**  |[RPIPICO](https://www.raspberrypi.com/documentation/microcontrollers/pico-series.html#pico2), [TINY2350](https://shop.pimoroni.com/products/tiny-2350)|
|**LPC11U24**|[MBED](https://os.mbed.com/platforms/mbed-LPC1768/)|
|**LPC1768** |[MBED](https://os.mbed.com/platforms/mbed-LPC11U24)|
|**LPC810**  |[DIP](https://www.nxp.com/part/LPC810M021FN8)|
|**LPC1114** |[DIP](https://www.nxp.com/part/LPC1100)|
|**nRF51**   |MICROBITv1|
|**nRF52**   |MICROBITv2|

## Software dependencies

+ [https://github.com/SloeComputers/PDK](https://github.com/SloeComputers/PDK)
+ `CMake` via UNIX `make` or auto detection of `ninja` if installed
+ `Python3`
+ `arm-none-eabi-gcc` (for non-native targets)
+ `SDL2` (for native target)

## Checkout

This repo uses git sub-modules, so checkout using --recurse to clone all the dependent source...

    git clone --recurse https://github.com/SloeComputers/Blinky.git

or

    git clone --recurse ssh://git@github.com/SloeComputers/Blinky.git

## Build

Indirect build for all supported targets using the `make` helper...

```bash
make
```

Indirect build for a named target using the `make` helper...

```bash
make rp2040
```

Direct build for a single target using `CMake`...

```bash
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=PDK/TGT/rp2040/toolchain.cmake
make
```

Flashable images for modules supported for the selected target will be found under the build directory...

```
build/blinky_RPIPICO.uf2
```

## License

None
