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



---
