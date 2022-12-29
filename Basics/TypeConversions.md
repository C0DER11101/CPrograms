# Type conversions

_Type conversions are of two types:_

1. Implicit type conversions.
2. Explicit type conversions.


## 1. Implicit type conversions.

Types:

1. Automatic type conversions.
	* Automatic unary conversion.
	* Automatic binary conversion.
2. Type conversions in assignments.


**Implicit type conversions are done by the C compiler according to some predefined rules of C language.**


### 1. Automatic type conversions.

**Automatic unary conversion**

> All operands of type `char` and `short` are converted to `int` before any operation.


**Automatic binary conversion**

These are the rules for automatic binary conversion:

1. If one operand is `long double` then the other will be converted to `long double`, and the result will be `long double`.
2. If one operand is `double`, then the other will converted to `double` and the result will be `double`.
3. If one operand is `float`, the other will be converted to `float` and the result will be `float`.
4. If one operand is `unsigned long int`, then other will be converted to `unsigned long int` and the result will be `unsigned long int`.
5. If one operand is `long int` and other is `unsigned int`.
	* if `long int` can represent all values of `unsigned int`, then `unsigned int` will be converted to `long int` and the result will be `long int`.
	* else both the operands will be converted to `unsigned long int` and the result will be `unsigned long int`.
	* Otherwise if one operand is `long int` then the other will be converted to `long int` and the result will be `long int`.
	* Otherwise if one operand is `unsigned int`, then the other will be converted to `unsigned int` and the result will be `unsigned int`.
	* Otherwise both operands will be `int` and the result will be `int`.

### Type conversion in assignment

**If the types of two operands in an assignment expression are different, then _the type of the right hand side operand_ is converted to the _type of the left hand side operand_.**


Ranking of types:


|Ranking of types|
|:--------------:|
|long double(highest rank)|
|$\uparrow$|
|double|
|$\uparrow$|
|float|
|$\uparrow$|
|long int|
|$\uparrow$|
|int|
|$\uparrow$|
|char, short int(lowest rank)|


**Notes:**

1. When `double` type is converted to `float` type, digits are rounded off.
2. When a `signed` type is changed to `unsigned` type, the isgn may be dropped.
3. When `int` type is converted to `float`, or `float` type to `double` there will be no increase in accuracy or precision.
4. Some high order bits may be dropped when `long` is converted to `int`, or `int` is converted to `short int` or `char`.


## 2. Explicit type conversion or type casting

The cast operator is a unary operator that is used for converting an expression to particular data type temporarily.


Example:

```c

int x=5, y=2;

float p;

p=(float)x/y;

printf("p=%f\n", p);
```

Here `(float)x/y` actually typecasts only `x` to `float` type not the whole expression `x/y`. So the result will be a `float` and will be stored in `p`.

This is explicit type conversion.

---
