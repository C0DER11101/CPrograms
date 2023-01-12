#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char source[]="Programming", destination[]="Learning";

	printf("\nOriginal strings:\nString1: %s\nString2: %s\n", source, destination);

	printf("\nNew string: %s\n", strncat(destination, source, 5));

	return 0;
}
