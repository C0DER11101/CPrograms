#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("\nBefore modifying __FILE__ and __LINE__\n");
	printf("__FILE__: "__FILE__ "\n__LINE__: %d\n", __LINE__);
#line 25 "test.c"
	printf("\nAfter modifying __FILE__ and __LINE__\n");
	printf("__FILE__: "__FILE__ "\n__LINE__: %d\n", __LINE__);
	printf("__FILE__: "__FILE__ "\n__LINE__: %d\n", __LINE__);

	return 0;
}
