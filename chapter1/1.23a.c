#include <stdio.h>
void main()
{
  int l=0;
  char c,b;
  
 while((c = getchar()) != EOF) {
          if ( c == '/' && (b = getchar()) == '/') 
            for(;c != '\n'; )
                c = getchar(); 
        
          else if ( c == '/' && b == '*') 
            for(;(b = getchar()) != EOF; ) {
                  if( c == '*' && b == '/')
                     break;
                   else
                      c = b;                
                 } 
          else
               putchar(c);
        }
}
               
