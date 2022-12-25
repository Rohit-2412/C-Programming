#include <stdio.h>
/* Sum of this Series :
9   99  999    9999    99999   999999   ...............
*/
int main()
{
    int terms; 
    long long t=9;
    printf("Input the number of terms : ");
    scanf("%d", &terms);
    int j;
    long long sum;
    printf("\nThe series is : ");
    for (int i = 1; i <= terms; i++)
    {
        printf("%lld  ", t);
        sum+=t;
        t=10*t+9;
    }
    printf("The sum of this series is : %lld", sum);
    
    return 0;
}