#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char *ptr="Programming";
	printf("\nInitial string: %s\n", ptr);

	// invalid stuff!!
	printf("\nenter new string: ");
	scanf("%s", ptr);
	return 0;
}
