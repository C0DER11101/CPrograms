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
	struct record student={"noname", 0, 0};
	FILE* fptr;

	if((fptr=fopen("StuDetails.txt", "wb"))==NULL)
	{
		printf("\nFailed to open file!!\n");
		return 0;
	}

	printf("\nFile opened successfully!!\n");

	int n;

	printf("enter number of records: ");
	scanf("%d", &n);

	printf("\nenter details:\n");

	for(int i=0; i<n; i++)
	{
		printf("\nStudent %d\n", i+1);
		printf("Name: ");
		scanf("%s", student.name);
		printf("Roll number: ");
		scanf("%d", &student.roll);
		printf("Marks: ");
		scanf("%d", &student.marks);

		if((fwrite(&student, sizeof(student), 1, fptr))==1)
			printf("\nDetails written successfully!!\n");
		else
			printf("\nFailed to write details!!\n");
	}

	fclose(fptr);

	return 0;
}
