#include<iostream>
using namespace std;

class Base
{
    public :
           int i,j;
        int Addition(int A, int B)           // Concrete
    {
        return A + B;
    }

    virtual Subtraction(int A, int B)=0;   // Abstract
           
};

#pragma pack(1)
class Derived : public Base       // ERROR
{ 
    public :
    
    int X;


};

int main()
{
    Base *bp = new Derived();     // upcasting
    
    return 0;
}