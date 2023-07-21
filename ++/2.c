#include<stdio.h>

typedef struct
{
	int   first;
	int   second;
	int   third;
}level;

int main(void)
{
	level lvl={
		.first=100,
		.second=500,
		.third=900
	};

	printf("First = %d\nSecond = %d\nThird = %d\n", lvl.first, lvl.second, lvl.third);

	return 0;
}
