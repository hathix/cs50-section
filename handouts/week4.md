# CS50 Section. Week 4. 9/28/15.
*Tuesdays 7:00-8:30pm, Science Center 309A*

> Neel Mehta  
> neelmehta@college.harvard.edu  
> (215) 990-6434

Grab this handout at <http://is.gd/neel_cs50_4>.

## Resources
* C language reference: <https://reference.cs50.net/>
* CS50 Study: <https://study.cs50.net/>
* CS50 Discuss: <https://cs50.harvard.edu/discuss>
* CS50 Style Guide: <https://manual.cs50.net/style/>
* These andouts and practice problems: <https://github.com/hathix/cs50-section>

# pset3 tips

## Search

* For generate.c, make sure your comments describe *why* the code is doing what it's doing, not just *what* it's doing.


## Sort

* Try implementing all 3 sorting algorithms we discussed (bubble, insertion, selection.)
* For what it's worth, insertion sort is the easiest to implement.
* You can test your sorting function in the same way you tested search (i.e. using `./generate` and `./find`.) But also test some edge cases like entering zero or one haystack elements.   

## Game of Fifteen

* Implement functions in order of `init`, `draw`, `move`, `won`. You can start testing the game a little once you're done `draw`, and more fully once you're done `move`.
* Don't touch anything outside those 4 functions! CS50 says you can if you want to, but you don't need to and changing things will only break stuff.
* Know that, for a 2-dimensional array, you access the row first, then the column. In other words, you go down and then right. For instance, `board[2][3]` goes down 2 spaces and right 3 spaces.
* To print out a number with padding, try

```c
// if x == 7, this prints " 7"
// if x == 12, this prints "12"
// (the number before i indicates how many spaces to pad to)
printf("%2i", x);
```


## General pset tips

Make sure your pset passes `style50` and `check50` (i.e. doesn't generate any frowny faces.) You can't get full credit on correctness and style unless your code passes these!

# Suggestions from last pset

## Use descriptive variable names!

Remember when we were counting coins in greedy.c? We had to use several variables, including those to track how much money we had left and how many coins we'd used so far. It's important to give variables descriptive names so that your code is easy to read and understand.

Bad name | OK name | Good name
---------|---------|----------
q | -- | quarters
p | -- | pennies
c | amount | change
c | count | coins

Two big things to remember:

* Don't use single letters except `i`, `j`, and `k` in loops. Single letters aren't descriptive at all. This isn't math class!
* Abstract names like "count" are OK, but concrete names like "coins" are better. Think this in your head: "What am I counting here? I'm counting *coins*, so I better call the variable 'coins'."

# Content

## Function prototypes

Say you want to use a function besides `main`. It's not enough to just write the function; C reads top-to-bottom so you'll need to tell C some information about the function ahead of time.

```c
#include <stdio.h>

// function prototype
// <return type> <name>(<argument type>, ...)
// this is the same as in the function definition, except you don't
// specify the argument names, and you end with a semicolon instead of
// defining what the function does
float months_to_years(int);

int main(void)
{
    // prints 1.50
    // (the "%.2f" means to print a float with 2 decimal places)
    printf("%.2f\n", months_to_years(18));
}

// function definition
// <return type> <name>(<argument type> <argument name>, ...)
// here's where you *actually* implement the function
float months_to_years(int months)
{
    return years / 12.0;
}
```

By the way, if you were actually writing this code, you wouldn't include any of these comments. They're just for illustration here.

## Algorithm cheatsheet

Name | What it does | Worst-case | Best-case
-----|--------------|------------|----------
Linear search | Finds an element in a list by searching left-to-right | O(n) | Ω(1)
Binary search | Finds an element in a sorted list using divide-and-conquer | O(log n) | Ω(1)
Bubble sort | Sorts a list by bubbling biggest elements to end | O(n^2) | Ω(n)
Selection sort | Sorts a list by moving smallest elements to front | O(n^2) | Ω(n^2)
Insertion sort | Sorts a list by moving elements to properly sorted place | O(n^2) | Ω(n)
Merge sort | Recursively sorts a list by partitioning and merging | O(n log n) | Ω(n log n)

More at <http://www.bigocheatsheet.com/>.
