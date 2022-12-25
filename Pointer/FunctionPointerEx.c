#include <stdio.h>
#include <math.h>
float Edistance(float a1, float b1, float a2, float b2)
{
    return sqrt(pow((a1 - a2), 2) + pow((b1 - b2), 2));
}
float areaOfCircle(float (*fptr)(float, float, float, float), float a1, float b1, float a2, float b2) // declaring all values that func will take
{
    printf("Hello User\nRadius of your Circle is %.3f\nArea of circle is PI * r^2 = %.3f\n", fptr(a1, b1, a2, b2), M_PI * pow(fptr(a1, b1, a2, b2), 2));
    // calling callback func with values
}
int main()
{
    float x1;
    printf("Enter x1 : ");
    scanf("%f", &x1);
    float y1;
    printf("Enter y1 : ");
    scanf("%f", &y1);
    float x2;
    printf("Enter x2 : ");
    scanf("%f", &x2);
    float y2;
    printf("Enter y2 : ");
    scanf("%f", &y2);
    float (*functionPointer)(float, float, float, float); // fun ptr declaration
    functionPointer = Edistance;                          // initialising ptr to a func
    areaOfCircle(functionPointer, x1, y1, x2, y2);        // calling a func(which will call other func)
    return 0;
}