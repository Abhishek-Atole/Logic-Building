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
        Arr = new int[iSize]; // ✅ Dynamically allocates memory on the heap for an array of integers of size iSize
    }

    ~Array()
    {
        delete[] Arr; // ✅ Releases the dynamically allocated memory to avoid memory leaks
    }

    void Accept() // ✅ Accepts user input to fill the array
    {
        cout << "Enter the Array Elements: " << endl;
        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }

    void display() // ✅ Displays the elements of the array
    {
        cout << "The Elements of the array are: " << endl;
        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout << Arr[iCnt] << "\t";
        }
        cout << endl;
    }
    int AdditionEven()
    {
        int iSum = 0;
        int iCnt = 0;
        for (iCnt = 1; iCnt < iSize; iCnt++)
        {
            if ((Arr[iCnt] % 2) == 0)
            {
                iSum = iSum + Arr[iCnt];
            }
        }
        return iSum;
    }
};

int main()
{
    int iLength = 0;
    int iRet = 0;
    cout << "Enter the Number of Elements of the Array: " << endl;
    cin >> iLength;

    Array *aobj = new Array(iLength); // ✅ Dynamically allocates an Array object on the heap using the constructor
    aobj->Accept();                   // ✅ Calls member function using pointer and arrow operator
    aobj->display();
    iRet = aobj->AdditionEven();
    cout << "The Additon of Even Elements :" << iRet << endl; // ✅ Displays the entered elements
    delete aobj;                                              // ✅ Deletes the object and calls destructor to free memory
    return 0;
}
