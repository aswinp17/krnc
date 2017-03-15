#include <ctype.h>

#include <stdio.h>
int power(int base,int exp)
{
    int power;
    power=1;
    while(exp-- > 0)
        power *=base;

    return power;
}



double atof(char s[])
{ double val,pow;
    int sign,i,esign,exp;   
    int power(int base,int exp);    
        
    for(i=0;isspace(s[i]);i++)
        ;

    sign=(s[i]=='-')?-1:1;

    if(s[i]=='+' || s[i] == '-')
        i++;

    for(val=0.0;isdigit(s[i]);i++)
        val = 10.0 * val + (s[i] - '0');
    
    if(s[i]=='.')
        i++;

    for(pow=1.0;isdigit(s[i]);i++)
    {
        val = 10.0 * val + (s[i] - '0');
        pow *= 10.0;
    }

    if(s[i]=='e' || s[i] =='E')
        i++;
    if(s[i]=='+' || s[i] =='-')
    {
        esign=s[i];
        i++;
    }

    for(exp=0;isdigit(s[i]);i++)
        exp=10.0 * exp + (s[i] - '0');
    
    if( esign == '-')
        return (sign * val)*2.7182 -(exp);
    else
    
        return (sign * val)*2.7182 +(exp);
}

int get_line(char s[],int lim)
{
    int i,c;

    for(i=0;i<lim-1 && (c=getchar())!=EOF;++i)
        s[i]=c;

    s[i]='\0';
}

void main()
{
char c[50];
printf("\n enter the string");
get_line(c,50);
double k = atof(c);
printf("\n the computed value of the string is %lf",k);



}

