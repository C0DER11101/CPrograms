#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	char name[30];
	size_t age;
	size_t roll;
}student;

int main(void)
{
	student stu={"John", 20, 90};

	printf("\nDetails:\n");
	printf("Name:%s\nAge: %ld\nRoll number: %ld\n", stu.name, stu.age, stu.roll);

	return 0;
}
