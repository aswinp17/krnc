#include <stdio.h>

void itoc(int n, char s[]);
void main()
{
 
 
 char s[100];
 int d = -1234; 
 itoc(d,s);
 printf("\n %s", s);

}


int i = 0;


void itoc(int n,char s[])
{
  if (n < 0) {
  s[i++] = '-'; 
  n = -n;
}
  if (n / 10)
    itoc((n / 10) , s);
  s[i++] = (n % 10 + '0');

}
