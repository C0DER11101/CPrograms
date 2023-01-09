# String. What it is.

> A string in C is treated as an array of `char`s.

**A character array is a string if it ends with a `\0` character.**

## String constant

_A string constant is a sequence of characters enclosed in double quotes and is also called a literal._

Examples of string constants:

```
"C"
"Hello world."

""
```

All these are valid string constants because each of them ends with a null character(`\0`), even `""`.

`""` actually contains only the null character and hence it is also called **null string**.



**The string constant itself becomes a pointer to the first character in the array.**

_Consider the string_ "Hello".

**This is how it's stored in the memory:**

<img src="https://user-images.githubusercontent.com/96164229/211252130-2154b88a-3a15-4035-91ac-b50283fce80c.png" width="50%" height="50%">

_The compiler automatically inserts a null character at the end._

**Each character occupies one byte.**

String constant "Hello" is a pointer to the character `H`.



**Whenever a string constant is used in the program it is replaced by a pointer pointing to the string.**



```c
char *p="Hello";
```

If we have a pointer to character then we can assign a string constant to it as shown above.



**Note:**

```c
printf("C is fun!\n");
```

Here, actually a pointer to character is passed to the `printf()` function.





---