#include<stdio.h>
#include<stdlib.h>

// VOID POINTER

int main(void)
{
	int a=10;
	float b=34.5f;
	double c=12.14;

	void *vptr;

	vptr=&a;

	printf("\nDisplaying an integer value using void pointer: %d\n", *(int*)vptr);

	vptr=&b;

	printf("\nDisplaying a float value using void pointer: %f\n", *(float*)vptr);

	vptr=&c;

	printf("\nDisplaying a double value using void pointer: %lf\n", *(double*)vptr);

	return 0;
}
