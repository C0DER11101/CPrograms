#include<stdio.h>
#include<stdlib.h>
#define _3RD_BITCHECK 0x4

int main(void)
{
#if (a & _3RD_BITCHECK)!=0
	printf("\nSuccessful compilation!!\n");

#else
	printf("\nThis is the #else part!!\n");

#endif
	printf("\nEND\n");

	return 0;
}
