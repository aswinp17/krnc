#include <stdio.h>
void main()
 { 
 
    
    char c;
    char b;
    while((c=getchar()) != 'q') { 
             if (c == ' ') {
             b = getchar();
              while(b == c) {
               c = b;
                b = getchar();
               } 
               printf("\n");
               putchar(b);
              }
           else
           putchar(c);
        }
 }
