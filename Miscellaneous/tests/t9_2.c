#include<stdio.h>

int main(void)
{
	const int a=5, b=6;

	int const*p=&a; // or const int*p=&a; [it's all the same]

	printf("p=%d\n", *p);

	p=&b; // valid
	printf("p=%d\n", *p);

	return 0;
}
