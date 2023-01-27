#include<stdio.h>

void display();

int main(void)
{

	display();
	display();
	display();

	return 0;
}

void display()
{
	static int x=2, y=4;
	printf("x=%d	y=%d\n", x++, y++);

}
