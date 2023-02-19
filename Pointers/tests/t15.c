#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=10;
	float b=20.0f;
	char c='a';

	void*p;

	p=&a;

	printf("a = %d\n", *(int*)p);
	p=&b;
	printf("b = %f\n", *(float*)p);
	p=&c;
	printf("c = %c\n", *(char*)p);

	return 0;
}
