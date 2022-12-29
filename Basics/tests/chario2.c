#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char ch;

	do
	{
		ch=getchar();
		putchar(ch);
	
	}while(ch!='E' && ch!='e');

	return 0;
}
