#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

void Push(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
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

void Display(PNODE Head)
{
    printf("Stack is :| %p | -> \n", Head);
    while (Head != NULL)
    {
        printf("\t\t ----------\n");
        printf("\t\t|    %d    |\n", Head->data);
        printf("\t\t ----------\n");
        printf("\t\t| %p |\n", Head->next);
        printf("\t\t ----------\n");
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    Push(&First, 15);
    Push(&First, 14);
    Push(&First, 13);
    Push(&First, 12);
    Push(&First, 11);

    Display(First);
    return 0;
}
