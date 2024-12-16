
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream dummyFile("Test.txt");
    // dummyFile << "This is a demo file\n";
    // dummyFile << "This is a demo file";
    string s;
    while (getline(cin,s))
    {
        cout <<s<<endl;
        dummyFile << s;
    }
    dummyFile.close();
    string str;
    ifstream readDummyFile("Test.txt");
    while (getline(readDummyFile,str))
    {
        // cout <<s<<end;
        cout<<str<<endl;
    }
    readDummyFile.close();
    return 0;

}

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main() {
//     ofstream dummyFile("Test.txt");
//     dummyFile << "This is a demo file";
//     dummyFile.close();
//     return 0;
// }
