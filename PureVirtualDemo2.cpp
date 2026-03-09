#include<iostream>
using namespace std;

# pragma pack(1)
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

     int Subtraction(int A, int B)           // Concrete
    {
        return A - B;
    }

     int Multiplication(int A, int B)           // Concrete
    {
        return A * B;
    }

};


int main()
{  
   Base *bp = new Derived();     // upcasting
   
   int iRet = 0;

   iRet = bp->Addition(10,11);
   iRet = bp->Subtraction(11,10);
   iRet = bp->Multiplication(10,11);
   
    return 0;
}