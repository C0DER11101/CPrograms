#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int *p, size;

	printf("enter size of the array: ");
	scanf("%d", &size);

	p=(int*)calloc(size, sizeof(int));

	printf("\nenter elements into the array:\n");

	for(int i=0; i<size; i++)
	{
		printf("[%d]: ", i);
		scanf("%d", &*(p+i));
	}

	printf("\nentered elements are:\n");

	for(int i=0; i<size; i++)
	{
		printf("%d ", p[i]);
	}

	free(p);

	printf("\n");

	return 0;
}
