#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char str[8];

	printf("enter a string: ");
	
	scanf("%3s", str);

	printf("\nThis is the string that you just entered: %s\n", str);
	return 0;
}
