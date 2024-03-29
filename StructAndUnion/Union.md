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

_When a variable of type union is declared, then the compiler allocates sufficient memory to hold the largest member in the union._

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

_The ways used for accessing the members of a union are same as those used for accessing the members of a structure. If we have a union variable then members can be accessed using the dot(_ `.` _) operator and if we have a pointer to union then the members can be accessed using the arrow(_ `->` _) operator._


In [this program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t19.c) we are trying initialize all the members of the union simultaneously.

This is the **warning** produced:

<img src="https://user-images.githubusercontent.com/96164229/212730561-8e0fae41-ff80-495b-8d85-42aaf19ac4c4.png" width="60%" height="60%">


[Here](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t20.c), we have initialized the members of the union one at a time.

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212731522-2b04a8d3-352e-41e1-af6c-06ba2782e275.png" width="60%" height="60%">

**Only one member of a union can hold value at a time, all members can't be used simultaneously as there is sharing of the same memory.**

_You also can't do what I did in [this](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t20_2.c) program. It would show you some unexpected value(except for the member that was initialized at the last)._

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212733580-8299db9f-e15b-49c3-b783-d950ea721f9d.png" width="60%" height="60%">

_Union variables can be initialized, but not like we did in [t19.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t19.c)._

_During initialization, only one member can be initialized in union and that one member is the first member of the union._

_So initialization of union is only done for the first member._

```c
union result
{
	int marks;
	char grade;
	float per;
};

union result res={78};
```
_We can only initialize_ `marks` _here._

Program [t21.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t21.c) explains it better.

_This was the union declaration:_
```c
union result
{
	double marks;
	char grade;
	float per;
};
```

**output:**

<img src="https://user-images.githubusercontent.com/96164229/212737184-d1f0192d-d866-4123-a45f-ff5c3e9e218e.png" width="60%" height="60%">

_Here I tried to initialize_ `grade` _but_ `marks` _got initialized._

[This program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t22.c) _compares the amount of memory occupied by a structure and a union and also the addresses of their members._

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212740919-a1679d43-17bb-4fd1-b139-291aa0456979.png" width="60%" height="60%">

_If you observe then you will see that the address of the union variable_ `u` _and the members of the union_ `utag` _are the same. Whereas in case of the structure_ `stag` _only the first member has the same address as that of the structure variable_ `s` _but others have different addresses._

**Unions save a lot of memory.**

_We can have a structure nested in a union or vice versa._


# Features of union

1. Arrays of unions can be declared.
2. Functions take union variable as argument and return union variables.
3. Pointers to unions can be declared.
4. Unions can be nested.
5. Unions can be self referential like structures.

**We can declare an array of unions where each element of array can be used to hold values of different type.**


---
