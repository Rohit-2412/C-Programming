#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Algorithm 
    take 2nd element of array and compare it with 1st element if small then leave it else take that one out(called as value) and make a hole...now place the #value to a its desires place by comparing the value by all elements left of hole....and moving the array elements accordingly!!!
*/

int main()
{
    int array[5] = {1, 5, 7, 8, 6};
    int i;
    int value, j;
    for (int i = 1; i < 5; i++)
    {
        value = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > value)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = value;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}