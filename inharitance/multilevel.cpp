#include <iostream>
using namespace std;

class A1{
    public:
    A1(){
        cout << "Hey i am level 1 class..!!" << endl;
    }
    void func(){
        cout << "Hey class A function called" << endl;
    }
};
class B2: public virtual A1{
    public:
    B2(){
        cout << "Hey i am level 2 class..!!" << endl;
    }
};
class C3: public virtual A1{
    public:
    C3(){
        cout << "Hey i am level 3 class..!!" << endl;
    }
    ~C3(){
        
    }
};

class D4: public B2, public C3{
    public:
    D4(){
        cout << "Hey i am level 4 class..!!" << endl;
    }
    void dimond(){
        A1::func();
    }
};

int main()
{
    D4 dobj;
    dobj.dimond();
    return 0;
}
