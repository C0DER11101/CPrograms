# _More string library functions_

## _1._ strncpy()

**Declaration:**
```c
char *strncpy(char *destination, const char *source, size_t n);
```

_This function copies exactly_ `n` _characters from string_ `source` _to string_ `destination`.


_If length of_ `source` _is less than_ `n`, _then null characters are added to_ `destination` _till the all_ `n` _characters have been written to it._

_Example:_ **If** `n` **is 10 and the length of** `source` **is 6 then 4 null characters are written at the end.**

_If length of_ `source` _is more than or equal to_ `n` _then_ `n` _characters will be written to_ `destination`.

_This function returns the value of_ `destination`.

Program:
[t15.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t15.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211985915-58f075ad-8c4c-412f-84af-f0c9e46deea6.png" width="60%" height="60%">

Program:
[t16.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t16.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211986888-2fc8843c-5258-481f-84b5-da108a58c597.png" width="60%" height="60%">

## _2._ strncat()

**Declaration:**
```c
char *strncat(char *destination, const char *source, size_t n);
```
_It appends_ `n` _characters of_ `source` _to_ `destination`.

_The null character of_ `destination` _is removed and_ `n` _characters of_ `source` _are appended to_ `destination` _and a null character is added at the end of_ `destination`.

_This function returns the value of_ `destination`.

Program:
[t17.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t17.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211996556-ae974d95-8dce-4652-b7e7-2d21dd0d441a.png" width="60%" height="60%">

## _3._ strncmp()

**Declaration:**
```c
int *strncmp(const char *arr1, const char *arr2, size_t length);
```

_This function compares the characters of strings for a specified length._

Program:
[t18.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t18.c) compares the first 5 characters of two strings.

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/211999152-9046495d-f9a3-4476-a028-bc0c7776482b.png" width="60%" height="60%">

## _4._ strchr() and strrchr()

### strchr()
**Declaration:**
```c
char *strchr(const char *str, int ch);
```

_Returns a pointer to the first(**leftmost**) occurence of the character_ `ch` _in the string pointed to by_ `str`.

_If the character is not present in the string then it returns_ `NULL`.

Program:
[t19.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t19.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212141510-0e2ada88-242e-43ab-bd9b-a3c8d261d4a1.png" width="60%" height="60%">

### strrchr()
**Declaration:**
```c
char *strrchr(const char *str, int ch);
```

_Returns a pointer to the last(**rightmost**) occurence of the character_ `ch` _in the string pointed to by_ `str`.

_If the character is not present in the string then it returns_ `NULL`.

Program:
[t19_2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t19_2.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212142620-f8a2f500-22a5-4cd4-8008-3e91e0bfce89.png" width="60%" height="60%">

## _5._ strpbrk()
**Declaration:**
```c
char *strpbrk(const char *str1, const char *str2);
```

_This function returns a pointer to first character of string_ `str1`, _which matches with any character of_ `str2`.

_It returns_ `NULL` _if there are no common characters in the two strings._

Program:
[t20.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t20.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212229774-df696645-6d39-44e5-9418-9fdd2522b466.png" width="60%" height="60%">

```c
printf("%s\n", strpbrk("abcmnop", "lmn"));
```

_Here_, `"abcmnop"` _and_ `"lmn"` _are two strings of different sizes. Each character of_ `"abcmnop"` _is compared with_ `"lmn"` _until_ `'m'` _is found to be common between both the strings. So_ `strpbrk()` _returns a pointer to_ `'m'` _which is the first character to be found common between_ `"abcmnop"` _and_ `"lmn"`. `'m'` _is a part of the substring_ `"mnop"`, _that's why we get the output as:_ `mnop`. _The pointer to character points to the substring_ `"mnop"` _since it stores the address of_ `'m'`.

## _6._ strspn() and strcspn()

### strspn()
**Declaration:**
```c
size_t strspn(const char *str1, const char *str2);
```

_This function returns the number of characters in the beginning of_ `str1` _that match any of the characters in_ `str2`.

Program:
[t21.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t21.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212233842-c49e7536-6c93-464c-b8e4-557546dfb6ad.png" width="60%" height="60%">

```c
strspn("abcdmnop", "abcefdmnopq");
```

_Here, first_ `strspn()` _compares the first character_ `'a'` _of_ `"abcdmnop"` _with each character of_ `"abcefdmnopq"`. _When it found a match, it moved the next character of_ `"abcdmnop"` _i.e._ `'b'` _which was also present in_ `"abcefdmnopq"`. _So it moved to the next character of_ `"abcdmnop"` _which was_ `'c'` _which was also present in_ `"abcefdmnopq"` _and the process went on and we go the output to be_ `8` _meaning that all the characters of_ `"abcdmnop"` _were present in_ `"abcefdmnopq"`.

_Now, this function has a very unique behaviour and that it will explained through the example below:_

```c
strspn("abcdqmnop", "abcdmnop");
```

_Here the first 4 characters will be taken by_ `strspn()`, _but as soon as it encounters_ `'q'` _of_ `"abcdqmnop"`, _it compares it with each character of_ `"abcdmnop"` _and finds that_ `'q'` _is nowhere in_ `"abcdmnop"`. _So it aborts the search and hence we get the output:_ `4`.

```c
strspn("qbcdmnop", "abcdmnop");
```
_Here, the output is_ `0`. _Because_ `strspn()` _stops once it encounters a character in the first string that isn't present in the second string. So when_ `strspn()` _encounters_ `'q'` _of_ `"qbcdmnop"`, _it compares_ `'q'` _with each character of_ `"abcdmnop"` _and finds that_ `'q'` _isn't present in_ `"abcdmnop"`, _so it aborts its search and hence we get the output:_ `0`. _So, no matter how many common letters we have between two strings, if there is even one character in the first string that is not present in the second string, then_ `strspn()` _stops its search and aborts the process even if there were common characters after that uncommon character._

### strcspn()
**Declaration:**
```c
size_t strcspn(const char *str1, const char *str2);
```

_This functions returns the number of characters in the beginning of_ `str1` _that don't match any of the characters in_ `str2`.

Program:
[t21_2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t21_2.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212250694-95cd8e06-2abd-4383-a045-7fb62924a311.png" width="60%" height="60%">

_This function does just the opposite of what_ `strspn()` _does. It stops its search as soon as it encounters a character in the first string that is present in the second string, no matter how many uncommon characters are there in the first string after that common character._

## _7._ strstr()
**Declaration:**
```c
char *strstr(const char *s1, const char *s2);
```
_This function is used to locate the first occurence of a substring in another string._

_Here_ `s2` _is the substring which is to be searched in_ `s1`.

_This function returns a pointer to the beginning of the first occurence of the substring_ `s2` _in_ `s1`.

Program:
[t22.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t22.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212256976-0fa24f0c-6257-4916-92ff-68dd4610ec38.png" width="60%" height="60%">

## _8._ strtok()
**Declaration:**
```c
char *strtok(char *s1, const char *s2);
```
_This function is used to extract tokens from a string based on some separator characters._

`strtok()` _breaks the string_ `s1` _into tokens, where each token is delimited by a character from the string_ `s2`.

_This function is called multiple times depending on the number of tokens in_ `s1`.

_The first call to_ `strtok()` _has a non-NULL first argument, while the subsequent calls have a NULL first argument._

_The second argument is a string containing separator characters._

_This second argument can differ from call to call._

_Each time_ `strtok()` _is called, it finds a token in the string_ `s1` _and appends a null character to the token and returns a pointer to it. It returns NULL when there are no tokens left in_ `s1`.

Program:
[t23.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t23.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212305409-a1b4fa30-c713-47ac-8c24-191009f466f8.png" width="60%" height="60%">

_Here_, `str` _gets modified by_ `strtok()`, _if you look at the output, then you will see a string like this:_
```
...whybutnotoh, wherewhen
```
_This is the modified_ `str` _which I printed using a_ `for` _loop._


```
...why?but;not?oh!, where when
```
_This is the original_ `str`. 

_So, one thing is clear from here that we cannot use pointer to character in place of_ `str` _or make_ `str` _a pointer to character, because in pointer to characters, string constants are involved and_ `strtok()` _modifies strings, so it will also try to modify the string constant which will lead to_ `segmentation fault`.


_Also you will see an output like this:_
```
...why
```
_This is also_ `str`. _But it's printed using the_ `printf()` _function, now, observe carefully, it only prints till_ `why` _what happened to the rest of the words? Well, remember that_ `strtok()` _adds a null character after every token that it encounters, so_ `strtok()`, _when it encountered_ `...why` _it added a null character after it and that's the reason why we are unable to see the rest of the characters. But you can see the rest of the characters using the_ `for` _loop._
## _9._ sprintf()
**Declaration:**
```c
int sprintf(char *str, const char *controlstring[,argument1, argument2, ......]);
```
**Header file:** _stdio.h_

_This function is not like_ `printf()`. _This function stores the formatted output in a character array._

_With the help of this function we can convert variables of any data type to strings._

_A null character is appended at end automatically._

**_This function returns the number of characters stored in the character array, excluding the null character._**

Program:
[t24.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t24.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212334620-f34ef8d8-5e4e-4890-b921-b8f2825b5546.png" width="60%" height="60%">

Program:
[t24_2.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t24_2.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212335842-fcf53b92-e51f-4696-8d5e-b9b2bb4b9bc3.png" width="60%" height="60%">

_One thing that I noticed here is that_ `sprintf()` _doesn't work with pointer to character even when they have been initialized with string. This compelled me to think that maybe_ `sprintf()` _allocates one character at a time to each element of the string. So, if we initialized a pointer to character with a string then_ `sprintf()` _allocates a single character to the address pointed to by the pointer to character and tries to add this character to that address but we can't do that because the string initialized to the pointer is actually a string constant and we cannot modify a string constant and that's why we get a_ `segmentation fault`. _And if we use an uninitialized pointer, it points to some invalid address, so trying to store single character in such a pointer is again going to give us_ `segmentation fault`.

_So, we need to reserve some memory dynamically when we are using a pointer to character with_ `sprintf()` _using either_ `malloc()` _or_ `calloc()`.

## _10._ sscanf()
**Declaration:**
```c
int sscanf(const char *str, const char *controlstring[,address1, address2, .....]);
```
**Header file:** _stdio.h_

_In this function, data is read from a string rather from standard input._

_We can read the formatted text from a string and convert it into variables of different data types!!_

Program:
[t25.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t25.c).

**Output:**

<img src="https://user-images.githubusercontent.com/96164229/212354024-f189d394-8d74-4bfc-b0d7-b98fb042ad6b.png" width="60%" height="60%">

**Here is a program that I wrote to check if the input is a valid integer or not or whether it is a string!!.**

Program: [t26.c](https://github.com/C0DER11101/CPrograms/blob/CProgramming/Strings/tests/t26.c).

---
