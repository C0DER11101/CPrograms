#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE* fptr;

	if((fptr=fopen("Test7.txt", "wb"))==NULL)
	{
		printf("\nFailed to open file!!\n");
		return 0;
	}
	
	printf("\nFile opened successfully!!\n");
	int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	fwrite(arr, sizeof(arr), 1, fptr);

	fclose(fptr);
	return 0;
}
