#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
	char name[30];
	int age;
	int rollno;
};

struct student*Display(struct student);

int main(void)
{

	struct student s={"John", 20, 34};

	printf("\nDetails(Inside main()):\n");
	printf("Name: %s\n", s.name);
	printf("Age: %d\n", s.age);
	printf("Name: %d\n", s.rollno);

	struct student *sptr;

	sptr=Display(s);

	printf("\nDetails of new student(Inside main()):\n");
	printf("Name: %s\n", sptr->name);
	printf("Age: %d\n", sptr->age);
	printf("Name: %d\n", sptr->rollno);

	free(sptr);
	return 0;
}

struct student*Display(struct student s)
{
	struct student *sptr=(struct student*)malloc(sizeof(struct student));

	strcpy((*sptr).name, "Jill");
	(*sptr).rollno=55;
	(*sptr).age=20;

	return sptr;
}
