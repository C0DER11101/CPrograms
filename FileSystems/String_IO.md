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

The warning `comparison between pointer and integer` pops up because `gets`, on success, returns the string that was provided as input and, on failure or when end of file occurs(through `CTRL+D`), it returns NULL.

So, when we entered the string `gets` returned the string because it was entered successfully and the loop condition `gets(str)!=NULL` was checked which basically compared the string returned by `gets` with `NULL`. That's why the error was thrown. Program `t4.c` counters this problem by removing `!=NULL` from the while condition and modifying the condition to `while(gets(str))` because `while` will anyway terminate once it encounters NULL, because NULL is 0(false for the condition).


### 2. fgets()
**Declaration:**
```c
char* fgets(char* str, int n, FILE* fptr);
```
>This function is used to read characters from a file and these characters are stored in the string pointed by `str`.

* It reads atmost `n-1` characters from the file where `n` is the second argument. `fptr` is a file pointer which is associated with the file from which characters are read.
* Reading stops after an EOF or a newline.
* Returns the string pointed to by `str` on success, and, on error or end of file, returns `NULL`.
* It appends a null character after the last character read from the file to terminate the string.

`fgets()` _returns NULL on error or when end of file occurs **while no characters have been read**._
**More on it [here](https://www.ibm.com/docs/en/zvse/6.2?topic=stream-fgets-returned-value).**

Program:
[t5.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/t5.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/215415526-f821682f-5adc-40b6-a006-710f15b28c51.png" width="60%" height="60%">

_what happened:_

*First iteration:* `fgets()` *reads 79 characters i.e. till* `P` *of* `Present` *and stores those 79 characters in* `str` *and also puts a null character at the end.* `puts()` *displays `str` and puts a newline at the end.*

*Second iteration:* `fgets()` *again starts reading from the* $80^{th}$ *character i.e.* `r` *of* `Present` *it was supposed to read another 79 characters but after reading 6 characters it encounters end of file, but it doesnot return NULL because before encoutering the eof, it had read 6 characters, so it stores those 6 characters in the string pointed to by* `str`.

*Third iteration:* *This time* `fgets()` *goes back to the file again and starts reading again, but this time it finds that no characters are left to be read and only the EOF is left, so it returns NULL and so in this iteration, the condition of the* `while` *loop results into false and the loop terminates.*

Program:
[t5_2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/t5_2.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/215415577-04e5268b-a795-467b-a4dd-ad83ec6683c1.png" width="60%" height="60%">

Here, there the output is not the same as the output of `t5.c` because we have used `printf()` instead of `puts()` and `printf()` doesnot print the null character. So, after printing the string till `P` of `Present` it stops and `fgets()` continues reading the rest of the 6 remaining characters of `Present` until encounters the eof and again `printf()` prints the 6 remaining characters that were read by `fgets()` and then `fgets()` reads again from the file but this time there is no character left for reading and it finds only the eof and so it returns NULL which terminates the `while` loop and that's why we see a `2` displayed at the end signifying that there were two iterations and on the third iteration terminated the while loop.





---
