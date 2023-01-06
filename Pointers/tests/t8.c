#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int *a;

	a=(int*)malloc(3*sizeof(int));

	for(int i=0; i<3; i++)
		a[i]=(2*i)+1;

	for(int i=0; i<3; i++)
		printf("%d\t", a[i]);

	printf("\n");

	a=(int*)realloc(a, 4*sizeof(int));

	a[3]=100;

	for(int i=0; i<4; i++)
		printf("%d\t", a[i]);

	printf("\n");

	a=(int*)realloc(a, 3*sizeof(int));

	for(int i=0; i<4; i++)
		printf("%d\t", a[i]);

	printf("\n");

	free(a);
	return 0;
}
