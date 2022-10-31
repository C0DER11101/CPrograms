#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[100];

	printf("enter a string: ");
	scanf("%s", a);

	printf("%ca\n", a[0]);
	return 0;
}
