# Closing a file

_A file that was opened using **fopen()** must be closed using **fclose()** when no more operations are to be performed on that file._

**Declaration:**

```c
int fclose(FILE *fptr);
```

After closing the file, connection between file pointer and the file is broken. On closing the file the buffer associated with it is flushed. **The buffers allocated by the system for the file are freed after the file is closed so that these buffers are available for other files.**


**fclose()** returns EOF on error and 0 on success(the value of EOF is generally -1).

_Error in **fclose()** may occur when there is not sufficient space on the disk._

We can also close multiple file calling a single function called `fcloseall()`.

**Declaration:**

```c
int fcloseall(void);
```

On error, `fcloseall()` returns EOF and on success it returns the number of files closed.
