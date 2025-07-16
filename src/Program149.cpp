#include <iostream>
using namespace std;

class Factorial
{
private:
    int iNo;

public:
    int iFact = 1;

    Factorial(int x)
    {
        iNo = x;
    }
    int getFactors()
    {
        for (int iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;
    cout << "Enter the Number : " << endl;
    cin >> iValue;

    Factorial *nobj = new Factorial(iValue);
    iRet = nobj->getFactors();

    cout << "The Factorial is : " << iRet << endl;
    delete nobj;
    return 0;
}
