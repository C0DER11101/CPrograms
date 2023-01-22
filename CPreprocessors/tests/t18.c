#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void display();

int main(void)
{
	printf("MAX = %d\n", MAX);
	display();
	return 0;
}
#undef MAX

void display()
{
	printf("MAX = %d\n", MAX);
}
