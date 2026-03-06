#include <iostream>
using namespace std;

//////////////////////////////////////////////////////
//
//      class Name    :     Pattern
//      Input         :     Integer numbers.
//      Output        :     Output will be displayed 
//                          as per the Pyramid pattern
//                          and the number of rows and 
//                          columns taken from the user.
//      Description   :     Pyramid pattern will be 
//                          displayed as per the
//                          input rows and columns.
//      Author        :     Soham Nilesh Kudale.
//      Date          :     22/01/2026
//
//////////////////////////////////////////////////////


///////////////////////////////////
//                               //
//     Object Oriented class :   //
//        Class Pattern          //
//                               //
///////////////////////////////////

class Pattern 
{
    public:
        // Filter for square matrix
        void Display(int iRow, int iCol) 
        {
            int i = 0, j = 0;

            if (iRow != iCol) 
            {
                cout << "Invalid Input" << endl;
                cout << "Row number and column number should be same" << endl;
                return;
            }

            // Logic to print the lower triangular pattern
            for (i = 1; i <= iRow; i++) 
            {
                for (j = 1; j <= i; j++) 
                {
                    cout << i <<"\t";
                }
                cout << endl;
            }
        }
};

///////////////////////////////////
//                               //
//      Entry Point Function     //
//                               //
///////////////////////////////////

int main() 
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter number of rows : ";
    cin >> iValue1;

    cout << "Enter number of columns : ";
    cin >> iValue2;

    Pattern pobj;
    pobj.Display(iValue1, iValue2);

    return 0;
}