#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// matrix[row][cols]
int main()
{
    // char str[10][10] = {{'a', 'b', 'c', 'd', 'e'}, {'A', 'B', 'C', 'D', 'E'}};
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         printf("%c  ", str[i][j]);
    //     }
    //     printf("\n");
    // }
    char **ptr = (char **)malloc(sizeof(char) * 10);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%c", &ptr[i][j]);
            getchar();
        }
    }
    ////////////////////////////////
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c", ptr[i][j]);
        }
        printf("\n");
    }
    free(ptr);
    return 0;
}