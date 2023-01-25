#include<stdio.h>
#include<stdlib.h>

void display(const int*);

int main(void)
{
	int a[]={1, 2, 3, 4};

	display(a);

	return 0;
}

void display(const int*a)
{
	for(int i=0; i<4; i++)
		printf("%d\t", a[i]);
	printf("\n");
}
