
#include <stdio.h>
void main()
 {
  int c;
  int ob=0,cb=0,op=0,cp=0,sq=0,dq=0;
  
  while((c = getchar()) != EOF) {
         if(c == '{')
           ob = ob+1;
         if(c == '}')
           cb = cb+1;
         if(c == '(')
           op = op+1;
         if(c == ')')
           cp = cp+1;
         
         
         if(c == '"')
           dq = dq+1;
        }

  
  if    (ob >> cb)
     printf("ERROR %d closing braces is missing\n",(ob-cb));
  else if(cb >> ob)
     printf("ERROR %d openning brases is missing\n",(cb-ob));
  else
   ;
  if  (op >> cp)
     printf("ERROR %d paranthesis is missing\n",(op - cp));
  else if(cp >> op)
     printf("ERROR %d openning brases is missing\n",(cp - op));
  else
   ;
  if((sq % 2) != 0)
     printf("error single quotes missing \n");
  if((dq % 2) != 0)
     printf("error double quotes missing \n");
 
 getchar();

}

    
