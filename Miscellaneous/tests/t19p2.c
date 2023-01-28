#include<stdio.h>
int x=10;
static int y=4; // private to only t19p2.c

void display()
{
	printf("\ninside display()\n");
	printf("\nx = %d\n", x);
	printf("\ny = %d\n", y);
}
