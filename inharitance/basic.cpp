#include <iostream>
using namespace std;
class A{
    public:
    int dataA = 10;
};
class B:public A{
    public:
    int dataB = 20;
    void print(){
        cout << dataA << dataB << endl;
    }
};
int main()
{
    B bobj;
    bobj.print();
    return 0;
}
