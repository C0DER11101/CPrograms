#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	printf("%lu\n", strcspn("abcdmnop", "lmn"));
	printf("%lu\n", strcspn("rbcmnop", "qbcmnop"));
	printf("%lu\n", strcspn("rqcdmnop", "lmn"));
	printf("%lu\n", strcspn("atimnog", "qbcmyxp"));
	return 0;
}
