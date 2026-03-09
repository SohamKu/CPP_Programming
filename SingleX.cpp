#include<iostream>
using namespace std;

class Base  // 8
{
    public :
       int i,j;

       void fun()
       {
        cout<<"Inside Base fun\n";
       }

       void gun()
       {
        cout<<"Inside Derived gun\n";
       }
};

class Derived : public Base
{
    public : int X;
};

int main()
{
    Base bobj;
    Derived dobj;

    bobj.fun();
    
    dobj.fun();
    dobj.gun();

    return 0;
}