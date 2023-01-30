#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE* fptr;

	int number=100;

	if((fptr=fopen("Test6.txt", "wb"))==NULL)
	{
		printf("\nFailed to open file!!\n");
		return 0;
	}

	printf("\nFile opened successfully!!\n");

	fwrite(&number, sizeof(int), 1, fptr);

	fclose(fptr);

	return 0;
}
