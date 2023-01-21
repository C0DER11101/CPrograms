#include<stdio.h>
#define SQUARE(x) (x)*(x)


int main(void)
{
	int a=5;

	printf("Square of %d is %d\n", a+1, SQUARE(a+1));
	return 0;
}
