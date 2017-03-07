#include<stdio.h>

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
	mid = (low+high)/2;
        if (x < v[mid])
            high = mid + 1;
        else if (x > v[mid])
            low = mid + 1;
        else 
             return mid;
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
        int f = binsearch(d,a,i);
	if( f == -1)
        	printf("\n not found");
	else
		printf("found at %d ",(f + 1));

}


