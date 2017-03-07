#include <stdio.h>

void main()
{
  
 char s[20],c;
  int i=0;
  int LIM = 20;
  while(i < LIM-1) {
      if((c = getchar()) != '\n') {
            if( c != EOF) {
              s[i] = c;
              i++;
              }
             else
             break;
           }
       else
       break;
       }
 printf("%s",s);
}

     
