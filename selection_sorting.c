#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[] = {32, 1, 3, 23, 44, 100, 7};
    int i, j, min_index;
    int size = sizeof(arr) / sizeof(arr[0]);//find array length
    for (i = 0; i < size; i++)//outer loop
    {
        min_index = i;//assign 1st value
        for (j = i + 1; j < size; j++)//inner loop and assign 2nd value
        {
            if (arr[j] < arr[min_index])//check condition arr[1]< arr[0]
            {
                min_index = j;//if true change min_index
            }
        }
        //after that swaping..
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    return 0;
}