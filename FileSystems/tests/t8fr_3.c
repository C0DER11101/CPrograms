#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE* fptr;

	int arr[10]={0};

	if((fptr=fopen("Test8.txt", "rb"))==NULL)
	{
		printf("\nFailed to open file!!\n");
		return 0;
	}

	printf("\nFile opened for reading!!\n");

	fread(arr, sizeof(int), 5, fptr);

	printf("\nHere are the integers\n");
	for(int i=0; i<10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	fclose(fptr);

	return 0;
}
