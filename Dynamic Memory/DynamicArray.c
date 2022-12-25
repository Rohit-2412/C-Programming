#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertion(int *ptr, int n, int value, int pos)
{
    ptr = (int *)realloc(ptr, (n + 1) * sizeof(int));
    for (int i = n + 1; i > pos; i--)
    {
        ptr[i] = ptr[i - 1];
    }
    ptr[pos] = value;
}

void deletion(int *ptr, int *n, int value)
{
    int key = -1;
    for (int i = 0; i < *n; i++)
    {
        if (ptr[i] == value)
        {
            key = i;
            break;
        }
    }
    if (key == -1)
    {
        printf("Given value does not exist in Array");
        return;
    }
    for (int i = key; i < *n - 1; i++)
    {
        ptr[i] = ptr[i + 1];
    }
    printf("%d\n", *n);
    *n -= 1;
    printf("%d\n", *n);
    ptr = (int *)realloc(ptr, (*n) * sizeof(int));
}

void print(int *ptr, int n)
{
    printf("--------");
    for (int i = 0; i < n; i++)
        printf("%d  ", ptr[i]);
}

int main()
{
    // int n;
    // printf("Enter number of Elements : ");
    // scanf("%d", &n);
    int n = 5;
    int *ptr = NULL;
    ptr = (int *)malloc(n * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    // printf("Enter Array Elements : ");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", ptr + i);
    // }
    // printf("Enter 1 for inserting new Elements and 2 for deleting old Elements");
    // int choice;
    // scanf("%d", &choice);
    // if (choice == 1)
    // {
    //     int value, pos;
    //     printf("Enter value to add : ");
    //     scanf("%d", &value);

    //     printf("Enter position : ");
    //     scanf("%d", &pos);
    //     insertion(ptr, n, value, pos);
    //     n++;
    // }
    // for printing array
    // print(ptr, n);

    // if (choice == 2)
    // {
    //     int value;
    //     printf("Enter value to delete : ");
    //     scanf("%d", &value);

    //     deletion(ptr, &n, value);
    // }

    print(ptr, n);
    printf("\n");
    deletion(ptr, &n, 1);
    print(ptr, n);

    free(ptr);
    return 0;
}