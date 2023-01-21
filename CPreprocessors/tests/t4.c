#include<stdio.h>

#define TRUE 1;
#define MAX 100;
#define AND &&;

int main(void)
{
	int a=TRUE
	printf("%d\n", a);
	printf("%d\n", MAX);

	if(a>0 AND a<10)
		printf("GOOD!\n");
	else
		printf("BAD!\n");

	return 0;
}
