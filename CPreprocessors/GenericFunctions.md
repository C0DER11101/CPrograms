# Generic functions

_Macros can be used to generate functions for different data types. These type of macros are called **generic functions**._

_These macros generally take the function name and data type as arguments and the macro call is replaced by a function definition._

**The concept of macros remains same, it will always be replaced by its expansion.**

Program:
[t17.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/CPreprocessors/tests/t17.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213911116-d514e050-1aca-499e-989f-3e5d087c8b66.png" width="60%" height="60%">

The expansions of the generic functions are shown in the program with the help of comments!!

The macro call:
```c
MAX(int, max_int)
```
is replaced by its expansion as:
```c
int max_int(int x, int y)
{
	return x>y? x:y;
}
```
