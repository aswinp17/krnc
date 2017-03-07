#include <stdio.h>
void main()
 {
  char c;
  while((c=getchar()) != EOF) {
         if( c == '\t')
           printf("   ");
          else
          putchar(c);
        }
  }
