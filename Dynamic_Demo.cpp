#include<iostream>
using namespace std;

int main()
{
    int length = 0;
    int *Arr = NULL;

    cout<<"Enter the number of elements :\n";
    cin>>length;
    
    Arr = new int [length];
    if (Arr == NULL)
    {
        cout<<"Unable to Allocate the memory.\n";
    }
    else
    {
        cout<<"Memory allocated Successfully.\n";
    }

    // Step 2 : Use the Memory.

    // Step 3 : Deallocate the memory.
    delete [] Arr;

    return 0;
    
} 