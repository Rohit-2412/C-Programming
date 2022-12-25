#include <stdio.h>

// Using recursion

int fibonacci_recursive(int num)
{
    if (num == 1 || num == 2)
        return num - 1;
    else
    {
        return fibonacci_recursive(num - 1) + fibonacci_recursive(num - 2);
    }
}

// Using Iteration

int fibonacci_iterative(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}

int main()
{
    int number;
    printf("Enter the index to get Fibonacci series : ");
    scanf("%d", &number);
    printf("The value of Fibonacci series using Iteration at index %d is %d\n", number, fibonacci_iterative(number));
    printf("The value of Fibonacci series using Recursion at index %d is %d\n", number, fibonacci_recursive(number));
    return 0;
}