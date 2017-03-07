#include <stdio.h>


void reverse(char s[], int k)
{
 int i, j,c;
     j = k-1;
 for(i = 0; i<j ;i++,j--)
    {
      c = s[i];
      s[i] = s[j];
      s[j] = c;
    }
}

void itob(int n,char s[],int b)
{
    int i,j,sign,k;

    if((sign=n)<0)
        n = -n;
    k = 0;
    i = 0;

    do
    {
        j = n % b;
        ++k;

        s[i++] = (j <= 9)?j+'0':j+'a'-10;
    }while((n/=b)>0);

    if(sign < 0)
        s[i++]='-';
    
    s[i]='\0';
    
    reverse(s,k);
}

void main()
{
 char s[20];
 int i, b;
 printf("\nenter the no to be converted :");
 scanf("%d",&i);
 printf("\nenter the base to which cnverted:");
 scanf("%d",&b);
 itob(i,s,b);
 
 printf("the converted string is '%s'",s);
}
