#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr;
	char *name=(char*)calloc(100, sizeof(char));
	int age;

	if((fptr=fopen("Test5.txt", "w"))==NULL)
	{
		printf("\nFailed to open file!!\n");
		return 0;
	}

	printf("\nFile opened successfully!\n");
	printf("Enter age: ");
	scanf("%d", &age);
	printf("\nEnter text:\n");
	while(gets(name));

	fprintf(fptr, "My name is %s and I am %d years old!\n", name, age);

	fclose(fptr);
	free(name);
	return 0;
}
