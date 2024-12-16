// ofstream dummyFile("Test.txt");
//     dummyFile << "This is a demo file\n";
//     dummyFile << "This is a demo file";
//     dummyFile.close();

#include <iostream>
#include<fstream>
// #include<ifstream> // Read
// #include<ofstream> // Write/ Create

using namespace std;


int main()
{

// Create and write
// ofstream DummyFile("file.txt"); // Creation
// string s;
// while(getline(cin,s))
// {
// DummyFile << s+"\n";
// }
// // DummyFile << "This is just a demo line \n"; // Writing
// // DummyFile << "This is just a demo line \n"; // Writing
// // DummyFile << "This is just a Kuch bhi line"; // Writing
// DummyFile.close(); // Closing
// string str;

// // Open file
// ifstream ReadDummyFile("file.txt");
// while(getline(ReadDummyFile,str))
// {
// cout<<str<<endl;
// }
// ReadDummyFile.close();

// fstream_object objectname("file name",mode); // in-> read | out-> overwrite | app -> append

ofstream OpenFile("file.txt",ios::out);

if(OpenFile.is_open())
{
cout<<"file successfully open"<<endl;
OpenFile << "I have added this line in the file \n";
OpenFile.close();
cout<<"File has been appended with changes"<<endl;
}
else
{
cout<<"Error in opening file"<<endl;
}





return 0;
}

// fstream // file operations
// iostream // input output