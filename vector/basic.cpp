#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    int n;
    cin >> n;
    vector<int> arr;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    arr.pop_back();
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
