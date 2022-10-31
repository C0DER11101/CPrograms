#include<stdio.h>
#include<stdlib.h>
#include "external.h"
#include "external.c"

int main(void)
{
	int a, b, c;

	printf("\nenter three numbers:\n");
	scanf("%d%d%d", &a, &b, &c);

	FindMax(a, b, c);

	return 0;
}
