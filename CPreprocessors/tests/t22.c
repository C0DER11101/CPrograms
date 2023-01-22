#include<stdio.h>
#include<stdlib.h>
#define _3RD_BITCHECK 0x4

int main(void)
{
#if (7 & _3RD_BITCHECK)!=0
	printf("\nSuccessful compilation!!\n");

#endif
	printf("\nEND\n");

	return 0;
}
