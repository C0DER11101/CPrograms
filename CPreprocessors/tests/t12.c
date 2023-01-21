#include<stdio.h>
#include<stdlib.h>
#define SWAP(dtype, x, y) {dtype t; t=x, x=y, y=t;}

int main(void)
{
	int a=2, b=4;

	printf("\nBefore swapping\n");
	printf("a=%d\tb=%d\n", a, b);

	SWAP(int, a, b);

	printf("\nAfter swapping\n");
	printf("a=%d\tb=%d\n", a, b);

	return 0;
}
