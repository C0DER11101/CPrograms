#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char str1[]="Hello", str2[]="Priyanuj";

	printf("\nOriginal strings:\nString1: %s\nString2: %s\n", str1, str2);

	strncpy(str1, str2, 3);

	printf("\nNew string: %s\n", str1);
	return 0;
}
