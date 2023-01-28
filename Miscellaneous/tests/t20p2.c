#include<stdio.h> // must be included in this file as well otherwise the compiler throws a warning(it's just a warning though!!).

int x=10;
static int y=70;

void display()
{
	printf("\ninside display()\n");
	printf("\nx = %d\n", x);
	printf("y = %d\n", y);
}
