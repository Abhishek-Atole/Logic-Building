#include <iostream>
using namespace std;

class Array
{
private:
    int *Arr;
    int iSize;

public:
    Array(int x)                        //Parameterised constructor
    {
        iSize = x;
        Arr = new int[iSize];           //Resource allocation constructor
    }
    ~Array()
    {
        delete[] Arr;                   //Deallocate the Allocated Resource using destructor at the end
    }

    void Accept()                         //Function to get the inout for the user for the array elements
    {
        cout << "Enter the Array Elements : " << endl;
        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }
    void display()                         //Function to display the elements of the arry
    {
        cout << " The Elements of the array are : " << endl;
        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout << Arr[iCnt]<<"\t";
        }
        cout<<endl;
    }
};

int main()
{
    int iLength = 0;
    cout << "Enter the Number of Elements That you want to store : " << endl;
    cin >> iLength;

    Array aobj(iLength);            //Object is Created for the Array class
    aobj.Accept();
    aobj.display();
    return 0;
}