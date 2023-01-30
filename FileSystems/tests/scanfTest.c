#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int age=10;
	char str[30];

	printf("\nInitial value of age: %d\n", age);

	printf("enter a string and an integer: ");
	scanf("%s %d", str, &age);

	printf("entered string: %s\nage: %d\n", str, age);
	return 0;
}
