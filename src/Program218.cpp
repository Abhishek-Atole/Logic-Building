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
        cout << "Inside Constructor.." << endl;
        First = NULL;
        iCount = 0;
    }
    void InsertFirst(int no)
    {
        PNODE newn = NULL;
        newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        if (First == NULL)
        {
            First = newn;
        }
        else
        {
            newn->next = First;
            First = newn;
        }
        iCount++;
    }
};

int main()

{

    SinglyLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    cout << "Number of Elements in the Linked List are : " << obj.iCount << endl;

    return 0;
}