#include<stdio.h>
#include<stdlib.h>
#define ZERORUN(x) if(x==0) printf("\n0 runs!!\n")


int main(void)
{
	int runs=12;

	if(runs<100)
		ZERORUN(runs);
	else
		printf("Scored over a century\n");

	return 0;
}
