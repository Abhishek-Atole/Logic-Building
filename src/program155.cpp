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
        int i, j = 0;
        for (i = 1; i <= iRows; i++)
        {
            for (j = 1; j <= iCols; j++)
            {
                if (i == j)
                {
                    cout << "$" << "\t";
                }
                else if ((i == 1) || (i == iRows) || (j == 1) || (j == iCols))
                {
                    cout << "*" << "\t";
                }
                else if (i > j)
                {
                    cout << "0 \t";
                }
                else
                {
                    cout << "1 \t";
                }
            }
            cout<<endl;
        }
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