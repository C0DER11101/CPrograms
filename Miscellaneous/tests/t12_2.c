#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	const int a=5, b=6;
	const int*const p;
	p=&a; // invalid
	printf("a = %d\n", *p);

	return 0;
}
