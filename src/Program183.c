#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE Temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

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
        newn->prev = Temp;
        Temp->next = newn;
    }
}

void Display(PNODE Head)
{
    printf("The Linked List is : \n");
    printf(" | %p | -> ", Head);
    while (Head != NULL)
    {
        printf("| %p | %d | %p | -> ", Head->prev, Head->data, Head->next);
        Head = Head->next;
    }
    printf(" NULL \n");
}

int Counter(PNODE Head)
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
    int iSize = Counter(*Head);
    int i = 0;
    PNODE Temp = *Head;

    if ((iPos < 1) || (iPos > iSize + 1))
    {
        printf("Invalid Position Entered \n");
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
        PNODE Temp = *Head;
        PNODE newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for (i = 1; i < (iPos - 1); i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        newn->prev = Temp;
        Temp->next->prev = newn;
        Temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{

    if (*Head == NULL)
    {
        return;
    }
    else if (((*Head)->next == NULL) && ((*Head)->prev == NULL))
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        PNODE Temp = *Head;
        *Head = (*Head)->next;
        (*Head)->prev = NULL;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    if (*Head == NULL)
    {
        return;
    }
    else if (((*Head)->next == NULL) && ((*Head)->prev == NULL))
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        PNODE Temp = *Head;
        while (Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp->next = NULL;
    }
}

void DeleteAtPosition(PPNODE Head, int iPos)
{
    int iSize = Counter(*Head);
    int i = 0;
    PNODE Temp = *Head;
    PNODE TargetNode = NULL;
    if ((iPos < 1) || (iPos > iSize))
    {
        printf("Invalid Position \n");
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

        TargetNode = Temp->next;
        Temp->next = TargetNode->next;
        TargetNode->next->prev = Temp;
        free(TargetNode);
    }
}

int main()
{
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First, 14);
    InsertFirst(&First, 12);
    InsertFirst(&First, 10);
    Display(First);
    iRet = Counter(First);
    printf("The No of Nodes are : %d\n", iRet);

    InsertLast(&First, 16);
    InsertLast(&First, 17);
    Display(First);
    iRet = Counter(First);
    printf("The No of Nodes are : %d\n", iRet);

    InsertAtPosition(&First, 11, 2);
    InsertAtPosition(&First, 13, 4);
    InsertAtPosition(&First, 15, 6);
    InsertAtPosition(&First, 19, 0);
    InsertAtPosition(&First, 25, 10);
    Display(First);
    iRet = Counter(First);
    printf("The No of Nodes are : %d\n", iRet);

    DeleteFirst(&First);
    DeleteFirst(&First);
    Display(First);
    iRet = Counter(First);
    printf("The No of Nodes are : %d\n", iRet);

    DeleteLast(&First);
    DeleteLast(&First);
    Display(First);
    iRet = Counter(First);
    printf("The No of Nodes are : %d\n", iRet);

    DeleteAtPosition(&First, 3);
    Display(First);
    iRet = Counter(First);
    printf("The No of Nodes are : %d\n", iRet);

    return 0;
}