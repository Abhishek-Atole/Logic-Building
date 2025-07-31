#include <iostream>
using namespace std;

class Pattern02
{
private:
    int iSize;

public:
    Pattern02(int iNo)
    {
        iSize = iNo;
    }

    void Pattern02NxN()
    {
        for (int i = 0; i <= iSize; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "*\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    int iValue = 0;
    cout << "Enter the Size : ";
    cin >> iValue;
    Pattern02 *pobj = new Pattern02(iValue);
    pobj->Pattern02NxN();
    delete (pobj);

    return 0;
}