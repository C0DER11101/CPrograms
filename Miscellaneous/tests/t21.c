#include<stdio.h>

extern void greet();

int main(void)
{
	greet();
	printf("\nmain() says \"Hello\"\n");

	return 0;
}
