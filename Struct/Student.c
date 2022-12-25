#include <stdio.h>

typedef struct stduentRecord
{
    char *name;
    int age;
    int roll_number;
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
    float percentage;
} record;

void display(record r)
{
    static int i = 1;
    printf("Name of student %d is %s\n", i, r.name);
    printf("Marks of Student %d in Subject 1 is %d\n", i, r.marks1);
    printf("Marks of Student %d in Subject 2 is %d\n", i, r.marks2);
    printf("Marks of Student %d in Subject 3 is %d\n", i, r.marks3);
    printf("Marks of Student %d in Subject 4 is %d\n", i, r.marks4);
    printf("Marks of Student %d in Subject 5 is %d\n", i, r.marks5);
    printf("Percentage of student %d is %f\n", i, r.percentage);
    i++;
}
int main()
{
    int num;
    printf("Enter number of students : ");
    scanf("%d", &num);
    record data[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter Name of Student %d : ", i + 1);
        scanf("%s", &data[i].name);

        printf("Enter Age of Student %d : ", i + 1);
        scanf("%d", &data[i].age);

        printf("Enter Student %d Marks in Subject 1 : ", i + 1);
        scanf("%d", &data[i].marks1);

        printf("Enter Student %d Marks in Subject 2 : ", i + 1);
        scanf("%d", &data[i].marks2);

        printf("Enter Student %d Marks in Subject 3 : ", i + 1);
        scanf("%d", &data[i].marks3);

        printf("Enter Student %d Marks in Subject 4 : ", i + 1);
        scanf("%d", &data[i].marks4);

        printf("Enter Student %d Marks in Subject 5 : ", i + 1);
        scanf("%d", &data[i].marks5);

        data[i].percentage = (data[i].marks1 + data[i].marks2 + data[i].marks3 + data[i].marks4 + data[i].marks5) / 5.0;
    }

    for (int i = 0; i < num; i++)
    {
        printf("Displaying Record for Student %d %s\n", i + 1, data[i].name);
        display(data[i]);
    }

    return 0;
}