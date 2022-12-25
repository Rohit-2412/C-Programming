#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encryption(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            str[i] += i+10;
        }
    }
}
void decryption(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            str[i] -= i+10;
        }
    }
}
int main()
{
    char str[] = "This is a Secret Message!";
    printf("%s\n", str);
    encryption(str);
    encryption(str);
    printf("%s\n", str);
    decryption(str);
    decryption(str);
    printf("%s\n", str);

    return 0;
}