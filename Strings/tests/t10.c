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

	printf("0th string: %s\n", arr[0]);
	printf("1st string: %s\n", arr[1]);
	printf("2nd string: %s\n", arr[2]);
	printf("3rd string: %s\n", arr[3]);
	printf("4th string: %s\n", arr[4]);

	// arr[0] acts like a pointer to character for the 0th string; similarly arr[1] acts like a pointer to character for the 1st string, and so on....

	return 0;
}
