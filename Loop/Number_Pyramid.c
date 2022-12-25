#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    printf("\n");
    int count = 0;
    for (i = 1; i <= rows; ++i)
    {
        {
            for (j = 1; j <= i; ++j)
            {
                printf("%d ", count);
                count++;
            }
            printf("\n");
        }
    }

    return 0;
}