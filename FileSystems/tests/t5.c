#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr;

	char *str=(char*)calloc(80, sizeof(char));

	if((fptr=fopen("Test3.txt", "r"))==NULL)
	{
		printf("\nFailed to open file!!\n");
		return 0;
	}

	while(fgets(str, 80, fptr)!=NULL)
		puts(str);

	free(str);
	fclose(fptr);
	return 0;
}
