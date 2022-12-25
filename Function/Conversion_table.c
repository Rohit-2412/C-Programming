#include <stdio.h>
int main()
{
    float kmsToMiles = 0.621;
    float inchesToFoot = 0.0833;
    float cmsToInches = 0.394;
    float poundTokgs = 0.454;
    float inchesToMeters = 0.0254;
    float first;
    float second;
    char input;
    while (1)
    {
        printf("Welcome to unit conersion !\nChoose a option or Press Q to quit.\nEnter 1 for kms to miles\nEnter 2 for inches to foot\nEnter 3 for cms to inches\nEnter 5 for inches to meters\nEnter 4 for pound to kgs\n");
        scanf("%c", &input);

        switch (input)
        {
        case ('q' || 'Q'):
            printf("Quitting the program...");
            goto end;
        case '1':
        {
            printf("Enter the quantity in terms of first unit : \n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%.2f kms is equal to %.2f miles", first, second);
            break;
        }
        case '2':
        {
            printf("Enter the quantity in terms of first unit : \n");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%.2f inches is equal to %.2f foot", first, second);
            break;
        }

        case '3':
        {
            printf("Enter the quantity in terms of first unit : \n");
            scanf("%f", &first);
            second = first * cmsToInches;
            printf("%.2f cms is equal to %.2f inches", first, second);
            break;
        }

        case '4':
        {
            printf("Enter the quantity in terms of first unit : \n");
            scanf("%f", &first);
            second = first * poundTokgs;
            printf("%.2f pound is equal to %.2f kgs", first, second);
            break;
        }

        case '5':
        {
            printf("Enter the quantity in terms of first unit : \n");
            scanf("%f", &first);
            second = first * inchesToMeters;
            printf("%.2f inches is equal to %.2f meters", first, second);
            break;
        }

        default:
            break;
        }
    end:
        return 0;
    }
}
