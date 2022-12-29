#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b;

	printf("enter numbers:");

	scanf("%d%*c%d", &a, &b);

	printf("\nValues:\na=%d\nb=%d\n", a, b);
	return 0;
}
