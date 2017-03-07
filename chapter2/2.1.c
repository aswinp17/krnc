#include <stdio.h>
#include <limits.h>

void main()
{ long a = CHAR_BIT;
  long b = INT_MAX;
  long c = LONG_MAX;
  long d = UCHAR_MAX;
  long e = UINT_MAX;
  long f = ULONG_MAX;

 printf("\n%ld -- size of char",a);
 printf("\n%ld -- size of INT",b);
 printf("\n%ld -- size of LONG",c);
 printf("\n%ld -- size of UNSIGNED CHAR",d);
 printf("\n%ld -- size UNSIGNED INT",e);
 printf("\n%ld -- size of UNSIGNED LONG",f);

}
