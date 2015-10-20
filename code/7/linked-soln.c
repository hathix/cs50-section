#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

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

/*
 * Returns the length of the linked list that starts at `head`.
 */
int length()
{
    int length = 0;

    // traverse list (this is a good formula for iterating over linked lists)
    for (node*  ptr = head; ptr != NULL; ptr = ptr->next)
    {
        // count nodes
        length++;
    }

    return length;
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
    printf("Making sure that list length is indeed %i...\n", SIZE);
    assert(length() == SIZE);
    printf("ok!\n");

    return 0;
}
