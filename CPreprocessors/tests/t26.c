#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("Date: " __DATE__ "\n");
	printf("Time: "__TIME__"\n");
	printf("File: "__FILE__"\n");
	printf("Line: %d\n", __LINE__);
	printf("STDC: %d\n", __STDC__);

	return 0;
}
