#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fptr;
	char *str=(char*)malloc(100*sizeof(char));

	if((fptr=fopen("Test4.txt", "w"))==NULL)
	{
		printf("\nError while opening file!!\n");
		return 0;
	}

	printf("enter text: ");

	while(gets(str)!=NULL)
		fputs(str, fptr);

	fclose(fptr);

	free(str);
	return 0;
}
