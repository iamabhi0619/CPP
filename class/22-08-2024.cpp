/ Online C++ compiler to run C++ program online
#include <iostream>
    using namespace std;
// inline int area(int s)
// {
// return s*s;
// }

// Inline Functions
// Inline functions diff from non inline (Normal) Functions by how the compiler handles it

// inline return-type function-name(parameters)
// {
// // function code
// }

// Non Inline Functions

// Normal functions

// Static Member Variable

static int count = 1; // Initializes only once
void justPrintIt()
{

    cout << count << endl;

    count *= 2;
}

int main()
{

    for (int i = 0; i < 10; i++)
    {
        justPrintIt();
    }
    return 0;
}

// Compiler :

// global :
// count = 2;

// Static Functions

/ Binary Search

    int
    main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int s = 0;
    int e = sizeof(arr) / sizeof(arr[0]) - 1;
    int etd = 8;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == etd)
        {
            cout << "found at " << mid << endl;
            break;
        }
        else if (arr[mid] < etd)
        {
            // in ascending -> left wale ko ignore karo
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return 0;
}