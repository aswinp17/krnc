#include <stdio.h>
#define MAXLINE 50	

int getine( char s[])  
{  
     int c,i;

      for (i=0; i<50 && ((c=getchar())!=EOF && c!='\n'); ++i)
          s[i]=c;
      if (c == '\n') {
          s[i] = c;
          ++i;
         }
       if (i >= 50) {
           while((c = getchar()) !=EOF && c != '\n')
           ++i;
          }  
        s[i] = '\0';
       
        return i;
}

void copy(char to[], char from[])
{
   int i;
          
   i = 0;
   while((to[i] = from[i]) != '\0')
   ++i;
} 

void main()
 {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    
    max=0;
    while ((len = getine(line)) > 0)
       if(len > max) {
          max = len;
          copy(longest, line);
       }
     if (max > 0)
       printf("the longest line is \n %s",longest);
       printf("the length of the maximum line is %d",max);
 }




