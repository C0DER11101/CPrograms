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
	union result res={90, 'A', 90};
	return 0;
}
