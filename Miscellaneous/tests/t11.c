#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	const int a=5, b=6;
	const int*const p=&a;
	printf("a = %d\n", *p);

	*p=20;
	printf("a = %d\n", *p);


	printf("a = %d\n", *p);
	p=&b;
	return 0;
}
