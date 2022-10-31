# About the external variables.

Files [external.h](https://github.com/C0DER11101/CPrograms/blob/CProgramming/external.h), [external.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/external.c) and [_1Main.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/_1Main.c)

**Before a function can use an external variable, the name of the variable must be made known to the function. Writing `extern` declaration in the function is a way of making the function know that there is an external variable.**

If the external variable is in the same source file as that of the function(that is going to use it), then there is no need to use `extern`.

`extern` is used for situations where a program is in several source files say, _file1_, _file2_, _file3_, etc.. Say a variable is defined in _file1_ and it is used in _file2_ and _file3_, then we need the `extern` declaration of the variable in _file2_ and _file3_ to connect the occurrences of the variable.

Syntax:

```c
extern int max;
```

in _external.c_.
