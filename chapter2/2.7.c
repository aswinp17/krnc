#include <stdio.h>

unsigned invert(unsigned x, int p, int n)
{
  unsigned r;
  return x ^ (~(~0 << n) << (p + 1 - n));

}

main ()
{
  printf("%x\n", invert(0xa65,4,3));
  return 0;
}
