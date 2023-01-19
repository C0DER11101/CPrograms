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

**If the size of a bit field is** `n` **, then the range of values that the bit field can take is from** $0 to 2^{n-1}$.














---
