#include<stdio.h>
#include<stdlib.h>
#include "DisplayBits.c"


int main(void)
{
	int a=755;
	printf("Given number: %d = ", a);
	DisplayBits(a);

	int mask=0x220; // mask to unset 5th and 9th bits
	printf("Mask: %x = ", mask);
	DisplayBits(mask);

	int newNum=a ^ mask;
	printf("New number after masking: %d = ", newNum);
	DisplayBits(newNum);
	return 0;
}
