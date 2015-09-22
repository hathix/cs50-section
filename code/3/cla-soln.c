/**
 * CHALLENGE! Print the given string the given number of times.
 * 
 * For instance, if you run `./cla-challenge Hello 3`, this program should
 * output:
 * 
 * Hello
 * Hello
 * Hello
 */

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    string text = argv[1];
    int times = atoi(argv[2]);
    
    for (int i = 0; i < times; i++)
    {
        printf("%s\n", text);
    }
}
