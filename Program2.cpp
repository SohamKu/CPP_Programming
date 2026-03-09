#include<iostream>
using namespace std;

class Arithmetic
{
    public :
    int iNo1;
    int iNo2;

    Arithmetic()
    {
        int iNo1 = 0;
        int iNo2 = 0;
    }
    Arithmetic(int A , int B)
    {
        this-> iNo1 = A;
        this-> iNo2 = B;
    }

    int Addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
    int Subtraction()
    {
        int iAns = 0;
        iAns = iNo1 - iNo2;
        return iAns;
    }
    int Multiplication()
    {
        int iAns = 0;
        iAns = iNo1 * iNo2;
        return iAns;
    }
    int Division()
    {
        int iAns = 0;
        iAns = iNo1 / iNo2;
        return iAns;
    }

};

int main()
{
     int iNo1, iNo2;
    cout << "Enter First No: ";
    cin >> iNo1;
    cout << "Enter Second No: ";
    cin >> iNo2;
    
    Arithmetic aobj1(iNo1, iNo2);

cout << "Addition is : " << aobj1.Addition() << endl;
cout << "Subtraction is : " << aobj1.Subtraction() << endl;
cout << "Multiplication : " << aobj1.Multiplication() << endl;
cout << "Division : " << aobj1.Division() << endl;


    return 0;
}
