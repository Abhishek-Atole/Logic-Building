// Problems on string Template

#include <iostream>
using namespace std;

class String
{
private:
    char *str;
    int iSize;

public:
    String()                            // Default Constructor Which Allocates the 20 char size in the string if not given by the user
    {
        iSize = 20;
        str = new char[iSize];
    }
    String(int x)                       // Parameterized Constructor Which Allocates the iSize char size  which is provided by the user in the string if not given by the user
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
        cout << " Enter the string : " << endl;
        cin.getline(str,iSize);
    }
    void Display()
    {
        cout << "String is : " << str << endl;
    }
    //Logic Here 
};

int main()
{
    String *  sobj1= new String(30);    // This constructor call to the  paramenerized constructor 
    String *  sobj2= new String();         // This constructor call to the Default Constructor Written in the String Class 
    sobj1->Accept();
    sobj1->Display();
    delete sobj1;
    delete sobj2;
    return 0;
}