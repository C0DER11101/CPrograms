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

---
