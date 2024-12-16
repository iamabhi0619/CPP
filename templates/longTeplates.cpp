#include <iostream>
using namespace std;
// template <typename T> 
template <typename T1, typename T2>
// class Box {
//   D data;
//   public :
  
//     Box(D d)
//     {
//       data = d;
//     }
//     void print()
//     {
//       cout<<data<<endl;
//     }
  
// };
T2 add(T1 a, T2 b)
{
  return a+b;
}
int main() 
{
  cout<<add(2,5.2)<<endl;
  // cout<<add((string)"shubham ",(string)"jain")<<endl;
  // cout<<add(2.2,5.7)<<endl;
    cout << "Hello, World!";
    
    // Box<int>b(5);
    // b.print();
    // Box<string>name("Shubham Jain");
    // name.print();
    
    return 0;
}

// templates - generic programming


