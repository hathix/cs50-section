/**
 * Prints every even number between 0 and 10, inclusive.
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    for (int i = 0; i < 10; i += 2)
    {
        printf("%i\n", i);
    }
}
