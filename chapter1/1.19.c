#include <stdio.h>
#define MAXLINE 1000	

int getine( char s[], int lim)  
{  
     int c,i;

      for (i=0; i<lim-1 && ((c=getchar())!=EOF && c!='\n'); ++i)
          s[i]=c;
      if (c == '\n') {
          s[i] = c;
          ++i;
         }
        s[i] = '\0';
       
        return i;
}

void reverse(char a[], int i)
 { 
   for( int k = i-1; k >=0; k--)
      printf("%c",a[k]);
      printf("\n");
  }
     

void main()
 {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    
   
    while ((len = getine(line, MAXLINE)) > 0)
          reverse(line,len);
         
    
 }




