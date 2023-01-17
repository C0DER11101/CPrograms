#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	char name[30];
	size_t age;
}person;

int main(void)
{
	person student={"John", 20};

	printf("Details:\n");
	printf("Name: %s\nAge: %ld\n", student.name, student.age);

	return 0;
}
