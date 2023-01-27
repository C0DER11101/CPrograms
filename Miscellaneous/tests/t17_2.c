#include<stdio.h>
#include<stdlib.h>

void func();

int main(void)
{
	extern int x;
	func();
	printf("\nINSIDE main()\n");
	printf("\nx = %d\n", x);
	return 0;
}

int x; // variable definition

void func()
{
	x=20;
	printf("\nINSIDE func()\n");
	printf("\nx = %d\n", x);
}
