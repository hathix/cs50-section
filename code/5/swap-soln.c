#include <stdio.h>

/**
 * Swaps the values that `a` and `b` point at.
 */
void swap(int* a, int* b)
{
    // YOUR CODE HERE
    int temp = *b;
    *b = *a;
    *a = temp;
    // END YOUR CODE
}

int main(void)
{
    int x = 1;
    int y = 2;

    // prints "x = 1, y = 2"
    printf("x = %i, y = %i\n", x, y);

    // call your swap function
    // YOUR CODE HERE
    swap(&x, &y);
    // END YOUR CODE

    // prints "x = 2, y = 1"
    printf("x = %i, y = %i\n", x, y);
}