#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if ((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
    (*Tail)->next = *Head;
}
void InsertLast(PPNODE Head, PPNODE Tail, int No)
{

    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    if ((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = *Head;
        (*Tail)->next = *Head;
    }
    else
    {
        (*Tail)->next = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    }
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if ((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if (*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
    }
}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if ((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if (*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        PNODE Temp = *Head;
        while (Temp->next != *Tail)
        {
            Temp = Temp->next;
        }
        free(*Tail);
        *Tail = Temp;
        (*Tail)->next = *Head;
    }
}
void Display(PNODE Head, PNODE Tail)
{
    printf("Elements of the Linked List Are : ");

    printf("| %p | -> ", Head);

    if ((Head != NULL) && (Tail != NULL))
    {

        do
        {
            printf("| %d | %p | -> ", Head->data, Head->next);
            Head = Head->next;
        } while (Head != Tail->next);
        printf("Address of First node : \n");
    }
}

int Counter(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    do
    {
        if ((Head != NULL) && (Tail != NULL))
        {
            iCnt++;
            Head = Head->next;
        }

    } while (Head != Tail->next);
    return iCnt;
}
void InsertAtPosition(PPNODE Head, PPNODE Tail, int No, int iPos)
{
    int iSize = Counter(*Head, *Tail);
    PNODE Temp = *Head;

    if ((iPos < 1) || (iPos > iSize + 1))
    {
        printf("invalid Position Entered.....\n");
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(Head, Tail, No);
    }
    else if (iPos == iSize)
    {
        InsertLast(Head, Tail, No);
    }
    else
    {

        PNODE newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;
        for (int i = 1; i < iPos - 1; i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
    }
}
void DeleteAtPosition(PPNODE Head, PPNODE Tail, int iPos)
{
    int iSize = Counter(*Head, *Tail);
    PNODE Temp = *Head;
    PNODE TargetNode = NULL;

    if ((iPos < 1) || (iPos > iSize))
    {
        printf("Invalid Position Entered....");
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst(Head, Tail);
    }
    else if (iPos == iSize)
    {
        DeleteLast(Head, Tail);
    }
    else
    {
        for (int i = 1; i < iPos - 1; i++)
        {
            Temp = Temp->next;
        }
        TargetNode = Temp->next;
        Temp->next = TargetNode->next;
        free(TargetNode);
    }
}
int main()
{
    int iRet = 0;
    PNODE First = NULL;
    PNODE Last = NULL;

    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t Linked List After InserFirst...\n");
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    InsertFirst(&First, &Last, 5);
    InsertFirst(&First, &Last, 4);
    InsertFirst(&First, &Last, 3);
    InsertFirst(&First, &Last, 2);
    InsertFirst(&First, &Last, 1);
    Display(First, Last);
    iRet = Counter(First, Last);
    printf("\nTotal Nodes in the elements are : %d \n\n", iRet);

    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t Linked List After Performing the InsertLast Operation on it....\n");
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    InsertLast(&First, &Last, 6);
    Display(First, Last);
    iRet = Counter(First, Last);
    printf("\nTotal Nodes in the elements are : %d \n\n", iRet);

    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t Linked List After Performing the InsertAtPosition Operation on it....\n");
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    InsertAtPosition(&First, &Last, 8, 3);
    Display(First, Last);
    iRet = Counter(First, Last);
    printf("\nTotal Nodes in the elements are : %d \n\n", iRet);

    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t Linked List After Performing the DelteFirst Operation on it....\n");
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    DeleteFirst(&First, &Last);
    Display(First, Last);
    iRet = Counter(First, Last);
    printf("\nTotal Nodes in the elements are : %d \n\n", iRet);

    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t Linked List After Performing the Delete Last Operation on it....\n");
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    DeleteLast(&First, &Last);
    Display(First, Last);
    iRet = Counter(First, Last);
    printf("\nTotal Nodes in the elements are : %d \n\n", iRet);

    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t Linked List After Performing the DeleteAtPosition Operation on it....\n");
    printf("----------------------------------------------------------------------------------------------------------------------------\n");
    DeleteAtPosition(&First, &Last, 2);
    Display(First, Last);
    iRet = Counter(First, Last);
    printf("\nTotal Nodes in the elements are : %d \n\n", iRet);

    return 0;
}