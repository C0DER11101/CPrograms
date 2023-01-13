#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	printf("%s\n", strpbrk("abcmnop", "lmn"));
	printf("%s\n", strpbrk("abcmnop", "ln"));
	printf("%s\n", strpbrk("1234ABCD", "COT"));
	return 0;
}
