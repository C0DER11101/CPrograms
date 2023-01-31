# Block read/write

Each block has some fixed size, it may be a structure or an array.

For block read/write, the file is usually opened in binary mode.

### 1. fwrite()
**Declaration:**
```c
size_t fwrite(const void* ptr, size_t size, size_t n, FILE* fptr);
```

* `ptr` $\rightarrow$ points to the block of memory that contains the information to be written to the file.
* `size` $\rightarrow$ length of an item in bytes.
* `n` $\rightarrow$ number of items to be written to the file.
* `fptr` $\rightarrow$ file pointer which points to the file to which the data is written.


>If successful, `fwrite()` will write `n` items i.e. `n*size` bytes to the file and will return `n`.

>On error or end of file, it will return a number less than `n`.

Program to write a single variable into a file:
[t8fw.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/t8fw.c).

**Program Output:**

<img src="https://user-images.githubusercontent.com/96164229/215560782-00f40495-320e-4baf-a105-63722795d77e.png" width="60%" height="60%">

**Text file:**

<img src="https://user-images.githubusercontent.com/96164229/215561292-7f8713ae-4b86-4857-a29b-57b1fffb99b9.png" width="60%" height="60%">

**First argument:** The variable to be written is `number` so we send the its address as argument as `fwrite` has a pointer as its first argument.

**Second argument**: We send the the size of the variable(which is of type `int`) by sending the size of `int`.

**Third argument**: In this case we are writing only one variable so the number of items to be written is 1.

**Fourth argument**: File pointer.


Program to write an array into a file:
[t8fw_2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/t8fw_2.c).

**Program Output:**

<img src="https://user-images.githubusercontent.com/96164229/215562885-becf2b63-94b9-44f1-8fef-ebef1b418a7d.png" width="60%" height="60%">

**Text file:**

<img src="https://user-images.githubusercontent.com/96164229/215562930-fe959020-eb7b-4536-9af3-a0c44927ce7b.png" width="60%" height="60%">

Here we are dealing with block viz array.

**First argument**: We send the array name(array name stores the address of the $0^{th}$ element).

**Second argument**: We are sending the size of the block(array) in bytes.

**Third argument**: Since we have to write only one block(array) into the file, that's why we are sending number of blocks(arrays in this case) as 1(1 whole array will be written).

**Fourth argument**: File pointer.


Program to write only 5 elements of an array into a file:
[t8fw_3.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/FileSystems/tests/t8fw_3.c).

**Program Output:**

<img src="https://user-images.githubusercontent.com/96164229/215638851-b6495ac2-6091-45ff-802d-a91220b00093.png" width="60%" height="60%">

**Text file:**

<img src="https://user-images.githubusercontent.com/96164229/215638885-c6b86ff8-dca4-4c84-a9dd-f4ab091a160e.png" width="60%" height="60%">

**First argument**: The address of $0^{th}$ element of the array is sent.

**Second argument**: Size of `int` in bytes(not size of `arr`) is sent because now we are writing 5 integers into the file and not one whole array.

**Third argument**: Since now we are writing 5 individual integers that's why we are providing the number of elements to be 5.

**Fourth argument**: File pointer.




---
