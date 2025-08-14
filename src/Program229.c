#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

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
    printf("Elements of the Linked List Are : \n");
    printf("| %p | -> ", Head);
    while (Head != NULL)
    {

        printf("| %d | %p | -> ", Head->data, Head->next);
        Head = Head->next;
    }
    printf("NUll \n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 100);
    InsertFirst(&First, 99);
    InsertFirst(&First, 98);
    InsertFirst(&First, 97);

    Display(First);

    return 0;
}