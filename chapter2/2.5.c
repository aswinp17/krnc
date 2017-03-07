#include <stdio.h>
int any(char a[],char b[])
 { 
   char c;
   int f = -1;
   for( int i = 0; a[i] != '\0'; ++i){
        c = a[i];
        for( int j = 0; b[j] != '\0'; ++j)
           if ( b[j] == c){
               f = i+1;
               break;
              }
      }
    return f;
 }  
void main()
 { 
 int i,j;
 char ch1[10],ch2[10],c;
 printf("\n enter 1st string\n");
 for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        ch1[i] = c;
        ch1[i] = '\0';
 printf("\n enter 2st string\n");
 for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        ch2[i] = c;
        ch2[i] = '\0';
 
 j = any(ch1,ch2);
 printf("\n%d",j);
 }
 
