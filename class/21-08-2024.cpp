#include <iostream>
using namespace std;

// int main()
// {
// // int arr[10];
// // int n = sizeof(arr)/sizeof(arr[0]);
// // for(int i=0;i<n;i++)
// // {
// // cout<<arr[i]<<endl;
// // }
// int arr[n];
// // int temp;
// for(int i=0;i<10;i++){
// cin>>arr[i];
// // arr[i] = temp;
// }
// // arr[10] = 100;
// for(int i=0;i<10;i++)
// {
// cout<<&arr[i]<<endl;
// }
// // index - 0 Based -> array
// // for(int i=startIndex;i<=endIndex;i++)
// // {
// // cout<<arr[i];
// // }
// // cout<<arr[8]<<endl;
// ///

// return 0;
// }

// Linear Search - TC = O(n)
int getElementIndex(int searchVal, int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchVal)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 10;
    int etd = 15;
    // pseudo code - VVI
    // Step 1 : Find the Element - P/A
    // If Absent - Do nothing
    // If Present - All elements after this element needs to be shifted
    // By one index towards the left

    int index = getElementIndex(etd, arr, n);
    if (index == -1)
    {
        cout << "Element Absent in the array " << etd << endl;
    }
    else
    {
        for (int i = index + 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        n--;
    }
    if (index != -1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }
    }
    return 0;
}
int size;
cin >> size;
int *arr = new int[size]