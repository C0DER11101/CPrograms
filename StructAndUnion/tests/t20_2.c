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
	res.grade='A';
	res.per=85.6;

	printf("\nMarks: %d\n", res.marks);
	printf("Grade: %c\n", res.grade);
	printf("Percentage: %f\n", res.per);

	return 0;
}
