#include<stdio.h>
#include<stdlib.h>

void func();

int main(void)
{
	printf("\nx = %d\n", x);
	func();
	return 0;
}

int x;

void func()
{
	printf("\nx = %d\n", x);
}
