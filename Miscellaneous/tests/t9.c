#include<stdio.h>

int main(void)
{
	const int a=5, b=6;

	int const*p=&a; // or const int*p=&a; [it's all the same]

	printf("p=%d\n", *p);

	*p=9; // same as writing: a=9; which is invalid!!

	return 0;
}
