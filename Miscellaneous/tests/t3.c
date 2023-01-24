#include<stdio.h>

enum months
{
	Jan, Feb, Mar, Apr, May, Jun
};

enum months m1, m2;

enum days
{
	Sun, Mon, Tue, Wed, Thu, Fri, Sat
};

enum days d1, d2;

int main(void)
{
	m1=Jan, m2=Feb;
	d1=Sun, d2=Mon;

	if(m1!=m2)
		printf("\nMonths are not the same!!\n");
	if(m1==d1 && m2==d2)
		printf("\nMonth number and day number are equal!\n");
	else if(m1!=d1 && m2!=d2)
		printf("\nMonth number and day number are not equal!\n");

	return 0;
}
