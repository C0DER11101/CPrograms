## lvalue
>An expression that represents a memory location and can occur on the left hand side of assignment operator is known as lvalue.

## rvalue
>An expression that represents a value and can occur on right hand side of assignment operator is known as rvalue.

_Example:_

```c
x=y-10;
```

Here `y-10` is an rvalue as it represents a value and `x` is an lvalue as it represents a memory location where the value can be stored.

**Variables declared with** `const` **type qualifier or array types are lvalues as they have a memory location but they can't be modified.**

**A modifiable lvalue is an lvalue that is not declared with the keyword** `const` **or array type and thus can occur as left operand of assignment operator
or as an operand of increment or decrement operator.**


---
