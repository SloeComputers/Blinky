//-------------------------------------------------------------------------------
// Copyright (c) 2026 John D. Haughton
// SPDX-License-Identifier: MIT
//-------------------------------------------------------------------------------

#include <unistd.h>

#include "HWR/blinky/Config.h"

static HWR::Led led;

int main()
{
   led = false;

   while(true)
   {
      led = not led;

      usleep(500000);
   }

   return 0;
}
