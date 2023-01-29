#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char c;
	FILE *fptr;
	fptr=fopen("Test1.txt", "w");

	if(fptr==NULL)
	{
		printf("\nFailed to open file!\n");
		return 0;
	}

	else
	{
		printf("\nFile opened successfully!!\n");
	}

	printf("\nEnter text:\n");

	while((c=getchar())!=EOF)
	{
		fputc(c, fptr);
	}

	fclose(fptr);


	return 0;
}
