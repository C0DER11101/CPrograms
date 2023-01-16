# Union

_Union is a derived datatype like structures and it can also contain members of different data types._

**Syntax:**
```c
union union_name
{
	datatype member1;
	datatype member2;
	................
};
```

_**The main difference between** union **and** struct **is in the way memory is allocated for the members.**_

_Union variables can also be declared along with union declaration(like structure variables) or they can be declared separately._

_Each member in a structure has its own memory location._

_**Members of a union share the same memory location.**_

_When the a variable of type union is declared, then the compiler allocates sufficient memory to hold the largest member in the union._

**Since all the members share the same memory location, we can use only one member at a time.**

```c
union student
{
	char name[30];
	int age;
}stu;
```

_Here we have declared a union variable_ `stu` _along with the declaration of the union_ `student`.

```c
union student
{
	char name[30];
	int age;
};

union student stu1;
```

_Here, we have declared the union variable_ `stu` _separately!_

**Remember:** _In C, if you are declaring a structure and you want to declare a variable separately, then you need to write the keyword_ `struct` _along with the structure's name and then the variable's name._

_Example:_
```c
struct student
{
	char name[30];
	int age;
};

struct student stu1;
```
_If you write only_ `student stu1;` _then the compiler will throw an error. This type of structure variable declaration is allowed in C++ not in C._

Program:
[t17.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t17.c).

**Error:**

<img src="https://user-images.githubusercontent.com/96164229/212723743-36fd2766-a2d2-47bc-b616-1eec418f85f1.png" width="60%" height="60%">

_Similarly:_
```c
union student
{
	char name[30];
	int age;
};

union student stu1;
```

_If you write only_ `student stu1;` _then the compiler will throw an error._

Program:
[t18.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t18.c).

**Error:**

<img src="https://user-images.githubusercontent.com/96164229/212724025-a3a68592-5d6b-4775-b009-302e943c0501.png" width="60%" height="60%">



---
