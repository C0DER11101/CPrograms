#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr;
	char *name=(char*)calloc(100, sizeof(char));
	int age;

	if((fptr=fopen("Test5.txt", "r"))==NULL)
	{
		printf("\nFailed to open file!!\n");
		return 0;
	}

	printf("\nFile opened successfully!\n");
	while(fscanf(fptr, "%s %d", name, &age)!=EOF)
		printf("%s%d", name, age);


	fclose(fptr);
	free(name);
	return 0;
}
