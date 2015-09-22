/**
 * CHALLENGE! Prints the string... reversed.
 * Should print "dravraH".
 */

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string college = "Harvard";
    int len = strlen(college);
    
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", college[i]);
    }
    
    printf("\n");
}
