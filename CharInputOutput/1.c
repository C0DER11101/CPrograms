#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char c;

	c=getchar();

	printf("\nYou entered: ");
	putchar(c);
	printf("\n");

	getchar();

	int ch;

	ch=getchar();

	while(ch!=EOF)
	{
		putchar(ch);
		ch=getchar();
	}

	printf("\nend\n");

	return 0;
}
