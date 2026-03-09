#include<iostream>
using namespace std;

class Base
{
    public :
       int i,j;

       void fun()
       {
        cout<<"Inside Base fun\n";
       }

       void gun()
       {
        cout<<"Inside Base gun\n";
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

    cout<<"Size of bobj : "<<sizeof(bobj)<<"\n";
    cout<<"Size of dobj : "<<sizeof(dobj)<<"\n";

    return 0;
}