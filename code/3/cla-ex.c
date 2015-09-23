/**
 * Doubles the number given as a command-line argument.
 */

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // technically, we should be ensuring that argc >= 1,
    // but for simplicity's sake let's assume the user
    // passes proper input
    int n = atoi(argv[1]);
    printf("%i\n", n * 2);
}
