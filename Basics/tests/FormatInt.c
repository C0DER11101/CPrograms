#include<stdio.h>
#include<stdlib.h>


/* Format for integer input */

int main(void)
{
	/* when input data length is less than or equal to the given field width
	 * then the input values unaltered and stored in given variables
	 */

	int a, b;

	printf("enter two numbers: ");

	scanf("%2d%3d", &a, &b);

	printf("a=%d\nb=%d\n", a, b);

	return 0;
}
