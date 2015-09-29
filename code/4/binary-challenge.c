#include <stdio.h>
#include <cs50.h>

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // your code here
}

int main(void)
{
    int values[] = {1, 4, 5, 9, 13};
    int num_values = 5;
    int find = 4;

    if (search(find, values, num_values))
    {
        printf("Found :)\n");
    }
    else
    {
        printf("Not found :(\n");
    }
}