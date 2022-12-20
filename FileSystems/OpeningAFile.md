# Opening a file

_When a file is opened, a **stream** is associated with that file, a **buffer** is created in the main memory for trasferring data to and from the file._


A structure named `FILE` is defined in the header file `stdio.h` that contains all the information about the file like name, status(read, write, etc.), buffer location, current position in the buffer, end-of-file stats, error status, etc.

_A file pointer(or **stream pointer**) is a pointer to a structure of type **FILE**._


_Whenever you open a file, a structure of type FILE gets associated with it, and file pointer that points to this structure identifies this file. The function **fopen()** is used to open a file._

**Declaration of fopen()**:

```c
FILE *fopen(const char *filename, const char *mode);
```

`filename` is the name of the file to be opened.

`mode` is the mode that decides which operations(read, write, append, etc.) are to be performed on the file.


**On success _fopen()_ returns a pointer of type _FILE_ and on failure it returns _NULL_.**

_Example_

```c
FILE *fp1;

fp1=fopen("hello.txt", "w");
```

Here, if `fopen()` succeeds in opening `hello.txt` then it returns a pointer of type `FILE` and that pointer is assigned to `fp1`. If `fopen()` fails to open `hello.txt` then it returns `NULL` which is assigned to `fp1`.


**The name of the file is limited to _FILENAME_MAX_ characters.**

Now, if we have to perform any operations on `hello.txt` then we will use the file pointer `fp1` that's why the name of the file is called _external name_ and the file pointer associated with it is called _internal name_.

### Modes of a file

1. `"w"`(write) $\rightarrow$ _If the file doesnot exist then this mode creates a new file for writing and if the file already exists then the previous data is erased and the new data entered is written to the file._
2. `"a"`(append) $\rightarrow$ _If the file doesnot exist then this mode creates a new file. If the file already exists then the new data entered is appended at the end of the existing data._
3. `"r"`(read) $\rightarrow$ _This mode is used for opening an existing file for reading purpose only. The file to be opened **must exist**._
4. `"w+"`(write+read) $\rightarrow$ _This mode is same as `"w"`, but in this mode we can also read and modify the data. If file doesn't exist then a new file is created and if the file exists then the previous data is erased._
5. `"r+"`(read+write) $\rightarrow$ _This mode is same as `"r"`, but in this mode we can also write and modify existing data. The file to be opened **must exist** and the previous data is not erased._
6. `"a+"`(append+read) $\rightarrow$ _This mode is same as `"a"` but in this mode we can also read the data stored in the file. If the file doesn't exist then a new file is created and if the file already exists then new data is appended at the end of existing data._


**To open a file in binary mode we can append `'b'` to the mode, and to open the file in text mode `'t'` can be appended to the mode. Text mode is the default mode so `'t'` is generally omitted while opening files in text mode.**

**Example:**
`"wb"` $\rightarrow$ _File opened in binary mode for writing._

`"ab+"` or `"a+b"` $\rightarrow$ _File opened in binary mode for appending._
