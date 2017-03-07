#include<stdio.h>

void main()
{
    int c,i,j;

    int ch[128];
    
    for(i=0;i<128;++i)
        ch[i] = 0;
    
    while((c=getchar())!=EOF)
        ++ch[c];

    for(i=0;i<128;++i) {
    
        putchar(i);
        
        for(j=0;j<ch[i];++j)
            putchar('*');
        
        putchar('\n');
    }

}

