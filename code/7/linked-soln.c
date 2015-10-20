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
    for (node*  ptr = head; ptr != NULL; ptr = ptr->next)
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
    int length = 0;

    // traverse list (this is a good formula for iterating over linked lists)
    for (node*  ptr = head; ptr != NULL; ptr = ptr->next)
    {
        // count nodes
        length++;
    }

    return length;
}

/**
 * Adds an element containing `i` to the front of the linked list that
 * starts at `head`.
 */
void prepend(int i)
{
    // build new node
    node* new = malloc(sizeof(node));

    if (new == NULL)
    {
        exit(1);
    }

    // initialize new node
    new->n = i;

    // add new node to head of list
    new->next = head;
    head = new;
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
    printf("Length of list is %i (expected to be %i)", length(), SIZE);

    // test prepending
    int new = 50;
    printf("Prepending %i to the list...\n", new);
    printf("Before:\n");
    print_list();
    prepend(new);
    printf("After:\n");
    print_list();


    return 0;
}
