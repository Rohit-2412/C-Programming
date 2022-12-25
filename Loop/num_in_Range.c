#include <stdio.h>
#include <math.h>
void primenum(int num)
{
    int count = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count = 1;
            break;
        }
        else
            count = 2;
    }
    if (count == 2)
    {
        printf("%d  ", num);
    }
}

void perfectnum(int num)
{

    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("%d  ", num);
    }
}

void perfectSqr(int num)

{

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            if (i * i == num)
            {
                printf("%d  ", num);
            }
        }
    }
}

void perfectCube(int num)

{

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            if (i * i * i == num)
            {
                printf("%d  ", num);
            }
        }
    }
}

int main()
{
    int num1;
    printf("Enter the first number :");
    scanf("%d", &num1);
    int num2;
    printf("Enter the second number :");
    scanf("%d", &num2);
    int choice;

    printf("Enter 1 for Prime numbers \n      2 for Perfect numbers \n      3 for Perfect Squares \n      4 for Perfect cubes\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Printing List of Prime Numbers!!!\n");

        for (int i = num1; i <= num2; i++)
        {
            primenum(i);
        }
        break;

    case 2:
        printf("Printing List of Perfect Numbers!!!\n");

        for (int j = num1; j <= num2; j++)
        {
            perfectnum(j);
        }
        break;
    case 3:
        printf("Printing List of Perfect Squares!!!\n");

        for (int k = num1; k <= num2; k++)
        {
            perfectSqr(k);
        }
        break;

    case 4:
        printf("Printing List of Perfect Cubes!!!\n");

        for (int l = num1; l <= num2; l++)
        {
            perfectCube(l);
        }
        break;

    default:
        printf("Choose a correct option!!! \n");
        break;
    }

    return 0;
}