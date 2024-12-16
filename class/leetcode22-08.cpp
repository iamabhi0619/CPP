#include <bits/stdc++.h>
using namespace std;
int missing_number(int *arr, int k, int n)
{
    int missingNumbers = 0;
    int i = 0;
    int now = 1;
    while (missingNumbers < k)
    {
        if (i < n && arr[i] == now)
        {
            i++;
        }
        else
        {
            missingNumbers++;
            if (missingNumbers == k)
            {
                return now;
            }
        }
        now++;
    }
}
int main()
{
    int arr[] = {2, 3, 4, 7, 11};
    int k = 5;
    int size = sizeof(arr) / sizeof(int);
    int number = missing_number(arr, k, size);
    cout << number;
    return 0;
}
