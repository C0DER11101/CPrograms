# Operations on bits

**WELCOME TO BITWISE OPERATORS.**

|Operator symbol|Operation|
|:-------------:|:-------:|
|`&`|Bitwise AND|
|`\|`|Bitwise OR|
|`^`|Bitwise exclusive OR|
|`~`|Bitwise NOT(One's complement)|
|`<<`|Bitwise left shift|
|`>>`| Bitwise right shift|

Here, all but the complement operator are binary.


_These operators work on data of integral types only i.e._ `char`, `int`, `long` _including both signed and unsigned types._

_Different implementations represent signed data in different ways, so it is better to use unsigned integer types while doing bit manipulation._

_In bit pattern, the numbering of bits starts from 0 and they are numbered from right to left._

_To enter and display values in hexadecimal, we use_ `%x`.

_All bitwise operators, except the complement operator, can be combined with the assignment operator to form the compound assignment operators:_

`&=     |=     <<=     >>=     ^=`

## 1. _Logical operators(&, \|, ^, ~)_

### a) Bitwise AND(&)

|Bit of operand 1|Bit of operand 2|Resulting bit|
|:--------------:|:--------------:|:-----------:|
|0|0|0|
|0|1|0|
|1|0|0|
|1|1|1|

### b) Bitwise OR(\|)

|Bit of operand 1|Bit of operand 2|Resulting bit|
|:--------------:|:--------------:|:-----------:|
|0|0|1|
|0|1|1|
|1|0|1|
|1|1|1|

### c) Bitwise XOR(^)

|Bit of operand 1|Bit of operand 2|Resulting bit|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|0|

### d) Bitwise complement(~)

|Bit of operand|Resulting bit|
|0|1|
|1|0|


---
