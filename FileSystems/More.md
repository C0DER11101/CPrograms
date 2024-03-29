# Other file functions

### 1. feof()
**Declaration:**
```c
int feof(FILE* fptr);
```

>It is a macro that is used to check the end of file condition. It returns a non-zero value if end of file has been reached otherwise it returns zero.


### 2. ferror()
**Declaration:**
```c
int ferror(FILE* fptr);
```
>This macro is used for detecting any error occurred during read or write operations on a file.

>It returns a non-zero value if an error occurs otherwise it returns zero.


### 3. clearerr()
**Declaration:**
```c
void clearerr(FILE* fptr);
```
>This function is used to set the end of file and error indicators to 0.


### 4. perror()
**Declaration:**
```c
void perror(const char* str);
```
>This function is used to display a message supplied by the user along with the error message generated by the system.

*It displays* `str` *and a colon, then the message related to the current value of* `errno` *and then a newline.*

`errno` is a global variable of type `int` declared in `errno.h`


### 5. rename()
**Declaration:**
```c
int rename(const char* oldname, const char* newname);
```
>This function is used to rename a file.

>We can give full path also in the argument.

>On success, it returns 0 and on error, it returns -1 and `errno` is set to one of the following three vlaues.

`ENOENT` $\rightarrow$ No such file or directory.

`EACCES` $\rightarrow$ Permission denied.

`ENOTSAM` $\rightarrow$ Not same device.


### 6. remove()
**Declaration:**
```c
int remove(const char* filename);
```
>This macro deletes a file.


### 7. fflush()
**Declaration:**
```c
int fflush(FILE* fptr);
```

* This function writes any buffered unwritten output to the file associated with `fptr`.
* The file is not closed after call to `fflush()`.
* On success, it returns 0.
* On error, it returns EOF.


*If we call this function with* `stderr` *then all the unwritten buffered error messages will be written.*
```c
fflush(stderr);
```

*To flush all output streams, we write:*
```c
fflush(NULL);
```

### 8. tmpfile()
**Declaration:**
```c
FILE* tmpfile(void);
```
* Creates a temporary binary file and opens it in `"wb+"` mode.
* On success, it returns a pointer of type `FILE` that points to the temporary file.
* On error, it returns NULL.
* The file created this function is automatically deleted when closed or when the program terminates.


### 9. tmpnam()
**Declaration:**
```c
char* tmpnam(char str[L_tmpnam]);
```
* Generates unique name for a file.
* Argument `str` can be NULL or any array of minimum `L_tmpnam` characters.
* If `str` is NULL then `tmpnam()` stores the temporary file name in an internal static array ad returns a pointer to that array.
* If `str` is not NULL, then `tmpnam()` stores the temporary file name in `str` and return `str`.
* The number of different file names that can be generated by `tmpnam()` during the execution of program is specified by `TMP_MAX` which is defined in `stdio.h`


`L_tmpnam` is constant defined in `stdio.h`.


### 10. freopen()
**Declaration:**
```c
FILE* freopen(const char* filename, const char* mode, FILE* fptr);
```
>This function is used to associate a new file with a file pointer.

*The file associated with* `fptr` *is closed by* `fclose()`, *after that the* `filename` *that is specified in the first argument is opened in the mode specified by* `fopen()` *and this* `fptr` *is now associated with this file.*

* On success, `freopen()` returns `fptr`.
* On error, it returns NULL.




---
