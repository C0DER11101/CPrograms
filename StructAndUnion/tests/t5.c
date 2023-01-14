#include<stdio.h>
#include<stdlib.h>

struct student
{
	int rollno;
	int age;
};

int main(void)
{
	int age=10;
	struct student stu[5];

	for(int i=0; i<5; i++)
	{
		stu[i].rollno=2*(i+1);
		stu[i].age=age*(i+1);
	}

	printf("\nElements:\n");

	for(int i=0; i<5; i++)
	{
		printf("\nSTUDENT %d\n", i+1);
		printf("Roll number: %d\n", stu[i].rollno);
		printf("Age: %d\n", stu[i].age);
	}

	return 0;
}
