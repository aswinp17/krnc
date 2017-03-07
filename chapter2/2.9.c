#include <stdio.h>

void bitcount(unsigned x)
{
  int i = 0;
  while(x > 0)
  {
    x &= (x-1);
    i++;
  }
  printf("\n the no of bits is %d",i);
}  

void main()
{
unsigned r;
printf("\n enter the value for no to count bit");
scanf("%d",&r);
bitcount(r);
}
