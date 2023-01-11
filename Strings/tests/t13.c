#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	char *arrp[]={
		"white", 
		"red",
		"green",
		"yellow",
		"blue"
	};

	for(int i=0; i<5; i++)
		printf("String [%d]: %s\n", i, arrp[i]);

	return 0;
}
