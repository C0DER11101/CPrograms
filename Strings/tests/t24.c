#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char *str;

	str=(char*)malloc(30*sizeof(char));

	int x=450;

	printf("Number of characters sent: %d\n", sprintf(str, "%d", x));

	printf("\nstr=%s\n", str);

	free(str);
	return 0;
}
