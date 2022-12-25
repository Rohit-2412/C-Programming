#include <stdio.h>
int lcm(int num1, int num2)
{
    int max;
    max = (num1 > num2) ? num1 : num2;
    while (1)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            break;
        }
        max++;
    }
    return max;
}
int hcf(int num1, int num2)
{
    int max;
    max = (num1 > num2) ? num1 : num2;

    while (1)
    {
        if (num1 % max == 0 && num2 % max == 0)
        {
            break;
        }
        max--;
    }
    return max;
}

int main()
{
    int num1, num2;
    printf("Enter first number : \n");
    scanf("%d", &num1);
    printf("Enter second number : \n");
    scanf("%d", &num2);
    printf("The LCM of %d and %d is %d .\n", num1, num2, lcm(num1, num2));
    printf("The HCF of %d and %d is %d .\n", num1, num2, hcf(num1, num2));
    return 0;
}