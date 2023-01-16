#include<stdio.h>
#include<stdlib.h>

struct student
{
	char name[30];
	int rollno;
	int age;
};

void Display(struct student[]);

int main(void)
{
	struct student s[]={
		{"Mint", 1, 20},
		{"Cinnamon", 2, 20},
		{"Debian", 3, 19},
		{"Fedora", 4, 18}
	};

	Display(s);
	return 0;
}

void Display(struct student s[])
{
	for(int i=0; i<4; i++)
	{
		printf("\nDetails of student %d\n", i+1);
		printf("Name: %s\n", s[i].name);
		printf("Roll number: %d\n", s[i].rollno);
		printf("Age: %d\n", s[i].age);
	}

}
