// You are using GCC
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n<=0){
        cout << "Size should be positive";
        return -1;
    }
    int *arr = new int[n];
    
    for(int i=0 ; i<n; i++){
        cin >> arr[i];
    }
    cout << "Original Array: ";
    for(int i=0 ; i<n; i++){
        cout << arr[i];
    }
    cout << endl << "Reversed Array: ";
    for(int i=n-1 ; i>=0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
    // for(int i=0 ; i<n; i++){
    //     cin >> *arr[i];
    // }
    delete[] arr;
    return 0;
}