#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

// Here we Cant initialize the First beacuse ṭhe memeory is not allocated here memeoy allocation is done when the object of the class is crated
// or we can initialize it using the constructor and assignthe values

class SinglyLL
{
public:
    PNODE First;
    int iCount;

    SinglyLL()
    {
        First = NULL;
        iCount = 0;
    }
    void InsertFirst(int no) {};
    void InsertLast(int no);
    void InserAtPosition(int no, int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int iPos);
    void Display();
};

int main()

{

    SinglyLL obj;

    obj.InsertFirst(51);
    obj.InsertLast(101);
    obj.InsertFirst(21);

    obj.Display();

    return 0;
}