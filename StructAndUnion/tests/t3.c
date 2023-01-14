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
	struct student stu1;

	printf("\nSize of structure \"student\" using tagname: %lu\n", sizeof(struct student));
	printf("\nSize of structure \"student\" structure variable: %lu\n", sizeof(stu1));

	return 0;
}
