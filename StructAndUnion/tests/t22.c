#include<stdio.h>
#include<stdlib.h>

struct stag
{
	char c;
	int i;
	float f;
};

union utag
{
	char c;
	int i;
	float f;
};

int main(void)
{
	struct stag s;
	union utag u;

	printf("\nSize of \"stag\": %lu\n", sizeof(s));
	printf("Address of \"s\": %p\n", &s);
	printf("\nAddress of members of \"stag\":%p\t%p\t%p\n", &s.c, &s.i, &s.f);

	printf("\nSize of \"utag\": %lu\n", sizeof(u));
	printf("Address of \"u\": %p\n", &u);
	printf("\nAddress of members of \"utag\":%p\t%p\t%p\n", &u.c, &u.i, &u.f);

	return 0;
}
