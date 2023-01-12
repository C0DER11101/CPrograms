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

Program:
[t15.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t15.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211985915-58f075ad-8c4c-412f-84af-f0c9e46deea6.png" width="60%" height="60%">

Program:
[t16.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t16.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211986888-2fc8843c-5258-481f-84b5-da108a58c597.png" width="60%" height="60%">
