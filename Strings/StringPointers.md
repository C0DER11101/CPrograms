# String pointers

**We can take a character pointer and initialize it with a string constant.**
Example:

```c
char *ptr="Chennai";
```

`ptr` points to the first character of the string constant `"Chennai"`, in simple words, `ptr` contains the address of `'C'` of `"Chennai"` which is the base address of this string constant.

_Comparing strings defined as arrays and strings defined as pointers._

```c
char str[]="Mumbai";  // 1
char *ptr="Chennai";  // 2
```

`1` is equivalent to `char str[]={'M', 'u', 'm', 'b', 'a', 'i', '\0'};`
In `2` the address of string constant is assigned to the pointer variable `ptr`.

**Memory representation:**

`str`

<img src="https://user-images.githubusercontent.com/96164229/211498539-3f5c2371-2d7c-4b21-afd0-bd6b8a62ed2a.jpg" width="60%" height="60%">

`ptr`

<img src="https://user-images.githubusercontent.com/96164229/211512762-a93d1ea5-cba7-4033-8d3a-0aedd685bb26.jpg" width="60%" height="60%">

`str` is an array of characters and 7 bytes are reserved for it. `str` is a constant pointer which will always point to the $0^{th}$ element of the array.

_The elements of the array are initialized with the characters of the string._

Look at `2` in the snippet, in this case the string constant `"Chennai"` is stored somewhere in memory with 8 consecutive bytes reserved for it. This string constant returns the address of the first character i.e. `'C'` that is assigned to `ptr.` Here a total of **12 bytes** are reserved: **4 bytes** for `ptr` and **8 bytes** for the string constant.

**_Main difference between_ `str` and `ptr`:**

 `str` is a constant pointer and will always point to 1000 which is the address of the $0^{th}$ character `'M'`; while `ptr` is a pointer variable(not a constant pointer) and may contain another address.

[t8.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t8.c) is an errornous program that demonstrates the unmodifiability of constant pointer `str`.

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211529828-e42be28e-638a-4372-8fb6-5ab09784d9f7.png" width="60%" height="60%">

However, you can do this:

```c
*str='H';
printf("%s\n", str);
```

Here, we are only changing the value stored at the address pointed to by `str` and not the address.

But what is shown in the error is indeed an error, you cannot modify a constant pointer!!

But with `ptr`, it is valid:

```c
ptr="Mumbai";
```

You can initialize `ptr` with any string since it's not a constant pointer!!

Now, if we really want to assign a different string to `str` then we can do it by using one of the following functions:

1. scanf()
2. gets()
3. fgets()
4. strcpy() OR
5. by assigning characters(like this `str[0]='H'` or `*str='H'`; well both of these mean the same).

This is illustrated by [t8_2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t8_2.c) 

Here are some outputs of this program:

**Output-1:**

<img src="https://user-images.githubusercontent.com/96164229/211535014-02c1b40b-573e-4fc4-a940-f12c0e80acd8.png" width="60%" height="60%">

**Output-2:**

<img src="https://user-images.githubusercontent.com/96164229/211535238-bc78dc02-e1ec-4d9a-a2cd-7b9c9f2850d6.png" width="60%" height="60%">

**Output-3:**

<img src="https://user-images.githubusercontent.com/96164229/211535429-ef8d5c1a-79a3-4f63-a30f-68db440db921.png" width="60%" height="60%">

The first output is shows that the array was initially of length 5 so when I entered `Program` as input, actually I entered a string whose length was 6 so that's why we got `Aborted(core dumped)`.

The second output is also about the same thing, if you look at the end you will see an output: `Overd`, so actually I manually initialized only 4 elements of `str` and $5^{th}$ element stayed unchanged(i.e. it remaind `'d'`).

I don't have to say anything about the $3^{rd}$ output!!

Now, we will talk about pointer to character.

Look at this:

```c
char *ptr="Programming";
```

Now, we can change the value of `ptr` by assigning it a different string constant. But we cannot change the string constant!!

_We already know that changing a string constant leads to undefined behaviour!!_

So if we try to change the string `"Programming"` then the compiler will throw an error.

The following are invalid:

```c
ptr[0]='B'; // same writing *ptr='B';
scanf("%s", ptr);
strcpy(ptr, "Somethingelse");
```

**Here are the invalid programs and their outputs(there were no errors during compiling)!!**

[t9_1.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t9_1.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211621814-f8fcb587-8283-4137-a4c2-419982738114.png" width="60%" height="60%">

[t9_2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t9_2.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211621972-861be06e-6d28-4729-9d3f-cd0af595fbf8.png" width="60%" height="60%">

[t9_3.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t9_3.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211622167-bc2995dc-4a21-4f85-818a-34b6b3012759.png" width="60%" height="60%">

The reason we are getting `segmentation fault` is that we trying to modify a string constant.

When we wrote:

```c
char *ptr="Programming";
```
basically the address of the $0^{th}$ element i.e. `'P'` was assigned to `ptr` and we also know that `"Programming"` is a string constant.

When we did `ptr[0]='B';` in **t9_1.c**, what we actually did was access the put the value `'B'` in the address of `'P'` which is not possible since `"Programming"` is a string constant and that's why we get `segmentation fault`!!

Next, we did `scanf("%s", ptr);` in **t9_2.c**, here we tried to insert a new string into ptr which was storing the address of `'P'` of `"Programming"` which is again not possible because `"Programming"` is a string constant!!

Next, we did `strcpy(ptr, "NewString");` in **t9_3.c**, here also we are trying to store `"NewString"` in `ptr` by overwriting it in the addresses of the existing string constant `"Programming"` which is again not possible because `"Programming"` is a string constant!!

**We cannot use `scanf()`, `gets()` and `fgets()` with an _uninitialized pointer_ since it contains garbage value and points to invalid location. _First we should allocate memory to it, then we must use these functions._**

---
