#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
  x = x & ~(~(~0 << n ) << (p + 1 - n));  
  y = (y & ~(~0 << n)) << (p + 1 - n);
  
  return x | y;
} 

main ()
{
  unsigned r, x = 0xaf44, y = 0x5643;
  int p = 4, n = 3;

  r = setbits(x,p,n,y);
  printf("%x\n", r);

  return 0;
}

