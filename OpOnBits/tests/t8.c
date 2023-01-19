#include<stdio.h>
#include<stdlib.h>
#include "DisplayBits.c"

int main(void)
{
	printf("0xF in binary: ");
	DisplayBits(0xF);
	printf("~0xF in binary: ");
	DisplayBits(~0xF);
	return 0;
}
