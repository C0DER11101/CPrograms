#include<stdio.h>
#include<stdlib.h>

void displayBits();

int main(void)
{
	int a;
	printf("enter hexadecimal values: ");
	scanf("%x", &a);

	printf("\nDecimal value: %d\n", a);

	return 0;
}
