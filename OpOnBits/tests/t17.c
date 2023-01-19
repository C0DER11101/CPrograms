#include<stdio.h>
#include<stdlib.h>

struct tag
{
	unsigned a: 2;
	unsigned b: 5;
	unsigned c:1;
	unsigned d:3;
};

int main(void)
{
	struct tag var;

	var.a=54;
	printf("%d\n", var.b);
	printf("%d\n", var.a);

	int x=var.a+var.b;

	if(var.c==1)
		printf("\nFlag is on!\n");

	return 0;
}

