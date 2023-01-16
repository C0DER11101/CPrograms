#include<stdio.h>
#include<stdlib.h>

union student
{
	char name[30];
	int age;
};

student stu1;

int main(void)
{
	printf("\nHello\n");

	return 0;
}
