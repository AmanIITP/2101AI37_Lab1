
#include <math.h>
#include <stdio.h>

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
    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}