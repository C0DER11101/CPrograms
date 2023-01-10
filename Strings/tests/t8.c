#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char str[]="Chennai";
	char *ptr="Chennai";

	printf("\nArray of characters: %s\n", str);

	printf("\nPointer to character: %s\n", ptr);

	str="Hello";
	printf("\nArray of characters: %s\n", str);
	return 0;
}
