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

---
