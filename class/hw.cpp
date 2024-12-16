#include <bits/stdc++.h>
using namespace std;
int findindex(int ele, int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        // cout << "Liner Serch..!!" << endl;
        if (arr[i] == ele)
        {
            return i;
        }
    }
    cout << "No Element To Remove Now..!!" << endl;
    return -1;
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 5, 10};
    int n = 11;
    int flag = 1;
    int elementToFind = 12;
    int index = findindex(elementToFind, arr, n);
    while (index != -1)
    {
        // cout << "Coding...." << endl;
        for (int i = index + 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        n--;
        index = findindex(elementToFind, arr, n);
    }
    cout << "Final Array:- ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
