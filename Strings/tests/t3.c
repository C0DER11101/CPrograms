#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char str[]="Hello";
	char*p;

	p=str; // equivalent to writing p=&str[0];
	
	printf("\nDisplaying the string using pointer to character:\n");
	
	for(int i=0; p[i]!='\0'; i++)
		printf("%c ", p[i]);
	printf("\n");

	printf("\nDisplaying the string using character array:\n");

	for(int i=0; str[i]!='\0'; i++)
		printf("%c ", str[i]);
	printf("\n");

	printf("\nDisplaying the string using pointer to character but without subscripting:\n");

	while(*p!='\0')
	{
		printf("%c ", *p);
		p++;
	}
	printf("\n");

	return 0;
}
