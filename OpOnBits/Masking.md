# Masking

> Masking is an operation in which we can selectively mask or filter the bits of a variable, such that some bits are changed according to our needs while the others remain unchanged.

_Masking is performed with the help of bitwise operators._

## 1. Masking using bitwise AND

Before we proceed, let's say we want to create a mask. Look at the two statements below:

```c
x=0xFFFFFFF0;
x=~0xF;
```

Let's say each character of the mask represents 4 bits.

We have a 32-bit number whose last 4 bits have to be switched off. So we have created have a mask(two actually). The first mask is quite long, but the second mask is short. Both of them are the same.

**First mask:** _F in decimal is 15 which has 4 bit binary equivalent_ `1111`. _So our mask in the first assignment will look like this in binary form:_ `1111 1111 1111 1111 1111 1111 1111 0000` _which is a 32-bit binary._

**Second mask:** _If we were to represent F in 32-bit binary format, then this would have been the output:_ `0000 0000 0000 0000 0000 0000 0000 1111`. _So,_ `~0xF` _is the complement of_ `0xF`, _so all the bits that were 0s in_ `0xF` _will become 1s and all the bits that were 1s in_ `0xF` _will become 0s. So the 32-bit binary equivalent of_ `~0xF` _will be:_ `1111 1111 1111 1111 1111 1111 1111 0000`. _So the second form of mask is more appropriate and portable._

Program:
[t8.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t8.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213372497-2c5811f7-02bf-4f04-9613-d6f92306ccb9.png" width="60%" height="60%">


Masking with bitwise AND in action: [t9.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t9.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213380533-f70c9398-d8d2-4f3d-901a-cb15cafa9c49.png" width="60%" height="60%">

We can also use `if..else`, `conditional operator` or `shift operator` to retrieve bit value.

Consider [this](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t10.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213385145-35f249ab-d374-4183-adfc-4e6fe135456f.png" width="60%" height="60%">

Here I have taken `3`. We need to check if the $2^{nd}$ bit of 3's binary representation is on or off(a bit is on if it's 1, it's off if it's 0).

So, I have chosen the mask as `4` or `0x4` in hexadecimal. Binary representation of 4 in 32-bit binary is: `00000000 00000000 00000000 00000100`.

So, we need to choose a mask in such a way that the bit which we want to check(whether it's on or off) that bit should be on in the mask(in case of bitwise AND) and other bits should be off.

When you will perform the bitwise AND operation then if that required bit is not set(off) then your result will be 0(decimal).

## 2. Masking with bitwise OR

Program: [t11.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t11.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213408828-2d1b95fa-3f28-4fcd-a8fe-dacf86ed2e96.png" width="60%" height="60%">

We can use the bitwise OR operator to set a particular bit or bits.

**The mask is chosen in such a way that the bits to be set should be 1 and rest of the bits should be 0(look at the program t11.c).**

## 3. Masking with bitwise XOR

Program:
[t12.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t12.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213426268-0e2e9d5e-9c00-467c-9f3f-d015e6b78528.png" width="60%" height="60%">

Whenever there is a 1 in the mask the corresponding bit value is inverted while the new bit value remains unchanged when there is a 0 in the mask.

So, we if we want to complement some particular bits in a number, we can use bitwise XOR operator.

The mask should be chosen in such a way that the bits to be complemented should be 1, rest of the bits should be 0.


Suppose there is a number whose $5^{th}$ bit is to be complemented, then the $5^{th}$ bit of the mask should be 1 and the rest of the bits should be 0.


**When an operand is XORed with a value twice, result is same as the original operand.**

Program:
[t13.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t13.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213452475-e3c89feb-514d-43a4-ad53-0bc8ff6ceb7f.png" width="60%" height="60%">

_Suppose there is a variable_ `x` _that stores a number whose_ $5^{th}$ _bit is to be worked upon using some bitwise operations._

Here are the various operations along with the bitwise operator used for each operation.

The mask for operations:
```c
mask=0x20;
```

1. Test the $5^{th}$ bit in variable x: -> `x & mask`.
2. Set the $5^{th}$ bit in variable x: -> `x | mask`.
3. Clear the $5^{th}$ bit in variable x: -> `x & ~mask`.
4. Invert the $5^{th}$ bit in variable x: -> `x ^ mask`.

**We can calculate the mask for a particular bit position by left shifting integer 1 by position of bit.**

Example:
Suppose we want to manipulate the $4^{th}$ bit of a number, then the mask will be:

```c
mask = 1<<4;
```

So, mask can be calculated as:

`mask = 1<<bitposition;`.

Program:
[t14.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t14.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213488325-50c45ff1-0703-4fa8-99ce-d3cc67c9a35b.png" width="60%" height="60%">


---
