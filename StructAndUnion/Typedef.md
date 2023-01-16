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
