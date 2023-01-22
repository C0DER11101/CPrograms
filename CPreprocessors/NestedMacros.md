# Nesting in macros
**Example:**
```c
#define PI 3.14
#define PISQUARE PI*PI // nested macro
```

A statement like
```c
k=PISQUARE;
```
will be expanded as:
```c
k=PI*PI;
```
this will be further expanded as:
```c
k=3.14*3.14;
```

Program:
[t15.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/CPreprocessors/tests/t15.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213905073-77f88bd7-d481-44fe-ab74-453238523078.png" width="60%" height="60%">

_The expansion is shown in the program itself(via comments)._


One more [program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/CPreprocessors/tests/t16.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213905972-0a8fcd3a-b993-4844-b4f9-c43b929b39dc.png" width="60%" height="60%">


---
