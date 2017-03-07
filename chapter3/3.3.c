#include<stdio.h>

int get_line(char s[],int lim)
{
    int i,c;

    for(i=0;i<lim-1 && (c=getchar())!=EOF;++i)
        s[i]=c;

    s[i]='\0';
}

void expand(char s1[], char s2[])
{ 
	
	int c,i,j;
	i=j=0;
	while((c=s1[i++]) != '\0') {
		if(s1[i] == '-' && s1[i+1] >= c)
		{
                      i++;
                      while(c<s1[i])
                      s2[j++]=c++;
                 }
                 else
                      s2[j++]=c;

    s2[j]='\0';
   }

}

void main()
{
  char c1[100],c2[100];
  printf("\n enter the 1st string");
  get_line(c1,100);
  expand(c1,c2);
  printf("\n the second string is %s  ",c2);
}
