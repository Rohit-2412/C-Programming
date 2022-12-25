#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *arr)
{
    if (*arr)
    {
         reverse(arr+1);
        printf("%c", *arr);
    }
}

int main()
{
    char str[] = "binod";
    reverse(str);

    return 0;
}

// // C program to reverse a string using recursion
// # include <stdio.h>

// /* Function to print reverse of the passed string */
// void reverse(char *str)
// {
// if (*str)
// {
// 	reverse(str+1);
// 	printf("%c", *str);
// }
// }

// /* Driver program to test above function */
// int main()
// {
// char a[] = "Geeks for Geeks";
// reverse(a);
// return 0;
// }
