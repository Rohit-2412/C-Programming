#include <stdio.h>
// Using for loop
int main()
{
    int num, j, i;
    printf("Enter number : \n");
    scanf("%d", &num);
    for (j = 0, i = 1; i <= 10; i++)
    {
        j = i * num;
        printf("%d * %d = %d\n",num, i ,j );
    }

    return 0;
}