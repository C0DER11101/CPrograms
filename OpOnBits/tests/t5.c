#include<stdio.h>
#include<stdlib.h>
#include "DisplayBits.c"

int main(void)
{
	size_t x=0xD57F1347;
	printf("\nx=%lx\nBinary equivalent:\n", x);
	DisplayBits(x);

	printf("After shifting towards left by 4 bits:\n");
	printf("x=%lx\nBinary equivalent:\n", x<<4);
	DisplayBits(x<<4);

	return 0;
}
