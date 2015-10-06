#include <stdio.h>
#include <cs50.h>

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int min = 0;
    int max = n - 1;

    while (min <= max)
    {
        int mid = (min + max) / 2;

        if (values[mid] == value)
        {
            return true;
        }
        else if (values[mid] > value)
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }

    return false;
}

int main(void)
{
    int values[] = {1, 4, 5, 9, 13};
    int num_values = 5;
    int find = 6;

    if (search(find, values, num_values))
    {
        printf("Found :)\n");
    }
    else
    {
        printf("Not found :(\n");
    }
}