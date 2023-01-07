#include<stdio.h>
#include<stdlib.h>

int add(int, int);
int sum(int, int, int(*)(int, int));
int main(void)
{
	int a, b;

	printf("enter value of a and b: ");
	scanf("%d%d", &a, &b);
	int result;

	result=sum(a, b, add);

	printf("\n%d+%d=%d\n", a, b, result);

	return 0;
}

int add(int a, int b)
{
	return (a+b);
}

int sum(int a, int b, int(*addNums)(int, int))
{
	int result=(*addNums)(a, b);
}
