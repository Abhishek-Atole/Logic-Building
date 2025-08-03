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
}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
}
void Display(PNODE Head, PNODE Tail) 
{
    (void)Head; // Suppress unused parameter warning
    (void)Tail;
}
int Counter(PNODE Head, PNODE Tail) { return 0; }
void InsertAtPosition(PPNODE Head, PPNODE Tail, int No, int iPos)
{

    PNODE newn = (PNODE)malloc(sizeof(NODE));
}
void DeleteAtPosition(PPNODE Head, PPNODE Tail, int iPos)
{
}
int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;

    InsertFirst(&First,&Last,3);
    InsertFirst(&First,&Last,2);
    InsertFirst(&First,&Last,1);

    InsertLast(&First,&Last,4);

    Display(First,Last);
    return 0;
}