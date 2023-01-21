#include<stdio.h>
#include<stdlib.h>

int SQUARE(int);

int main(void)
{
	int k=5, s;
	s=SQUARE(k++);
	printf("s=%d\nk=%d\n", s, k);
	return 0;
}

int SQUARE(int x)
{
	return x*x;
}
