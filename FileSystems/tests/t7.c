#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr;
	char *name=(char*)calloc(100, sizeof(char));

	if((fptr=fopen("Test5.txt", "r"))==NULL)
	{
		printf("\nFailed to open file!!\n");
		return 0;
	}

	printf("\nFile opened successfully!\n");
	while(fscanf(fptr, "%s", name)!=EOF)
		printf("%s ", name);


	fclose(fptr);
	free(name);
	return 0;
}
