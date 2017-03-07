#include<stdio.h>

int search(int x, int v[], int n)
{
    int i = 0;
   
    while ( i < n) {
	if( v[i] == x)
        	return i;
         else
		i++;
	}
     return -1;
}

void main()
{       int i = 0,n;
        int d;
        char c;
	int a[50];
        printf("enter no of elements in the array\n");
	scanf("%d",&n);
        printf("enter elements to array\n");
        for( i= 0 ; i < n; i++)
        scanf("%d",&a[i]);
        printf("\n enter the no to be searched");
        scanf("%d",&d);
        int f = search(d,a,i);
	if( f == -1)
        	printf("\n not found");
	else
		printf("found at %d ",(f + 1));

}


