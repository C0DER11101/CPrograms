#include<stdio.h>
#include<stdlib.h>
#define ISLOWER(c) (c>=97 && c<=122)
#define ISUPPER(c) (c>=65 && c<=90)
#define ISALPHA(c) ISLOWER(c) || ISUPPER(c) // nesting of macros!!
#define ISNUM(c) (c>=48 && c<=57)
#define ISALNUM(c) ISALPHA(c) || ISNUM(c)

int main(void)
{
	char ch;
	printf("enter a character: ");
	scanf("%c", &ch);

	if(ISALNUM(ch))
		/*first expansion:
		 * if(ISAPLHA(c) || ISNUM(c))
		 *
		 *second expansion:
		 * if(ISLOWER(c) || ISUPPER(c) || (c>=48 && c<=90))
		 *
		 *third expansion:
		 * if((c>=97 && c<=122) || (c>=65 && c<=90) || (c>=48 && c<=57))
		 */
		printf("\nyou entered an alphanumeric character!\n");
	else
		printf("\nyou entered something else!\n");
	return 0;
}
