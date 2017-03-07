#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
void get_line(char line[], int max);
int strindex(char source[], char searchfor[]);
char pattern[50];
/* pattern to search for */
/* find all lines matching pattern */



void main()
{ 
int f;
char line[MAXLINE];
printf("\n enter the sentence ");
get_line(line, MAXLINE);
printf("\n enter the pattern to be search");
get_line(pattern,50);
f = strindex(line,pattern);
if(f == 0)
  printf("\n pattern not found");
else 
  printf("\nthe last ocurance of pattern is at %d",f);



}




void get_line(char s[], int lim)
{
int c, i;
i = 0;
while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
s[i++] = c;
if (c == '\n')
s[i++] = c;
s[i] = '\0';
}


int strindex(char s[], char t[])
{
int i, j, k,f=0;
for (i = 0; s[i] != '\0'; i++) {
for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
;
if (k > 0 && t[k] == '\0')
 f = i;
}
if (f > 0)
 return f;
else
 return -1;
}
