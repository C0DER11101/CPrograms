#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
	char name[30];
	int age;
	int rollno;
};

struct student Display(struct student);

int main(void)
{
	struct student s={"John", 20, 20};

	printf("\nDetails(Inside main()):\n");
	printf("Name: %s\n", s.name);
	printf("Age: %d\n", s.age);
	printf("Name: %d\n", s.rollno);

	s=Display(s);

	printf("\nDetails(Inside main()):\n");
	printf("Name: %s\n", s.name);
	printf("Age: %d\n", s.age);
	printf("Name: %d\n", s.rollno);
	return 0;
}

struct student Display(struct student s)
{
	strcpy(s.name, "Jill");
	s.age=19;
	s.rollno=40;
	printf("\nDetails(Inside Display()):\n");
	printf("Name: %s\n", s.name);
	printf("Age: %d\n", s.age);
	printf("Name: %d\n", s.rollno);
	return s;
}
