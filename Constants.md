# Constants

_A long constant is written with an `l` or `L` at the end. Example: 1234677L or 12345677l._

**An integer too big to fit into an `int` will be taken as a `long`.**

_Unsigned constants are written with an `u` or `U` at the end. Example:  12446u or 12446U._

_Unsigned long constants are written with an `ul` or `UL` at the end. Example:  12412UL or 123412ul._

_Floating point constants contain a decimal point(123.4) or an exponent (le-2) or both. Their type is double, unless suffixed._


_The suffixes `f` or `F` indicate a float constant. `L` or `l` indicate a long double._


**A leading 0 on an integer means an octal. A leading 0x or 0X means hexadecimal.**

**Octal and hexadecimal constants may also be followed by `L` to make them long and `U` to make them unsigned.**

Example:

0XFUL is an unsigned long constant with vlaue 15 decimal.


A character constant is an integer written as one character within single quotes, such as 'x'. The value of a character constant if the numeric value of the character in the machine's character set.

An arbitrary byte-sized bit pattern can be specified by `'\ooo'` where `ooo` is one of the three octal digits(0...7).

We can also represent an arbitrary bit pattern by `'\xhh'` where `hh` is one or more hexadecimal digits(0...9, a...f, A....F).


### Complete set of escape sequences:

|Escape character|Meaning|
|:---------------|:-----:|
|`\a`|alert(bell) character|
|`\b`|backspace|
|`\f`|formfeed|
|`\n`|newline|
|`\r`|carriage return|
|`\t`|horizontal tab|
|`\v`|vertical tab|
|`\\`|backslash|
|`\?`|question mark|
|`\'`|single quote|
|`\"`|double quote|
|`\ooo`|octal number|
|`\xhh`|hexadecimal number|


**A constant expression is an expression that involves only constants. Such expressions may be evaluated during compilation rather than run-time.**

**A string constant or string literal is a sequence of zero or more characters surrounded by double quotes. The quotes are not part of the string, they only serve to delimit it.**

**The internal representation of a string has a null character `'\0'` at the end.**
