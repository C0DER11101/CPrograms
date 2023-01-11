#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char arr[5][10]={
		"white",
		"red",
		"green",
		"yellow",
		"blue"
	};

	arr[0]="Hello";

	printf("%s\n", arr[0]);

	return 0;
}
