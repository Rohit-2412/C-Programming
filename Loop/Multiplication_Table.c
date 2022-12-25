#include <stdio.h>
// Using do while loop
int main()
{
    int num, i = 1, j;
    printf("Enter a Number you want multiplication of:");
    scanf("%d", &num);
    printf("Your Multiplication table for %d is as follows:\n", num);
    do
    {
        j = num * i;
        printf("%-3d  *%3d  = %5d \n", num, i, j);
        i += 1;

    } while (i <= 10);

    return 0;
}