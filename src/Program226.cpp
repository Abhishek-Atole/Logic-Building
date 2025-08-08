// Doubly Linked List

#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} NODE, *PNODE;

class DoublyLL
{
private:
    PNODE First;
    int Count;

public:
    DoublyLL();
    ~DoublyLL();
    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPosition(int No, int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int iPos);
    void Display();
    int NodeCounter();
};

DoublyLL ::DoublyLL()
{
    First = NULL;
    Count = 0;
}

DoublyLL ::~DoublyLL()
{
    while (First != NULL)
    {
        DeleteFirst();
    }
}

void DoublyLL::InsertFirst(int No)
{
    PNODE newn = new NODE;
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (First != NULL)
    {
        newn->next = First;
        First->prev= newn;
    }

    First = newn;

    Count++;
}

void DoublyLL::InsertLast(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE Temp = First;
        while (Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        newn->prev = Temp;
        Temp->next = newn;
    }
    Count++;
}

void DoublyLL ::InsertAtPosition(int No, int iPos)
{
    if ((iPos < 1) || (iPos > Count + 1))
    {
        cout << "Invalid Position...\n"
             << endl;
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(No);
    }
    else if (iPos == Count + 1)
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
        Temp->next->prev = newn;
        newn->prev = Temp;
        Temp->next = newn;
        Count++;
    }
}

void DoublyLL ::DeleteFirst()
{
    if (First == NULL)
    {
        return;
    }
    else if (First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First->next;
        delete First->prev;
        First->prev = NULL;
    }
    Count--;
}

void DoublyLL ::DeleteLast()
{
    if (First == NULL)
    {
        return;
    }
    else if (First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        PNODE Temp = First;
        while (Temp->next != NULL)
        {
            Temp = Temp->next;
        }

        Temp->prev->next = NULL;
        delete Temp;
    }
    Count--;
}

void DoublyLL::DeleteAtPosition(int iPos)
{
    if ((iPos < 1) || (iPos > Count))
    {
        cout << "Invalid Position...\n"
             << endl;
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == Count)
    {
        DeleteLast();
    }
    else
    {
        PNODE Temp = First;
        PNODE TargetNode = NULL;
        for (int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            Temp = Temp->next;
        }
        TargetNode = Temp->next;
        Temp->next = TargetNode->next;
        Temp->next->prev = Temp;
        delete TargetNode;
        Count--;
    }
}

void DoublyLL::Display()
{
    PNODE Temp = First;
    cout << "Elements of the Linked List : \n"
         << endl;
    while (Temp != NULL)
    {
        cout << " | " << Temp->data << " | <=> ";
        Temp = Temp->next;
    }
    cout << "NULL" << endl;
}
int DoublyLL::NodeCounter()
{
    return Count;
}

int main()

{
    int iRet = 0;
    DoublyLL obj;

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