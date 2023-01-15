#include<stdio.h>
#include<stdlib.h>

struct date
{
	size_t day;
	size_t month;
	size_t year;
};

struct student
{
	char name[30];
	size_t rollno;
	size_t age;

	struct date birthDate;
};

int main(void)
{

	struct student stu1={"Priyanuj", 28, 20, {19, 2, 2003}};

	printf("\nStudent details:\n");

	printf("Name: %s\n", stu1.name);
	printf("Roll number: %lu\n", stu1.rollno);
	printf("Age: %lu\n", stu1.age);
	printf("\nBirthdate:\n");
	printf("Day: %lu\n", stu1.birthDate.day);
	printf("Month: %lu\n", stu1.birthDate.month);
	printf("Year: %lu\n", stu1.birthDate.year);
	return 0;
}
