#include <stdio.h>

int main()
{
    // Reverse Pyramid
    int i, j, rows;
    printf("Enter no. of Rows:\n");
    scanf("%d", &rows);
    printf("\n");
    printf("Printing Reverse Pyramid\n");
    for (i = rows; i > 0; --i)
    {
        {
            for (j = i; j > 0; --j)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    printf("\n");
    printf("Printing Original Pyramid\n");
    printf("\n");
    // Original Pyramid
    for (i = 1; i <= rows; ++i)
    {
        {
            for (j = 1; j <= i; ++j)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
