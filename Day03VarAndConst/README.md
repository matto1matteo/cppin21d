# Const and Variables

The basic building block used to work with data.

NOTE: care of basic type size, they are not always the same.

Use `sizeof` to get the size of a type.

## Type aliases

It's possible to define a type alias using the `typedef` keyword followed by the
previous type and name, the new type and a semi colon.

```cpp
typedef unsigned short int USHORT;
```

## Common scalar types

Overview over simple scalar type and variations: int, float, double, bool, char
and unsigned/long/short.

### Overflows

There is even a little excursus about overflow using unsigned short int and
short int.

## `const` vs non constants

There is a really awfull example on how to ***define*** constants using, yep,
`#define` directive. But the author went immediately back on his foot showing us
readers, the use of `const` keyword and the `enum` defintion (classic enum, non
`enum class`)

