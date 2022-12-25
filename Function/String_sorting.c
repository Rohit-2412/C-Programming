#include <stdio.h>
#include <string.h>
// based on 3 diff parameters
#define no_of_string 3
void swap(char *str1, char *str2)
{
    char temp[30];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
int main()
{
    char array[no_of_string][30] = {"apple", "all", "aaabcdfaaaa"};
    //before sorting printing
    for (int i = 0; i < no_of_string; i++)
    {
        printf("%s\n", array[i]);
    }
    //sorting ----------
    //based on alphabetical order
    char temp[30];

    // for (int i = 0; i < no_of_string; i++)
    // {
    //     for (int j = 0; j < no_of_string - 1; j++)
    //     {
    //         if (strcmp(array[j], array[j + 1]) > 0)
    //         {
    //             //swap elements
    // //             // strcpy(temp, array[j]);
    // //             // strcpy(array[j], array[j + 1]);
    // //             // strcpy(array[j + 1], temp);
    //
    //             swap(array[j],array[j+1]);  //function calling for swap
    //         }
    //     }
    // }

    // // based on length
    // for (int i = 0; i < no_of_string; i++)
    // {
    //     for (int j = 0; j < no_of_string - 1; j++)
    //     {
    //         if (strlen(array[j]) > strlen(array[j + 1]))
    //         {
    //             swap(array[j], array[j + 1]);
    //         }
    //     }
    // }

    // sorting upon distinct characters
    for (int i = 0; i < no_of_string; i++)
    {
        for (int j = 0; j < no_of_string - 1; j++)
        {
            if (strncmp(array[j], array[j + 1], 30) > 1)
            {
                swap(array[j], array[j + 1]);
            }
        }
    }

    // after sorting printing
    printf("------------------------\n");
    for (int i = 0; i < no_of_string; i++)
    {
        printf("%s\n", array[i]);
    }
    return 0;
}