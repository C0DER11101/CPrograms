# String library functions

> The following functions are in `string.h` header file.



## 1. strlen()

**Declaration:**

```c
size_t strlen(char const *string);
```

_This function returns the length of the string i.e. number of characters in the string **excluding the terminating null character**._

`size_t` _is defined in_ `stddef.h` _header file, it is an unsigned integer type._



This [program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t6.c) shows the usage of `strlen()`.

**Output:**



<img src="https://user-images.githubusercontent.com/96164229/211468449-88aecb09-2d88-4c18-a6eb-9db181e20f9a.png" width="60%" height="60%">



_[This](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t7.c) is my version of `strlen()` :_



**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211469793-26643408-3ab4-4cbe-ae55-11572d1f89b9.png" width="60%" height="60%">



## 2. strcmp()

**Declaration:**

```c
int strcmp(const char*s1, const char*s2);
```

_This function is used for lexicographic comparison of two strings._

**_If two strings match,_ `strcmp()` _returns a value 0, otherwise it returns a non-zero value._**



**NOTE:**

Value returned by `strcmp(s1, s2)` is:

1. <0 when `s1`<`s2`.

2. =0 when `s1`=`s2`.

3. \>0 when `s1`>`s2`.



## 3. strcpy()

**Declaration:**

```c
char*strcpy(char *destination, const char *source);
```

Copies `source` string to `destination` string.



Keep in mind that the `destination` string cannot be a a `const` like `source`, because it has to be modified.



Hence, function calls like `strcpy("New", str2);` and `strcpy("New", "York");` are invalid because `"New"` in both the function calls is a string constant(meaning that it is non-modifiable)!!



## 4. strcat()

**Declaration:**

```c
char *strcat(char *str1, const char *str2);
```

_This function is used to append a copy of string at the end of another string._

Notice that the second string `str2` is a string constant meaning that it won't be changed but the first argument `str1` will be modified i.e. that `str2` will be added at the end of `str`, obviously the null character at the end of `str1` will be removed.



**You can nest `strcat()` and `strcpy()` because both of them return a pointer to the first string.**







---


