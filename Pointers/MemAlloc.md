# Dynamic Memory allocation

> Here we allocate memory at the time of execution of the program.


## malloc()

**Declaration:**
```c
void *malloc(size_t size);
```

> Used for dynamically allocating memory.

`size` specifies number bytes to be allocated.

`size_t` is defined in `stdlib.h`


_On success, `malloc()` returns a pointer to the first byte of allocated memory, the returned pointer is a **void pointer**, so we need to typecast it to appropriate type of pointer._

**Usage of malloc():**

```
ptr=(datatype*)malloc(specified size);
```

Example:

```c
int *ptr;

ptr=(int*)malloc(3*sizeof(int));
```

This snippet allocates 12 bytes of memory to `ptr` i.e. 3 4 byte memory blocks and a void pointer to the first 4 byte memory block is returned which is typecast to pointer to integer so that it can be stored in `ptr`.


Note that we could have written it this way:  `ptr=(int*)malloc(12);`, it will allocate 12 contiguous bytes of memory space, but it makes the program unportable.


_If there is not sufficient memory available in the heap, then `malloc()` returns NULL._


## calloc()

**Declaration:**
```c
void *calloc(size_t n, size_t size);
```

It does the same thing as malloc() except that it takes two arguments and malloc() only takes one.

The first argument of calloc() specifies the number of blocks and the second one specifies the size of each block.

Example:

```c
int *ptr;

ptr=(int*)calloc(3, sizeof(int));
```

Here, the snippet allocates 3 blocks of memory, each of size 4 bytes(sizeof(int)).

Like malloc(), calloc() also returns NULL if insufficient memory is there in heap.

But there is something different in calloc(), the memory allcoated by malloc() contains garbage value, but the memory allocated by calloc() is initialized to 0.


## realloc()

**Declaration:**

```c
void *realloc(void *ptr, size_t newsize);
```

This function is used to increase/decrease the size of the memory allocated by malloc() or calloc().

**realloc() alters the size of the memory block without losing the old data.**

The first argument in realloc() is a pointer to the block of the memory that was previously allocated by malloc() or calloc().

The second argument is the new size of that block.

Example:

```c
ptr=(int*)malloc(size);
```

Allocating memory of size `size` bytes and storing the starting address of this block in `ptr`.

```c
ptr=(int*)realloc(ptr, newsize);
```

Allocates memory space of `newsize` bytes and the starting address is stored in `ptr`. `newsize` may be smaller or larger than `size`.

_If `newsize` is larger then the old data is not lost and newly allocated bytes are uninitialized._

---
