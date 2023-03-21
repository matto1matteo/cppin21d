# Pointers

We are now, where the meat is tasty.

A pointer is just a piece of memory that stores the address of another piece of
memory. Just declaring a pointer create what's called a "dangling pointer", and
we don't like dangiling pointers. You want to assign a memory location to a
pointer and only then you can use it. You can assign memory location to a
pointer either passing the address of an already existing variable via
`&varName` either via allocating new memory on the heap...

## The heap

The heap is an area of memory that is dedicated to "long living data", meaning
that, contrary to what happens in the stack, where the memory get invalidated
when the variable that reference it goes out of scope, it's the devs job to
clear memory from the heap.

```cpp
// allocating memory on the heap
int * x = new int; // you can still use malloc, but it's discouraged

// deallocating memory from the heap
delete x // free is an option, but same consideration as per mallo
```

When deleting memory from the heap, pointers pointing that address become
dangling, so, take care to make them point to `nullptr` or any other valid
address before using them again.

## Pointer and const

Pointer can be const in 2 different parts:

```cpp
const int * p = new int;
```

means that data stored in the memory address of p must signed to be const, thus,
cannot change

```cpp
int * const p = new int;
```

means that p cannot be assigned to any other memory address.

Any combinations of the 2 is still valid.

## Custom data pointers

Clearly, pointers can point to any type of data, including objects. Creating a
new object from a class just calls the appropriate constructor, while deling a
pointer to a custom object will call the destructor.

```cpp

Cat * tom = new Cat; // = new Cat();
Cat * johnny = new Cat("Johnny"); // calls Cat(string) constructor

delete tom; // calls ~Cat()
```

## Dereference and point-to operator

`*` is used in the definition of a pointer var and to dereference a pointer,
which is, get the value in the memory address stored in a pointer

```cpp
int a = 1;
int * pA = &a;
*pA = 10; // set the memory pointed from pA to store the value of 10 -> a = 10
```

Since you can create pointers that points to objects, accessing data fields and
data member from a pointer might be clumsy

```cpp
Cat * c = new Cat("Tom");
(*c).Meow();
```

imagine chaning method and fields call. Thus the invetion of the "point-to"
operator

```cpp
Cat * c = new Cat("Tom");
c->Meow();
c->GetAge();
c->Color;
// GetOwner retrun a pointer to an object which has a metod GetAge
c->GetOwner()->GetAge(); 
```
