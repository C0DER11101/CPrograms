#include<stdio.h>

void display();

int main(void)
{
	extern int x;
	extern int y; // should throw an error!!
	printf("\ninside main()\n");
	printf("\nx = %d\n", x);
	printf("\ny = %d\n", y);
	display();
	return 0;
}
