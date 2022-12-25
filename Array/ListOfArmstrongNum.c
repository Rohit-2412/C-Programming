#include <stdio.h>

int no_of_digits(int num)
{
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}
int power(int base, int index)
{
    int j = 1;
    for (int i = 1; i <= index; i++)
    {
        j *= base;
    }
    return j;
}
int armstrongNum(int num)
{
    int occ = no_of_digits(num);
    int j = 0;
    int sum = 0;
    for (int i = 1; i <= occ; i++)
    {
        j = num % 10;
        sum = sum + power(j, occ);
        num = num / 10;
    }
    return sum;
}

int main()
{
    int num1;
    printf("Enter 1st digit : ");
    scanf("%d", &num1);
    int num2;
    printf("Enter 2nd digit : ");
    scanf("%d", &num2);
    for (long long unsigned int i = num1; i <= num2; i++)
    {
        if (i == armstrongNum(i))
        {
            printf("%llu   ", i);
        }
    }
    return 0;
}