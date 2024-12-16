#include <iostream>
#include <fstream>
// #include<ifstream> // Read
// #include<ofstream> // Write/ Create

using namespace std;

int main()
{

    // Create and write
    ofstream DummyFile("file.txt"); // Creation
    string s;
    while (getline(cin, s))
    {
        DummyFile << s + "\n";
    }
    // DummyFile << "This is just a demo line \n"; // Writing
    // DummyFile << "This is just a demo line \n"; // Writing
    // DummyFile << "This is just a Kuch bhi line"; // Writing
    DummyFile.close(); // Closing
    string str;

    // Open file
    ifstream ReadDummyFile("file.txt");
    while (getline(ReadDummyFile, str))
    {
        cout << str << endl;
    }
    ReadDummyFile.close();
    return 0;
}
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    vector<int> expression = {'3', '4', '+', '2', '*', '7', '/'};
    stack<int> st;
    for (int i = 0; i < expression.size(); i++)
    {
        if (expression[i] - '0' <= 9 && expression[i] - '0' >= 0) // check number hai ya nhi
        {
            st.push(expression[i] - '0');
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            cout << " a " << a << " b " << b << endl;
            st.pop();
            if (expression[i] == '+')
            {
                st.push(b + a);
            }
            else if (expression[i] == '-')
            {
                st.push(b - a);
            }
            else if (expression[i] == '*')
            {
                st.push(b * a);
            }
            else
            {
                st.push(b / a);
            }
        }
    }
    if (!st.empty())
        cout << st.top() << endl;

    // Regular Expression -> Polish notation/ Reverse Polish Notation

    // A+B //Infix Expression
    // AB+ //Reverse Polish Notaion -> Represation of Regular Expression -> PostFix Expression
    // +AB // Polish Notation -> Prefix

    // 3 4 + 2 * 7 /
    return 0;
}