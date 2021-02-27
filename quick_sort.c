#include <stdio.h>
#include <stdlib.h>
int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low, j = high, temp;
    while (i < j)
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[low];//9
    A[low] = A[j];//2
    A[j] = temp;
    return j;
}
void quicksort(int A[], int low, int high)
{
    if (low >= high)
        return;
    int p = partition(A, low, high);
    quicksort(A, low, p - 1);
    quicksort(A, p + 1, high);
}
int main()
{
    int arr[] = {9, 8, 6, 5, 7, 1, 4, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, size);
    int i = 0;
    printf("Sorted : ");
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}