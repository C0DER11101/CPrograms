#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int *arr[3];

	int a=10, b=20, c=30;

	arr[0]=&a;
	arr[1]=&b;
	arr[2]=&c;

	printf("\n\nValues of elements of arr:\n");

	for(int i=0; i<3; i++)
		printf("%d\t", *arr[i]);
	printf("\n");

	return 0;
}
