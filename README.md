# Blinky

"hello, world!" for embedded computers. No OS required.

Just flashes an LED.

## Platform support

|Platform|PLT_TARGET|Status|Build dependency|
|---|---|---|---|
|mbed LPC11U24|mbedLPC11U24|OK|arm-none-eabi-gcc|
|mbed LPC1768|mbedLPC1768|OK?|arm-none-eabi-gcc|
|BBC microbit|microbit|OK?|arm-none-eabi-gcc|
|NXP LPC810|LPC810|OK?|arm-none-eabi-gcc|
|NXP LPC1114FN28|LPC114|OK?|arm-none-eabi-gcc|

## How to build

Build using cmake, selecting the PLT_TARGET value from the Platform support table above.

```
mkdir build
cd build
cmake -DPLT_TARGET=<Platform>  ..
make
```
