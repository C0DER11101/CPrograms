#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

size_t strLen(char*);

int main(void)
{
	char str[]="Hello";

	printf("\nThe length of %s is: %lu\n", str, strLen(str));
	return 0;
}

size_t strLen(char *str)
{
	size_t len=0;

	while(*str!='\0')
	{
		len++;
		str++;
	}

	return len;
}
