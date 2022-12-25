#include <stdio.h>

int main()
{
    int num;
    int condition;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {

        if (num % i == 0)
        {
            condition = 1;
            break;
        }
        else

            condition = 2;
    }
    if (condition == 1)
    {
        printf("%d is not a prime number.\n", num);
    }
    if (condition == 2)
    {
        printf("%d is a prime number.\n", num);
    }
    return 0;
}