#include<stdio.h>
#include<stdlib.h>

// Functions "returning" more than one values

void operations(int, int, int*, int*, int*);
int main(void)
{
	int a=10, b=20, sum=0, diff=-1, div=0;

	printf("\nOriginal values:\n");

	printf("a=%d\tb=%d\tsum=%d\tdiff=%d\tdiv=%d\n", a, b, sum, diff, div);

	operations(a, b, &sum, &diff, &div);

	printf("\nValues after performing operations:\n");

	printf("a=%d\tb=%d\tsum=%d\tdiff=%d\tdiv=%d\n", a, b, sum, diff, div);

	return 0;
}

void operations(int a, int b, int *sum, int *diff, int*div)
{
	*sum=a+b;
	*diff=a>b?a-b:b-a;
	*div=a>b?a/b:b/a;
}
