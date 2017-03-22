#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define MAXOP 100
#define NUMBER '0'
#define BUFSIZE 100
#define MAXVAL 100

void ungetch(int);
int getop(char []);
void push(double);
double pop(void);
int getch(void);
void clean(void);

int sp = 0;
char buf[BUFSIZE];
int bufp = 0;
double val[MAXVAL];


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
        case 'd'://duplicate
                op2 = pop();
                push(op2);
                push(op2);
           break;
        case 's'://swap
                op1 = pop();
                op2 = pop();
                push(op1);
                push(op2);
           break;
       
        case 'c'://clear stack
                clean();
           break;
        case 'o':
                 printf("\t%.8g\n",pop());
	   break;
        case 'a': //sin of value
		push(sin(pop()));
	   break;
	case 'b' : //exponent function
		push(exp(pop()));
	   break;
	case 'p': //power function
		op2 = pop();
		push(pow(pop(),op2));
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

int getop(char s[])
{
   int i, c;
   while ((s[0] = c = getch()) == ' ' || c == '\t')
	;
   s[1] = '\0';
   if (!isdigit(c) && c !='.')
	return c;
   i = 0;
   if (isdigit(c))
	while (isdigit (s[++i] = c = getch()))
	    ;
   if (c == '.')
	while (isdigit(s[++i] = c = getch()))
	    ;
   s[i] = '\0';
   if (c != EOF)
	ungetch(c);
   return NUMBER;
}

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] :getchar();
}

void ungetch(int c)
{
	if (bufp >= BUFSIZE)
	    printf("ungetch: toomany charecters\n");

	else 
	    buf[bufp++] = c;
}
