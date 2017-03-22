#include <stdio.h>
#define LIMIT 100

int geline(char s[],int i);
void reverse(char s[],int i, int len);
void main()
{
  char s[LIMIT];
  
  int len = geline(s,LIMIT);
  reverse(s,0,len);
  printf("\n %s",s);


}

int geline(char s[], int lim)
{ 

    int i,c;

    for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
        s[i] = c;

    if(c=='\n')
        s[i++]='\n';

    s[i]='\0';
  
return i;

}
 





void reverse(char s[],int i,int len)
{
    int c,j;

    j = len - (i + 1);
    
    if( i < j )
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;

        reverse(s,++i,len);
    }
}
