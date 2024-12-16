#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin >> age;
    // if (age>=18)
    // {
    //     cout << "You are Adult" <<endl;
    // }
    // else
    // {
    //     cout << "You are not Adult" << endl;
    // }
    // lets Use ternary oprator
    cout << (age >= 18 ? "You are Adult" : "You are not Adult") << endl;
    return 0;
}
