#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char *arrp[3];

	arrp[0]="hello";
	arrp[1]="there";
	arrp[2]="user!";

	printf("%s %s %s\n", arrp[0], arrp[1], arrp[2]);
	return 0;
}
