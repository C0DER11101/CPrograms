# typedef

> The type definition facility allows us to define a new name for an existing data type.

**Syntax:**
```c
typedef dataType newName;
```
Where `dataType` is any valid data type(like `int`, `float`, etc..) and `newName` is any valid user-defined identifier.

`typedef` can thought of as an alias.

Example, here we are defining a new name for `int`:

```c
typedef int marks;

marks sub1, sub2;
```

Here we created an "alias" for `int` which is `marks`. Now, when we will use `marks` before any identifier then it will be of type `int`.


**We can give more than one name to a single data type using only one** `typedef` **statement.**

Example:
```c
typedef int age, marks, units;
```
Here we have defined 3 names for the data type `int`.

Program:
[t23.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t23.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212790361-f572f97b-8961-497e-ae5f-4adfed9e2e1a.png" width="60%" height="60%">

`typedef` _is considered as a storage class so we can't include a storage class in_ `typedef` _statement._

The following statements are invalid:

```c
typedef static char schar;
typedef extern int marks;
```

# Defining new names for pointers, arrays, functions and structures.

## _1._ Defining new names for pointers.

```c
typedef float* fptr;
```

Now, `fptr` is a synonym for `float*`.

```c
fptr p, q, *r;
```

Here, `p` and `q` are pointers to float and `r` is a pointer to pointer to float.

Program:
[t24.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t24.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212810201-47d4084f-e0e5-4ad7-80f8-ed884e40ca84.png" width="60%" height="60%">

**Remember:** _With_ `typedef` _we only create alias, we donot change the way a variable works._

Like in program `t24.c`, we only created a name for `float*` and declared some pointers, but we didn't change the way of their working i.e. if you want to access the value stored in `p`, then you will have to dereference it like this: `*p`. `fptr p, q, *r;` may look like we have declared two float variables and one pointer, but keep in mind that `fptr` is an alias for `float*` not for `float`, so here we have actually created two float pointers and one pointer to pointer to float.

## _2._ Defining new names for arrays.
```c
typedef int intarr[10];
```
Here, `intarr` means integer array consisting of 10 elements. `intarr[10]` is not the alias of `int`. `intarr` is an alias of `int` here. The `[10]` just represents that if I write `intarr` before any variable it will mean that I have created an integer array of 10 integers.

**Example:**
```c
intarr a;
```

It's equivalent to writing:
```c
int a[10];
```

We can also declare 2D arrays:
```c
intarr c[3];
```
This is equivalent to writing:
```c
int c[3][10];
```

Program:
[t25.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t25.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212813267-1e078963-4d70-4581-9645-e2cb5f93dfb2.png" width="60%" height="60%">

## _3._ Defining new names for functions.
```c
typedef float funct(float, int);
```
Here, `funct` is a function that takes two values: one `float` and one `int` and returns a `float` value.

Program:
[t26.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t26.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212821515-69127227-07ea-4614-956a-7e3ca0d77600.png" width="60%" height="60%">

The statement:
```c
func add, sub, divd;
```
in `t26.c` is equivalent to writing:
```c
int add(int, int);
int sub(int, int);
int divd(int, int);
```

Just like we created an alias for `int` to create arrays of 10 integers by writing this statement:
```c
typedef int intarr[10];
```

Similarly, we created an alias for `int`, but this time, to create functions returning integers and taking two arguments of integer types by writing this statement:
```c
typedef int func(int, int);
```

## _4._ Defining new names for structures.
```c
struct Student
{
	char name[30];
	size_t rollno;
	size_t age;
};
```
Now, if you want to declare variables for this structure then you will have to write this statement:
```c
struct student stu1, stu2;
```
which is pretty long. But with `typedef` you can make it shorter.

We can use `typedef` to define a new name for `struct student` like this:
```c
typedef struct student student;
```

So now, `student` is the new name for `struct student`. So now, if you want to declare variables of `struct student` then you won't have to write that long statement, instead you can write this comparatively short statement:
```c
student stu1, stu2;
```
This statement is equivalent to writing: `struct student stu1, stu2;`.

`typedef` can also be used with structure declarations like below:

```c
typedef struct tagname
{
	datatype member1;
	...............
	...............
}newname;
```

Here, `newname` is not a structure variable but an alias name for `struct tagname`.

Now, if you want to declare variables of type `struct tagname` then you won't have to write:
```c
struct tagname t1, t2;
```
Instead you can write:
```c
newname t1, t2;
```
Since `newname` is the alias for `struct tagname`.

Program:
[t27.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t27.c) illustrates what I just said.

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212826023-d39007fa-c9ec-4e60-a192-bcfff9125914.png" width="60%" height="60%">


`typedef` **WITH STRUCTURES WITH NO TAGNAMES**
```c
typedef struct
{
	char name[30];
	size_t age;
}person;
```
Here `person` is a new name for the above nameless structure. Using this new name we can declare structure variables of this structure.

Program[t28.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/tests/t28.c) explains everything.

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212828103-069b17dd-3f8c-4a3b-957b-72d1425312a9.png" width="60%" height="60%">

If you look at [this](https://github.com/C0DER11101/CPrograms/blob/CProgramming/StructAndUnion/Basic.md#1-with-structure-declaration) topic, I said we cannot declare any new variables of a structure with no tagname because to declare structure variables we need the structure tagname. **But this is not the case when you are using** `typedef` **with that structure. With** `typedef` **you can name a nameless structure, like I did in** `t28.c` **and create structure variables for that nameless structure as well.**


---
