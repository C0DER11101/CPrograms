# `typedef` with function pointers
* Look at the code below:

```c
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
```
* Just like when we write `typedef int* IntPtr;` we mean that `IntPtr` is now a synonym to **pointer to integer** and any variables declared using `IntPtr` will be a pointer to integer. In the same way, when we write:
```c
typedef int(*plus)(int, int);
```
We mean that `plus` is now a synonym to **pointer to function that takes two integer arguments and returns an integer**. Because we have actually defined `plus` as an alias of `int(*)(int, int);`.

<p align="center">
&#9678; &#9678; &#9678;
</p>
