# function of bubble sort
def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        # inner loop
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                # Swapping 2 numbers
                temp = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = temp

    # print the array after sorting
    for i in range(n):
        print(arr[i], end=',')
    print()

# main function
if __name__ == '__main__':
    arr = [8,41,3,5,9]
    bubble_sort(arr)