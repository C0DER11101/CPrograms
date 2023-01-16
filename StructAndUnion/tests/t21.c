#include<stdio.h>
#include<stdlib.h>

union result
{
	double marks;
	char grade;
	float per;
};

int main(void)
{
	union result res={'A'};

	printf("Marks: %lf\n", res.marks);
	printf("Grade: %c\n", res.grade);
	printf("Percentage: %f\n", res.per);
	return 0;
}
