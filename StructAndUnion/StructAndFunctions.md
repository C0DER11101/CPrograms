# Structures and functions

## 1. Passing structure members as arguments

Program:
[t11.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t11.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212591911-5412f2ed-de95-42f4-a5d4-89c056d65526.png" width="60%" height="60%">

_We can pass individual structure members as arguments to functions like any other ordinary variable._


## 2. Passing structure variable as argument

_If our structure has too many members then, passing structure members becomes difficult. Instead, we can just pass the structure variable as argument to a function._

Program:
[t12.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t12.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212607128-73032511-26cb-4862-97ac-b455d1324cc3.png" width="60%" height="60%">

_From t12.c, one thing is clear that changes made to the structure variable in the called function(which, in this case, was_ `Display()`) _doesnot reflect in the calling function(the called function was the_ `main()` _function in this case). This pass by value._

**The name of the structure variable is not a pointer.**

## 3. Passing pointers to structures as arguments

_If the size of the structure is very large, then passing the whole structure may prove to be inefficient, so instead we can send the address of that structure as argument._

Program:
[t13.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t13.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212626754-743c6c01-0e81-430a-a51b-863fcf08956c.png" width="60%" height="60%">

_So, since we are working with pointers to structures here, changes made to the structure variable in the called function_(`Display()`) _will be reflected on the calling function_(`main()`).

## 4. Returning a structure variable from function
_Structure variables can be returned from functions as any other ordinary variable._

Program:
[t14.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t14.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212665604-7d8ae6d6-7b7c-4fd7-88db-5cc8228a2974.png" width="60%" height="60%">

## 5. Returning a pointer to structure from a function

Program:
[t15.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t15.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212682078-4df9bb63-4e74-44ac-addf-a8e0062a6990.png" width="60%" height="60%">

## 6. Passing array of structures as argument
Program:
[t16.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t16.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212684736-b4f62186-65af-4c54-be83-e42d065a0d18.png" width="60%" height="60%">

_Working with array of structures is exactly same as working with array of integers._




---
