#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define nl printf("\n")
int reverse(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}
int main()
{

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("reverse : %d\n", reverse(num));

    return 0;
}