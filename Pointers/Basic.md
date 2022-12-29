# Memory of a computer

Memory in a computer is made up of bytes arranged in a sequential manner.

_Each byte is identified by an index number which is called the address of that byte. **The address of these bytes start from zero.**_

```c
int age;
```
The compiler reserves 4 bytes for the integer variable `age`.

The value that we will allocate to `age` will be stored in binary form in those 4 bytes of memory.


**The format specifier `%p` is used to print addresses.**

_The address operator `&` cannot be used with constants, expressions or register variables._


**What is a pointer?**

> A pointer is a variable that stores memory address.


Declaration of a pointer variable:

`datatype *pname;`

Example:

```c
int *iptr;
float *fptr;
char *cptr;
```

Since pointers are variables, memory will be reserved for them.

**Pointers also have address.**


**Global and local static pointers are automatically initialized to NULL.**

**An automatic pointer may be pointing to anywhere in the memory.**
