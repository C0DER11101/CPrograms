# Void pointers
*If we have a pointer to* `int` *then it would be incorrect to assign the address of a* `float` *variable to it.*

Program-1: [t14.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t14.c).

**Warning:**

<img src="https://user-images.githubusercontent.com/96164229/219962503-8e04ec14-a684-4eec-9d5c-b0afdc35abc6.png" width="60%" height="60%">

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/219962508-48574747-af79-4616-a43b-87620af07371.png" width="60%" height="60%">

Program-2: [t14_b.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t14_b.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/219963346-9c86b396-836b-4fbb-bcd2-9c90c80348f0.png" width="60%" height="60%">

These mixed conversions can be performed using explicit casts but it leads to undefined behaviour. However, a `void` pointer is an exception to this.

**A pointer to a `void` is a generic pointer that can point to any data type.**

_We can assign address of any data type to a_ `void` _pointer an a_ `void` _pointer can be assigned to a pointer of any data type without any explicit casts._


**Syntax for declaration of a** `void` **pointer:**

```c
void *vptr;
```

A void pointer can't be dereferenced simply by using indirection operator. Before dereferencing, it should be typecast to appropriate pointer data type.

Example:
```c
void *vptr;

int a=10;

vptr=&a;

printf("a = %d\n", *(int*)vptr);
```

Here writing `(int*)*vptr` will throw an error. Because we know that the typecast operator and the indirection operator both have the same precedence level and both have an associativity of *right to left*. If we try to dereference like that then the evaluation will occur from the right and first `vptr` will be dereferenced but `vptr` is still a pointer to `void` right now and dereferencing a `void` pointer is an error, so it will throw an error. So, first we have to typecast it to a pointer to an integer, then only we can dereference it.


Program: [t15.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t15.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/219963903-9c0fdcff-8795-4ea8-9864-19435ae3bbe7.png" width="60%" height="60%">

Even when we want to perform pointer arithmetic on `void` pointers, we will first need to typecast that void pointer to the appropriate type and after that only we can perform arithmetic operations on it.


---
