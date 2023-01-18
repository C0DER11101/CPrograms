# Abour DisplayBits.c

_In this file I have defined a function named_ `DisplayBits(size_t);` _that takes only positive numbers._

In `t3.c` I sent an argument:
```c
DisplayBits(~a);
```

`DisplayBits()` takes an argument of type `size_t` which is same as `unsigned long int`.

The value of `a` was `0x123fa5`. `~a` gave `0xffedc05a`, this was sent as argument to `DisplayBits()`

If you store `0xffedc5a` in a `size_t` type variable then the value in it in decimal will be: `18446744073708355674` which has hexadecimal form as shown in the image below:

<img src="https://user-images.githubusercontent.com/96164229/213121651-cea3d3b5-f780-4307-bbeb-febda94a52b8.png" width="60%" height="60%">

If you look at the last 4 bytes of the binary equivalent you will notice that they are the same as the binary equivalent `0xffedc05a`.

These last 4 bytes in the image below

<img src="https://user-images.githubusercontent.com/96164229/213121780-b178c7c3-f7cf-4c31-85bb-a545aca065e9.png" width="60%" height="60%">

are the same as the binary equivalent of `0xffedc05a` as shown below:

<img src="https://user-images.githubusercontent.com/96164229/213122587-cf900bf4-356a-4e78-b314-e6bc6f683295.png" width="60%" height="60%">

---
