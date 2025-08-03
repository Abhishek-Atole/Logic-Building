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
    (*Head) ->prev = *Tail;
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;

    InserFirst(&First,&Last,5);
    return 0;
}