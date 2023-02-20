#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	void*vptr;

	int a=10, **ptr;

	vptr=&a;

	ptr=(int**)&vptr;

	printf("a = %d\n", **ptr);

	return 0;
}
