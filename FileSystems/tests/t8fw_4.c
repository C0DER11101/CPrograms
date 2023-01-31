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

	if((fptr=fopen("Test9.txt", "wb"))==NULL)
	{
		printf("\nFailed to open file!!\n");
		return 0;
	}

	printf("\nFile opened successfully!!\n");

	printf("\nenter details of the students:\n");

	for(int i=0; i<2; i++)
	{
		printf("\nStudent %d\n", i+1);
		printf("Name: ");
		scanf("%s", record.name);
		printf("Age: ");
		scanf("%d", &record.age);

		if(fwrite(&record, sizeof(record), 1, fptr)==1)
			printf("\nDetails written successfully!!\n");

		else
			printf("\nFailed to write!!\n");
	}

	fclose(fptr);

	return 0;
}
