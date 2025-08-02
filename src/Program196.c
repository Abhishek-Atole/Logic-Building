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
    if ((*Head == NULL ) && (*Tail == NULL))
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
        (*Tail) -> next = *Head;
    }
}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if ((*Head == NULL ) && (*Tail == NULL))
    {
        return;

    }
    else if (*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else{
        PNODE Temp = *Head;
        while(Temp->next != *Tail )
        {
            Temp = Temp->next;
        }
        free(*Tail);
        *Tail = Temp;
        (*Tail)-> next = *Head;
    }
}
void Display(PNODE Head, PNODE Tail)
{
    printf("Elements of the Linked List Are : \n");

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
    

    
}
void DeleteAtPosition(PPNODE Head, PPNODE Tail, int iPos)
{
}
int main()
{
    int iRet = 0;
    PNODE First = NULL;
    PNODE Last = NULL;

    InsertFirst(&First, &Last,5);
    InsertFirst(&First, &Last, 4);
    InsertFirst(&First, &Last, 3);
    InsertFirst(&First, &Last, 2);
    InsertFirst(&First, &Last, 1);
    InsertLast(&First, &Last, 6);
    DeleteFirst(&First,&Last);
    DeleteLast(&First,&Last);



    Display(First, Last);
    iRet = Counter(First, Last);
    printf("Total Nodes in the elements are : %d \n", iRet);
    return 0;
}