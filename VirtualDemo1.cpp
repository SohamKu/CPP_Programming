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

int main()
{

    return 0;
}