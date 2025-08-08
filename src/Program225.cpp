#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE;

class SinglyLL
{
private:
    PNODE First;
    int iCount;

public:
    SinglyLL();
    void InsertFirst(int No);
    void InsertLast(int no);
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPosition(int No, int iPos);
    void DeleteAtPosition(int iPos);
    void Display();
    int NodeCounter();
};

/* To Define the Functions outside the class

    Return_Value Class_Name :: Function_Name()
    {

    }

*/

SinglyLL :: SinglyLL()
{
    
        First = NULL;
        iCount = 0;

}

void SinglyLL ::InsertFirst(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
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

void SinglyLL ::InsertLast(int no)
{
    PNODE Temp = First;
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        while (Temp->next != NULL)
        {
            Temp = Temp->next;
        }

        Temp->next = newn;
    }
    iCount++;
}

void SinglyLL ::Display()
{
    PNODE Temp = First;

    cout << "Elements of the Linked List Are : \n"
         << endl;

    cout << " | " << First << " | -> ";
    while (Temp != NULL)
    {
        cout << "| " << Temp->data << " | " << Temp->next << " | -> ";
        Temp = Temp->next;
    }
    cout << "NUll" << endl;
}

int SinglyLL ::NodeCounter()
{
    return iCount;
}

void SinglyLL ::DeleteFirst()
{
    PNODE Temp = First;

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
        delete Temp;
    }
    iCount--;
}

void SinglyLL::DeleteLast()
{
    PNODE Temp = First;

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
        while (Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        delete Temp->next;
        Temp->next = NULL;
    }
    iCount--;
}

void SinglyLL ::InsertAtPosition(int No, int iPos)
{
    if ((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid Position..." << endl;
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
        for (int i = 1; i < iPos - 1; i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
        iCount++;
    }
}

void SinglyLL :: DeleteAtPosition(int iPos)
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
        PNODE Temp = First;
        PNODE Targetnode = NULL;
        for (int i = 1; i < iPos - 1; i++)
        {
            Temp = Temp->next;
        }
        Targetnode = Temp->next;
        Temp->next = Temp->next->next;
        delete Targetnode;
        iCount--;
    }
}

    int main()
    {
        int iRet = 0;
        SinglyLL obj;

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