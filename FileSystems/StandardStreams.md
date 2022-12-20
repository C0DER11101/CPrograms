# Standard Streams

When the program starts executing, the operating system opens three standard text streams automatically and provides constant file pointers for them.


|File pointer|Stream|Buffering|
|:----------:|:----:|:-------:|
|`stdin`|Standard input|Line-buffered|
|`stdout`|Standard output|Line-buffered|
|`stderr`|Standard error|Unbuffered|
