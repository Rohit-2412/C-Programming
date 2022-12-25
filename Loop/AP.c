#include <stdio.h>
int main()
// Program to print AP
{
    int first_term, common_diff, terms;

    printf("Enter the first term : \n");
    scanf("%d", &first_term);
    printf("Enter the common differnce : \n");
    scanf("%d", &common_diff);
    printf("Enter the no. of Terms : \n");
    scanf("%d", &terms);
    int i = 0;
    printf("Series is as follows : \n");
    do
    {
        printf("%d, ", first_term + common_diff * i);
        i++;

    } while (i <= terms);
}