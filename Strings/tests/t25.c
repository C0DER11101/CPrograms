#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char *str1="1009";
	char *str2="45.67";
	int x;
	float y;

	sscanf(str1, "%d", &x);
	sscanf(str2, "%f", &y);

	printf("x=%d\n", x);
	printf("y=%f\n", y);
	return 0;
}
