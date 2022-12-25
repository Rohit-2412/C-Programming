#include <stdio.h>

int Sum(int arr[], int n)
{
    if (n == 1 || n == 0)
    {
        return arr[0];
    }
    // int ans = 0;
    // ans += arr[n];
    else
    {
        return arr[n - 1] + Sum(arr, n - 1);
    }
}


int main()
{
    // // finding sum of arrays elements using recursion
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    // cout << Sum(arr, n) << endl;

    return 0;
}
