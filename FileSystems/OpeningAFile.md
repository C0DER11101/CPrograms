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

Here, if `fopen()` succeeds in opening `hello.txt` then it returns a pointer of type `FILE` and that pointer is assigned to `fp1`.


**The name of the file is limited to _FILENAME_MAX_ characters.**
