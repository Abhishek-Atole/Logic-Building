#include <iostream>
using namespace std;

class Pattern01
{
private:
    int iNO;

public:
    Pattern01(int iSize)
    {
        iNO = iSize;
    }

    void PatternNxN()
    {
        for (int i = 0; i < iNO; i++)
        {
            for (int j = 0; j < iNO; j++)
            {
                cout << " *  ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int iValue = 0;
    cout << "Enter the Number : " << endl;
    cin >> iValue;

    Pattern01 *pobj = new Pattern01(iValue);
    pobj->PatternNxN();
    delete(pobj);

    return 0;
}