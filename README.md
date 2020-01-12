# Blinky

"hello, world!" for embedded computers. No OS required.

Just flashes an LED.

## Platform support

|Platform|Processor|Clock|Flash|RAM|PLT_TARGET|Status|Build dependencies|
|--|--|--|--|--|--|--|--|
|mbed LPC11U24|Arm Cortex-M0|48 MHz |32k|8k|mbedLPC11U24|OK|arm-none-eabi-gcc|
|mbed LPC1768|Arm Cortex-M3|96 MHz|512k|32k|mbedLPC1768|OK?|arm-none-eabi-gcc|
|BBC microbit|Arm Cortex-M0|16 MHz|256k|16k|microbit|OK?|arm-none-eabi-gcc|
|NXP LPC810|Arm Cortex-M0+|30 MHz|4k|1k|LPC810|OK?|arm-none-eabi-gcc|
|NXP LPC1114FN28|Arm Cortex-M0|50 MHz|32k|4k|LPC1114|OK?|arm-none-eabi-gcc|
|Atmel ATtiny84|AVR tiny|20 MHz|8k|512|ATtiny84|OK?|avr-gcc|
|Atmel ATtiny85|AVR tiny|20 MHz|8k|512|ATtiny85|OK?|avr-gcc|

### Notes for mbed LPC1768

A further 32k RAM is available on chip at an address not contiguous with the main RAM.

### Notes for BBC microbit

Some microbit modules seem to have been fitted with a version of the nRF51 MCU with 32k RAM.

## How to build

Build using cmake, selecting the PLT_TARGET value from the platform support table above.

```
mkdir build_<platform>
cd build_<platform>
cmake -DPLT_TARGET=<platform>  ..
make
```
