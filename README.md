# Blinky

"hello, world!" for embedded computers. No OS required.

Just flashes an LED.

## Platform support

|Platform|Processor|Flash|RAM|PLT_TARGET|Status|Build dependencies|
|--|--|--|--|--|--|--|
|mbed LPC11U24|Arm Cortex-M0|32k|8k|mbedLPC11U24|OK|arm-none-eabi-gcc|
|mbed LPC1768|Arm Cortex-M3|512k|32k *1|mbedLPC1768|OK?|arm-none-eabi-gcc|
|BBC microbit|Arm Cortex-M0|256k|16k *2|microbit|OK?|arm-none-eabi-gcc|
|NXP LPC810|Arm Cortex-M0|4k|1k|LPC810|OK?|arm-none-eabi-gcc|
|NXP LPC1114FN28|Arm Cortex-M0|32k|4k|LPC1114|OK?|arm-none-eabi-gcc|

*1 - a further 32k RAM is available on chip at an address not contiguous with the main RAM

*2 - some seem to have been fitted with a version of the nRF51 MCU with 32k RAM

## How to build

Build using cmake, selecting the PLT_TARGET value from the platform support table above.

```
mkdir build
cd build
cmake -DPLT_TARGET=<platform>  ..
make
```
