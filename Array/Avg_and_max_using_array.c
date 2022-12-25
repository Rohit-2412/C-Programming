#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number of students : \n");
    scanf("%d", &number);
    int marks[number];
    int sum = 0;
    int max=0;
    float average;
    for (int i = 0; i < number; i++)
    {
        printf("Enter Marks of student %d : ", i + 1);
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
        if (marks[i]>=max)
        {
            max=marks[i];
        }
        
    }
    printf("Average marks of %d students is : %d\n", number,sum / number);
    printf("Total marks of %d students is : %d\n", number, sum );
    printf("Highest marks is : %d", max);

    return 0;
}