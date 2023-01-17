#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	typedef int intarr[10];
	intarr a, b;

	for(int i=0; i<10; i++)
	{
		a[i]=i+1;
		b[i]=2*(i+1);
	}

	printf("\nElements:\n");

	printf("Array a\n");
	for(int i=0; i<10; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("Array b\n");
	for(int i=0; i<10; i++)
		printf("%d ", b[i]);
	printf("\n");

	intarr m[3]; // this is a 2D array m[3][10]
	
	for(int i=0; i<3; i++)
		for(int j=0; j<10; j++)
			m[i][j]=(i+1)*(j+1);

	printf("\nMatrix\n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<10; j++)
			printf("%d ", m[i][j]);
		printf("\n");
	}

	printf("\n");

	return 0;
}
