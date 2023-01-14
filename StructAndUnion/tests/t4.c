#include<stdio.h>
#include<stdlib.h>

struct sample
{
	int num;
	char ch;

};

int main(void)
{
	printf("\nSize of the structure \"sample\": %lu\n", sizeof(struct sample));

	return 0;
}
