# Structures and functions

## 1. Passing structure members as arguments

Program:
[t11.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t11.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212591911-5412f2ed-de95-42f4-a5d4-89c056d65526.png" width="60%" height="60%">.

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

---
