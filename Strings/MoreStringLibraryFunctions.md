# _More string library functions_

## _1._ strncpy()

**Declaration:**
```c
char *strncpy(char *destination, const char *source, size_t n);
```

_This function copies exactly_ `n` _characters from string_ `source` _to string_ `destination`.


_If length of_ `source` _is less than_ `n`, _then null characters are added to_ `destination` _till the all_ `n` _characters have been written to it._

_Example:_ **If** `n` **is 10 and the length of** `source` **is 6 then 4 null characters are written at the end.**

_If length of_ `source` _is more than or equal to_ `n` _then_ `n` _characters will be written to_ `destination`.

_This function returns the value of_ `destination`.

Program:
[t15.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t15.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211985915-58f075ad-8c4c-412f-84af-f0c9e46deea6.png" width="60%" height="60%">

Program:
[t16.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t16.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211986888-2fc8843c-5258-481f-84b5-da108a58c597.png" width="60%" height="60%">

## _2._ strncat()

**Declaration:**
```c
char *strncat(char *destination, const char *source, size_t n);
```
_It appends_ `n` _characters of_ `source` _to_ `destination`.

_The null character of_ `destination` _is removed and_ `n` _characters of_ `source` _are appended to_ `destination` _and a null character is added at the end of_ `destination`.

_This function returns the value of_ `destination`.

Program:
[t17.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t17.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211996556-ae974d95-8dce-4652-b7e7-2d21dd0d441a.png" width="60%" height="60%">

---
