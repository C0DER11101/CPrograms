# Pointers to Functions

> Every function has an address like all other variables in the program.

_To get the address of the function we use only the name of the function._

[t11.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t11.c) shows how we can view the address of a function.

**Output:**

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t11Output.png" width="50%" height="50%">

## Declaring a pointer to function

**Syntax:**

```
returntype (*ptr_name)(type1, type2, ...);
```



_Example:_

```c
float (*fp)(int);
char (*func_p)(float, char);
```



Here, `fp` is a pointer that can point to any function returning `float` value and accepting an argument of `int` type.



`func_p` is a pointer that can point to a function returning a `char` and accepting arguments of types `float` and `char`.



**Why enclose the function pointer within brackets?**

Because if we don't then the function pointer won't be a function pointer, instead it will become a function returning a pointer. Look at this:



```c
float *fp(int);
```

Here, we removed the parentheses around `fp` and now it no longer a pointer to function but now it has become a function returning a pointer to float which takes an integer type argument.



Let's see how we can assign the address of a function to a function pointer:



```c
float (*fp)(int, int);
float func(int, int);

fp=func;
```

**Declaring a function is necessary before using its address anywhere in the program. Without the declaration the compiler will not know about this function and will generate an error.**

[t12.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t12.c) shows the use of a function pointer.



**Output:**

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t12Output.png" width="50%" height="50%">



_Note:_

**The way of declaring a function pointer is quite similar to the declaration of a pointer to array.**



_Pointer to array:_

```c
int (*ptrArr)[4]; // a pointer to array of integers that can store 4 integers
```



_Function pointer:_

```c
int (*fp)(int); // a function pointer that can point to any function returning an integer value and accepting an integer type argument
```



Look at [this program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t13.c).



**Output:**

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t13Output.png" width="50%" height="50%">



Here, you will see this:



```c
int sum(int, int, int(*)(int, int));
```

The `sum` function takes two arguments of integer type and a third argument is for address of a function.



If you look at the program you will see:

```c
result=sum(a, b, add);
```

Here, `a`, `b` and `add` are sent as arguments. The address of `add()` function goes as argument here.



```c
int sum(int a int b, int(*addNums)(int, int))
{
    int result=(*addNums)(a, b);
}
```

Here, if you look at the third argument, you will see that we have not provided any argument names inside the argument-list of `addNums` because it's just a function pointer declaration in there. But if you look in the body of `sum` we have provided the arguments in the argument-list of `addNums`. That's because this time we are calling the function through the function pointer `addNums`.



Now, notice one thing that I have not provided any return statement in `sum` and yet the output was printed correctly. Why? I have to find that out!!



Now, look at this [program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t13_2.c) . It's the same program but with a difference of just one line. I added `return result;` in `sum()`.



**Output:**

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t13_2Output.png" width="50%" height="50%">



And yet the output is the same!!



---
