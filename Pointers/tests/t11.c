#include<stdio.h>
#include<stdlib.h>

void add(int, int);

int main(void)
{
	int a=10, b=20;
	printf("\nAddress of main function: %p\n", main);
	printf("\nAddress of add function: %p\n", add);

	add(a, b);
	return 0;
}

void add(int a, int b)
{
	printf("\n%d+%d = %d\n", a, b, a+b);
}
