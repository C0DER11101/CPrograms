#include<stdio.h>

int x=10;
static int y=70;

void display()
{
	printf("\ninside display()\n");
	printf("\nx = %d\n", x);
	printf("y = %d\n", y);
}
