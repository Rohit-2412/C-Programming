#include <stdio.h>
// C program to implement recursive Binary Search
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int length, int r, int val)
{
    if (r >= length)
    {
        int mid = length + (r - length) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == val)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > val)
            return binarySearch(arr, length, mid - 1, val);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, val);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    int value = 2;
    int result = binarySearch(arr, 0, n - 1, value);

    (result == -1) ? printf("Element is not present in array")
                   : printf("Element is present at index %d",
                            result);

    return 0;
}
