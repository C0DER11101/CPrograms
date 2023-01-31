#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE* fptr;
	
	int number;

	if((fptr=fopen("Test6.txt", "rb"))==NULL)
	{
		printf("\nFailed to open file!!\n");
		return 0;
	}

	printf("\nFile opened for reading!\n");

	fread(&number, sizeof(int), 1, fptr);

	printf("\nNumber = %d\n", number);

	fclose(fptr);
	return 0;
}
