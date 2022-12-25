#include <stdio.h>
int main()
{
    // int a=100;
    // int*ptr=&a;
    // printf("The value of a is %d\n", a); // Using direct call
    // printf("The value of a is %d\n", *ptr); // Using de-referencing
    // printf("The address of a is %p\n", &a); // Using ampersand to call the address of a
    // printf("The address of pointer to a is %p\n", &ptr); // Using ampersand to call the address of pointer to a
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr_arr = arr;
    printf("The Address of first element is %d.\n", &arr);
    printf("The Address of first element is %d.\n", &arr[0]);
    printf("The Address of first element is %d.\n", ptr_arr);
    printf("The Address of first element is %d.\n", arr);
    printf("\n");
    printf("The value at Address of first element is %d.\n", *(&arr[0]));
    printf("The value at Address of first element is %d.\n", *(ptr_arr));
    printf("The value at Address of first element is %d.\n", *(arr));
    printf("\n");
    printf("The Address of second element is %d.\n", &arr[1]);
    printf("The Address of second element is %d.\n", ptr_arr + 1);
    printf("The Address of second element is %d.\n", arr + 1);
    printf("\n");
    printf("The value at Address of second element is %d.\n", *&(arr[1]));
    printf("The value at Address of second element is %d.\n", *(ptr_arr + 1));
    printf("The value at Address of second element is %d.\n", *(arr + 1));
}