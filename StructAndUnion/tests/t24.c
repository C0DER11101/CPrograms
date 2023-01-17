#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	typedef float* fptr;

	fptr p, q, *r;

	float a=10.0f, b=20.0f;
	p=&a;
	q=&b;

	r=&q;

	printf("Value of a using pointer to float is: %f\n", *p);
	printf("Value of b using pointer to float is:  %f\n", *q);
	printf("Value of b using pointer to pointer to float: %f\n", **r);

	return 0;
}
