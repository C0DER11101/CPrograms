# End of file

When end of file is reached, the operating system sends an end-of-file signal to the program. When the program receives this signal, the file reading functions return EOF, which is a constant defined in the header file `stdio.h` and its value is -1.

 The EOF in C/Linux is `^D` on your keyboard; that is, you hold down the control key and hit "d". The ascii value for EOF (CTRL-D) is 0x05.
