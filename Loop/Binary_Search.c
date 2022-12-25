#include <stdio.h>

int binarySearch(int array[], int start, int end, int value)
{
    int mid = (start + end) / 2;
    if (array[mid] == value)
    {
        return mid;
    }
    if (array[mid] > value)
    {
        binarySearch(array, 0, mid - 1, value);
    }
    if (array[mid] < value)
    {
        binarySearch(array, mid + 1, end - 1, value);
    }
    else
        return -1;
}
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value = 5;
    int length = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, 0, length - 1, value);
    // if (result!= -1 )
    // {
    //  printf("element found at %d \n",result);
    // }

    (result == -1) ? printf("Element is not present in array")
                   : printf("Element is present at index %d",
                            result);
    return 0;
}