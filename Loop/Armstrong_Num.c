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
    int num;
    printf("Enter your Number : ");
    scanf("%d", &num);
    int sum = 0;
    printf("Sum is : %d\n", armstrongNum(num));
    num == armstrongNum(num) ? (printf("Given number is a Armstrong Number.\n")) : (printf("Given number is not a Armstrong Number.\n"));

    return 0;
}