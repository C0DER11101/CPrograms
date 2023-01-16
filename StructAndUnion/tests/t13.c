#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
	char name[30];
	int roll;
	int age;
};

void Display(struct student*);

int main(void)
{
	struct student s={"John", 20, 19};

	printf("\nStudent details(before calling \"Display()\":\n");
	printf("Name: %s\n", s.name);
	printf("Roll number: %d\n", s.roll);
	printf("Age: %d\n", s.age);

	Display(&s);

	printf("\nStudent details(after calling \"Display()\":\n");
	printf("Name: %s\n", s.name);
	printf("Roll number: %d\n", s.roll);
	printf("Age: %d\n", s.age);
	return 0;
}

void Display(struct student *s)
{
	strcpy((*s).name, "Jill");
	(*s).roll=1;
	(*s).age=20;

	printf("\nStudent details(Inside \"Display())\":\n");
	printf("Name: %s\n", (*s).name);
	printf("Roll number: %d\n", (*s).roll);
	printf("Age: %d\n", (*s).age);
}
