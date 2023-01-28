#include<stdio.h>

void display(); // declaration should be in main() otherwise the compiler throws a warning!!

int main(void)
{
	extern int x;
	display();
	printf("\ninside main()\n");
	printf("\nx = %d\n", x);
	return 0;
}
