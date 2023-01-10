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

---
