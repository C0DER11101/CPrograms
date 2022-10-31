# About [test1.cpp](https://github.com/C0DER11101/CPrograms/blob/CProgramming/tests/test1.c)

_In this file, I learnt something new(could be a simple or old one for many, but it's new for me!) that when we take a string input without using a loop, then the tab character is not taken as input. But when we are taking a string input using a loop, then the tab character is taken as input._

```c
char a[100]={'\0'};

scanf("%s", a);

for(int i=0; i<strlen(a); i++)
{
	if(a[i]=='\t')
		printf("\nCaught a tab at index: %d\n", i);
}
```

This snippet will never detect the tab character, because even if you entered the tab, it won't be taken as input!!

The image below explains it:

![image](https://github.com/C0DER11101/CPrograms/blob/CProgramming/tests/test2Output.png?raw=true)

But if the same code was written like this:

```c
char a[100]={'\0'};

int i==-1;

while(a[i]!='z')
{
	++i;
	scanf("%c", &a[i]);
}

for(int i=0; i<strlen(a); i++)
{
	if(a[i]=='\t')
		printf("\nCaught a tab at index: %d\n", i);
}
```

Then the tab will be taken as input as shown by the image below :point_down:

![image](https://github.com/C0DER11101/CPrograms/blob/CProgramming/tests/test1Output.png?raw=true)

---
