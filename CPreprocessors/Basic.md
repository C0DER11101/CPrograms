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

_The preprocessor directives that perform these functions are given below:_

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





---
