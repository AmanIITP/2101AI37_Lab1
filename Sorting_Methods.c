
#include <math.h>
#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SELECTION SORT
//  function to swap the the position of two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
        {

            if (array[i] < array[min_idx])
                min_idx = i;
        }

        // put min at the correct position
        swap(&array[min_idx], &array[step]);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// INSERTION SORT
//  Function to sort an array using insertion sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Printing the array
void printArray(int arr[], int n)
{
    int i;
    printf("Sorted Array Elements : ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver code
int main()
{
    int n;
    printf("Input Array Size : ");
    scanf("%d", &n);
    printf("Input Array Elements : ");
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}
