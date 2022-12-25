#include <stdio.h>
typedef struct student
{
    char name[20];
    int roll_no;
    int marks;
} student;

int main()
{
    int num;
    printf("Enter number of students : ");
    scanf("%d", &num);
    student info[num]; //it means we have created an array with name "info" containing struct
    for (int i = 0; i < num; i++)
    {
        scanf("%s", &info[i].name);
        scanf("%d", &info[i].roll_no);
        scanf("%d", &info[i].marks);
    }
    for (int i = 0; i < num; i++)
    {
        printf("%s %d %d\n",info[i].name,info[i].roll_no,info[i].marks);
    }
    

    return 0;
}