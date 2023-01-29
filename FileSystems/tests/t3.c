#include<stdio.h>
#include<stdlib.h>

// program to copy the contents of one file to another!!

int main(void)
{
	FILE *source, *dest;

	char c;

	if((source=fopen("Test1.txt", "r"))==NULL)
	{
		printf("\nError while opening source file!!\n");
		return 0;
	}

	if((dest=fopen("Test2.txt", "w"))==NULL)
	{
		printf("\nError while opening destination file!!\n");
		return 0;
	}

	while((c=fgetc(source))!=EOF)
		fputc(c, dest);

	fclose(source);
	fclose(dest);

	return 0;
}
