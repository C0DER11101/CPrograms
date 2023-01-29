# Character I/O


### 1. fputc()

**Declaration:**
```c
int fputc(int c, FILE *fptr);
```

> This function writes a character to the specified file at the current file position and then increments the file position indicator.

* On success, it returns an integer representing the character written.
* On error, it returns [EOF](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/EOF.md).


Program:
[t1.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/t1.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/215335224-2e5ddbda-6505-4e05-8b15-5e34b7f928f6.png" width="60%" height="60%">

**cat Test1.txt**

<img src="https://user-images.githubusercontent.com/96164229/215335233-e8f8f1b4-3bf1-45c8-9a4b-e9a2a9e03040.png" width=60%" height="60%">

### 2. fgetc()
**Declaration:**
```c
int fgetc(FILE*fptr);
```

* Reads a single character from a given file and increments the file position indicator.
* On success, it returns the character after converting it to an `int` without sign extension.
* On end of file or error, it returns EOF.


Program:
[t2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/t2.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/215336265-7536da50-32e5-4843-9575-7f1d9e626511.png" width="60%" height="60%">



---
