#include <stdio.h>

int get_line(char s[],int lim)
{
    int i,c;

    for(i=0;i<lim-1 && (c=getchar())!=EOF;++i)
        s[i]=c;

    s[i]='\0';
}

void escape(char a[],char b[])
{
	int j = 0;
	while(a[j] != EOF) {
		switch(a[j]) {
			case '\n':
                        b[j++] = '\\';
			b[j] = 'n';
			++j;
			break;
              		
			case '\t':
			b[j++] = '\\';
			b[j] = 't';
			++j;
			break;

			default:
			b[j] = a[j];
			++j;
			break;
		}
	}			 
}

void main()
{       char t[50];
	char s[50];
        printf("\n enter the string");
        get_line(s,50);
        escape(s,t);
        printf("\n the new string is :%s",t);
}
