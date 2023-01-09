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

![image](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/StoringStringInMemory.png)



---