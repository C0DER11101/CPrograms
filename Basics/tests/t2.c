#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("\n%lu\n", sizeof(int));
	int a;
	a=2147483640;
	printf("a=%d\n", a);

	a=2147483648;
	printf("a=%d\n", a);
	a=2147483649;
	printf("a=%d\n", a);
	a=2147483650;
	printf("a=%d\n", a);

	a=4293771354;
	printf("a=%d\n", a);
	return 0;
}
