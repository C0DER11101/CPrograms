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

So, `arr[0]` is same as `ptr`.

**This is the internal storage representation of `arr`:**

<img src="https://user-images.githubusercontent.com/96164229/211726621-438d2e3b-3ad8-46b2-8818-9894b21cb312.jpg" width="60%" height="60%">

---