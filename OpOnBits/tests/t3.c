#include<stdio.h>
#include "DisplayBits.c"

int main(void)
{
	int a, b;
	printf("enter values in hexadecimal: ");
	scanf("%x%x", &a, &b);

	printf("a=%x\n", a);
	DisplayBits(a);
	printf("b=%x\n", b);
	DisplayBits(b);

	printf("\nBITWISE AND:\n");
	printf("%x & %x = %x\n", a, b, a&b);
	DisplayBits(a&b);

	printf("\nBITWISE OR:\n");
	printf("%x | %x = %x\n", a, b, a|b);
	DisplayBits(a|b);

	printf("\nBITWISE XOR:\n");
	printf("%x ^ %x = %x\n", a, b, a^b);
	DisplayBits(a^b);

	printf("\nCOMPLEMENT OPERATOR:\n");
	printf("~%x = %x\n", a, ~a);
	DisplayBits(~a);

	printf("\n~%x = %x\n", b, ~b);
	DisplayBits(~b);
	return 0;
}
