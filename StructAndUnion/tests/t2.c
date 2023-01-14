#include<stdio.h>
#include<stdlib.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};



int main(void)
{
	struct student stu1={"Mary", 25, 98};
	struct student stu2;

	stu2=stu1;


	printf("\nStudent-1:\n");
	printf("Name: %s\n", stu1.name);
	printf("Roll number: %d\n", stu1.roll);
	printf("Marks: %f\n", stu1.marks);

	printf("\nStudent-2:\n");
	printf("Name: %s\n", stu2.name);
	printf("Roll number: %d\n", stu2.roll);
	printf("Marks: %f\n", stu2.marks);
	return 0;
}
