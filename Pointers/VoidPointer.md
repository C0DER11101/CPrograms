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


## Important note here.
*Typecasting a void pointer before assigning it another pointer type is optional because of the following reason:*

**A pointer to** `void` **may be converted to or from a pointer to any object type. A pointer any object type may be converted to a pointer to** `void` **and back again.**

[Source](https://stackoverflow.com/questions/61264207/is-it-necessary-to-typecast-the-void-pointer-before-assigning-it-to-another-poin).

Program: [t16.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t16.c) and [t16_b.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t16_b.c).

**Output of** `t16.c`:

<img src="https://user-images.githubusercontent.com/96164229/220125278-bd7eb5a5-aeb6-4273-817b-678af790c534.png" width="60%" height="60%">

**Output of** `t16_b.c`:

<img src="https://user-images.githubusercontent.com/96164229/220125316-639101df-4ea8-443c-b1fb-c4104ecd5cdf.png" width="60%" height="60%">

## A case quite similar to [Important note](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/VoidPointer.md#important-note-here) but yet different!
*While assigning the address of a void pointer to another pointer type, we need to typecast its address to the type of the pointer to which we are assigning the address.*


Programs: [t17.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t17.c) and [t17Counter.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Pointers/tests/t17Counter.c).

In `t17.c`, we didn't typecast `vptr`'s address before assigning it to the pointer to pointer to int `ptr`. And so we got the following warning:

**Warning:**

<img src="https://user-images.githubusercontent.com/96164229/220148955-203e3db8-6ec2-424e-8fda-d62e64350695.png" width="60%" height="60%">

But it generates the correct output:

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/220148978-501119a5-8826-4eb6-a520-510813fa9408.png" width="60%" height="60%">

In `t17Counter.c`, there is no warning and it generates the following output:

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/220148995-d6101513-11f7-46c8-b753-2fd5d4ff2301.png" width="60%" height="60%">


---
