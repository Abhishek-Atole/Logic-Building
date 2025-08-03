#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int Data)
{
}
void InsertLast(PPNODE Head, PPNODE Tail, int Data)
{
}
void InsertAtPosition(PPNODE Head, PPNODE Tail, int Data, int iPos)
{
}
void DeleteAtPosition(PPNODE Head, PPNODE Tail, int iPos)
{
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
int Counter(PNODE Head, PNODE Tail) 
{ 
    (void)Head; // Suppress unused parameter warning
    (void)Tail;
    return 0;
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
     
    return 0;
}