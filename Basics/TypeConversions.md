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
