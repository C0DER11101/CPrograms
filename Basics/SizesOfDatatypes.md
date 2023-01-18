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

$\frac{4294967296}{2} = 2147483648$





---
