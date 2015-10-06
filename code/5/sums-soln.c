#include <stdio.h>

/**
 * Given an array `numbers` of length `length`, finds the sum of the numbers
 * starting at index `start_index`.
 */
int sum(int numbers[], int length, int start_index)
{
    if (start_index >= length)
    {
        return 0;
    }
    else
    {
        return numbers[start_index] + sum(numbers, length, start_index + 1);
    }
}

int main(void)
{
    int x[] = {5, 6, 7};
    int x_length = 3;
    int y[] = {};
    int y_length = 0;

    // should print 18
    printf("%i\n", sum(x, x_length, 0));

    // should print 13
    printf("%i\n", sum(x, x_length, 1));

    // should print 0
    printf("%i\n", sum(y, y_length, 0));
}