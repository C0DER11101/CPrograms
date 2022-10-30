#include<stdio.h>
#include<stdlib.h>

int value;


void func();

int main(void)
{

	extern int value;
	printf("enter value: ");
	scanf("%d", &value);

	printf("\nthe value that you entered is: %d\n", value);

	func();
	return 0;
}

void func()
{
	extern int value;

	printf("\nvalue is: %d\n", value);
}
