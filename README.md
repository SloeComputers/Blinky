# blinky

Example embedded **PDK** project. Flashes an LED at around 1 Hz.

|File              |Description|
|------------------|-----------|
|**CMakeLists.txt**|Build script|
|**Makefile**      |Build helper. Configure and launch a `CMake` build|
|**PDK**           |Portable Development Kit|
|**blinky.cpp**    |Project source|

## Status

[![Build Status](https://github.com/SloeComputers/Blinky/actions/workflows/build_on_push.yml/badge.svg)](https://github.com/SloeComputers/Blinky/actions/workflows/build_on_push.yml)

## Supported targets

|PDK_TARGET  |Core           |Clock  |RAM |Description|
|------------|---------------|-------|----|-----------|
|**rp2040**  |Arm Cortex-M0  |133 MHz|264K|Raspberry Pi RP2040 MCU|
|**rp2350**  |Arm Cortex-M33F|150 MHz|520K|Raspberry Pi RP2350 MCU|
|**LPC11U24**|Arm Cortex-M0  | 48 MHz|  8K|NXP LPC11u24 MCU|
|**LPC1768** |Arm Cortex-M3  | 96 MHz| 32K|NXP LPC1768 MCU|
|**nRF51**   |Arm Cortex-M0  | 16 MHz| 16K|Nordic Semi nRF51 MCU|
|**nRF52**   |Arm Cortex-M4  | 64 MHz|128K|Nordic Semi nRF52 MCU|
|**native**  |arm64, x86-64  |-      |-   |Simulated hardware on macOS or Linux|

## Software dependencies

+ [https://github.com/SloeComputers/PDK](https://github.com/SloeComputers/PDK)
+ `CMake` via UNIX `make` or auto detection of `ninja` if installed
+ `Python3`
+ `arm-none-eabi-gcc (for non-native targets)
+ `SDL2` (for native target)

## Checkout

This repo uses git sub-modules, so checkout using --recurse to clone all the dependent source...

    git clone --recurse https://github.com/SloeComputers/Blinky.git

or

    git clone --recurse ssh://git@github.com/SloeComputers/Blinky.git

## Build

Indirect build for a named target using the make helper...

```bash
make rp2040
```

Direct build using `CMake`...

```bash
mkdir build/rp2040
cd build/rp2040
cmake -DCMAKE_BUILD_TYPE=Release -DPDK_TARGET=rp2040 -DCMAKE_TOOLCHAIN_FILE=PDK/MTL/rp2040/target/toolchain.cmake ../..
make
```

Flashable images will be found under the build directory for each target...

```
build/rp2040/blinky_RPIPICO.uf2
```

## License

None.
