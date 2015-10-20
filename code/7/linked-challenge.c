/**
 * Linked List Challenge
 * Neel Mehta's CS50 Section <https://github.com/hathix/cs50-section>
 *
 * Challenge problems contained here:
 * - length
 * - prepend
 * - contains
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct node
{
    // the value to store in this node
    int n;

    // the link to the next node in the list
    struct node* next;
}
node;

// points to the first node in the linked list
node* head = NULL;

/**
 * Prints out every element of the linked list that starts at `head`.
 */
void print_list()
{
    for (node* ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i ", ptr->n);
    }
    printf("\n");
}

/*
 * Returns the length of the linked list that starts at `head`.
 */
int length()
{
    // **YOUR CODE HERE**
    return 0;
}

/**
 * Adds an element containing `i` to the front of the linked list that
 * starts at `head`.
 */
void prepend(int i)
{
    // **YOUR CODE HERE**
}

/**
 * Returns true if the linked list that starts at `head` contains `needle`,
 * false otherwise.
 */
bool contains(int needle)
{
    // **YOUR CODE HERE**
    return false;
}

int main(int argc, char* argv[])
{
    // create linked list
    for (int i = 0; i < SIZE; i++)
    {
        node* new = malloc(sizeof(node));

        if (new == NULL)
        {
            exit(1);
        }
        new->n = i;
        new->next = head;
        head = new;
    }

    // test length function
    printf("TESTING LENGTH\n");
    printf("Length of list is %i (expected to be %i)\n\n", length(), SIZE);

    // test prepending
    printf("TESTING PREPEND\n");
    int new = 50;
    printf("Prepending %i to the list...\n", new);
    printf("Before:\n");
    print_list();
    prepend(new);
    printf("After:\n");
    print_list();
    printf("\n");

    // test search
    printf("TESTING CONTAINS\n");
    int in_list = new;
    int not_in_list = 1776;
    if (contains(in_list))
    {
        printf("%i found in list, as expected! :)\n", in_list);
    }
    else
    {
        printf("%i unexpectedly not found in list :(\n", in_list);
    }

    if (contains(not_in_list))
    {
        printf("%i unexpectedly found in list! :(\n", not_in_list);
    }
    else
    {
        printf("%i not found in list, as expected! :)\n", not_in_list);
    }
    printf("\n");

    return 0;
}
