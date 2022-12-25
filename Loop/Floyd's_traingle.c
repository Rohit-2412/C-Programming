#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter number of rows :");
    scanf("%d", &rows);

    int i, j, count = 1;
    for (i = 1; i <= rows; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (count % 2 != 0)
            {
                printf("1");
            }
            if (count % 2 == 0)
            {
                printf("0");
            }
            count++;
        }
        printf("\n");
    }
}
