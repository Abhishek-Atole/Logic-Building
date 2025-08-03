#include <iostream>
using namespace std;

class Number
{
private:
    int iNo = 0;

public:
    Number(int x)
    {
        iNo = x;
    }

    void Display()
    {
        cout << "Number is: " << iNo << endl;
    }
};

int main()
{
    int iValue = 0;
    cout << "Enter the Number : " << endl;
    cin >> iValue;

    Number nobj(iValue);
    nobj.Display();
    return 0;
}