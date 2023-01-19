#include<stdio.h>
#include<stdlib.h>
#include "DisplayBits.c"


int main(void)
{
	int a = 1055;

	// Operations on the 5th bit of a
	
	int mask=1<<5;
	printf("Mask = %d\n", mask);
	printf("\nTest the 5th bit.\n");
	printf("%d = ", a);
	DisplayBits(a);
	printf("%d = ", mask);
	DisplayBits(mask);

	if((a&mask)==0)
		printf("\n5th bit is off!!\n");
	else
		printf("\n5th bit is on!!\n");

	printf("\n\nSet the 5th bit.\n");
	printf("%d = ", a);
	DisplayBits(a);
	printf("%d = ", mask);
	DisplayBits(mask);
	int setBit=a|mask;
	printf("\nAfter setting the 5th bit\n%d = ", setBit);
	DisplayBits(setBit);

	printf("\n\nClear the 5th bit.\n");
	printf("%d = ", setBit);
	DisplayBits(setBit);
	printf("%d = ", mask);
	DisplayBits(mask);
	printf("~Mask = %d = ", ~mask);
	DisplayBits(~mask);

	int clearBit=(setBit&~mask);
	printf("\nAfter clearing the 5th bit\n%d = ", clearBit);
	DisplayBits(clearBit);


	printf("\n\nInvert the 5th bit.\n");
	printf("%d = ", a);
	DisplayBits(a);
	printf("%d = ", mask);
	DisplayBits(mask);
	
	int invertBit=(a^mask);
	printf("\nAfter inverting the 5th bit\n%d = ", invertBit);
	DisplayBits(invertBit);

	return 0;
}
