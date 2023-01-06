#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a[]={1, 2, 3, 4, 5};
	void *vptr;

	vptr=a; // vptr=&a[0];

	for(int i=0; i<5; i++)
		printf("%d\t", *((int*)vptr+i));

	printf("\n");
	return 0;
}
