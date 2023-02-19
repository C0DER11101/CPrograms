#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=10, *p=&a;


	printf("a = %d\n", *p);

	float b=10.0f;

	p=(int*)&b;

	printf("b = %f\n", *p);

	return 0;
}
