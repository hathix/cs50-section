/**
 * CHALLENGE! Print every multiple of 3 from 9 to 18 inclusive.
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    for (int i = 9; i <= 18; i += 3)
    {
        printf("%i\n", i);
    }
}
