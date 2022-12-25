#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// functions for file io
/*
fputc
fgetc
fputs
fgets
*/
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("text.txt", "r+");
    // to add a char (clears the file)
    // fputc('c', ptr);

    //to add string (clear the file)
    // fputs("sample text",ptr);

    //to print a char
    
    char c = fgetc(ptr);
    printf("this is a char :%c\n", c);
    c = fgetc(ptr);
    printf("this is a char :%c\n", c);
    c = fgetc(ptr);
    printf("this is a char :%c\n", c);
    c = fgetc(ptr);
    printf("this is a char :%c\n", c);
    c = fgetc(ptr);
    printf("this is a char :%c\n", c);
    

    // to print a string
    /*
    char str[50];
    fgets(str, 11, ptr);
    printf("%s ", str);
    */

    fclose(ptr);
    return 0;
}
