
targets = mbedLPC11U24 \
          mbedLPC1768 \
          microbitV1 \
          microbitV2 \
          LPC810 \
          LPC1114 \
          rpipico \

#   microbitV1_32k \
#   ATtiny85 \
#   ATtiny84 \

all: $(targets)

include Platform/build.make
