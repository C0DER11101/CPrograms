# C preprocessor
_The C preprocessor scans and modifies the source code before compilation(hence "preprocessor")._

**Main functions performed by preprocessor:**
1. Simple macro substitution.
2. Macros with parameters.
3. Conditional compilation.
4. File inclusion.
5. Error generation and pragma directives.

The lines starting with \# are known as preprocessor directives.

When the preprocessor finds a line starting with the symbol \#, it considers that line as a command for itself and works accordingly.

**All the directives are executed by the preprocessor, and the compiler does not receive any line  starting with \#.**

_**To continue a directive on next line, we should put a backslash at the end of the line.**_

**Directives don't end with a semicolon.**

**A directive is active from the point of its appearance till the end of the program.**

_The preprocessor directives are given below:_

```
#define
#include
#if
#else
#elif
#endif
#ifdef
#ifndef
#error
#undef
#line
#pragma
```

**The three operators that are used with these directives:**

1. Defined operator - `defined()`.
2. Stringizing operator - `#`.
3. Token pasting operator - `##`.

**A preprocessor directive replaces each comment by a single space.**

**A preprocessor directive consisting only of the symbol \# is known as the null directive and it has no effect.**


## 1. \#define
**Syntax:**
```c
#define macro_name macro_expansion
```

`macro_name` is any valid C identifier(generally written in uppercase).

`macro_expansion` can be any text.

The C preprocessor replaces all the occurrences of `macro_name` with `macro_expansion`.

C preprocessor searches for `macro_name` in the C source code and replaces it the `macro_expansion`.

```c
#define TRUE 1
#define FALSE 0
#define PI 3.14159265
#define MAX 100
```

The above examples are called _symbolic constants._

We can also define any string constant in place of `macro_expansion`.

Program:
[t1.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/CPreprocessors/tests/t1.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213769357-7dbbca7d-db52-49a8-ae5c-57e9f496a3c6.png" width="60%" height="60%">

Now, I had a confusion with this statement in `t1.c`:
```c
printf(HELLO);
```
I thought 'why is the `%s` not used with `printf()`?' But then I realised `HELLO` is not a variable, it's a `macro_name`, and `"Hello world!!"` is a `macro_expansion` for the `macro_name` meaning that wherever the preprocessor will find `HELLO`, it will replace it with `"Hello world!!\n"`. We CAN actually use `%s` with `printf()` and the compiler won't yell at you!!!

I used `%s` with `printf()` in the program and it ran smoothly:

Program:
[t2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/CPreprocessors/tests/t2.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213846572-a00bea6f-4efd-4e11-b295-8d9d0e904a45.png" width="60%" height="60%">

**The** `macro_expansion` `"Hello world!!\n"` **is not stored in the** `macro_name`, **it is just a substitute for the** `macro_name` **and therefore we neednot use the** `%s` **with** `printf()` ( **it's optional** ).


_We can have macro expansions of any sort:_

```c
#define AND &&
#define OR ||
#define BEGIN int main(void){
#define END }
#define INFINITE while(1);
#define NEW_LINE printf("\n");
#define ERROR printf("An error occurred!\n");
```

It seems that the \# define directive ends with a semicolon after all. But the semicolon is to be used cautiously. If used incorrectly then the compiler will throw an error.

Look at [this](https://github.com/C0DER11101/CPrograms/blob/CProgramming/CPreprocessors/tests/t3.c) program.

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213847639-c1de35db-a984-4169-a985-23bec96cd67b.png" width="60%" height="60%">

Here, in the statement:
```c
int a=TRUE
```
the macro name `TRUE` is replaced by `1;` by the preprocessor and the statement becomes:
```c
int a=1;
```
which is a valid C statement.

Also in the statement:
```c
int b=MAX
```
the macro name `MAX` is replaced by `100;` by the preprocessor and the statment becomes:
```c
int b=100;
```
which is again a valid C statement. So the compiler doesnot throw any error.


Now, look at [this](https://github.com/C0DER11101/CPrograms/blob/CProgramming/CPreprocessors/tests/t4.c) program.

**Error:**

<img src="https://user-images.githubusercontent.com/96164229/213847902-43c49446-5900-43b4-bc72-f1081fa12a6d.png" width="60%" height="60%">

From this program it's clear that the semicolon should be put in macro expansion only when it's used in a statement where semicolon is mandatory.

In this statement in `t4.c`:
```c
printf("%d\n", MAX);
```
macro name `MAX` is replaced by `100;` and the whole `printf()` statement becomes:
```c
printf("%d\n", 100;);
```
which is an invalid statement.

Also we cannot use `;` with `&&`, but we did in `#define AND &&;` which is also an invalid statement in C and the conditional:
```c
if(a>0 AND a<10)
```
becomes:
```c
if(a>0 &&; a<10)
```
which is invalid, that's why the compiler throw errors.





---
