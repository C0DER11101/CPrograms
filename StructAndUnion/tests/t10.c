#include<stdio.h>
#include<stdlib.h>

struct student
{
	int *age;
};

int main(void)
{
	struct student *s;
	s=(struct student*)malloc(sizeof(struct student));

	(*s).age=(int*)malloc(sizeof(int));

	*((*s).age)=10;

	printf("Integer value=%d\n", *((*s).age));

	free((*s).age);
	free(s);

	return 0;
}
