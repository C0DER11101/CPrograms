# Self referential structures

**A structure that contains pointers to structures of its own type is known as self referential structure.**

**Syntax:**
```c
struct tag
{
	datatype member1;
	datatype member2;
	................
	................
	struct tag *ptr1;
	struct tag *ptr2;
};
```

_Here_ `ptr1` _and_ `ptr2` _are structure pointers that can point to structure variables of type_ `struct tag`.
