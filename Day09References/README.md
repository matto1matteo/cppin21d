# References

"A reference is just an alias to a variable", nothing more, just another
*reference* to the same space in memory, it differs from a pointer by the fact
that a reference doesn't hold a memory address, it's a reference to that memory.

The main points of this day are:

-   how to declare a reference (and what can be referenced, spoiler everything)
-   how to pass by reference using pointers and references
-   the differences between pointers and references, how to use theme as
    function parameters and how to choose from one or another
-   returning multiple values from a function aka pass by reference
-   pay attention to dangling references (try not to references heap allocated
    objects) and to memory leak (keep ownership of the pointer and as rule of
    thumb, delete the pointer in the scope you created it)
-   please, do not declare variables in a single line, otherwise you'll get
    confused you'll make mistakes, for sure
