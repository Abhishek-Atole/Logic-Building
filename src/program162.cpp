#include <iostream>
using namespace std;

class String
{
private:
    char *str;
    int iSize;

public:
    String() // Default constructor
    {
        iSize = 20;
        str = new char[iSize];
    }

    String(int x) // Parameterized constructor
    {
        iSize = x;
        str = new char[iSize];
    }

    ~String()
    {
        delete[] str;
    }

    void Accept()
    {
        cout << "Enter the string: " << endl;
        cin.getline(str, iSize);
    }

    void Display()
    {
        cout << "String is: " << str << endl;
    }

    int CapitalCount()
    {
        int iCnt = 0;
        char* temp = str;  // ✅ Don't modify original pointer

        while (*temp != '\0')
        {
            if ((*temp >= 'A') && (*temp <= 'Z'))
            {
                iCnt++;
            }
            temp++;
        }
        return iCnt;
    }
};

int main()
{
    int iRet = 0;

    String *sobj1 = new String(30); // Allocating 30 characters
    sobj1->Accept();
    sobj1->Display();

    iRet = sobj1->CapitalCount();
    cout << "Capital Count is: " << iRet << endl;

    delete sobj1;
    return 0;
}
