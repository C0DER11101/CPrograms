#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("\nSize of signed char: %lu\n", sizeof(signed char));
	printf("\nSize of unsigned char: %lu\n", sizeof(unsigned char));
	printf("\nSize of int: %lu\n", sizeof(int));
	printf("\nSize of unsigned int: %lu\n", sizeof(unsigned int));
	printf("\nSize of short int: %lu\n", sizeof(signed short int));
	printf("\nSize of unsigned short int: %lu\n", sizeof(unsigned short int));
	printf("\nSize of long int: %lu\n", sizeof(signed long int));
	printf("\nSize of unsigned long int: %lu\n", sizeof(unsigned long int));
	printf("\nSize of float: %lu\n", sizeof(float));
	printf("\nSize of double: %lu\n", sizeof(double));
	printf("\nSize of long double: %lu\n", sizeof(long double));
	return 0;
}
