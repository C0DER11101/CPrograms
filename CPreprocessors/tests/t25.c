#include<stdio.h>
#include<stdlib.h>

#define _3RD_BITCHECK 0x4

int main(void)
{
	unsigned int a=6;

#if defined(_3RD_BITCHECK)
	if((a&_3RD_BITCHECK)!=0)
		printf("\n#if has been executed!!\n");
	else
		printf("\nInside #if\n");

#elif !defined(_3RD_BITCHECK)
	printf("\nInside #elif\n");

#endif
	printf("\nEND\n");
	return 0;
}
