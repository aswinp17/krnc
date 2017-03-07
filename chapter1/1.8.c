#include <stdio.h>
void main()
 { 
 
    int space=0,tab=0,nl=0;
    int c;
    
    while((c = getchar()) != 'q'){

    if(c == '\n')
    ++nl;
    if(c == ' ')
    ++space;
    if(c == '\t')
    ++tab;
    }
    printf("no of spaces is : %d\n no of newlines is %d\n no of tabs is %d",space,nl,tab); 
    
}
