# Formatted I/O

### 1. fprintf()
**Declaration:**
```c
int fprintf(FILE*fptr, const char* format[, argument, ...]);
```
* Writes formatted data into files.
* Returns number of characters written to the file on success.
* Returns EOF on error.


Program:
[t6.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/t6.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/215491351-632c6d1a-126c-4192-ae28-d76accb9bac4.png" width="60%" height="60%">

`fprintf()` functions exactly like `printf()`, the only difference is that it takes file pointer as its argument but `printf()` doesn't.


### 2. fscanf()
**Declaration:**
```c
int fscanf(FILE* fptr, const char* format[address, ...]);
```
* Reads data from the file(unlike `scanf()`).
* On success, it returns number of arguments that were assigned some values.
* Returns EOF on end of file.


Program:
[t7.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/t7.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/215500292-5a122389-0513-4ea7-a05f-765f3ab6678d.png" width="90%" height="90%">

`fscanf()` ignores whitespaces and newlines. Here the output has white spaces between the words, that's because I provided a space in `printf()` which is inside the `while` loop: `printf("%s ", name);`. In the next output I will explain why I didn't take the age as integer input for `fscanf()`.


Program:
[t7_2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/t7_2.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/215500407-0d9e3b29-159e-4ca1-9792-ddd81ee87442.png" width="90%" height="90%">

Here, there is a `0` between each word(except between `"am"` and `"year"` and the words after them).

Remember in `scanf()` when we take input in this format:

```c
scanf("%c %c", &a, &b);
```
This meant that when we will enter a character for `a` we will have to provide a space and then enter another character for `b` i.e. the input would look like this:
```
c d
```
where `'c'` is the input for `a` and `'d'` is the input for `b`. The white space that we provided between `'c'` and `'d'` is ignored.

Similarly, I gave a space between `%s` and `%d`:
```c
fscanf(fptr, "%s %d", name, &age);
```
obviously the space will be ignored. This space between `%s` and `%d` is not necessary. You may or maynot give it.

`fscanf()` starts reading from the file, it reads the contents for both the variables i.e. `name` and `age` but it finds the strings for `name` but doesnot find integers for `age` it only finds strings so it ignores the string that it scanned for `age` and so it allocates nothing to `age`. `fscanf()` starts reading from the ignored string(the one that it read for `age`). So it continues to allocate nothing to `age` until it reaches `"am"` where it finds `20` after it, `fscanf()` assigns `"am"` to `name` and `20`, an integer, to `age`. It's just like `scanf()`. The white space is ignored by `fscanf()` just like `scanf()`. **fscanf() ignores whitespaces and newlines just like scanf().**

Look at this [program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/scanfTest.c) to understand.

Here is the output:
**scanfTest.c Output:**

<img src="https://user-images.githubusercontent.com/96164229/215524150-cc053c1e-47cb-41b5-8ae9-6fdb7860de15.png" width="60%" height="60%">

Now, when `fscanf()` accepts the string `"am"` and after ignoring the whitespace it gets an integer and this time it assigns `"am"` to `name` and `20` to `age`. Then it goes on accepting strings and assigning them to `name` while `age` remains the same i.e. its value remains `20` as there are no more integers in the file.

If we replace `fptr` by `stdin` and `stdout` in `fscanf()` and `fprintf()` respectively like so:

```c
fprintf(stdout, "My name is %s and I am %d years old!\n", name, age);

fscanf(stdin, "%s %d", name, &age);
```
then these become equivalent to:
```c
printf("My name is %s and I am %d years old!\n", name, age);
scanf("%s %d", name, &age);
```





---
