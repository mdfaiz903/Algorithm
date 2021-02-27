#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 9, left = 0, right = n, mid = 0, search_item = 90;
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == search_item)
        {
            printf("\nthe value of %d at index %d\n", arr[mid], mid);
            return 0;
        }
        else if (arr[mid] > search_item)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    printf("\nValue not found !\n");

    return 0;
}
