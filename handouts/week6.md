# CS50 Section. Week 6. Quiz 0 Review. 10/13/15.
*Tuesdays 7:00-8:30pm, Science Center 309A*
*<https://github.com/hathix/cs50-section>*

> Neel Mehta  
> neelmehta@college.harvard.edu  
> (215) 990-6434

Get these handouts at <https://github.com/hathix/cs50-section/tree/master/handouts>.

# Practice problems

## strlen (Fall 2013 Quiz 0)

Suppose that you've forgotten which header file declares `strlen`, and so you need to re-implement it yourself. Bah. Even worse, neither `[` nor `]` currently works on your keyboard (or pencil or pen).  Without calling any functions at all  and without using any square brackets, complete the implementation of `strlen` below **using pointer arithmetic** in such a way that the function returns the length of `s`. If `s` happens to be `NULL`, your implementation of `strlen` should return 0.

```c
int strlen(char* s)
{






















}
```

Solution: <http://cdn.cs50.net/2013/fall/quizzes/0/key0.pdf>

# Stuff for your cheat sheet

## Algorithms

Name | What it does | Worst-case | Best-case
-----|--------------|------------|----------
Linear search | Finds an element in a list by searching left-to-right | O(n) | Ω(1)
Binary search | Finds an element in a sorted list using divide-and-conquer | O(log n) | Ω(1)
Bubble sort | Sorts a list by bubbling biggest elements to end | O(n^2) | Ω(n)
Selection sort | Sorts a list by moving smallest elements to front | O(n^2) | Ω(n^2)
Insertion sort | Sorts a list by moving elements to properly sorted place | O(n^2) | Ω(n)
Merge sort | Recursively sorts a list by partitioning and merging | O(n log n) | Ω(n log n)

More at <http://www.bigocheatsheet.com/>.

## Data types

The below are for a 64-bit machine (so named because pointers are 64 bits) like the CS50 IDE.

**Type** | char | int | float | double | long long | int*
---------|------|-----|-------|--------|-----------|------
**Size (bytes)** | 1 | 4 | 4 | 8 | 8 | 8

* Unsigned types are the same size as the normal types (e.g. `unsigned int`, like `int`, is 4 bytes)
* All pointers are the same size (e.g. `double*`, like `int*`, is 8 bytes)

## Useful functions

![Table of common functions and their usage](img/standard-library.png)

## Common errors

Error | Why it happened
------| ---------------
undefined reference to 'function' | You forgot to call the linker with, e.g., `-lcs50`
implicitly declaring library function | You forgot to `#include` the `.h` file
implicit declaration of function 'function' is invalid | You forgot to `#include` the `.h` file
more '%' conversions than data arguments | You called, e.g., `printf("%i and %i \n", 5)` (you passed 1 number but should have given 2)
definitely lost: # bytes in # blocks | You forgot to `free` memory you allocated with `malloc`
invalid write of size # | You tried changing a value beyond the end of an array
use of undeclared identifier | You forgot to declare the variable, or it's out of scope

## File I/O

**Opening and closing files**

<https://reference.cs50.net/stdio.h/fopen>, <https://reference.cs50.net/stdio.h/fclose>

```c
FILE* file_pointer = fopen(filename, "r");
// do stuff
fclose(file_pointer);
```

**Reading from files**

<https://reference.cs50.net/stdio.h/fread>

Reading into an array:

```c
int length = 50;
int destination[length];
fread(destination, sizeof(int), length, file_pointer);
```

Reading into a single variable:

```c
int destination;
fread(&destination, sizeof(int), 1, file_pointer);
```

**Writing to files**

<https://reference.cs50.net/stdio.h/fwrite>

Writing from an array:

```c
int length = 50;
int source[length];
fwrite(source, sizeof(int), length, file_pointer);
```

Writing from a single variable:

```c
int source;
fwrite(&source, sizeof(int), 1, file_pointer);
```

**Moving file pointer**

<https://reference.cs50.net/stdio.h/fseek>

```c
int distance = 50;
fseek(file_pointer, distance, SEEK_CUR);
```
