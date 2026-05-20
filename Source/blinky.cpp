// Flashes an LED at around 1 Hz.

#include <unistd.h>

#include "HWR/blinky/Config.h"

static HWR::Led led;

int main()
{
   led = true;

   while(true)
   {
      usleep(500000);

      led = not led;
   }

   return 0;
}
