#include <stdio.h>

void lower() 
{ 
 char c;
 while((c = getchar()) != EOF)
       printf("%c",( c >= 65 && c <= 90 ? c = c+32 : c));
} 

void main()
{
lower();
}


