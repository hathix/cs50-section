/**
 * Prints every element in an array.
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {50, 51, 65, 43};
    int n = 4;
    
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", numbers[i]);
    }
}
