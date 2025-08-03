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
int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;

    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t Linked List After First Element Inserted....");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");

    InserFirst(&First, &Last, 5);
    InserFirst(&First, &Last, 2);
    InserFirst(&First, &Last, 1);
    Display(First, Last);

    return 0;
}