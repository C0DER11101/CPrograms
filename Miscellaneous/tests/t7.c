#include<stdio.h>

const struct sample
{
	char x;
	int y;
	float z;
};

struct sample s={'A', 45, 24.7f};



int main(void)
{
	printf("\nx = %c\ny = %d\nz = %f\n", s.x, s.y, s.z);

	s.x='C';
	printf("\nx = %c\ny = %d\nz = %f\n", s.x, s.y, s.z);

	return 0;
}
