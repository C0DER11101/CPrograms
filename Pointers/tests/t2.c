#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a[]={1, 2, 3, 4, 5};
	int (*ptr)[5];

	ptr=&a;

	int *aptr=a; // equivalent to writing:  int *aptr=&a[0];

	printf("\nAddress of array a: %p\n", ptr);

	printf("\nAddress of 0th element of array: %p\n", aptr);

	printf("\nValue of 0th element of array using pointer to array: %d\n", **ptr);

	printf("\nValue of 0th element of array using pointer to integer: %d\n", *aptr);

	printf("\nValue of 0th elemnet of array using array a: %d\n", a[0]);

	return 0;
}
