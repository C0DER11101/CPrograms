#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char c;

	c=getchar();

	printf("\nYou entered: ");
	putchar(c);
	printf("\n");


	printf("\nEOF = %d\n", EOF);

	return 0;
}
