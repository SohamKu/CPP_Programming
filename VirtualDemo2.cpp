#include<iostream>
using namespace std;

class Base
{
    public :
       int i, j;

       int Addition(int A, int B)
       {
         return A + B;
       }

       virtual int Subtraction(int A, int B)=0;
             
};

class Derived : public Base
{
    int Subtraction(int A, int B)     // Error
       {
        
       }

       int Multiplication(int A, int B)
       {
         return A * B;
       }
};

int main()
{
    Base bp = new Derived();

    return 0;
}