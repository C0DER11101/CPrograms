#include<stdio.h>
#include<stdlib.h>

int x;

void func();

int main(void)
{
	printf("\nInitial value of x: %d\n", x);
	x=10;

	func();

	return 0;
}

void func()
{
	printf("\nModified value of x: %d\n", x);
}
