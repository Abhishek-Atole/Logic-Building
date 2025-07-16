#include <iostream>
using namespace std;

class Array
{
private:
    int *Arr;
    int iSize;

public:
    Array(int x)
    {
        iSize = x;
        Arr = new int[iSize];
    }
    ~Array()
    {
        delete[] Arr;
    }

    void Accept() // Function to get the inout for the user for the array elements
    {
        cout << "Enter the Array Elements : " << endl;
        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }
    void display() // Function to display the elements of the arry
    {
        cout << " The Elements of the array are : " << endl;
        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout << Arr[iCnt] << "\t";
        }
        cout << endl;
    }
};
int main()
{
    int iLength = 0;
    cout << "Enter the Number of Elements of an Arry : " << endl;
    cin >> iLength;
    Array *aobj = new Array(iLength);
    aobj->Accept();
    aobj->display();
    delete aobj;
    return 0;
}