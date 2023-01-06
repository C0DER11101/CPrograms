# Memory of a computer

Memory in a computer is made up of bytes arranged in a sequential manner.

_Each byte is identified by an index number which is called the address of that byte. **The address of these bytes start from zero.**_

```c
int age;
```
The compiler reserves 4 bytes for the integer variable `age`.

The value that we will allocate to `age` will be stored in binary form in those 4 bytes of memory.

The binary form of the value of age will be stored in this manner:

```
 2580    2588
 ___ ___ ___ ___
|___|___|___|___|
     2584    2592
```

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

**It is possible to assign the value of one pointer variable to other, provided that their base type is same.**


_Some simple operations of pointers explained through examples:_

```c
int a=87;
float b=4.5;

int*p1=&a;
float*p2=&b;

*p1=9;

(*p1)++;

x=*p2+10;

printf("%d %f", *p1, *p2);

scanf("%d%f", p1, p2);
```

Here `*p1=9;` is equivalent to writing `a=9;`

`(*p1)++;` is equivalent to writing `a++;`

`x=*p2+10;` is equivalent to writing `x=b+10;`

`printf("%d %f", *p1, *p2);` is equivalent to writing `printf("%d %d", a, b);`

`scanf("%d%f", p1, p2);` is equivalent to writing `scanf("%d%f", &a, &b);`


**While declaring a pointer, we have to mention the data type**.

Because when we use the indirection operator, the number of bytes retrieved will be different for different data types. The value of the pointer only tells the address of the starting byte.


Example:

Say, we have a pointer `ptr` which contains address 2000. When we write `*ptr` the compiler knows that it has to access the byte at the address 2000, so the compiler will look at the base type of the pointer and will retrieve the byte depending on that base type.

If the base type is `int`, then 4 bytes information will be retrieved and if the base type is double, 8 bytes will be retrieved and so on.


The illustrations below explain the example above:

## char

```c
char *p1;
```

This is the memory representation of pointer to character `p1`:

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/MemoryRepresentationOfCharacterPointer.png" width="50%" height="50%">

The image above shows the number of blocks that `p1` has to achieve when we dereference it. We can see that it needs to access only one byte i.e. only one memory location.


```c
int *p2;
```

This is the memory representation of pointer to integer `p2`:

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/MemoryRepresentationOfInteger.png" width="50%" height="50%">


```c
float *p3;
```

This is the memory representation of pointer to float `p3`:

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/MemoryRepresentationOfFloat.png" width="50%" height="50%">


```c
double *p4;
```

This is the memory representation of pointer to double `p4`:

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/MemoryRepresentationOfPointerToDouble.png" width="50%" height="50%">


**The size of the pointer variable is same for all type of pointers but the memory that will be accessed while dereferencing is different.**


# Pointer Arithmetic


_Valid operations that can be performed with pointers:_

* Addition of an integer to a pointer and increment operation.
* Subtraction of an integer from a pointer and decrement operation.
* Subtraction of a pointer from another pointer of same type.

## Precedence of dereferencing operator and increment/decrement operator

Precedence of `*` and increment/decrement operators is the same, their associativity is from right to left.


**Interpretation of some expressions on pointer arithmetic:**

Suppose we have an integer variable `x` and an integer pointer `ptr`, `ptr` has some address stored in it.


```c
x=*ptr++;
```

Here, first the post-increment operation is applied to `ptr` then dereferencing is done. Basically `x=*ptr++` is equivalent to `x=*(ptr++);`.


```c
x=*++ptr;
```

Here, first the pre-increment operation is applied to `ptr` then dereferencing is done on `ptr`. In simple words, `x=*++ptr` is equivalent to `x=*(++ptr);`

```c
x=++*ptr;
```

Here, first dereferencing is done on `ptr` and then incrementation operation is applied to it. `x=++*ptr` is equivalent to `x=++(*ptr);`.


```c
x=(*ptr)++;
```

Here, since the brackets have the highest precedence, so first the content within the brackets is evaluated i.e. `(*ptr)` and then the incrementation operation is applied to `ptr`.


## Pointer comparison

The relational operators `==`, `!=`, `<`, `<=`, `>` and `>=` are used to compare pointers of same type or between a NULL pointer and another pointer(possibly non-null).


### Pointer to Pointer

> A pointer to pointer is basically a variable that stores the address of another pointer provided that that pointer belongs to the same type as this pointer to pointer.


## Pointers and arrays

**The name of an array is a _constant_ pointer and it will always point to the $0^{th}$ element of the array.**

## Pointer to arrays

> This pointer can point one whole array.

_Syntax:_

```
datatype (*pointerName)[size];
```

**Example:**

```c
int (*ptr)[10];
```

The snippet above declares a pointer to an array of integer type that can store 10 integers!!

**Note:** _Subscripts have higher precedence than the indirection operator._

Here is a [program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t1.c) that illustrates the working of pointer to array.

**Output:**

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t1Output.png" width="50%" height="50%">

THe address of the array and the $0^{th}$ element of the array are same. This [program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t2.c) shows the addresses of the array and the $0^{th}$ element of the array.

**Output:**

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t2Output.png" width="50%" height="50%">

## Pointers and 2-D arrays

```c
int arr[3][4];
```

This above declaration basically declares a 2-d array.

`arr[3][4];` means that there are 3 1-d arrays and each 1-d array has 4 elements.

**In simple words, a 2-d array is an array of 1-d arrays.**

NOw, `arr` is the name of the 2-D array.

Now, `arr` is an array of 3 1-D arrays or simply 3 arrays.

We know that the name of the array is a constant pointer to the $0^{th}$ element of the array.

So the same thing happens with 2-D arrays, the name `arr` is a constant pointer to the $0{th}$ element which in this case is the $0^{th}$ 1-D array.

Here is an image showing the representation of 2-D array two dimensionally:

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/2DMatrixRepresentation.png" width="50%" height="50%">

Here is the image showing the representation of 2-D array as an array of arrays:

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/2DMatrixRepresentation2.png" width="50%" height="50%">

From the linear representation of the 2D matrix `arr` it is clear that the $0^{th}$ element is the $0^{th}$ 1D array.


## Subscripting pointer to array

[t3.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t3.c) shows how a pointer to array works with 2D array.

**Output:**

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t3Output.png" width="50%" height="50%">

# Pointers and functions

**Arguments can be passed to functions in two ways:

1. _Call by value._
2. _Call by reference._

**In call by value, only the values of arguments are sent to the function.**

**In call by reference, addresses of the arguments are sent to the function.**

_C doesnot have **call by reference**, but we can simulate it by passing addresses of variables as arguments to the function._

[This program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t4.c) shows how to simulate **call by reference** using pointers in C.


**Output:**

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t4Output.png" width="50%" height="50%">

## Returning more than one value from a function

Obviously, we can return only a single value from a function by using the `return` statement. But if we wish to return more than one values from a function then we must use pointers instead of `return` statement.

This [program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t5.c) shows how we can return more than one values from a function without using the return statement.

**Output:**

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t5Output.png" width="50%" height="50%">

---
