#include <stdio.h>
#include <cs50.h>

/**
 * Sorts array in place using bubble sort - optimizes to end if there are
 * no swaps
 */
void bubble_sort(int array[], int n)
{
    // your code here
}


/**
 * Sorts array in place using selection sort
 */
void selection_sort(int array[], int size)
{
    // your code here
}


/**
 * Sorts array in place using insertion sort
 */
void insertion_sort(int array[], int size)
{
    // your code here
}


/**
 * The power of halving - Merge Sort
 */
void merge (int array[], int start_1, int end_1, int start_2, int end_2)
{
    // your code here
}

void merge_sort (int array[], int start, int end)
{
    // your code here
}

/**
 * Prints all the elements in an array on one line.
 */
void print_array(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}

int main(void)
{
    int size = 5;

    // bubble sort
    printf("Bubble sort\n");
    int bubble_nums[] = {7, 3, 0, 5, 2};
    bubble_sort(bubble_nums, size);
    print_array(bubble_nums, size);

    // selection sort
    printf("Selection sort\n");
    int selection_nums[] = {7, 3, 0, 5, 2};
    selection_sort(selection_nums, size);
    print_array(selection_nums, size);

    // insertion sort
    printf("Insertion sort\n");
    int insertion_nums[] = {7, 3, 0, 5, 2};
    insertion_sort(insertion_nums, size);
    print_array(insertion_nums, size);

    // merge sort
    printf("Merge sort\n");
    int merge_nums[] = {7, 3, 0, 5, 2};
    merge_sort(merge_nums, 0, size - 1);
    print_array(merge_nums, size);
}