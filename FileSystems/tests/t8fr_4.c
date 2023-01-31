#include<stdio.h>
#include<stdlib.h>

struct student
{
	char name[20];
	unsigned int age;
};

int main(void)
{
	struct student record={"noname", 0};
	FILE* fptr;

	if((fptr=fopen("Test9.txt", "rb"))==NULL)
	{
		printf("\nFailed to open file!!\n");
		return 0;
	}

	printf("\nFile opened for reading!!\n");

	for(int i=0; i<2; i++)
	{
		fread(&record, sizeof(record), 1, fptr);
		printf("\nStudent %d\n", i+1);
		printf("Name: %s\n", record.name);
		printf("Age: %d\n", record.age);
	}

	fclose(fptr);
	return 0;
}
