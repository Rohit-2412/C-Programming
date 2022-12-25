#include <stdio.h>

int main()
{
    int terms;
    int sum_square = 0;
    int sum_cube = 0;
    printf("Enter the number of terms : \n");
    scanf("%d", &terms);
    printf("The series is : \n");
    int j, k;
    for (int i = 1; i <= terms; i++)
    {
        j = i * i;
        printf("%d ", j);
        sum_square += j;
    }

    printf("\nSum of the series with %d terms is : %d\n", terms, sum_square);

    for (int a = 1; a < terms; a++)
    {
        k = a * a * a;
        printf("%d ", k);
        sum_cube += k;
    }
    printf("\nSum of the series with %d terms is : %d", terms, sum_cube);

    return 0;
}