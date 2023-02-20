#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int*p;

	p=malloc(3*sizeof(int));

	p[0]=1, p[1]=2, p[2]=3;

	for(int i=0; i<3; i++)
		printf("%d ", p[i]);
	printf("\n");

	free(p);
	return 0;
}
