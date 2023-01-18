#include<stdio.h>
#include<stdlib.h>
#include "DisplayBits.c"

int main(void)
{
	int a=45;
	printf("a=%d\n", a);
	DisplayBits(a);

	printf("a<<1 = %d\n", a<<1);
	DisplayBits(a<<1);
	a<<=1;

	printf("a<<2 = %d\n", a<<2);
	DisplayBits(a<<2);
	a<<=2;

	printf("a<<5 = %d\n", a<<5);
	DisplayBits(a<<5);
	a<<=5;

	printf("a>>2 = %d\n", a>>2);
	DisplayBits(a>>2);
	a>>=2;

	printf("a>>7 = %d\n", a>>7);
	DisplayBits(a>>7);
	a>>=7;

	printf("a<<10 = %d\n", a<<10);
	DisplayBits(a<<10);
	a<<=10;

	printf("a<<10 = %d\n", a<<10);
	DisplayBits(a<<10);
	a<<=10;

	printf("a<<8 = %d\n", a<<8);
	DisplayBits(a<<8);

	return 0;
}
