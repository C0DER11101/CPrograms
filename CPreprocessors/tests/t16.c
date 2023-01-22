#include<stdio.h>
#define ISLOWER(c) (c>=97 && c<=122)
#define TOUPPER(c) ISLOWER(c)? (c-32):c


int main(void)
{
	char c;

	printf("enter a character: ");

	scanf("%c", &c);

	c=TOUPPER(c);
	/* first expansion:
	 * c=ISLOWER(c)? (c-32):c;
	 *
	 * second expansion:
	 * c=(c>=97 && c<=122)? (c-32):c;
	 */
	printf("c=%c\n", c);

	return 0;
}
