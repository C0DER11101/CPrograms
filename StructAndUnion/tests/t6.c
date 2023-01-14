#include<stdio.h>
#include<stdlib.h>

struct first
{
	int OuterValue;
	struct second
	{
		int InnerValue;
	}var;

};

int main(void)
{
	struct second s;

	s.InnerValue=10;
	printf("\nValue=%d\n", s.InnerValue);
	return 0;
}
