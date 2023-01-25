#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=5, b=6;

	int* const p;
	p=&a;

	printf("a = %d\n", *p);
	*p=10; // valid!!
	printf("a = %d\n", *p);

	p=&b; // invalid
	printf("b = %d\n", *p);

	return 0;
}
