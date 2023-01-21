#include<stdio.h>
#include<stdlib.h>
#define SUM(x, y) ((x)+(y))
#define PROD(x, y) ((x)*(y));


int main(void)
{
	int a=10, b=20;

	printf("%d+%d=%d\n", a, b, SUM(a, b));

	int prod=PROD(a, b)

	printf("%dx%d=%d\n", a, b, prod);

	return 0;
}
