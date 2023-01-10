#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char *ptr="Programming";
	printf("\nInitial string: %s\n", ptr);

	// Trying invalid stuff!!
	
	ptr[0]='B'; // OR *ptr='B';
	return 0;
}
