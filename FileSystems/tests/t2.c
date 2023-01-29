#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr;

	if((fptr=fopen("Test1.txt", "r"))==NULL)
	{
		printf("\nError!!\n");
		return 0;
	}

	char c;

	while((c=fgetc(fptr))!=EOF)
	{
		printf("%c", c);
	}

	fclose(fptr);
	return 0;
}
