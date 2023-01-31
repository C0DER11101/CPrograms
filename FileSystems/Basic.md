# Files

**High level file handling is managed by library functions while low level file handling is managed by system calls.**


_Streams are channels through which data can flow from program to environment and from environment to program._

**Text stream is a stream of characters and binary stream is a stream of unprocessed bytes.**



**_A text stream is a sequence of characters, arranged in lines where each line consists of zero or more characters and is terminated by a newline character._**

**_In binary streams data is represented as it is coded internally in the computer's main memory, without any modifications._**


`Unix system doesnot make any difference between text files and binary files.`


**The character with ASCII value 26 is considered to be the end-of-file characters in text files.**

_All input functions stop reading from a text file when this character is encountered and return an end-of-file signal to the program and return an end-of-file signal to the program._


`C doesnot insert the end-of-file character in the file, it can be entered through keyboard by pressing CTRL+Z(or CTRL+D on some systems).`

_In binary files, no character represents the end-of-file._


## Buffer

_Buffer is an area in memory where the data is temporarily stored before being written to the file._

When we open a file, a buffer is automatically associated with its file pointer.

**Whatever data we send to the file is not directly written to the file. First it is sent to the buffer and when the buffer is full, its contents are written to the file. When the file is closed all the contents of the buffer are automatically written to the file even if the buffer is not full. This is called _flushing the buffer_.**

There can be **three** types of buffering:
1. Fully buffered.
2. Line buffered.
3. Unbuffered.

* In _fully buffered_ streams, the data is transferred only when the buffer is full.
* In _line buffered_ streams, the data is transferred either when the buffer is full or when a newline character is written to the buffer.
* In _unbuffered_ streams, the data is transferred as quickly as possible.
