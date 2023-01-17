#include<stdio.h>
#include "DisplayBits.c"

int main(void)
{
	int a;
	printf("enter a number in hexadecimal: ");
	scanf("%x", &a);

	DisplayBits(a);
	printf("\n");

	return 0;
}
