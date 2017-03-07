#include <stdio.h>
void squeeze(char a[],char b[])
 { 
   char c;
   int f = 0;
   for( int i = 0; a[i] != '\0'; ++i){
        c = a[i];
        f = 0;
        for( int j = 0; b[j] != '\0'; ++j)
           if ( b[j] == c)
             f = 1;
        if( f == 0)
        a[i] = c;
        else
        a[i] = ' ';
        }
    printf("the first string is ----> %s",a);
 }  
void main()
 { int i;
 char ch1[10],ch2[10],c;
 printf("\n enter 1st string");
 for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        ch1[i] = c;
        ch1[i] = '\0';
 printf("\n enter 2st string");
 for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        ch2[i] = c;
        ch2[i] = '\0';
 

 squeeze(ch1,ch2);
 }
 
