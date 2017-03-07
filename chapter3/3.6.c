#include <stdio.h>


void reverse(char s[], int k)
{
 int i, j;
 char c;
     j = k-1;
 for(i = 0; i<j ;i++,j--)
    {
      c = s[i];
      s[i] = s[j];
      s[j] = c;
    }
}


void itoa(int n, char s[],int b)
{
 int i, sign,k;
 if ((sign = n) < 0) 
 n = -n;
 k = 0;
 i = 0;
 do {
 k++;
 s[i++] = n % 10 + '0';
 } while ((n /= 10) > 0);
 if (sign < 0){
   s[i++] = '-';
   k++;
 }
 
 while(k < b)
 s[k++] = ' ';
  
    
 s[k] = '\0';
 reverse(s,k);
}

void main()
{
  int n,b;
  char s[20];
  printf("\nenter the no:");
  scanf("%d",&n);
  printf("\n enter the minimun field");
  scanf("%d",&b);
  
  itoa(n,s,b);

  printf("\n the no is \n:%s",s);
} 
