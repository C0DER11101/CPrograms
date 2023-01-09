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

"Value is %d\n"
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

Program [t1.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t1.c) shows a pointer to character passed to `printf`. However, when I compile it it gives me the following warning:



<img src="https://user-images.githubusercontent.com/96164229/211258890-da27149b-fed0-4449-bc76-df11c6ee1e38.png" width="50%" height="50%">

And also the following Output!!

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211259010-44261ad1-d4c2-4c80-bde4-a9f8a99940c8.png" width="50%" height="50%">

[t1_2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t1_2.c) format specifier put into `printf`.

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211260401-5677b61e-6d9e-45ea-931a-b7ebede8ecdd.png" width="70%" height="70%">



Now, look at this program: [t2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t2.c).



**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211261910-f385dc9b-bf36-42d3-aa9b-08c4db1bf492.png" width="70%" height="60%">

```c
printf("%c\n", "software"[4]);
```

What does this mean?

Let us see part by part what it really means.



We all know "software" is a string constant and string is replaced by pointer to character.



So when you write:

```c
printf("software");
```

It gets replaced by a pointer to character.

So when we wrote `printf("%c\n", "software"[4]);`, first `"software"` was replaced by a pointer to character, let's assume the pointer to character to be `p`. Then `p[4]` means `*(p+4)` as we had seen in [here](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/MemAlloc.md#dynamic-array). So in short, `"software"[4]` is accessing the character in index number `4` which is `w`. `"software"` is a string constant which is a pointer to the character `s`. So when you write `"software"[4]` it basically means that we are using the pointer to `s` and adding `4` to it and then dereferencing it which gives us the value character `w`.

`"software"[4]` is equivalent to writing `*("software"+4)`

If we take it even more simply, look at the snippet below:

```c
char*p="software";
printf("%c\n", p[4]);
```

This above snippet displays the same output as `printf("%c\n", "software"[4]);`

**Never alter string constants.**

**_When string constant is used as an initializer for a character array then it does not represent any address and it is not stored anywhere in memory._**



Example:

```c
char str[]="Program";
```

`"Program"` is not stored in memory and therefore has no address.

Memory is reserved for `str` not for `"Program"`.

`char str[]="Program";` is equivalent to writing:

```c
char str[]={'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
```

If we have a statement like this:

```c
char*ptr="Program";
```

Here, space is allocated for pointer variable `ptr` and string constant `"Program"` is stored separately in memory and `ptr` is initialized with the starting address of `"Program"` which is the address of `'P'`.

_There is a difference between_ `'b'` _and_ `"b"` . `'b'` _is a character constant which represents the ASCII value of_ `'b'`_;_ `"b"` _is a string constant which contains the character_ `'b'` _and the null character_ `'\0'`.

## String variables

> A string variable is 1d-array of ASCII characters terminated by a null character.



```c
char str[]="New Delhi";
```

`str` is a string variable.

**Here the string constant "New Delhi" doesn't represent an address. _The array_ `str` _will be stored in the memory as:_**

<img src="https://user-images.githubusercontent.com/96164229/211316030-5b032143-f8ef-4ebc-9ae8-751c9f3ad48a.jpg" width="60%" height="60%">

Look at this [program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t3.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211320351-77d1a5c8-e2bf-41f2-bc4e-ab70eb85d24a.png" width="60%" height="60%">

The code is self-explanatory, nothing we didn't cover in Pointers!!



**We can enter and print strings using the `%s` specification in the control string of `printf()` and `scanf()`.**



Here is a [program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t4.c) that performs string input and output.



**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211333908-522cc591-a9ba-41f3-952e-c02b4e21cd84.png" width="60%" height="60%">



---