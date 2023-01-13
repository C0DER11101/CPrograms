#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	printf("%lu\n", strspn("Priyanuj", "Bora"));
	printf("%lu\n", strspn("abcdmnop", "acdefbmonp"));
	printf("%lu\n", strspn("qbcdmnop", "acdefbmnop"));
	printf("%lu\n", strspn("aqcdmnop", "acdefbmonp"));
	printf("%lu\n", strspn("abcdqnop", "acdefbmonp"));
	printf("%lu\n", strspn("abcdqnop", "acdefbmonpq"));
	return 0;
}
