#include<stdio.h>

int main(void)
{
	const int a=5, b=6;

	int const*p;
	p=&a;

	printf("a = %d\n", *p);


	return 0;
}
