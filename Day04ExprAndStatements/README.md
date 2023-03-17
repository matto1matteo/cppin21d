# Expression and Statements

In c++, everything that returns a value (included void and null) is an
expression.

Example:

```cpp
5 + 2
```

is an expression that returns the value of the sum of `5` and `2`.

Statements, on the other hand, are the smallest unit of instruction, evaluate
expressions or they can do nothing at all (the null statement). Any expression
is also a statement is followd by a `;`

```cpp
5 + 2;
```

is a statement that does nothing other than sum up to literal constants. On the
othere hand

```cpp
int x = 5 + 2;
```

is an assingnment statement (that also declare the var) that set x to have the
value of the expression `5 + 2`.

## White spaces

Statements, and any piece of code, variable names, function/type declarations
etc, can be surrounded by any number of "whitespaces", that are the the valid
invisible characters e.g. a literal space, `\n`, `\t`, etc. They can and must be
used only to make code cleaner (you might want to look at some standard to not
mess up code).

## Operators

As we already saw, any operator (e.g. `+` or `=`) can be combined to other expressions
(e.g. `5` or `2`) to create a more complex one.

Weird example:

```cpp
int x = y = 5 +2;
```

both x and y will have the value of `7`.

For a complete list of cpp operators, a simple research on the internet will
suffice.

## The meaning of truth

Introduction to the concept of boolean algebra, the old style type bool (as a 4
byte int :O), the type bool, the logical operators, bynary and unary, relational
operators and the *if-else-if-else* statement.

NOTE: Man, please, do a favour to yourself and the whole humanity embrace curly
braces.... and use block even when a simple statement is going to be sufficient,
because you'll never know.

Remember about short circuit evaluation, operators' precedence (aka parenthesis
are friends) and the thernary opeator:

```cpp
<condition> ? <expression if true> : <expression if false>
```

NOTE: BE EXPLICIT!!! `if (x != 0)` is better than `if (x)`, way more readable.
