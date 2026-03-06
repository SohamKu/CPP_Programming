#include<iostream>
using namespace std;

class arithmetic
{
  public:
   int iNo1;
   int iNo2;
  
    arithmetic()
    {
        iNo1 = 0;
        iNo2 = 0;
    }

    arithmetic(int A,int B)
    {
        iNo1 = A;
        iNo2 = B;
    }

    int addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }

     int subtraction()
    {
        int iAns = 0;
        iAns = iNo1 - iNo2;
        return iAns;
    }

};

int main()
{
  arithmetic aobj1(11,10);

  int iRet = 0;

  iRet = aobj1.addition();
  cout<<"Addition is :"<<iRet<<"\n";
  
  iRet = aobj1.subtraction();
  cout<<"Subtraction is :"<<iRet<<"\n";

    return 0;
}
