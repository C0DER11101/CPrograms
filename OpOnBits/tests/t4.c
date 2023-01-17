#include<stdio.h>
#include<stdlib.h>
#include "DisplayBits.c"

int main(void)
{
	int a;

	printf("enter a message: ");
	scanf("%x", &a);

	printf("\nOriginal message: %x\n", a);
	printf("Binary equivalent:\n");
	DisplayBits(a);
	printf("\nencrpyted message: %x\n", ~a);
	printf("Binary equivalent:\n");
	DisplayBits(~a);
	printf("\nDecrypted message %x\n", ~(~a));
	DisplayBits(~(~a));

	return 0;
}
