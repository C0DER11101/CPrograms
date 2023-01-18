#include<stdio.h>
#include<stdlib.h>
#include "DisplayBits.c"

int main(void)
{
	unsigned x=0xD57F1347;

	printf("\nOriginal value: %x\n", x);
	printf("\nBinary equivalent:\n");
	DisplayBits(x);

	printf("\nAfter shifting towards the right by 4 bits\n");
	printf("Value: %x\n", x>>4);
	DisplayBits(x>>4);

	return 0;
}
