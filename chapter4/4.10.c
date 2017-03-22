#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define MAXOP 100
#define NUMBER '0'
#define BUFSIZE 100
#define MAXVAL 100
#define MAXLINE 100




char line[MAXLINE];  
int geline(char s[],int lim);
int getop(char []);
void push(double);
double pop(void);
void clean(void);

int sp = 0;
char buf[BUFSIZE];
int bufp = 0;
double val[MAXVAL];
int li = 0;

int main()
{
  int type;
  double op2,op1;
  char s[MAXOP];
  
  
  while ((type = getop(s)) != EOF) {
	switch (type) {
	case NUMBER:
	   push(atof(s));
	   break;
	case '+':
	   push(pop() + pop());
 	   break;
	case '-':
	   op2 = pop();
	   push(pop() - op2);
	   break;
	case '/':
	   op2 = pop();
	   if (op2 != 0.0)
		push(pop() / op2);
	   else
		printf("error: zero divisor\n");
	   break;
	case '%':
	   op2 = pop();
	   if (op2 != 0.0)
               push( fmod( op2, pop() ));
	   else
		printf("error");
	   break;
	case '*':
	    	push(pop() * pop());
	   break;
        case 'd':
                op2 = pop();
                push(op2);
                push(op2);
           break;
        case 's':
                op1 = pop();
                op2 = pop();
                push(op1);
                push(op2);
           break;
        case 'p':
                op1 = pop();
                printf("\t%.8g\n",op1);
                push(op1);
           break;
        case 'c':
                clean();
           break;
        case 'o':
                 printf("\t%.8g\n",pop());
	   break;
        }
    }
 return 0;
}



void clean()
{
  sp = 0;
} 

void push(double f)
{
  if(sp < MAXVAL)
	val[sp++] = f;
  else
	printf("eroor stack full , cant push%g\n",f);
}

double pop(void)
{
   if(sp > 0)
	return val[--sp];
   else {
	printf("error: stack is empty\n");
	return 0.0;
	}
}


int geline(char s[],int lim)
{
    int i,c;

    for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
        s[i] =c;
    
    if(c=='\n')
        s[i++] =c;

    s[i]='\0';
    
    return i;
}


int getop(char s[])
{
   int c,i;

    if(line[li] == '\0')
        if(geline(line,MAXLINE) == 0)
            return EOF;
        else
            li =0;
    
    while((s[0] = c = line[li++]) == ' ' || c == '\t')
        ;
    
    s[1] = '\0';
    
    if(!isdigit(c) && c!= '.')
        return c;
    
    i = 0;
    
    if(isdigit(c))
        while(isdigit(s[++i] = c = line[li++]))
            ;
    if( c == '.')
        while(isdigit(s[++i] = c = line[li++]))
            ;
    
    s[i] = '\0';

    li--;

    return NUMBER;
}


