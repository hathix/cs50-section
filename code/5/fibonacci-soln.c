#include <stdio.h>

/**
 * Calculates the `index`th Fibonacci number, zero-indexed.
 */
int fibonacci(int index)
{
    if (index <= 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(index - 1) + fibonacci(index - 2);
    }

}

int main(void)
{
    // should print 8
    printf("%i\n", fibonacci(5));

    // should print 1
    printf("%i\n", fibonacci(1));

    // should print 1
    printf("%i\n", fibonacci(0));
}