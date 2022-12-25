#include <stdio.h>

int main()
{
int terms;
float sum=0;
float j;
printf("Enter the no. of terms :");
scanf("%d", &terms);
printf("The series is : \n");
for (int i = 1; i <= terms; i++)
{
    printf("1/%d  ", i);
    sum+=1/(float)i;
}
printf("\n");
printf("The sum of harmonic series upto %d terms is %f ",terms, sum);
return 0;

}