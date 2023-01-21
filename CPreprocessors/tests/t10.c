#include<stdio.h>
#define SQUARE(x) ((x)*(x))

int main(void)
{
	int k=5, s;

	s=SQUARE(k++);

	printf("s=%d\nk=%d\n", s, k);

	return 0;
}
