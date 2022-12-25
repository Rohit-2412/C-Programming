#include <stdio.h>
// Using reference value calculating sum
int sum(int arr[], int num)
{
    int sum_of_array = 0;

    for (int i = 0; i < num; i++)
    {
        sum_of_array += arr[i];
    }
    return sum_of_array;
}
// Using pointers finding sum
int sum2(int *ptr, int num)
{
    int sum_of_array = 0;
    for (int i = 0; i < num; i++)
    {
        sum_of_array += *(ptr + i);
    }
    return sum_of_array;
}
// Using reference value finding max value
int max(int arr[], int num)
{
    int max = 0;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    return max;
}
// Main program
int main()
{
    int num;
    printf("Enter the number of elements.\n");
    scanf("%d", &num);
    int array[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter element at %d index :", i);
        printf("\n");
        scanf("%d", array + i);
    }
    // Printing values
    printf("Sum of all elements of array is %d.\n", sum(array, num));

    printf("Sum of all elements of array is %d.\n", sum2(array, num));

    printf("Max of all elements of array is %d.\n", max(array, num));
    return 0;
}