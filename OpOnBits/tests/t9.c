#include<stdio.h>
#include<stdlib.h>
#include "DisplayBits.c"

int main(void)
{
	int a=455;
	printf("%d = ", a);
	DisplayBits(a);
	int mask=~0xC6, newNum; // to switch off the 1st, 2nd, 6th and 7th bits of 455
	printf("Mask = ");
	DisplayBits(mask);
	newNum=a & mask;
	printf("New number after masking = %d\n", newNum);
	printf("%d = ", newNum);
	DisplayBits(newNum);
	return 0;
}
