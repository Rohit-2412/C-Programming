#include <stdio.h>

int multiply(int firstnum, int secondnum)
{

    // If second number is zero then the product is zero.

    if (secondnum == 0)
    {
        return 0;
    }
    else
    {
        // Add first num, until second num is equal to zero.
        return (firstnum + multiply(firstnum, secondnum - 1));
    }
}

int main()
{

    int firstnum, secondnum, prod;

    printf("Enter two numbers \n");
    scanf("%d %d", &firstnum, &secondnum);

    // Function call
    prod = multiply(firstnum, secondnum);

    printf("Multiplication of two numbers is %d", prod);
    return 0;
}