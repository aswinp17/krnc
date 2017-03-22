#include<stdio.h>

#define swap(t,x,y) { t z; \
             z = x;\
             x = y;\
             y = z; }

int main(void)
{
    char x,y;
    x='a';
    y='b';
    swap(char,x,y);
    printf("x=%c \t y=%c\n",x,y);
}
