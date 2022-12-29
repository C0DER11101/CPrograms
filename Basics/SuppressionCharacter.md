# The suppression character

An `*` between the `%` and the conversion specifier makes a suppression character. We use it if we want to skip any input field.

**There's something very important down here :point_down:**


The image below shows the snippet of a program:

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Basics/tests/ErrorProgram.png" width="50%" height="50%">

Here, when it is compiled I get the following warning:

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Basics/tests/ErrorProgramWarning.png" width="50%" height="50%">

And here is the output of this program:

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Basics/tests/ErrorProgramOutput.png" width="50%" height="50%">

So, from the above images one thing is clear that we don't need a third variable to store the ignored input.

Example:

```c

int a, b, c;

scanf("%d%*d%d", &a, &b, &c);
```

This will simply through a warning saying that there are too many parameters in `scanf()` because the second input is going to get ignored so it won't be stored in any variable so we don't need a variable for `%*d`.

If we give it an input `12 13 14` then `12` will be stored in `a` `13` will be ignored and won't be stored in any variale, `14` will be stored in `b` and `c` will store a garbage value(which was there at the time of its declaration).

So the above snippet of code can be written as:

```c

int a, b, c;

scanf("%d%*d%d", &a, &b);
```

Now, if we give the input as `12 13 14` then `12` will be stored in `a`, `13` will be ignored and won't be stored in any variable and `14` will stored in b.


**Now, here is the corrected program's code snippet**

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Basics/tests/CorrectedProgram.png" width="50%" height="50%">

This is the output(there are no errors):

<img src="https://github.com/C0DER11101/CPrograms/blob/CProgramming/Basics/tests/CorrectedProgramOutput.png" width="50%" height="50%">

The program below shows that suppression character can be used with character formats as well:

[suppressionChar2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Basics/tests/suppressionChar2.c)

---
