#include<stdio.h>
#include<stdlib.h>
#include "DisplayBits.c"

int main(void)
{
	int x=3;
	// check whether the 2nd bit of 3 is on or off.
	printf("Given number: %d = ", x);
	DisplayBits(x);

	int mask=0x4;
	printf("Mask: %d = ", mask);
	DisplayBits(mask);

	if((x&mask)==0)
	{
		printf("\n2nd bit of %d is off\n", x);
		printf("%d\n", x&mask);
	}

	else
	{
		printf("\n2nd bit of %d is on\n", x);
		printf("%d\n", x&mask);
	}
	return 0;
}
