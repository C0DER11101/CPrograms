# 2D array of characters(or simply called _Array of strings_)

Example:

```c
char arr[5][10]={
	"white",
	"red",
	"green",
	"yellow",
	"blue"
	};
```

This initialization is equivalent to :

```c
char arr[5][10]={
	{'w', 'h', 'i', 't', 'e', '\0'},
	{'r', 'e', 'd', '\0'},
	{'g', 'r', 'e', 'e', 'n', '\0'},
	{'y', 'e', 'l', 'l', 'o', 'w', '\0'},
	{'b', 'l', 'u', 'e', '\0'}
		};
```

`5` in `arr[5][10]` denotes the number of strings in the 2D array.

`10` in `arr[5][10]` denotes the maximum length of each string.

On dereferencing `arr` we will get the address of $0^{th}$ element in the $0^{th}$ string and on dereferencing that address we will get the value in that address which will be `'w'` of `"white"`.

`arr` stores the address of $0^{th}$ string, the concept here is the same as 2D arrays of integers.

When you write `arr[0]` you are basically accessing $0^{th}$ string, because `arr[0]` acts like a pointer to character for the $0^{th}$ string!!

Look at this [program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t10.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211704884-d163d513-e1a1-488d-aa05-61a19ab7d553.png" width="60%" height="60%">

`arr` stores the address of the $0^{th}$ string(the address of the whole string, not of the $0^{th}$ character of that string).

But when we write `arr[0]` then we are dereferencing `arr` and that gives us the address of the $0^{th}$ character of that $0^{th}$ string which what happens when you do this:
```c
char *ptr="Hello";
```

So, `arr[0]` is quite similar to `ptr`. But there is a difference which we will talk about below.

**This is the internal storage representation of `arr`:**

<img src="https://user-images.githubusercontent.com/96164229/211726621-438d2e3b-3ad8-46b2-8818-9894b21cb312.jpg" width="60%" height="60%">

There is a lot of memory wastage as we can see from the image above.

If we didn't assign strings to `arr`:

```c
char arr[5][10];
```

And if we had initialized it with strings later:

```c
arr[0]="white";
arr[1]="red";
.
.
```

The above snippet is invalid, you cannot initialize an array of strings like this, also the following is also invalid:

```c
arr[0]=arr[1];
```

[t11.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t11.c) gives us information what exactly `arr[0]` means. First look at this error:

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211733355-91595ebe-2f32-4273-b217-063f10b78403.png" width="60%" height="60%">

This error occurs when we are trying to modify a constant pointer, i.e. an array of characters. That basically indicates that `arr[0]` is actually a constant pointer, it's same as `char str[]="Hello";`. Therefore it is **unmodifiable**.

_So this is difference that I had talked about when I said that **`arr[0]` is quite similar to `ptr`.**_

So, in order to really modify `arr[0]` or to be more precise `arr[i]`, we need to use `scanf()`, `gets()`, `fgets()`, `strcpy()` or manually assign characters to it.

[t12.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t12.c) shows one of the methods used to modify the constant pointer `arr[0]`. _Remember, the rest of the methods will also work._

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211736124-341b0952-6682-4121-b8c8-5d6b1af66ff5.png" width="60%" height="60%">

## Array of pointers to strings

_This is same as array of pointers to integers._

```c
char *arrp[]={
	"white",
	"red",
	"green",
	"yellow",
	"blue"
	};
```

`arrp` is an array of pointers to strings.

_Array of pointers to strings is an array of **pointers to characters** in which each pointer points to the first character of a string i.e. each element of this array contains the base address of a string._

In [t13.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t13.c), I have created an array of **pointer to characters**.

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211807890-0dd0a55c-d5c4-4b2a-910c-f6a906a5b62f.png" width="60%" height="60%">

`arrp` points to the $0^{th}$ pointer to character.


```c
char *arrp[]={
	"white",
	"red",
	"green",
	"yellow",
	"blue"
	};
```

Here when we write `arrp` we are basically talking about the address of the $0^{th}$ pointer to character i.e. `arrp[0]`.
When we write `arrp[0]`, we are talking about the address of the $0^{th}$ character of the string that is pointed to by `arrp[0]` and `arrp[0]` points to `"white"` and the $0^{th}$ character is `"w"`. `arrp[0]` stores the address of `"w"`.

Here is the **Memory representation of** `arrp`:

<img src="https://user-images.githubusercontent.com/96164229/211831267-0588fe65-827f-499d-b333-b4a6b83478c5.jpg" width="60%" height="60%">

Here the strings occupy a total of 28 bytes.

The pointers occupy 20 bytes(since pointers occupy 4 bytes and there are 5 pointers to characters).

So, a total of 48 are occupied.

Here, however such kind of initialization valid:

```c
char *arrp[3];

arrp[0]="white";
arrp[1]="red";
arrp[2]="green";
```

This illustrated in [t14.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t14.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211842956-54e812b0-eea0-48bf-8dc5-9897bd7949e8.png" width="60%" height="60%">



---
