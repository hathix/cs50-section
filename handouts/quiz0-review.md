# CS50 Section. Quiz 0 Review. 10/14/15.

> Neel Mehta  
> neelmehta@college.harvard.edu  
> (215) 990-6434

**Quiz 0 is Wed 10/14 in place of lecture.** Get prepared/excited!

Grab this handout at <https://github.com/hathix/cs50-section/blob/master/handouts/quiz0-review.md>.

# Topics to Review

**WEEK 0**  
Binary. ASCII. Algorithms. Pseudocode. Source code. Compiler. Object code. Scratch. Statements. Boolean expressions. Conditions. Loops. Variables. Functions. Arrays.

**WEEK 1**  
Linux. C. Compiling. Libraries. Types. Standard output.

**WEEK 2**  
Casting. Imprecision. Switches. Scope. Strings. Arrays. Cryptography.

**WEEK 3**  
Command-line arguments. Searching. Sorting. Bubble sort. Selection sort. Insertion sort. O. Ω .Θ. Recursion. Merge Sort.

**WEEK 4**  
Stack. Debugging. File I/O. Hexadecimal. Strings. Pointers. Dynamic memory allocation.

**WEEK 5**  
Heap. Buffer overflow. Linked lists.

# How to prepare

In order of most useful to least useful:

* Do practice tests: <https://cs50.harvard.edu/quizzes>.
* Review old section handouts at <https://github.com/hathix/cs50-section/tree/master/handouts>. Focus on redoing the challenge problems.
* Check out class-wide review sessions, e.g. <http://cs50.tv/2013/fall/quizzes/0/> or  <http://cdn.cs50.net/2013/fall/quizzes/0/review0.pdf>.
* Review <https://study.cs50.net/>
* Watch some shorts.

# What to include on your cheat sheet

* Big-O complexity of searches and sorts
* Sizes (in bytes) of data types
* The headers of various functions you've used so far, e.g. `int strlen(char*)`
* Common error messages and what causes them

# Challenges

These are coding problems on past Quiz 0s. **Do these on paper**, as you'll have to do them on paper during the real quiz!

## toupper (Fall 2012)

Suppose that you can't recall the header file in which `toupper` is declared, and so you have to implement a version of the function yourself. Complete the implementation of `toupper` below in such a way that the function returns `c` in uppercase if `c` is a lowercase (ASCII) letter, else it returns `c` unchanged. Recall that the ASCII value of 'a' is greater than that of 'A'. You may not call any functions in your function.

Solution: <http://cdn.cs50.net/2012/fall/quizzes/0/key0.pdf>.

```c
char toupper(char c)
{













}
```

## atoi (Fall 2013)

Suppose that you've forgotten which header file declares `atoi`, and so you need to re-implement it yourself. Argh. Without calling any functions other than `strlen` (which you may call if you'd like), complete the implementation of `atoi` below in such a way that it converts `s` (e.g., "123") to an int (e.g., 123). If `s` happens to be `NULL`, or if `s` contains any character that isn't '0' through '9', your implementation of `atoi` should return 0.  Otherwise, you may assume that `s` represents a non-negative integer that, when converted, will fit inside of an int without overflow. No need to `#include` any files (even if you call strlen).

Solution: <http://cdn.cs50.net/2013/fall/quizzes/0/key0.pdf>.

```c
int atoi(char* s)
{

























}
```

## strlen (Fall 2013)

Suppose that you've also forgotten which header file declares `strlen`, and so you need to re-implement it yourself (even if you didn't just use it). Bah. Even worse, neither `[` nor `]` currently works on your keyboard (or pencil or pen).  Without calling any functions at all  and without using any square brackets, complete the implementation of `strlen` below  using pointer arithmetic in such a way that the function returns the length of `s`. If `s` happens to be `NULL`, your implementation of `strlen` should return 0.

Solution: <http://cdn.cs50.net/2013/fall/quizzes/0/key0.pdf>.

```c
int strlen(char* s)
{

























}
```
