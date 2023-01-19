#include<stdio.h>
#include<stdlib.h>
#include "DisplayBits.c"

int main(void)
{
	int a=755, mask=0x220;

	printf("%d = ", a);
	DisplayBits(a);

	printf("%x = ", mask);
	DisplayBits(mask);

	printf("%d ^ %x = %d", a, mask, a^mask);
	printf("\nBinary equivalent:\n");
	DisplayBits(a^mask);

	int newNum=a^mask;
	printf("\n\n%d ^ %x = %d", newNum, mask, newNum^mask);
	printf("\nBinary equivalent:\n");
	DisplayBits(newNum^mask);

	return 0;
}
