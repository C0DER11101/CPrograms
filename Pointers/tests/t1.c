#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a[]={1, 2, 3, 4, 5};

	int (*ptr)[5];

	ptr=&a; // ptr stores the address of the array a

	printf("\nPrinting the values using the actual array:\n");

	for(int i=0; i<5; i++)
		printf("%d ", a[i]);

	printf("\nPrinting the values using \"pointer to array\":\n");

	for(int i=0; i<5; i++)
		printf("%d ", *(*(ptr)+i));

	printf("\n\n");

	return 0;
}
