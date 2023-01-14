# Declaring a structure type

**General syntax:**

```c
struct tagname
{
	datatype member1;
	datatype member2;
	.....
	.....
	datatype memberN;
};
```

**Example:**
```c
struct student
{
	char name[20];
	int rollno;
	float marks;
};
```
_Declaration of a structure template does not reserve any space in memory for the members._

_**Space is reserved only when variables of this structure type are declared.**_

_The members of a structures are not variables, they don't have existence until they are attached with a structure variable._


# Declaring structure variables

**By declaring a structure we have only created a format. The actual use of structures will be when we declare variables based on this format.**

_We can declare structure variables in two ways:_

1. With structure declaration.
2. Using the structure tag.

## _1._ With structure declaration

```c
struct student
{
	char name[30];
	int rollno;
	float marks;
}stu1, stu2, stu3;
```

`stu1`, `stu2` and `stu3` are variables of type `struct student`.

If we want to declare structure variables like this, then we can _omit_ the **tagname**.

```c
struct
{
	char name[30];
	int rollno;
	float marks;
}stu1, stu2, stu3;
```

Program using structure without tagname:
[t1.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t1.c)

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212446124-1c3852a4-ab24-426e-a220-c3478e47ecaf.png" width="60%" height="60%">

_Now, if we declare structure like this(without a tagname), then we won't be able declare other variables of this structure type other than those that are declared along with its declaration i.e. we will have to work with only_ `stu1`, `stu2` _and_ `stu3`, _we won't be able to declare other variables because the structure doesn't have any tagname._

## _2._ Using structure tag

```c
struct student
{
	char name[30];
	int rollno;
	float marks;
};

struct student stu1, stu2, stu3;
```

Here, `stu1`, `stu2` and `stu3` are structure variables that are declared using the structure tag `student`.

**Declaring a structure variable reserves space in memory.**

_Each structure variable declared to be of type_ `struct student` _three members which are_ `name`, `rollno` and `marks`. _The compiler will reserve space for each variable sufficient to hold all the members._

# Initialization of structure variables

```c
struct student
{
	char name[20];
	int rollno;
	float marks;
}stu1={"Mary", 25, 98};

struct stu2={"John", 24, 67.5};
```

_Value of members of_ `stu1` _will be_ `"Mary"` _for_ `name`, `25` _for_ `rollno` _and_ `98` _for_ `marks`.

_Value of members of_ `stu2` _will be_ `"John"` _for_ `name`, `24` _for_ `rollno` _and_ `67.5` _for_ `marks`.

_If number of initializers is less than the number of members then the remaining members are initialized to zero._

_For example:_

```c
struct student stu1={"Mary"};
```

_Here, the members_ `rollno` _and_ `marks` _will be initialized to zero._

# Assignment of structure variables

_We can assign values of a structure variable to another structure variable, **if both variables are defined of the same structure type**._

Program:
[t2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t2.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212457248-0b18f1e4-dd59-46fb-88d9-798853c7a07b.png" width="60%" height="60%">

**Unary**, **relational**, **arithmetic**, **bitwise** operators are **not allowed** with structure variables.


# Storage allocation and size of structure

_We can find the size of a structure by using the_ `sizeof` _operator_.

_We can either use the structure variable name or the tagname with the_ `sizeof` _operator._

Program:
[t3.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t3.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212458626-2d8a1715-6c45-44e7-8288-3edcc6847157.png" width="60%" height="60%">

_The output of the program below was unexpected, I expected the output to be_ `5`.

Program:
[t4.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t4.c).

_But the output was this:_

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212461634-111f2ed6-1d6c-4bee-96cc-8d55f9359583.png" width="60%" height="60%">

_The size of one_ `char` _and one_ `int` _is 5 bytes(1 byte occupied by_ `char` _and 4 bytes occupied by_ `int`), _but in my machine it's showing me 8 bytes. This output is machine dependent._

_Since my output was 8 bytes, that means there is space of 3 bytes after the last member. Those 3 bytes are unused bytes. This is done to satisfy alignment requirements._

_If my structure was declared like this:_

```c
struct sample
{
	char ch;
	int num;
};
```

_Then the ouput would still be 8. In this case there would be 3 bytes gap between char and int._

_This is the memory representation of_ `sample` _when its declaration is:_
```c
struct sample
{
	int num;
	char ch;
};
```

<img src="https://user-images.githubusercontent.com/96164229/212471940-e426d349-ef3a-4d03-8a86-76d46cbf2654.jpg" width="60%" height="60%">


---
