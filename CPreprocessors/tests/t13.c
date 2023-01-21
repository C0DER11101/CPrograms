#include<stdio.h>
#include<stdlib.h>
#define SWAP(dtype, x, y) {dtype t; t=x, x=y, y=t;}

int main(void)
{
	int s=2, t=4;

	printf("\nBefore swapping\n");
	printf("s=%d\tt=%d\n", s, t);

	SWAP(int, s, t) // {int t; t=s, s=t, t=s;}

	printf("\nAfter swapping\n");
	printf("s=%d\tt=%d\n", s, t);

	return 0;
}
