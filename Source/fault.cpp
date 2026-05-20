// Deliberate memory fault to invoke the crash handler

#include <cstdio>
#include <cstdint>

int main()
{
   printf("About to crash...\n");
   *(uint32_t*)0xFFFFffff = 1;
   return 0;
}
