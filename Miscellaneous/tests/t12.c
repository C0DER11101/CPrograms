#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=5, b=6;

	int* const p;
	p=&a; // invalid

	printf("a = %d\n", *p);

	return 0;
}
