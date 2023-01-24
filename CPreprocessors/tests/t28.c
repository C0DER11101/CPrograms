#include<stdio.h>
#include<stdio.h>
#define MAX

int main(void)
{
	int a=10;
#undef MAX

#ifndef MAX
#error Please undefine the defined macro in order to run the program.

#else
	printf("\nProgram compiled successfully!!\n");

#endif
	return 0;
}
