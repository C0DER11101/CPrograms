#include<stdio.h>
#include<stdlib.h>

int add(int, int);

int main(void)
{
	int a, b;

	printf("enter values of a and b: ");
	scanf("%d%d", &a, &b);

	int (*addNums)(int, int);

	addNums=add; // assigning the address of add() to addNums

	int result;

	result=(*addNums)(a, b);

	printf("\n%d+%d=%d\n", a, b, result);
	return 0;
}

int add(int a, int b)
{
	return (a+b);
}
