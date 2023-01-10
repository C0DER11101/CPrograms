#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char str[]="Hello";
	printf("\nInitial string: %s\n", str);

	printf("\nInitializing different string to str using \"scanf()\": ");
	scanf("%s", str);
	printf("\nentered string: %s\n", str);
	getchar();

	printf("\nInitializing different string to str using \"gets()\": ");
	gets(str);
	printf("\nentered string: ");
	puts(str);

	printf("\nInitializing different string to str using \"strcpy()\": ");
	strcpy(str, "World");
	printf("\ncopied string: %s\n", str);

	printf("\nInitializing a different string to str by assiging single character to each element: ");
	str[0]='S';
	str[1]='e';
	str[2]='v';
	str[3]='e';
	str[4]='n';

	printf("\nentered string: %s\n", str);

	return 0;
}
