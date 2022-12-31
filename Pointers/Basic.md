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
