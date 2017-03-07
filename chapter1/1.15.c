#include <stdio.h>
int fartocell(int far)
{ 
  int cell;d
  cell = 5 * (far-32) / 9;
  return(cell);
}

int celltofar(int cell)
{
  
  int far;
  far = (9 * (cell/5) ) + 32;
  return(far);
}
   
void main()
{
  int min = 0;
  int max = 300;
  
  printf(" celciuis to farenheit\n");
   for(int i = min; i < max; i = i+20)
       prnitf("%d \t %d\n",i, celltofar(i));
  printf(" farenheit to celcius \n");
    for(i = min; i < max; i = i + 20)
        prnitf("%d \t %d\n",i, fartocell(i));
 }

  
