#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
	char str[]="Multinational";

	printf("%s\n", strrchr(str, 'n'));
	return 0;
}
