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
    SinglyLL()
    {
        First = NULL;
        iCount = 0;
    }

    void InsertFirst(int No)
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

    void InsertLast(int no)
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
            for (int iCnt = 0; iCnt < iCount - 1; iCnt++)
            {
                Temp = Temp->next;
            }
            Temp->next = newn;
        }
        iCount++;
    }

    void Display()
    {
        PNODE Temp = First;

        cout << "Elements of the Linked List Are : " << endl;

        cout << " | " << First << " | -> ";
        while (Temp != NULL)
        {
            cout << "| " << Temp->data << " | " << Temp->next << " | -> ";
            Temp = Temp->next;
        }
        cout << "NUll" << endl;
    }

    int NodeCounter()
    {
        return iCount;
    }

};

int main()
{
    int iRet = 0;
    SinglyLL obj;
    obj.InsertFirst(5);
    obj.InsertFirst(4);

    obj.InsertLast(6);

    obj.Display();

    iRet = obj.NodeCounter();

    cout << "No. of Nodes are : " << iRet << endl;   
}