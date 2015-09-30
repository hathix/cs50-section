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
    int length = end_2 - start_1 + 1;
    int index = start_1;
    int temp[length];

    // While there are elements in both subarrays
    while (start_1 <= end_1 && start_2 <= end_2)
    {
        // Compare numbers at the start of the subarrays
        if (array[start_1] <= array[start_2])
        {
            // Append smaller to merged array
            temp[index] = array[start_1];
            index++;
            start_1++;
        }
        else
        {
            // Append smaller to merged array
            temp[index] = array[start_2];
            index++;
            start_2++;
        }
    }

    // While elements remain in subarray 1 (but not subarray 2)
    while (start_1 <= end_1)
    {
        // Append element to merged array
        temp[index] = array[start_1];
        start_1++;
        index++;
    }

    // While elements remain in subarray 2 (but not subarray 1)
    while (start_2 <= end_2)
    {
        // Append element to merged array
        temp[index] = array[start_2];
        start_2++;
        index++;
    }

    // Copy newly sorted array over to original array
    for (int i = end_2, j = 0; j < length; i--, j++)
    {
        array[i] = temp[i];
    }
}

void merge_sort (int array[], int start, int end)
{
    if (end > start)
    {
        int middle = (start + end) / 2;

        // sort left half
        merge_sort(array, start, middle);

        // sort right half
        merge_sort(array, middle + 1, end);

        // merge the two halves
        merge(array, start, middle, middle + 1, end);
    }
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
