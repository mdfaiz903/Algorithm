// #include <bits/stdc++.h>
// using namespace std;


int main()
{
    int arr[5] = {2, 1, 3, 5, 4}, i = 0, j = 0, hole = 0;
    for (i = 1; i < 5; i++)
    {
        hole = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > hole)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = hole;
    }

    printf("\nAfter sorting : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}