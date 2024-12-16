#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout << "Enter your Age= ";
    cin >> age;
    /*
    if(age<18){
        cout << "Not eligible for job" << endl;
    }
    else if(age>=18 && age<=57){
        if(age<=54){
            cout << "Eligible for job" << endl;
        }
        else{
            cout << "Eligible for job, but retirement soon" << endl;
        }
    }
    else{
        cout << "Retirement time" << endl;
    }
    */
    // using ternary oprator
    string message = (age < 18) ? "Not eligible for job" : 
    (age >= 18 && age <= 57) ? (age <= 54) ? "Eligible for job" : "Eligible for job, but retirement soon"
    : "Retirement time";

    cout << message << endl;
    return 0;
}