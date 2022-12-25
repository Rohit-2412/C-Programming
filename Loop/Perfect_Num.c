/* Program to find perfect number
Perfect number is a number whose sum of divisors is equal to the number
    E.g. Divisors of 28=1,2,4,7,14
    sum of 1 2 4 7 14=28 
*/
#include <stdio.h>
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
        printf("%d is a perfect number \n", num);
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

    for (int i = num1; i <= num2; i++)
    {
        perfectnum(i);
    }

    return 0;
}