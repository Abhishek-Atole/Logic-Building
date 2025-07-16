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

    
        // logic Here;
    
};

int main()
{
    int iValue = 0;
    cout << "Enter the Number : " << endl;
    cin >> iValue;

    Number nobj(iValue);
    return 0;
}