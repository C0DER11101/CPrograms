#include<stdio.h>
#include<stdlib.h>
#define PASTE(a, b) a##b


int main(void)
{
	int k2=90, k3=100;

	printf("k2 = %d\nk3 = %d\n", PASTE(k, 2), PASTE(k, 3));
	return 0;
}
