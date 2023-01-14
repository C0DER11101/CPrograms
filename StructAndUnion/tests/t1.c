#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct
{
	char *name;
	int rollno;
	float marks;
}stu1, stu2, stu3;

int main(void)
{
	stu1.name=(char*)malloc(30*sizeof(char));
	stu2.name=(char*)malloc(30*sizeof(char));
	stu3.name=(char*)malloc(30*sizeof(char));

	strcpy(stu1.name, "Fedora");
	strcpy(stu2.name, "Cinnamon");
	strcpy(stu3.name, "Debian");

	stu1.rollno=1;
	stu2.rollno=2;
	stu3.rollno=3;

	stu1.marks=45.6;
	stu2.marks=55.6;
	stu3.marks=65.6;

	printf("\nSTUDENT 1:\n");
	printf("Name: %s\n", stu1.name);
	printf("Roll number: %d\n", stu1.rollno);
	printf("Marks: %f\n", stu1.marks);

	printf("\nSTUDENT 2:\n");
	printf("Name: %s\n", stu2.name);
	printf("Roll number: %d\n", stu2.rollno);
	printf("Marks: %f\n", stu2.marks);

	printf("\nSTUDENT 3:\n");
	printf("Name: %s\n", stu3.name);
	printf("Roll number: %d\n", stu3.rollno);
	printf("Marks: %f\n", stu3.marks);

	free(stu1.name);
	free(stu2.name);
	free(stu3.name);

	return 0;
}
