#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *Array()
{
    int *arr = (int *)malloc(7 * sizeof(int));
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    arr[5] = 6;
    arr[6] = 7;
    return arr;
}

int main()
{
    int *arr = Array();
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}