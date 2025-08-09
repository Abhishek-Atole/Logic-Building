// Singly Circular Linked List

#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE;

class SinglyCL
{
private:
    PNODE First;
    PNODE Last;
    int iCount;

public:
    SinglyCL();
    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPosition(int No, int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPosition(int iPos);
    void Display();
    int NodeCounter();
};

SinglyCL::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

void SinglyCL ::InsertFirst(int No)
{
    PNODE newn = new NODE;
    newn->data = No;
    newn->next = NULL;
    if (First == NULL)
    {
        First = newn;
        Last = newn;
        newn->next = First;
    }
    else
    {
        newn->next = First;
        First = newn;
        Last->next = First;
    }
    iCount++;
}

void SinglyCL ::InsertLast(int No)
{
    PNODE newn = new NODE;
    newn->data = No;
    newn->next = NULL;
    if (First == NULL)

    {
        First = newn;
        Last = First;
        newn->next = First;
    }
    else
    {
        newn->next = First;
        Last->next = newn;
        Last = newn;
    }
    iCount++;
}

void SinglyCL ::InsertAtPosition(int No, int iPos)
{
    if ((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid Posoition...." << endl;
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

        for (int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
        iCount++;
    }
}

void SinglyCL::DeleteFirst()
{
    if (First == NULL)
    {
        return;
    }
    else if (First == Last)
    {
        delete First;
        First = NULL;
        Last =NULL;
    }
    else
    {
        PNODE Temp = First;
        First = First->next;
        delete Temp;
        Last->next = First;
    }
    iCount--;
}

void SinglyCL::DeleteLast()
{
    if (First == NULL)
    {
        return;
    }
    else if (First == Last)
    {
        delete First;
        First = NULL;
        Last =NULL;
    }
    else
    {
        PNODE Temp = First;
        while (Temp->next != Last)
        {
            Temp = Temp->next;
        }
        delete Last;
        Last = Temp;        
        Last->next = First;
    }
    iCount--;
}

void SinglyCL ::DeleteAtPosition(int iPos)
{
    if ((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid Position.. " << endl;
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
        PNODE Temp = First;
        PNODE TargetNode = NULL;
        for (int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            Temp = Temp->next;
        }
        TargetNode = Temp->next;
        Temp->next = Temp->next->next;
        delete TargetNode;
        iCount--;
    }
}

void SinglyCL ::Display()
{
    PNODE Temp = First;
    if (First == NULL) return;

    cout << "Singly Circular List : ";
    cout << " | " << First << " | -> " << " | " << Last << " | -> " << endl;
    do
    {
        cout << " | " << Temp->data << " | " << Temp->next << " | -> ";
        Temp = Temp->next;
    } while (Temp != First);
    cout << "Addressof First" << endl;
}

int SinglyCL ::NodeCounter()
{
    return iCount;
}

int main()

{
    int iRet = 0;
    SinglyCL obj;

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
