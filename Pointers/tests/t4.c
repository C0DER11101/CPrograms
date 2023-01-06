#include<stdio.h>
#include<stdlib.h>

// Simulation of call by reference in C

void swap(int*, int*);

int main(void)
{
	int a=10, b=20;

	printf("\nOriginal values:\na=%d\tb=%d\n", a, b);

	swap(&a, &b);

	printf("\nValues after swapping:\na=%d\tb=%d\n", a, b);

	return 0;
}

void swap(int*a, int*b)
{
	int temp;

	temp=*a;
	*a=*b;
	*b=temp;

}
