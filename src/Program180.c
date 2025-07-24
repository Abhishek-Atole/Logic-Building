#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev; // #
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int NO)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = NO;
    newn->next = NULL;
    newn->prev = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn; // #
        *Head = newn;
    }
}
void InsertLast(PPNODE Head, int NO)
{

    PNODE Temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = NO;
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
void DeleteFirst(PPNODE Head, int NO)
{
}
void DeleteLast(PPNODE Head, int NO)
{
}
void InsertAtPosition(PPNODE Head, int NO, int iPos)
{
}
void DeleteAtPosition(PPNODE Head, int NO, int iPos)
{
}
void Display(PNODE Head)
{
    printf("Elements of the Linked List Are : \n");
    printf("| %p | -> ", Head);
    while (Head != NULL)
    {

        printf("| %p | %d | %p | -> ", Head->prev, Head->data, Head->next);
        Head = Head->next;
    }
    printf("NUll \n");
}
int Count(PNODE Head)
{

    return 0;
}

int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 21);
    InsertFirst(&First, 20);
    InsertFirst(&First, 19);
    Display(First);

    InsertLast(&First, 22);
    Display(First);

    return 0;
}