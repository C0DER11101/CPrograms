#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char str[30];

	int x=450;

	printf("Number of characters sent: %d\n", sprintf(str, "%d", x));

	printf("\nstr=%s\n", str);


	return 0;
}
