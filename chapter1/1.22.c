#include <stdio.h>
void main()
{
  int l=0;
  char ch;
  
  while((ch = getchar()) != EOF) {
          if (ch == ' ' && l > 15) {
                printf("\n");
                l = 0;
               }
          else {
                 putchar(ch); 
                 ++l;
                } 
          }
} 
