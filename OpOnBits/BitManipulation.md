# About [t18.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/OpOnBits/tests/t18.c)

Beginning with the initialization statement:

```c
unsigned int permissions=0x19f;
```

This is the bit representation of `permissions`:

<img src="https://user-images.githubusercontent.com/96164229/213630420-9d893ae2-dc40-4f6d-9d83-58b87335d237.png" width="70%" height="70%">


Here's how the bits are assigned to each user(`owner`, `group` and `other`)(since unsigned int has a size of 32-bits). **Remember:** whatever value you enter into a variable of integer type, that value is stored in the form of bits:

<img src="https://user-images.githubusercontent.com/96164229/213636886-d2477ca9-3c07-4b17-83b7-fec745c6d61e.jpg" width="90%" height="90%">


Why did we consider the last four bits for the owner? Because the owner has all the permissions, he/she can read, write, access and execute a file, that's why we considered the last 4 bits for the owner.

From the image, it's clear that the owner has all the permissions, the group has permissions for reading and execution and others have only read permissions.

We changed the permissions for the group using the mask `W_GRP` as:
```c
permissions=permissions|W_GRP;
```

And this is the image after setting up the bit:

<img src="https://user-images.githubusercontent.com/96164229/213640019-299b7c7b-666f-4957-9b84-4a4e3f3b87be.jpg" width="90%" height="90%">





---
