#include<stdio.h>
#include<stdlib.h>
#define SQUARE(x) printf(#x" x "#x" = %d\n", x)


int main(void)
{
	int num=5;

	SQUARE(num);

	return 0;
}
