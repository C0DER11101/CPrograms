# Standard sizes of data types


| Data types with type qualifiers|Size(bytes)|Range|
|:------------------------------:|:---------:|:---:|
|signed char|1|-128 to 127|
|unsigned char|1|0 to 255|
|int or signed int|2|-32768 to 32767|
|unsigned int|2|0 to 65535|
|short int or signed short int|1|-128 to 127|
|unsigned short int|1|0 to 255|
|long int or signed long int|4|-2147483648 to 2147483647|
|unsigned long int|4|0 to 4294967296|
|float|4|3.4E-38 to 3.4E+38|
|double|8|1.7E-308 to 1.7E+308|
|long double|10|3.4E-4932 to 1.1E+4932|

_size and range of different data types are machine and compiler dependent._

Program:
[t1.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Basics/tests/t1.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212971636-2bad9f16-ee67-4502-9203-a1d8c5180d30.png" width="60%" height="60%">


Program:
[t2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Basics/tests/t2.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/213092228-b236066d-97bb-4818-822c-7008fc8a4c03.png" width="60%" height="60%">

Here, I have used `int` or `signed int`. Here the size of `int` as shown by my program is 4 bytes(32 bits).

Since I have `int`, the range of values will be from:

-2147483648 to 2147283647

**Note:**

$2^{32} = 4294967296$

$4294967296/2 = 2147483648$

In `t2.c`, `a` can take positive values upto 2147483647. So, I stored the value `2147483648`in `a` and the output was `-2147483648`.

Again, when I enterd `2147483649`, the output was: `-2147483647`. Then when I entered 2147483650 in `a` the output was `-2147483646`.

One thing that I noticed that when I continued entering values greater than `2147483648` in `a` then difference between that entered number and 2147483648 was getting added with `-2147483648`.

Example:
1) when
```c
a=2147483648;
```

Output:
```
-2147483648
```
$2147483648-2147483648+(-2147483648)=-2147483648$

2) when
```c
a=214783649;
```
Output:
```
-2147483647
```
$2147483649-2147483648+(-2147483648)=-2147483647$

3) Similarly when:
```c
a=4293771354
```
$4293771354-2147483648+(-2147483648)=−1195942$

Here are the images of calculation:

## Image-1
<img src="https://user-images.githubusercontent.com/96164229/213101476-50565ee4-2164-4040-85af-bb1d087812e6.png" width="100%" height="100%">

## Image-2
<img src="https://user-images.githubusercontent.com/96164229/213101504-bfcc6ab8-0798-4efc-b77f-148ff8616533.png" width="100%" height="100%">

## Image-3
<img src="https://user-images.githubusercontent.com/96164229/213101543-5302e843-8d6e-4ecb-9454-29302e5be527.png" width="100%" height="100%">

---
