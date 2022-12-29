#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c=0;

	printf("enter two numbers: ");

	scanf("%d%*d%d", &a, &b);

	printf("\n\nThe values of a and b are:\n\n");

	printf("a=%d\nb=%d\n", a, b);

	printf("c=%d\n", c);
	return 0;
}
