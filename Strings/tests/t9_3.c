#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char *ptr="Programming";
	printf("\nInitial string: %s\n", ptr);

	// invalid stuff!!
	
	strcpy(ptr, "NewString");

	printf("\nNew string: %s\n", ptr);
	return 0;
}
