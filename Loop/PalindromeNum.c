#include <stdio.h>
int palindrome(int num)
{
    int reverse = 0;
    int remainder = 0;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = (reverse * 10) + remainder;
        num = num / 10;
    }
    return reverse;
}

int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);
    num == palindrome(num) ? (printf("Palindrome Number\n")) : (printf("Not a Palindrome Number\n")); // Conditional Operator
    // printf("Reversed number is %d", palindrome(num));

    return 0;
}