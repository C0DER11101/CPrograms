#include<stdio.h>
#include<stdlib.h>
#include "DisplayBits.c"

int main(void)
{
	int a=0x5, mask=0x2; // mask for setting the 2nd bit in 0x5
	printf("Given number: %x = ", a);
	DisplayBits(a);
	printf("Mask: %x = ", mask);
	DisplayBits(mask);

	int newNum;

	newNum=a | mask;

	printf("New number after masking: %x = ", newNum);
	DisplayBits(newNum);
	return 0;
}
