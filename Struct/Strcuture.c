#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    int roll_number;
    char name;
} rohit, neetu, abhi;

int main()
{
    rohit.id = 1;
    neetu.id = 1;
    abhi.id = 1;

    rohit.marks = 25;
    neetu.marks = 20;
    abhi.marks = 15;

    rohit.roll_number = 1;
    neetu.roll_number = 3;
    abhi.roll_number = 5;

    printf("Rohit got %d marks\n", rohit.marks);
    printf("Abhi got %d marks\n", abhi.marks);
    printf("Neetu got %d marks\n", neetu.marks);
    return 0;
}