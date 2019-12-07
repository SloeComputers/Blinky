# Blinky

"hello, world!" for embedded computers. No OS required.

Just flashes an LED.

## Platform support

|Platform|Processor|PLT_TARGET|Status|Build dependency|
|---|---|---|---|
|mbed LPC11U24|Arm Cortex-M0|mbedLPC11U24|OK|arm-none-eabi-gcc|
|mbed LPC1768|Arm Cortex-M3|mbedLPC1768|OK?|arm-none-eabi-gcc|
|BBC microbit|Arm Cortex-M0|microbit|OK?|arm-none-eabi-gcc|
|NXP LPC810|Arm Cortex-M0|LPC810|OK?|arm-none-eabi-gcc|
|NXP LPC1114FN28|Arm Cortex-M0|LPC1114|OK?|arm-none-eabi-gcc|

## How to build

Build using cmake, selecting the PLT_TARGET value from the platform support table above.

```
mkdir build
cd build
cmake -DPLT_TARGET=<Platform>  ..
make
```
