#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	FILE* fptr;

	if((fptr=fopen("Test8.txt", "wb"))==NULL)
	{
		printf("\nFailed to open file!!\n");
		return 0;
	}

	printf("\nFile opened successfully!!\n");

	fwrite(arr, sizeof(int), 5, fptr);

	fclose(fptr);
	return 0;
}
