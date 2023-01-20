# Bit Fields
> A bit field is a collection of adjacent bits. It is defined inside a structure but is different from other members because its size is specified in terms of bits.

**The data type of a bit field can be** `int`, `signed int` or `unsigned int`.

Syntax:

```c
struct tag
{
	unsigned a: 2;
	unsigned b: 5;
	unsigned c: 1;
	unsigned d: 3;
};
```

Structure `tag` has 4 bit fields: `a`, `b`, `c` and `d`. The numbers after the colons represent their sizes.

_The size of_ `a` _is 2 bits, size of_ `b` _is 5 bits, size of_ `c` _is 1 bit and the size of_ `d` _is 3 bits._

_The bit fields can be accessed like other members of structure using the dot operator._

Some valid expressions using bit fields:

```c
struct tag var;
var.a=2;
printf("%d", var.b);
x=var.a+var.b;

if(var.c==1)
	printf("Flag is on\n");
```

Program:
[t16.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t16.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213514718-d3f5ed2c-8ab1-494c-97be-a933a10ecc91.png" width="60%" height="60%">

**If the size of a bit field is** `n` **, then the range of values that the bit field can take is from** $0\ to\ 2^{n}-1$.


|Bit field|Size in bits|Range of values|
|:-------:|:----------:|:-------------:|
|`a`|2|$0\ to\ 2^2-1\ (0\ to\ 3)$|
|`b`|5|$0\ to\ 2^5-1\ (0\ to\ 31)$|
|`c`|1|$0\ to\ 2^1-1\ (0\ and\ 1)$|
|`d`|3|$0\ to\ 2^3-1\ (0\ to\ 7)$|

_It would be invalid to assign any value to a bitfield outside of its range._

Example:
```c
var.b=54; /* invalid */
```

Program:
[t17.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t17.c).

**Warning:**

<img src="https://user-images.githubusercontent.com/96164229/213518905-27245179-14a9-4e68-b1df-ddbfe38b75a8.png" width="60%" height="60%">


**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213518970-30602e15-4a09-4269-959a-2f94b8b1e4de.png" width="60%" height="60%">

So as you can see that value that is within the range of `a` got stored in `a` after I tried to store a number which was outside the range of `a`.

**We apply** `sizeof()` **and the address operator**(`&`) **to bit fields. That means we can't use** `scanf()` **with bit fields.**


_If we have a pointer to structure, then the arrow operator_( `->` ) _can be used to access the bit fields._


**If a bitfield is defined as signed int, then it should be atleas 2 bits long because on bit is used for sign.**

```c
struct tag
{
	unsigned a:10;
	unsigned b:7;
	unsigned c:17;
};
```

Here, the total size should be less or equal to 32-bits i.e. it should be withing the integer boundaries.

But in the above structure, it's not the case, if you look at the sizes in terms of bits for `a` is 10 and for `b` is 7. If we combine those two sizes then we get 17 bits in total. That means to be within the integer boundary we need additional 15 bits, but unfortunately we have got 17 bits(size of `c`) which is more than 15.

Some implementation may start the next field(`c`) from a new integer, while others may just place the next field in 17 adjacent bits(15 unused from the previous integer and 2 bits from the next integer).

Still to be on the safe side, we can define unnamed bitfields for controlling the alignment of bitfields within an integer.

```c
struct tag
{
	unsigned a:10;
	unsigned b:7;
	unsigned:15;
	unsigned c:17;
};
```
Here, the unnamed bit field fills out the 15 unused bits of the first integer, so the bitfield `c` starts with the second integer.
Since, the 15 bits don't have any name, they cannot be accessed from the program.

We can also take the size of the unnamed bitfield as zero. Then we don't have to provide any padding and the next bitfield will start with second integer.

```c
struct tag
{
	unsigned a:10;
	unsigned b:7;
	unsigned:0;
	unsigned c:17;
};
```

This time the bitfield `c` starts from the next integer.

_The file permissions example using bitfields:_

[t19.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t19.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213646381-12ebea08-e950-4073-8e61-47f6d6d3ac56.png" width="60%" height="60%">

Here, we don't have to define masks as we did [here](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t18.c). Here each member of the structure is 1 bit in size. If we want to change permissions for any member, we just have to assign a 0 or a 1 to that member, we don't need to performing masking!!




---
