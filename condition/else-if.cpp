#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cout << "Enter The marks of the student= ";
    cin >> marks;
    char grade;
    /*if (marks < 25)
        grade = 'F';
    else if (marks >= 25 && marks <= 44)
        grade = 'E';
    else if (marks >= 45 && marks <= 49)
        grade = 'D';
    else if (marks >= 50 && marks <= 59)
        grade = 'C';
    else if (marks >= 60 && marks <= 79)
        grade = 'B';
    else if (marks >= 80 && marks <= 100)
        grade = 'A';
    cout << "Grade of the student:- " << grade << endl; */
    // lets do it with ternery oprater
    grade = (marks < 25) ? 'F'
            : (marks >= 25 && marks <= 44)  ? 'E'
            : (marks >= 45 && marks <= 49)  ? 'D'
            : (marks >= 50 && marks <= 59)  ? 'C'
            : (marks >= 60 && marks <= 79)  ? 'B'
            : (marks >= 80 && marks <= 100) ? 'A' : '0';
    cout << "Grade of the student:- " << grade << endl;
    return 0;
}
