#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}
void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE Temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (Temp->next != NULL)

        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;

    if (*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = Temp->next;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;

    if (*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while (Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp->next = NULL;
    }
}

void Display(PNODE Head)
{
    printf("Elements of the Linked List Are : \n");
    printf("| %p | -> ", Head);
    while (Head != NULL)
    {

        printf("| %d | %p | -> ", Head->data, Head->next);
        Head = Head->next;
    }
    printf("NUll \n");
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void InsertAtPosition(PPNODE Head, int No, int iPos)
{

    int iSize = Count(*Head);
    int i = 0;
    PNODE Temp = *Head;
    PNODE newn = NULL;

    if ((iPos < 1) || (iPos > iSize + 1))
    {
        printf(" Invalid POsition \n");
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(Head, No);
    }
    else if (iPos == iSize + 1)
    {
        InsertLast(Head, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        for (i = 1; i < (iPos - 1); i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
    }
}
void DeleteAtPosition(PPNODE Head, int iPos)
{
    int iSize = Count(*Head);
    int i = 0;
    PNODE Temp = *Head;
    PNODE TargetedNode = NULL;
    PNODE newn = NULL;

    if ((iPos < 1) || (iPos > iSize))
    {
        printf(" Invalid POsition \n");
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if (iPos == iSize)
    {
        DeleteLast(Head);
    }
    else
    {
        for (i = 1; i < (iPos - 1); i++)
        {
            Temp = Temp->next;
        }
        TargetedNode = Temp->next;
        Temp->next = Temp->next->next;
        free(TargetedNode);
    }
}

int main()
{
    int iRet = 0;
    // Creting the Head pointer of the Linked List
    PNODE First = NULL;

    // Calling the Function to add the Nodes at the First Position in the Linked List
    InsertFirst(&First, 101);
    InsertFirst(&First, 100);
    InsertFirst(&First, 99);
    InsertFirst(&First, 98);
    iRet = Count(First);
    printf("No of Nodes are : %d \n", iRet);
    Display(First);

    printf("\n\n");

    // Calling the Funtion to add the Data At the Last Position
    InsertLast(&First, 102);
    InsertLast(&First, 103);
    iRet = Count(First);
    printf("No of Nodes are : %d \n", iRet);
    Display(First);

    printf("\n\n");

    // Calling teh Delete First Function to Delete the First Node
    DeleteFirst(&First);
    iRet = Count(First);
    printf("No of Nodes are : %d \n", iRet);
    Display(First);

    printf("\n\n");

    // Calling the Delete Last Function to Delte the Last Node
    DeleteLast(&First);
    iRet = Count(First);
    printf("No of Nodes are : %d \n", iRet);
    Display(First);

    printf("\n\n");

    // Calling Insert At Position function to add the valueat the Random user Preferred position
    InsertAtPosition(&First, 105, 5);
    InsertAtPosition(&First, 104, 5);
    InsertAtPosition(&First, 97, 1);
    iRet = Count(First);
    printf("No of Nodes are : %d \n", iRet);
    Display(First);

    printf("\n\n");

    // Calling DeleteAtPosition  Function to Delete the Node form the LInked List
    DeleteAtPosition(&First, 1);
    iRet = Count(First);
    printf("No of Nodes are : %d \n", iRet);
    Display(First);

    return 0;
}