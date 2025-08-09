// Doubly Circular Linked List

#include <iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} NODE, *PNODE;

class DoublyCL
{
private:
    PNODE First;
    PNODE Last;
    int iCount;

public:
    DoublyCL();
    ~DoublyCL();
    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPosition(int No, int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int iPos);
    void Display();
    int NodeCounter();
};

DoublyCL ::DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

DoublyCL::~DoublyCL()
{
    if (First == NULL)
        return;

    // Break the circle in both directions
    Last->next = NULL;
    First->prev = NULL;

    PNODE temp = First;
    PNODE nextNode = NULL;

    while (temp != NULL)
    {
        nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    First = NULL;
    Last = NULL;
    iCount = 0;
}


void DoublyCL ::InsertFirst(int No)
{
    PNODE newn = new NODE;
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (First == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }

    First->prev = Last;
    Last->next = First;
    iCount++;
}

void DoublyCL ::InsertLast(int No)
{
    PNODE newn = new NODE;
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (First == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        newn->prev = Last;
        Last = newn;
    }

    First->prev = Last;
    Last->next = First;
    iCount++;
}
void DoublyCL ::InsertAtPosition(int No, int iPos)
{
    if ((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid Position.." << endl;
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(No);
    }
    else if (iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        PNODE Temp = First;
        PNODE newn = new NODE;
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for (int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        newn->prev = Temp;
        Temp->next->prev = newn;
        Temp->next = newn;
        iCount++;
    }
}
void DoublyCL ::DeleteFirst()
{
    if (First == NULL)
    {
        return;
    }
    else if (First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        PNODE Temp = First;
        First = First->next;
        Last->next = First;
        delete Temp;
        First->prev = Last;
        
    }iCount--;
}

void DoublyCL ::DeleteLast()
{
    if (First == NULL)
    {
        return;
    }
    else if (First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        Last = Last->prev;
        delete Last->next;
        Last->next = First;
        First->prev = Last ;
        
    }iCount--;
}
void DoublyCL ::DeleteAtPosition(int iPos)
{
    if ((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid Position..." << endl;
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE TargetNode = NULL;
        PNODE Temp = First;
        for (int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            Temp = Temp->next;
        }
        TargetNode = Temp->next;
        Temp->next = Temp->next->next;
        Temp->next->prev = Temp;
        delete TargetNode;
        iCount--;
    }
}
void DoublyCL ::Display()
{
    PNODE Temp = First;
    cout << "Doubly Circular Linked List : ";
    cout << "| " << First << " | " << " <=> | " << Temp->next << " | " << endl;
    if (First == NULL)
    {
        cout << "List is Empty.." << endl;
        return;
    }

    do
    {
        cout << "| " << Temp->prev << " | " << Temp->data << " | " << Temp->next << " | <-> ";
        Temp = Temp->next;
    } while (Temp != First);
    cout << "Address of First node" << endl;
}
int DoublyCL ::NodeCounter()
{
    return iCount;
}
int main()
{
    int iRet = 0;
    DoublyCL obj;

    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t Insert First .....");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");

    obj.InsertFirst(5);
    obj.InsertFirst(4);
    obj.InsertFirst(3);
    obj.InsertFirst(2);
    obj.InsertFirst(1);
    obj.Display();
    iRet = obj.NodeCounter();
    cout << "\n No. of Nodes are : " << iRet << endl;

    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t Insert Last .....");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");

    obj.InsertLast(6);
    obj.InsertLast(7);
    obj.Display();
    iRet = obj.NodeCounter();
    cout << "\n No. of Nodes are : " << iRet << endl;

    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t Delete First .....");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    obj.DeleteFirst();
    obj.Display();
    iRet = obj.NodeCounter();
    cout << "\n No. of Nodes are : " << iRet << endl;

    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t Delete Last .....");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    obj.DeleteLast();
    obj.Display();
    iRet = obj.NodeCounter();
    cout << "\n No. of Nodes are : " << iRet << endl;

    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t Insert At Position .....");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    obj.InsertAtPosition(1, 1);
    obj.InsertAtPosition(7, 7);
    obj.InsertAtPosition(40, 4);
    obj.InsertAtPosition(50, 10);
    obj.Display();
    iRet = obj.NodeCounter();
    cout << "\n No. of Nodes are : " << iRet << endl;

    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t Delete At Position .....");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    obj.DeleteAtPosition(4);
    obj.DeleteAtPosition(1);
    obj.DeleteAtPosition(6);
    obj.Display();
    iRet = obj.NodeCounter();
    cout << "\n No. of Nodes are : " << iRet << endl;
}
