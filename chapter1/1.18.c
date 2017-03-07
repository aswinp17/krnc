#include <stdio.h>
void main()
 { 
 
    
    char c;
    char b;
    while((c=getchar()) != EOF) {
          if ((c == ' ') || (c == '	') ) {
              b = getchar();
              while(b == c) {
                c = b;
                b = getchar();
               }
               if( b != '\n') 
               putchar(b);
              }
           else
           if(c != '\n')
           putchar(c);
        }
}
