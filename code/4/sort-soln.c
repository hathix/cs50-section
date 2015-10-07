#include <stdio.h>
#include <cs50.h>

/**
 * Sorts array in place using bubble sort - optimizes to end if there are
 * no swaps
 */
void bubble_sort(int array[], int n)
{
    // cycle through array
    for(int k = 0; k < n - 1; k++)
    {
        // optimize; check if there are no swaps
        int swaps = 0;

        // swap adjacent elements if out of order
        for(int i = 0; i < n - 1 - k; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;

                swaps++;
             }
        }

        if (!swaps)
            break;
    }
}


/**
 * Sorts array in place using selection sort
 */
void selection_sort(int array[], int size)
{
    // iterate over array
    for(int i = 0; i < size - 1; i++)
    {
        // smallest element and its position in sorted array
        int smallest = array[i];
        int position = i;

        // unsorted part of array
        for(int k = i + 1; k < size; k++)
        {
            // find the next smallest element
            if (array[k] < smallest)
            {
                smallest = array[k];
                position = k;
            }
        }

        // swap
        int temp = array[i];
        array[i] = smallest;
        array[position] = temp;
    }
}


/**
 * Sorts array in place using insertion sort
 */
void insertion_sort(int array[], int size)
{
    // iterate through unsorted part of array from l->r
    for(int i = 1; i < size; i++)
    {
        // define the start of the sorted array
        int j = i - 1;

        // specify the next element to sort
        int to_sort = array[i];

        // iterate through sorted part of array from r->l
        // figure out where in sorted portion to_sort should go
        while(j >= 0 && to_sort < array[j])
        {
            // shift sorted elements rightward
            array[j + 1] = array[j];
            j--;
        }

        // insert element into sorted portion of array
        array[j + 1] = to_sort;
    }
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