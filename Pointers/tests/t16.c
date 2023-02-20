#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=10, *p;

	void *vptr=&a;

	p=vptr;

	printf("a = %d\n", *p);
	return 0;
}
