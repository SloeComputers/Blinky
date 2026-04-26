
targets = rp2040 rp2350 LPC11U24 LPC1768 LPC810 nRF51 nRF52 native

all: $(targets)

include PDK/build.make
