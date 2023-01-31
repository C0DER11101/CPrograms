#include<stdio.h>
#include<stdlib.h>

struct record
{
	char name[20];
	int roll;
	int marks;
};

int main(void)
{
	int recNo; // record number
	FILE* fptr;
	struct record student;

	if((fptr=fopen("StuDetails.txt", "rb"))==NULL)
	{
		printf("\nFailed to open file!!\n");
		return 0;
	}

	printf("\nFile opened for reading!!\n");

	printf("\nenter record number to be retrieved: ");
	scanf("%d", &recNo);

	fseek(fptr, (recNo-1)*sizeof(student), SEEK_SET);
	fread(&student, sizeof(student), 1, fptr);

	printf("\nRecord number: %d\n", recNo);

	printf("Name: %s\n", student.name);
	printf("Roll number: %d\n", student.roll);
	printf("Marks: %d\n", student.marks);

	fclose(fptr);
	return 0;
}
