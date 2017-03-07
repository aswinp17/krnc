#include <stdio.h>
#include <ctype.h>
int power(int a , int b)
{
   int pow = 1;
   for(int i=0; i < b; ++i)
       pow = pow * a;
    return pow;
}   

int length(char a[])
{ int b = 0;
  for(int i=0; a[i] != '\0'; ++i)
      ++b;
   return b;
}

void htoi(char hex[])
{ 
  int i,len,val,decimal = 0;
  len = length(hex) - 1;
   
   for(i=0; hex[i] != '\0'; i++) {
        if(hex[i] >= '0' && hex[i] <= '9')
        val = hex[i] - '0';
        else if( hex[i] >= 'A' && hex[i] <= 'F')
        val = (hex[i] - 'A' ) + 10;
        else
        val = (hex[i] - 'a' ) + 10;
        
        decimal += val * power(16, len);
        len--;
    }
 
    printf("\nHexadecimal number = %s\n", hex);
    printf("Decimal number = %d", decimal);
  } 


void main()
{ int i;
  char ch[20];
  for (i = 0; i < 20 ; ++i)
       ch[i] = 0;
  char c;
  i = 0; 
  while((c = getchar()) != EOF &&  c != '\n'){
    ch[i] = c;
    i++;
       }
  ch[i] = '\0';
  htoi(ch);
}
  
 
