#include<stdio.h>
#include<stdlib.h>

struct second
{
	int InnerValue;
};

struct first
{
	int OuterValue;
	struct second var;
};

int main(void)
{
	struct second s;

	s.InnerValue=10;

	printf("\nValue=%d\n", s.InnerValue);

	return 0;
}
