#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	void*vptr;

	int a=10, **ptr;
	vptr=&a;

	ptr=&vptr; // warning!!

	printf("a = %d\n", **ptr);

	return 0;
}
