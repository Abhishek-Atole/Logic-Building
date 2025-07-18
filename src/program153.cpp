// Problems on pattern Printing

#include <iostream>
using namespace std;

class Pattern
{
private:
    int iRows;
    int iCols;

public:
    Pattern(int x, int y)
    {
        iRows = x;
        iCols = y;
    }

    int Display()
    {
        // Logic Here
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout << "Enter the Number of Rows" << endl;
    cin >> iValue1;
    cout << "Enter the Number of Columns" << endl;
    cin >> iValue2;

    Pattern aobj(iValue1, iValue2);
    aobj.Display();
    return 0;
}