// typedef with function pointers

#include<stdio.h>

int add(int, int);

typedef int(*plus)(int, int);

int summation(plus, int, int);

int main(void){

	plus Add=add;
	int sum=summation(Add, 0, 0);

	for(int i=1; i<=10; i++)
		sum=summation(Add, sum, i+1);

	printf("Sum = %d\n", sum);

	return 0;
}

int add(int a, int b){
	return (a+b);
}

int summation(plus Add, int a, int b){
	return Add(a, b);
}
