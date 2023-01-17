#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	typedef int age, marks, units;

	age a;

	printf("enter age: ");
	scanf("%d", &a);

	marks m;

	printf("enter marks: ");
	scanf("%d", &m);

	units u;

	printf("enter units: ");
	scanf("%d", &u);

	printf("Age: %d\nMarks: %d\nUnits: %d\n", a, m, u);

	return 0;
}
