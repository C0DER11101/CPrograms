#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "detab.h"
#include "detab.c"

extern char line[];
extern char replacedLine[];

int main(void)
{
	printf("enter a string:\n");

	for(int i=0; ; i++)
	{
		scanf("%c", &line[i]);
		if(line[i]=='^')
		{
			line[i]='\0';
			break;
		}
	}

	printf("\nThis is your initial string:\n%s\n", line);

	Detab();
	printf("\nThis is your detabbed string: \n%s\n", replacedLine);

	printf("\n");
	return 0;
}
