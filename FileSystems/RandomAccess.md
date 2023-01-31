# Random access to file
*Data stored in a file can be accessed in two ways:*

1. Sequentially.
2. Randomly.

**In random access, data can be accessed and processed randomly. There is no need to read each record sequentially for accessing a particular record.**

>Random access takes less time than the sequential access.


C supports the following functions for random access file processing:

* `fseek()`
* `ftell()`
* `rewind()`
* `fsetpos()`
* `fgetpos()`


#### Concept of file position indicator
>The file position indicator points to a particular byte in the file and all read and write operations on the file take place at this byte.

>This indicator automatically moves forward when a read or write operation takes place.

*To access data randomly, we will have to take control of this position indicator.*

### 1. fseek()
**Declaration:**
```c
int fseek(FILE* fp, long displacement, int origin);
```
* `fp` $\rightarrow$ file pointer.
* `displacement` $\rightarrow$ long integer which can be positive or negative and it denotes the number of bytes which are skipped backward(if negative) or forward(if positive) from the position specified in the third argument. It's long integer so that it is possible to move in large files.
* `origin` $\rightarrow$ position relative to which the displacement takes place.


`origin` takes one of these three values:

|Constant|Value|Position|
|:------:|:---:|:------:|
|`SEEK_SET`|0|Beginning of file|
|`SEEK_CURRENT`|1|Current position|
|`SEEK_END`|2|End of file|

_These three constants are defined in_ `stdio.h`.

Example usage of `fseek()`:

```c
fseek(fp, 10L, 0);
```
>Origin is 0, which means the displacement will be relative to beginning of file so position indicator is moved 10 bytes forward from the beginning of the file.

```c
fseek(fp, 5L, 1);
```
>Position indicator is moved by 5 bytes forward from the current position. Value 1 is `SEEK_CURRENT`.

```c
fseek(fp, 8L, SEEK_SET);
```
>Position indicator is moved by 8 bytes forward from the beginning of file.

```c
fseek(fp, -5L, 1);
```
>Position indicator is moved by 5 bytes backward from current position.

```c
fseek(fp, 0L, 2);
```
>2 represents `SEEK_END`. Displacement 0 means that the position indicator is moved by 0 bytes from the end of file. Position indicator will point to the end of file.

```c
fseek(fp, -6L, SEEK_END);
```
>Position indicator is moved by 6 bytes backward from the end of file.

```c
fseek(fp, 0L, 0);
```
>Position indicator is moved by 0 bytes forward from beginning of file. Position indicator will point to the beginning of file.


* On success, `fseek()` returns the value 0.
* On failure, it returns a non-zero value.


Program:
[structProg.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/structProg.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/215708382-5549db5a-bb76-46ba-9cc1-752d7c530d8d.png" width="60%" height="60%">

**Text file:**

<img src="https://user-images.githubusercontent.com/96164229/215708422-2f324f2c-1ca9-4e69-8d61-45719c32132a.png" width="90%" height="90%">


Now, we will try to retrieve data from `structProg.c` using random access:
[retrieveStu.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/retrieveStu.c).

**Output-1[wrong]:**

<img src="https://user-images.githubusercontent.com/96164229/215735075-a76e9816-a182-4943-a945-19c07c33a862.png" width="60%" height="60%">


**Output-2[correct]:**

<img src="https://user-images.githubusercontent.com/96164229/215735123-3283b375-2ce8-464b-af29-3a028f152b9d.png" width="60%" height="60%">




---
