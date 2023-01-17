#include<stdio.h>
#include<stdlib.h>

typedef int func(int, int);

func add, sub, divd;

int main(void)
{
	int a=10, b=2;
	printf("%d+%d=%d\n", a, b, add(a, b));
	printf("%d-%d=%d\n", a, b, sub(a, b));
	printf("%d/%d=%d\n", a, b, divd(a, b));
	return 0;
}

int add(int a, int b)
{
	return (a+b);
}

int sub(int a, int b)
{
	return (a-b);
}

int divd(int a, int b)
{
	return (a/b);
}
