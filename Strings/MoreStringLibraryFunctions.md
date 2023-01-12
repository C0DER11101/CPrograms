# _More string library functions_

## _1._ strncpy()

**Declaration:**
```c
char *strncpy(char *destination, const char *source, size_t n);
```

_This function copies exactly_ `n` _characters from string_ `source` _to string_ `destination`.


_If length of_ `source` _is less than_ `n`, _then null characters are added to the destination string till the all_ `n` _characters have been written to_ `destination`.

_Example:_ **If** `n` **is 10 and the length of** `source` **is 6 then 4 null characters are written at the end.**

_If length of_ `source` _is more than or equal to_ `n` _then_ `n` _characters will be written to_ `destination` _and null character will not be added at the end. Since_ `destination` _is not null terminated it can't be used with_ `printf()`, `strlen()` _and any other function._

Program:
[t15.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t15.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211981739-50012afa-1490-498c-b7be-5b58cd6866bd.png" width="60%" height="60%">
