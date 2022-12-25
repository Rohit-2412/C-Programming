/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/
#include <stdio.h>
#include <string.h>
struct agency
{
    char name[15];
    char driving_license_info[20];
    char route[50];
    int kms;
} driver1, driver2, driver3;
int main()
{
    printf("Welcome to My Travel Agency!\n");

    printf("Enter Your name : ");
    scanf("%s", driver1.name);
    printf("Enter Driving License Info : ");
    scanf("%s", &driver1.driving_license_info);
    printf("Enter route : ");
    scanf("%s", &driver1.route);
    printf("Enter kilomters you have travlled :");
    scanf("%d", &driver1.kms);
    printf("\n");

    printf("Enter Your name : ");
    scanf("%s", driver2.name);
    printf("Enter Driving License Info : ");
    scanf("%s", &driver2.driving_license_info);
    printf("Enter route : ");
    scanf("%s", &driver2.route);
    printf("Enter kilomters you have travlled :");
    scanf("%d", &driver2.kms);
    printf("\n");

    printf("Enter Your name : ");
    scanf("%s", driver3.name);
    printf("Enter Driving License Info : ");
    scanf("%s", &driver3.driving_license_info);
    printf("Enter route : ");
    scanf("%s", &driver3.route);
    printf("Enter kilomters you have travlled :");
    scanf("%d", &driver3.kms);
    printf("\n");

    printf("The details of Driver 1(%s) is as follows ---\nName : %s\nDriving License info : %s\nRoute : %s\nKilomters travlled :%d\n", driver1.name, driver1.name, driver1.driving_license_info, driver1.route, driver1.kms);

    printf("The details of Driver 1(%s) is as follows ---\nName : %s\nDriving License info : %s\nRoute : %s\nKilomters travlled :%d\n", driver2.name, driver2.name, driver2.driving_license_info, driver2.route, driver2.kms);

    printf("The details of Driver 1(%s) is as follows ---\nName : %s\nDriving License info : %s\nRoute : %s\nKilomters travlled :%d\n", driver3.name, driver3.name, driver3.driving_license_info, driver3.route, driver3.kms);

    printf("Thank You !!!");

    return 0;
}