#include <stdio.h>
int func(int *x, int *y)
{
    int temp;
    temp = *x + *y;
    *y = *x - *y;
    *x = temp;
    printf("The value of first number(Sum of first and second) is %d\n", *x);
    printf("The value of second number(Subtraction of first and second) is %d\n", *y);
}
int main()
{
    int a, b;
    printf("Enter first number : \n");
    scanf("%d", &a);
    printf("Enter the second number : \n");
    scanf("%d", &b);
    printf("The value of first and second number is %d and %d.\n", a, b);
    printf("\nFunction is being called...\n\n");
    func(&a, &b);
    return 0;
}