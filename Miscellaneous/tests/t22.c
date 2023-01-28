#include<stdio.h>
#include<stdarg.h>

void display(char*, int, ...); // function taking variable number of arguments

int main(void)
{
	printf("\nHello from main()\n");

	display("Hello", 45, "this is display()\n", 56.7);
	return 0;
}

void display(char *s, int n, ...)
{
	va_list argp; // argument pointer!!
	va_start(argp, n); // takes argument pointer and the last fixed argument, passed to display just before the ellipsis, as arguments
	double arg1;
	char *arg2;

	arg2=va_arg(argp, char*);
	printf("First unnamed argument: %s\n", arg2);

	arg1=va_arg(argp, double);
	printf("Second unnamed argument: %lf\n", arg1);

	va_end(argp);
}
