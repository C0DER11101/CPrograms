#include<stdio.h>
#include<stdlib.h>

struct student
{
	char name[30];
	int age;
	int rollno;
};

void display(char*, int, int);

int main(void)
{
	struct student stu={"Tom", 20, 12};

	display(stu.name, stu.age, stu.rollno);
	return 0;
}

void display(char *name, int age, int rollno)
{
	printf("\nDetails:\n");
	printf("Name: %s\n", name);
	printf("Age: %d\n", age);
	printf("Roll number: %d\n", rollno);

}
