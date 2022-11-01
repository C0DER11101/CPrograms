# About [test3.cpp](https://github.com/C0DER11101/CPrograms/blob/CProgramming/tests/test3.c)

_Another thing that I learnt is that while taking string input using loop, the newline is also accepted(which is entered in the form of 'return' key)._


I have some images(which I will explain afterwards), below:

# Image-1

![image](https://github.com/C0DER11101/CPrograms/blob/CProgramming/tests/test3Output1.png?raw=true)

# Image-2

![image](https://github.com/C0DER11101/CPrograms/blob/CProgramming/tests/test3Output2.png?raw=true)

# Image-3

![image](https://github.com/C0DER11101/CPrograms/blob/CProgramming/tests/test3Output3.png?raw=true)

Explanation:

[[image-1]()] is simple, it just takes a string input in one line with a tab character inserted in the beginning and in between the words "hello" and "world". So there is not much to explain about that.

Now, in [[image-2]()], it shows where tabs were caught in the string, index 5 and 11 are understood, but index 14 is quite confusing, because if you look at the string then the 'o' of 'hello' falls in the index 4 and the tab after 'world' falls in the index 11 and 'I' should fall in the index 12, so by this convention the next tab should have been in index 13, but it's not the case. When I entered the tab after 'world', I also pressed the enter key(or the return key) and it got saved in the index 12 and then I entered 'I' which was inserted in the index 13 and so when I entered the next tab after 'I' then it got inserted in the index 14, and hence when you press an enter key, then it actually means a new line(which is also a character i.e. `\n`), so it also gets entered into the string.

Similar is the with [[image-3]()], "caught a tab at index 0" is understood, but "caught a tab at index 12" is quite confusing, it should have been "caught a tab at index 6". Actually, here also the same convention is applied, after inserting the first tab at index 0 I pressed the enter key, so a newline was inserted at index 1, then I inserted 'h' and then pressed enter key, so 'h' was inserted at index 2 and the newline(via the enter key) was inserted at index 3.

**This is what happened!!**

| Character inserted | Index |
|:-------------------|------:|
|tab                 | [0]   |
|newline             | [1]   |
|'h'                 | [2]   |
|newline             | [3]   |
|'e'                 | [4]   |
|newline             | [5]   |
|'l'                 | [6]   |
|newline             | [7]   |
|'l'                 | [8]   |
|newline             | [9]   |
|'o'                 | [10]  |
|newline             | [11]  |
|tab                 | [12]  |
|newline             | [13]  |
|'w'                 | [14]  |
|newline             | [15]  |
|'o'                 | [16]  |
|newline             | [17]  |
|'r'                 | [18]  |
|newline             | [19]  |
|'l'                 | [20]  |
|newline             | [21]  |
|'d'                 | [22]  |
|newline             | [23]  |

...

So, that's what I wanted to say!!

---
