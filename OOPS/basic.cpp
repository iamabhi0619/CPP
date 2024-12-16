#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int age;
    char gender;

    void printInfo()
    {
        cout << "Entered Name:- " << name << endl;
        cout << "Entered Age:- " << age << endl;
        cout << "Entered Gender:- " << gender << endl;
    }
};
int main()
{

    // student a;//INSTANCE
    // a.name = "Abhishek Kumar";
    // a.age = 19;
    // a.gender = 'M';

    // a.printInfo();

    // Array of class instance

    student stud[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Name= ";
        cin >> stud[i].name;
        cout << "Age= ";
        cin >> stud[i].age;
        cout << "Gender (M/F)= ";
        cin >> stud[i].gender;
    }
    int flag = 1;
     while (flag) {
        int c;
        cout << "Enter the number (1-3) of the student whose data you want to see (or 0 to exit): ";
        cin >> c;

        if (c == 0) {
            flag = 0;
        } else if (c > 0 && c <= 3) {
            stud[c - 1].printInfo();
        } else {
            cout << "Invalid input. Please enter a number between 0 and 3." << endl;
        }
    }
    return 0;
}
