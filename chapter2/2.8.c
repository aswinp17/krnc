#include<stdio.h>



unsigned rightrot(unsigned x,int n)
{
    
    unsigned int r;
    
    r = x << (32 - n);
    x = x >> n;
    x = x | r;
    
    return x;
}

void main()
{ int n;
 unsigned int a,b;
 printf("\n enter the value for a");
 scanf("%d",&a);
 printf("\n enter the value for n");
 scanf("%d" ,&n);
 b = rightrot(a,n);
 printf("\n the rotated value is %d",b);
}


