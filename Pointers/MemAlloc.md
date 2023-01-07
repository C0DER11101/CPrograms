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

_If_ `newsize` _is larger, then the old data is not lost and newly allocated bytes are uninitialized._

_If_ `newsize` _is smaller than `size` then there no change._


_The starting address contained in_ `ptr` _may change if there is not sufficient memory at the old address to store all the bytes consecutively._

_This function moves the contents of old block into the new block and the data of the old block is not lost._

**On failure, realloc() returns NULL and in this case the old memory is not deallocated and it remains unchanged.**

_If **ptr** is a null pointer, **realloc()** behaves like **malloc()** function._

## free()

**Declaration:**

```c
void free(void*p);
```

_The dynamically allocated memory exsits till the end of the program._

The function **free()** does the work of releasing the memory space dynamically.

The memory released by **free()** is made available to heap again.


_When the program terminates all the memory is released automatically by the operating system. But it's a good practice to free whatever memory has been allocated dynamically. If we don't free the memory then this would lead to memory leak while the program is running an can make the program run slow._

This [program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t8.c) shows how the realloc works.

**Output:**

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t8Output.png" width="50%" height="50%">

# Dynamic array

## 1D array

[t9.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t9.c) shows a dynamic array.

**Output:**

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t9Output.png" width="50%" height="50%">

Notice that in `t9.c` there is a **scanf()** statement which contains this expression:

```c
&*(p+i);
```

Let's break this expression and understand what it means:

So first of all:

```c
p=(int*)calloc(size, sizeof(int));
```

Here `size` number of memory blocks(each 4 bytes) are allocated and `p` stores the address of the starting block.

Now, since `int` is 4 bytes, if we add 1 to `p` i.e. `p+1` it means that we are pointing to the next consecutive memory block after the current memory block. It looks as if we are adding `1` to `p` but in reality we are actually adding 4 bytes to the address contained in `p`, as soon as 4 bytes are added to the starting address we reach the next consecutive address right after the starting address, now if we add 2 to `p` like this: `p+2`, then we are basically adding `2x4` bytes i.e. 8 bytes to the starting address which as a result will take us to the third memory block's address and this goes on until we reach the final block.

Let's look at this expression:

```c
(p+i);
```

This is just what I had said previously, i can take any value between `0` and `size-1`.


```c
*(p+i);
```

This means that whatever address we have reached, we will dereference it i.e. we will access the value at that address.

`*(p+i)` can also be written as `p[i]`

So, now:

```c
&*(p+i);
```
this means _address of the value_.


```c
scanf("%d", &*(p+i));
```
this can also be written as:

```c
scanf("%d", (p+i));
```

Since `p` stores the starting address and whatever the value of `i`, it is added with `p` and we reach an address of elements of the array, we insert the value input by the user into the address.

This [program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t9_2.c) will make things clearer.

**Output:**

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t9_2Output.png" width="50%" height="50%">

## 2D array

[t10.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t10.c) shows us a dynamic 2D array.

**Output:**

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t10Output.png" width="50%" height="50%">

```c
scanf("%d", (*(arr+i)+j);
```

This statement is pretty easy to understand once you understand what `*(p+i)` and `(p+i)` do in [1D array](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/MemAlloc.md#1d-array).

```c
arr=(int**)calloc(row, sizeof(int*));
```

This statement is quite interesting. We all know that the name of a 2D array is actually a pointer to pointer! How? Assume that `arr` was a just a simple 2D array like this one:

```c
int arr[3][3];
```

Now, if I simply write `arr` then it would mean that I am talking about `&arr[0]` i.e. the address of the $0^{th}$ element which in this case is the $0^{th}$ 1D array(in case you don't remember have a look at [this](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/Basic.md#pointers-and-2-d-arrays). Now, `arr[0]` means that I am talking about `&arr[0][0]` i.e. address of $0^{th}$ element of this $0^{th}$ 1D array. So, using this concept `arr=(int**)calloc(row, sizeof(int*));` can be understood as:

**Since `arr` is going to be a 2D array we first need to be a pointer to pointer to int. So that's why we first allocate an array of `row` pointers to int and we know that since calloc also returns a void pointer which stores the address of the starting block(which in this case is that of a pointer, that's why it's a void pointer to pointer and just a void pointer) we need to typecast it into a pointer to pointer to int.**

_Always remember: **array name is a pointer to its**_ $0^{th}$ _**element be it a 1D array or a 2D array or any higher dimensional array and the**_ $0^{th}$ _**element neednot be a single element, it can be a 1D array or a 2D array depending on the dimension of the main array we are dealing with. If we are dealing with 1D array then the**_ $0^{th}$ _**element will be the the first element with index 0. If we are dealing with 2D array then the**_ $0^{th}$ _**element will be the**_ $0^{th}$ _**1D array(since 2D array is an array of 1D arrays). And like this the**_ $0^{th}$ _**element goes on changing on as we start dealing with higher dimensional arrays.**_

---
