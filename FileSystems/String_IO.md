# String I/O

### 1. fputs()
**Declaration:**
```c
int fputs(const char *str, FILE *fptr);
```
>This function writes the null terminated string pointed to by `str` to a file associated with the file pointer `fptr`.
_The null character that marks the end of the string is not written to the file._

* On success, it returns a non-negative integer value.
* On error, it returns EOF.


Program:
[t4.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/t4.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/215395674-6106535c-2e30-437e-ba85-43717786e7ea.png" width="90%" height="90%">

`gets()` converts the newline character into the null character which is not written to the file `Test3.txt` by `fputs()`. That's why the text in `Test3.txt` doesnot have newline, it's written in a single line.

[Warning: Implicit declaration of function 'gets'](https://stackoverflow.com/questions/34031514/implicit-declaration-of-gets)


Program:
[t4_2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/t4_2.c).

**Warning:**

<img src="https://user-images.githubusercontent.com/96164229/215396361-9653e111-1728-4952-98e2-c4dcc8756365.png" width="90%" height="90%">

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/215396397-8c635fc6-7f2c-4901-9409-4f6fe9205248.png" width="90%" height="90%">

The warning `comparison between pointer and integer` pops up because `gets`, on success, returns the string that given as provided as input and, on failure or when end of file occurs(through `CTRL+D`), it returns NULL.

So, when we entered the string `gets` returned the string because it was entered successfully and the loop condition `gets(str)!=NULL` was checked which basically compared the string returned by `gets` with `NULL`. That's why the error was thrown. Program `t4.c` counters this problem by removing `!=NULL` from the while condition and modifying the condition to `while(gets(str))` because `while` will anyway terminate once it encounters NULL, because NULL is 0(false for the condition).


### 2. fgets()





---
