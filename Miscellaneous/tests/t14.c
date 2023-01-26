#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[])
{
	printf("argc = %d\n", argc);

	for(int i=0; i<argc; i++)
		printf("%s ", argv[i]);

	printf("\n((%s))\n", argv[0]);
	return 0;
}
