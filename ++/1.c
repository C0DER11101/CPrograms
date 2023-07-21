#include<stdio.h>

// using a C99 feature!!

typedef struct sample
{
	int    first;
	int    second;
	int    third;
}sample;

int main(void)
{
	sample s={.first=10, .second=20, .third=30};

	printf("First = %d\nSecond = %d\nThird = %d\n", s.first, s.second, s.third);

	return 0;
}
