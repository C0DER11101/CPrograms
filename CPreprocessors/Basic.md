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




---
