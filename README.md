# blinky

Example Platform project. Just flashes an LED at around 1 Hz.

|File              |Description|
|------------------|-----------|
|**CMakeLists.txt**|Project build script|
|**Makefile**      |make helper. Configure and launch a `CMake` build|
|**Platform**      | |
|**blinky.cpp**    |Project source|

## Supported targets

|PLT_TARGET  |Core           |Clock  |RAM  |Description|
|------------|---------------|-------|-----|-----------|
|**rp2040**  |Arm Cortex-M0  |133 MHz|264 K|Raspberry Pi RP2040 MCU|
|**rp2350**  |Arm Cortex-M33F|150 MHz|520 K|Raspberry Pi RP2350 MCU|
|**LPC11U24**|Arm Cortex-M0  | 48 MHz|  8 K|NXP LPC11u24 MCU|
|**LPC1768** |Arm Cortex-M3  | 96 MHz| 32 K|NXP LPC1768 MCU|
|**nRF51**   |Arm Cortex-M0  | 16 MHz| 16 K|Nordic Semi. nRF51 MCU|
|**nRF52**   |Arm Cortex-M0  | 16 MHz| 16 K|Nordic Semi. nRF52 MCU|
|**native**  |arm64, x86-64  |-      |-    |Simulated hardware on macOS or Linux|

## Software dependencies

+ [https://github.com/SloeComputers/Platform](https://github.com/SloeComputers/Platform)
+ `arm-none-eabi-gcc`
+ `CMake` via UNIX `make` or auto detection of `ninja` if installed
+ `Python3`
+ `SDL2` (for native target)

## Build 

Indirect build for a named target using the make helper...

```bash
make rp2040
```

Direct build using `CMake`...

```bash
mkdir build/rp2040
cd build/rp2040
cmake -DCMAKE_BUILD_TYPE=Release -DPLT_TARGET=rp2040 -DCMAKE_TOOLCHAIN_FILE=Platform/MTL/rp2040/target/toolchain.cmake ../..
make
```

Flashable images will be found under the build directory for each target...

```
build/rp2040/blinky_RPIPICO.uf2
```

## License

None.
