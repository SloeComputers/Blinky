# Blinky

"hello, world!" for embedded computers no OS required.

Just flashes an LED.

## Platform support

|Platform|Status|Build dependency|
|---|---|---|
|mbed LPC11U24|OK|arm-none-eabi-gcc|
|mbed LPC1768|OK|arm-none-eabi-gcc|
|bbc mictobit|OK|arm-none-eabi-gcc|

## How to build

Build using cmake.

```
mkdir build
cd build
cmake -DPLT_TARGET=<Platform>  ..
make
```
