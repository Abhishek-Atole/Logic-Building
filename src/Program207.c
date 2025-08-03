#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} NODE, *PNODE, **PPNODE;

void InserFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;
    if ((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;
    if ((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;  
        newn->prev = *Tail;    
        *Tail = newn; 
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
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
        (*Head)->prev = *Tail;
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
        (*Head)->prev = (*Tail)->prev;
        free(*Tail);
        *Tail = (*Head)->prev;
        (*Tail)->next = *Head;
    }
}

void Display(PNODE Head, PNODE Tail)
{
    if ((Head != NULL) && (Tail != NULL))
    {
        printf("\nLinked List : | %p | -> ", Head);
        do
        {
            printf("| %p | %d | %p | -> ", Head->prev, Head->data, Head->next);
            Head = Head->next;
        } while (Head != Tail->next);
        printf("Address of First..\n");
    }
}

int NodeCounter(PNODE Head, PNODE Tail)
{
    int iCnt = 0;

    if ((Head != NULL) && (Tail != NULL))
    {
        do
        {
            iCnt++;
            Head = Head->next;
        } while (Head != Tail->next);
    }
    return iCnt;
}

void InsertAtPosition(PPNODE Head, PPNODE Tail, int No, int iPos)
{
    int iSize = NodeCounter(*Head, *Tail);
    PNODE Temp = *Head;

    if ((iPos < 1) || (iPos > iSize + 1))
    {
        printf("Invalid Position Entered....\n");
        return;
    }

    if (iPos == 1)
    {
        InserFirst(Head, Tail, No);
    }
    else if (iPos == iSize + 1)
    {
        InsertLast(Head, Tail, No);
    }
    else
    {
        PNODE newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for (int i = 1; i < iPos - 1; i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        newn->prev = Temp;
        Temp->next = newn;
        newn->next->prev = newn;
    }
}
int main()
{
    int iRet = 0;
    PNODE First = NULL;
    PNODE Last = NULL;

    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t Linked List After Element Inserted At First ....");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");

    InserFirst(&First, &Last, 2);
    InserFirst(&First, &Last, 1);
    Display(First, Last);
    iRet = NodeCounter(First, Last);
    printf("Total Nodes : %d ", iRet);

    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t Linked List After Element Inserted At Last....");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");

    InsertLast(&First, &Last, 6);
    InsertLast(&First, &Last, 7);
    Display(First, Last);
    iRet = NodeCounter(First, Last);
    printf("Total Nodes : %d ", iRet);

    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t Linked List After First Node is Deleted....");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");

    DeleteFirst(&First, &Last);
    Display(First, Last);
    iRet = NodeCounter(First, Last);
    printf("Total Nodes : %d ", iRet);

    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t Linked List After Last Node is Deleted....");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");

    DeleteLast(&First, &Last);
    Display(First, Last);
    iRet = NodeCounter(First, Last);
    printf("Total Nodes : %d ", iRet);

    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t Linked List After Node is Inserted At Position....");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");

    InsertAtPosition(&First, &Last, 1, 1);
    InsertAtPosition(&First, &Last, 3, 3);
    InsertAtPosition(&First, &Last, 7, 5);
    InsertAtPosition(&First, &Last, 5, 7);
    Display(First, Last);
    iRet = NodeCounter(First, Last);
    printf("Total Nodes : %d ", iRet);

    return 0;
}