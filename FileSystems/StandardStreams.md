# Standard Streams

When the program starts executing, the operating system opens three standard text streams automatically and provides constant file pointers for them.


|File pointer|Stream|Buffering|
|:----------:|:----:|:-------:|
|`stdin`|Standard input|Line-buffered|
|`stdout`|Standard output|Line-buffered|
|`stderr`|Standard error|Unbuffered|

_The standard input is generally associated with keyboard while the standard output and standard error streams are associated with the screen._


#### Functions used in I/O

* **Character I/O** $\rightarrow$ **fgetc()**, **fputc()**, **getc()**, **putc()**
* **String I/O** $\rightarrow$ **fgets()**, **fputs()**
* **Formatted I/O** $\rightarrow$ **fscanf()**, **fprintf()A**
* **Record I/O** $\rightarrow$ **fread()**, **fwrite()**
