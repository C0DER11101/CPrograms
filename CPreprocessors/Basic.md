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


**If the macro name appears inside a character constant, string constant or a comment then it is not replaced and is left as it is.**

**We can also define macros without any macro expansion.**

Example:
```c
#define TEST
```


## 2. Parameterized macros

\#define directive can also be used to define macros with parameters.

**Syntax:**
```c
#define macro_name(par1, par2, par3, ....) macro_expansion
```
`par1`, `par2`, `par3`,.... are formal parameters. The `macro_name` is replaced by the `macro_expansion` and the formal parameters are replaced by the corresponding actual arguments supplied in the macro call.

Program:
[t5.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/CPreprocessors/tests/t5.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213848861-89f87ab2-8e5f-47f6-8ae7-6a1190ae4fa8.png" width="60%" height="60%">

The arguments can be of any data type.

### Problems with macros

This problem is with not using parentheses in the macro expansion.

Look at [this](https://github.com/C0DER11101/CPrograms/blob/CProgramming/CPreprocessors/tests/t6.c) program.

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213863641-3e0dda6f-6bc1-4eb8-b866-b52d5b6f43f1.png" width="60%" height="60%">

The output of this program was an unexpected one.

The definition of the macro `SQUARE` was:
```c
#define SQUARE(x) x*x
```

The call to this macro contained the following argument:
```c
SQUARE(a+1);
```
where `a=5;`. Now the expression `SQUARE(a+1)` is evaluated as: `SQUARE(5+1)` and is expanded as: `5+1*5+1`. We all know that multiplication is performed before addition or subtraction. So here first `1` is multiplied with `5` and then `5+5+1` is evaluated which gives the value `11`. But the output was supposed to be `36`. This is one problem with the macros, without the parentheses the evaluation is done wrongly.

Program:
[t7.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/CPreprocessors/tests/t7.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213866750-5e64e9ef-3cf9-4f5e-a059-f05d071ba693.png" width="60%" height="60%">

Here we have provided the parentheses :
```c
#define SQUARE(x) (x)*(x)
```
The macro call:
```c
int a=5;
SQUARE(a+1);
```
is evaluated as: `SQUARE(5+1)` which is replaced by `(5+1)*(5+1)` which gives the value `36`, which is the correct output.

This [program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/CPreprocessors/tests/t8.c) represents another problem with the macros.

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213867111-6d08c3d4-6ee6-4e6f-ad31-917424f903b0.png" width="60%" height="60%">

Here, the macro `PROD` is defined as:
```c
#define PROD(x, y) (x)*(y)
```

Now, the expression `60/PROD(2, 3);` is evaluated as: `60/(2)*(3);`, since `PROD(2, 3)` becomes `(2)*(3)`. Since, `\` and `*` are associate from left to right, so first `60` is divided by `2` and then the result is multiplied with `3`, but the expected output was `10` and we got the output `90` which was unexpected. That is why we need to enclose the whole macro expansion within parentheses.
```c
#define PROD(x, y) ((x)*(y))
```

[This](https://github.com/C0DER11101/CPrograms/blob/CProgramming/CPreprocessors/tests/t9.c) program resolves the problem of `t8.c`.

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213870153-4f9bb81d-c7a1-43b1-9a41-f18c9bfbd57e.png" width="60%" height="60%">





---
