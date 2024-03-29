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

_The size of one_ `char` _and one_ `int` _together is 5 bytes(1 byte occupied by_ `char` _and 4 bytes occupied by_ `int`), _but in my machine it's showing me 8 bytes. This output is machine dependent._

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

_This is the memory representation of_ `sample` _when its declaration is:_
```c
struct sample
{
	char ch;
	int num;
};
```

<img src="https://user-images.githubusercontent.com/96164229/212472938-46379903-ae41-4aaf-b47a-95f616decbaa.jpg" width="60%" height="60%">

# Array of structures

_Array of structures can be declared as:_
```c
struct structName StructureVariable[size];
```

**Example:**
```c
struct student stu[10];
```

_Here_ `stu` _is an array of 10 elements, each of which is a structure of type_ `struct student`.

Program:
[t5.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t5.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212474088-3674dd81-7e98-4e9e-a604-21b4f9bf9088.png" width="60%" height="60%">

```c
struct student
{
	char name[30];
	int rollno;
	float marks;
};
```
_The structure array can also be initialized like this:_
```c
struct student stuarr[3]={
	{"Mary", 12, 98.5},
	{"John", 11, 97},
	{"Tom", 12, 89.5}
		};
```

# Nested structures

```c
struct tag1
{
	member1;
	member2;
	.....
	struct tag2
	{
		member1;
		member2;
		......
		memberM;
	}var1;

	.....
	memberN;
}var2;
```

_For accessing_ `member1` _of structure_ `tag2`, _we write:_

```c
var2.var1.member1;
```

_If we break down this statement:_

`var2` _is the structure variable of structure_ `tag1`, _structure_ `tag2` _is a member of_ `tag1`. _So, to access any member of_ `tag1`, _we will need to use_ `var2` _and the dot(.) operator to access members of_ `tag1`. _Since_ `tag2` _is a member of_ `tag1` _its variables are also members of_ `tag1`. _So_ `var1` _is also a member of_ `tag1`. _So, to access_ `var1` _we will have to write:_
```c
var2.var1;
```

_Also_ `tag2` _also has members, so to access a member, say_ `member1` _of_ `tag2`, _we write the above statement i.e_ `var2.var1.member1;`

Program:
[t6.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t6.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212485114-6a9e60d2-db47-4b64-aa78-bd7d58fcbf13.png" width="60%" height="60%">

_So, one thing is clear from the above program that, **you can declare variables of the structure nested inside of another structure in any function**_.


Program:
[t7.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t7.c).

**Warning:**

<img src="https://user-images.githubusercontent.com/96164229/212485679-73012a05-afa4-42b1-92ec-a7a060c7fbd9.png" width="60%" height="60%">

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212485689-3dfacd58-5de3-492f-b195-aac41eba3fd4.png" width="60%" height="60%">

_From_ `t7.c`, _the warning was shown because I didn't declare any variable of structure type_ `second`. _When you are declaring a nested structure then you must also declare a structure variable along with it like this:_

```c
struct first
{
	int value;
	struct second
	{
		int val;
	}var;
};
```
_If you don't declare_ `var` _then the compiler will throw that warning._

_The compiler throws warning even when you declare_ `var` _like this:_
```c
struct first
{
	int value;
	struct second
	{
		int val;
	};

	struct second var;
};
```

_Nested structure can also be declared as below:_
```c
struct date
{
	int day;
	int month;
	int year;
};

struct student
{
	char name[30];
	int rollno;
	float marks;
	struct data birthdate;
};
```
_Here the structure_ `date` _is nested within_ `student`. _This another way of declaring nested structures._

Program:
[t8.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t8.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212487108-dcefa9ac-0269-4c5c-a0ac-eef5ea21188c.png" width="60%" height="60%">

**An important note:**
_If you want to nest a structure within another in this above way, then the structure that is to be nested should be declared before the structure in which you are going to nest that structure._

Like in the above program, I wanted to nest the structure `second` inside the structure `first`, so I declared it before declaring `first` and after declaring `second` I declared `first` in which I put a variable of type `second`. Hence I created nested structures.

**Nesting of a structure within itself is INVALID.**

_You can also initialize nested structures at the time of declaration_.

Example:

```c
struct date
{
	int day;
	int month;
	int year;
};

struct teacher
{
	char name[20];
	int age;
	float salary;
	struct data birthdate, joindate;
};

struct teacher t1={"Sam", 34, 9000, {8, 12, 1970}, {1, 7, 1995}};
```

Program:
[t9.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t9.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212535219-71d147c5-16e2-472f-b2d9-cc5b80ec0034.png" width="60%" height="60%">

_This is quite easy to understand._

# Pointers to structures

_Pointers to structures point to the starting address of a structure variable._

**Declaration:**
```c
struct student
{
	char name[30];
	int rollno;
	double marks;
};

struct student stu, *ptr;
```

_We will make_ `ptr` _point to the structure variable of_ `struct student` _type._

```c
ptr=&stu;
```

_Here we are basically assigning the starting address of_ `stu` _to_ `ptr`.

## Two ways of accessing the members of a structure through structure pointer.

### First way - using the dot(.) operator

```c
(*ptr).name;
(*ptr).rollno;
(*ptr).marks;
```

_The parentheses around_ `ptr` _is mandatory because the precedence of_ `.` _(dot operator) is more than_ `*`_(dereference operator)._

### Second way - using the arrow(->) operator

```c
ptr->name;
ptr->rollno;
ptr->marks;
```

_We can also have pointers that point to individual members of a structure variable._

```c
int *p=&stu.rollno;
float *ftp=&stu.marks;
```

`&stu.rollno` _is same as_ `&(stu.rollno)` _because the precedence of dot operator is more than the precedence of address operator._


# Pointers within structures

```c
struct student
{
	char name[20];
	int *ptrmem;
};

struct student stu, *stuptr=&stu;
```

_If we want to access the value of_ `ptrmem` _through_ `stu` _then we will write:_
```c
*stu.ptrmem;
```

_Since the precedence of the dot operator is more than the dereference operator so the above statement is equivalent to:_
```c
*(stu.ptrmem);
```

_If we want to access the value of_ `ptrmem` _through_ `stuptr` _then we will write:_
```c
*((*stuptr).ptrmem);
```

Program:
[t10.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t10.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212553046-26d5cba1-b308-4f46-ae27-7515ed0ca954.png" width="60%" height="60%">

_If we want to access the value of_ `ptrmem` _through_ `stuptr` _using the arrow operator, then we will write:_
```c
*stuptr->ptrmem;
```

_The precedence of the arrow operator is more than that of the dereference operator, so the above statement is equivalent to:_
```c
*(stuptr->ptrmem);
```


_We can also write this:_
```c
(*(*stuptr).ptrmem);
```

Program:
[t10_2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t10_2.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212553072-e5202e2b-6b61-4e3c-a5d1-821acae8e111.png" width="60%" height="60%">



---
