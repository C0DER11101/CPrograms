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




---
