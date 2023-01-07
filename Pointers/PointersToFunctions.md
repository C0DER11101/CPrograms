# Pointers to Functions

> Every function has an address like all other variables in the program.

_The function name contains the address of the function._

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



---
