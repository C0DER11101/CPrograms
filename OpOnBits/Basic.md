# Operations on bits

## WELCOME TO BITWISE OPERATORS.

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

Consider the following 32-bit binary number:
```
00000000000000010010010101001111
```
Here, the rightmost bit ( $0^{th}$ ) is the least significant bit(low-order bit), while the leftmost bit ( $31^{st}$ ) bit is the most significant bit(high-order bit).

_To enter and display values in hexadecimal, we use_ `%x`.

Program:
[t1.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t1.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212870128-fff2deae-5125-4e5b-a621-bab748922cdf.png" width="60%" height="60%">

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
|:--------------:|:--------------:|:-----------:|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|0|

### d) Bitwise complement(~)

|Bit of operand|Resulting bit|
|:------------:|:-----------:|
|0|1|
|1|0|


_When the bitwise operators_ `&`, `|` _and_ `^` _operate on two operands of different sizes, the size of smaller operand is increased to match the size of larger operand. For example: if there are two operands of sizes 16 and 32 bits, then the 16-bit operand will be converted to 32-bit operand. The extra bits are added to the left of the smaller operand._


**_If the smaller operand is_ `unsigned` _then all these extra bits are filled with zeroes, and if it is_ `signed` _then these extra bits are filled with the sign bit._**

[This](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t2.c) is a program that displays the 32-bit binary equivalent of a hexadecimal number.

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212882478-5a9dd661-48e7-41ab-a948-130a899deb4c.png" width="60%" height="60%">

Here is a [program](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t3.c) that performs all the bitwise operations on two hexadecimal numbers.

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212910008-caee0801-3027-42bc-941b-cad0d4df9d07.png" width="60%" height="60%">

_When the complement operator is applied to an operand twice, the result is the original operand i.e._ `~(~a)` is equal to `a`.

**This feature of the complement operator can be used for encrypting and decrypting data.**

Program:
[t4.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t4.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212915871-39b846e8-b921-465f-bd5c-5fc784668c05.png" width="60%" height="60%">

_The order of precedence of these operators from highest to lowest is:_

1. Bitwise complement(~)
2. Bitwise AND(&)
3. Bitwise XOR(^)
4. Bitwise OR(|)

_The biwise complement associates from right to left and other three associate from left to right._

**_The operators_** `==` **_and_** `!=` **_have higher precedence than the three binary bitwise operators._**

## Shift operators
### 1. Bitwise left shift operator(<<)
_This operator is used for shifting the bits towards left. It requires two operands: **the left operand is the operand whose bits are shifted and the right operand indicates the number of bits to be shifted by**. On shifting the bits towards left, an equal number of bit positions on the right are vacated. These positions are filled with 0 bits._

Program:
[t5.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t5.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212968768-e570aaa2-4db9-4a42-a0f7-de6579783a41.png" width="60%" height="60%">

Notice in the output that the first 4 bits from the left i.e. `1101` are gone and extra `0000` have been added to the right of the binary equivalent after shifting the number towards the left by 4 bits.

### 2. Bitwise right shift operator(>>)
This operator shifts the bits to the right side. On shifting the bits to the right side, an equal number of bit positions on the left are vacated. These vacant positions are filled in with 0 bits in unsigned integers.

Program:
[t6.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t6.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213142839-6d107684-779a-4a2d-8eb8-8e1d7cc0388c.png" width="60%" height="60%">

Here, the bits `0111` from the right end are gone after shifting the number towards the right by 4 bits and `0000` were added to the left end of the result.

In right shift, if the first operand is a signed integer, some machines perform logical shift while others perform arithmetic shift.

_In logical shift, the vacated bit positions are always filled with zeroes while in arithmetic shift, vacated bit positions are filled with sign bit._

_Sign bit is the leftmost bit(high-order bit) and is 1 for negative integers and 0 for positive integers._

_If the left operand is an unsigned integer or signed non-negative integer then the vacated positions are filled with zeroes. Otherwise the behaviour is undefined and the result is machine dependent._

**While using the left shift and right shift operators, the result is undefined if the right operand is negative or it is more than or equal to the number of bits used to represent the left operand.**

**The shift operators have equal precedence and have left to right associativity.**

## Multiplication and division by 2 using shift operators.

**The effect of shifting one bit towards the right is equivalent to integer division by 2.**

**The effect of shifting one bit towards the left is equivalent to integer multiplication by 2.**

**We can use the shift operators to multiply and divide integers by powers of 2.**

Program:
[t7.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t7.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213243803-141bbed7-1114-4cc6-ba20-0e302743803d.png" width="60%" height="60%">

```c
10<<1;
```
basically means in simple terms $10 \times 2^1$.

```c
10>>1;
```
in simple terms, means $10/2^1$

So, so the number on the right side of the shift operators indicates the power to which 2 is being raised.

But, if you notice the last output i.e. of the expression `a<<8`, the output was supposed to be `5905580032`. But we got `1610612736`.

The reason why we got this output is given below.

Before we shifted `a` to the left by 8 bits, the value of `a` in binary was: `00000001 01100000 00000000 00000000`.

Now, when we shifted `a` by 8 bits towards the left in `a<<8` the leftmost 8 bits were dropped which contained `1`. So, now our binary equivalent became: `01100000 00000000 00000000 00000000` which has a decimal equivalent `1610612736` which is unexpected.

So, one thing is clear from the last output that **in case of left shift, if a bit with value 1 is shifted and lost, then the effect of multiplication by powers by 2 is not seen.**





---
