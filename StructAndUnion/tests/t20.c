#include<stdio.h>
#include<stdlib.h>

union result
{
	int marks;
	char grade;
	float per;
};

int main(void)
{
	union result res;
	res.marks=90;
	printf("Marks: %d\n", res.marks);
	res.grade='A';
	printf("Grades: %c\n", res.grade);
	res.per=80;
	printf("Percentage: %f\n", res.per);
	return 0;
}
