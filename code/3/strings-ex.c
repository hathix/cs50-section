/**
 * Prints every character in the string on its own line.
 */

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = "Thayer";
    int len = strlen(name);
    
    for (int i = 0; i < len; i++)
    {
        printf("%c\n", name[i]);
    }
}
