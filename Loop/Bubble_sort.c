#include <stdio.h>
int main()
{
    // Sorting elements in Ascending order
    int elements;
    int temp;
    // printf("Enter the number of elements in Array : ");
    printf("\n");
    scanf("%d", &elements);
    int array[100];
    for (int i = 0; i < elements; i++)
    {
        // printf("Enter the element at index  %d : ", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < elements; i++)
    {
        for (int j = i + 1; j < elements; j++)
        {
            if (array[j] < array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    // printf("Elements of array after sorting in ascending order : \n");
    for (int i = 0; i < elements; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}