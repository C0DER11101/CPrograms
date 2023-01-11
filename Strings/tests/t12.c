#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char arr[5][10]={
		"white",
		"red",
		"green",
		"yellow",
		"blue"
	};

	strcpy(arr[0], "Hello");

	printf("\nString: %s\n", arr[0]);

	strcpy(arr[0], arr[1]);
	printf("\nString: %s\n", arr[0]);

	return 0;
}
